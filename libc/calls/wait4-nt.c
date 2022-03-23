/*-*- mode:c;indent-tabs-mode:nil;c-basic-offset:2;tab-width:8;coding:utf-8 -*-│
│vi: set net ft=c ts=2 sts=2 sw=2 fenc=utf-8                                :vi│
╞══════════════════════════════════════════════════════════════════════════════╡
│ Copyright 2020 Justine Alexandra Roberts Tunney                              │
│                                                                              │
│ Permission to use, copy, modify, and/or distribute this software for         │
│ any purpose with or without fee is hereby granted, provided that the         │
│ above copyright notice and this permission notice appear in all copies.      │
│                                                                              │
│ THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL                │
│ WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED                │
│ WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE             │
│ AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL         │
│ DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR        │
│ PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER               │
│ TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR             │
│ PERFORMANCE OF THIS SOFTWARE.                                                │
╚─────────────────────────────────────────────────────────────────────────────*/
#include "libc/assert.h"
#include "libc/calls/calls.h"
#include "libc/calls/internal.h"
#include "libc/calls/strace.internal.h"
#include "libc/calls/struct/rusage.h"
#include "libc/fmt/conv.h"
#include "libc/macros.internal.h"
#include "libc/nt/accounting.h"
#include "libc/nt/enum/accessmask.h"
#include "libc/nt/enum/processaccess.h"
#include "libc/nt/enum/status.h"
#include "libc/nt/enum/wait.h"
#include "libc/nt/process.h"
#include "libc/nt/runtime.h"
#include "libc/nt/struct/filetime.h"
#include "libc/nt/struct/processmemorycounters.h"
#include "libc/nt/synchronization.h"
#include "libc/rand/lcg.internal.h"
#include "libc/runtime/runtime.h"
#include "libc/str/str.h"
#include "libc/sysv/consts/o.h"
#include "libc/sysv/consts/w.h"
#include "libc/sysv/errfuns.h"

textwindows int sys_wait4_nt(int pid, int *opt_out_wstatus, int options,
                             struct rusage *opt_out_rusage) {
  int pids[64];
  int64_t handle;
  int64_t handles[64];
  uint32_t dwExitCode;
  uint32_t i, j, base, count, timeout;
  struct NtProcessMemoryCountersEx memcount;
  struct NtFileTime createfiletime, exitfiletime, kernelfiletime, userfiletime;
  if (pid != -1 && pid != 0) {
    if (pid < 0) {
      /* XXX: this is sloppy */
      pid = -pid;
    }
    if (!__isfdkind(pid, kFdProcess)) {
      /* XXX: this is sloppy (see fork-nt.c) */
      if (!__isfdopen(pid) &&
          (handle = OpenProcess(kNtSynchronize | kNtProcessQueryInformation,
                                true, pid))) {
        if ((pid = __reservefd()) != -1) {
          g_fds.p[pid].kind = kFdProcess;
          g_fds.p[pid].handle = handle;
          g_fds.p[pid].flags = O_CLOEXEC;
        } else {
          CloseHandle(handle);
          return echild();
        }
      } else {
        return echild();
      }
    }
    handles[0] = g_fds.p[pid].handle;
    pids[0] = pid;
    count = 1;
  } else {
    count = __sample_pids(pids, handles);
    if (!count) return echild();
  }
  for (;;) {
    dwExitCode = kNtStillActive;
    if (options & WNOHANG) {
      i = WaitForMultipleObjects(count, handles, false, 0);
      if (i == kNtWaitTimeout) {
        return 0;
      }
    } else {
      i = WaitForMultipleObjects(count, handles, false, -1);
    }
    if (i == kNtWaitFailed) {
      STRACE("%s failed %u", "WaitForMultipleObjects", GetLastError());
      return __winerr();
    }
    if (!GetExitCodeProcess(handles[i], &dwExitCode)) {
      STRACE("%s failed %u", "GetExitCodeProcess", GetLastError());
      return __winerr();
    }
    if (dwExitCode == kNtStillActive) continue;
    if (opt_out_wstatus) { /* @see WEXITSTATUS() */
      *opt_out_wstatus = (dwExitCode & 0xff) << 8;
    }
    if (opt_out_rusage) {
      bzero(opt_out_rusage, sizeof(*opt_out_rusage));
      if (GetProcessMemoryInfo(handles[i], &memcount, sizeof(memcount))) {
        opt_out_rusage->ru_maxrss = memcount.PeakWorkingSetSize;
        opt_out_rusage->ru_majflt = memcount.PageFaultCount;
      } else {
        STRACE("%s failed %u", "GetProcessMemoryInfo", GetLastError());
      }
      if (GetProcessTimes(handles[i], &createfiletime, &exitfiletime,
                          &kernelfiletime, &userfiletime)) {
        opt_out_rusage->ru_utime =
            WindowsDurationToTimeVal(ReadFileTime(userfiletime));
        opt_out_rusage->ru_stime =
            WindowsDurationToTimeVal(ReadFileTime(kernelfiletime));
      } else {
        STRACE("%s failed %u", "GetProcessTimes", GetLastError());
      }
    }
    CloseHandle(handles[i]);
    __releasefd(pids[i]);
    return pids[i];
  }
}
