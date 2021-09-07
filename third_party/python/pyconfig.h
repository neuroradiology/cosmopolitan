#ifndef Py_PYCONFIG_H
#define Py_PYCONFIG_H
#include "libc/dce.h"

#define DOUBLE_IS_LITTLE_ENDIAN_IEEE754 1
/* #undef WORDS_BIGENDIAN */
/* #undef DOUBLE_IS_BIG_ENDIAN_IEEE754 */
/* #undef DOUBLE_IS_ARM_MIXED_ENDIAN_IEEE754 */

/* Define if --enable-ipv6 is specified */
/* #undef ENABLE_IPV6 */

/* Define if flock needs to be linked with bsd library. */
/* #undef FLOCK_NEEDS_LIBBSD */

/* Define if getpgrp() must be called as getpgrp(0). */
/* #undef GETPGRP_HAVE_ARG */

/* Define if gettimeofday() does not have second (timezone) argument This is
   the case on Motorola V4 (R40V4.2) */
/* #undef GETTIMEOFDAY_NO_TZ */

/* Define to 1 if you have the `accept4' function. */
#define HAVE_ACCEPT4 1

/* Define to 1 if you have the `acosh' function. */
#define HAVE_ACOSH 1

/* struct addrinfo (netdb.h) */
#define HAVE_ADDRINFO 1

/* Define to 1 if you have the `alarm' function. */
#define HAVE_ALARM 1

/* Define if aligned memory access is required */
#if IsModeDbg()
#define HAVE_ALIGNED_REQUIRED 1
#endif

/* Define this if your time.h defines altzone. */
/* #undef HAVE_ALTZONE */

/* Define to 1 if you have the `asinh' function. */
#define HAVE_ASINH 1

/* Define to 1 if you have the `atanh' function. */
#define HAVE_ATANH 1

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
/* #undef HAVE_BIND_TEXTDOMAIN_CODESET */

/* Define if mbstowcs(NULL, "text", 0) does not return the number of wide
   chars that would be converted. */
/* #undef HAVE_BROKEN_MBSTOWCS */

/* Define if nice() returns success/failure instead of the new priority. */
/* #undef HAVE_BROKEN_NICE */

/* Define if the system reports an invalid PIPE_BUF value. */
/* #undef HAVE_BROKEN_PIPE_BUF */

/* Define if poll() sets errno on invalid file descriptors. */
/* #undef HAVE_BROKEN_POLL */

/* Define if the Posix semaphores do not work on your system */
/* #undef HAVE_BROKEN_POSIX_SEMAPHORES */

/* Define if pthread_sigmask() does not work on your system. */
/* #undef HAVE_BROKEN_PTHREAD_SIGMASK */

/* define to 1 if your sem_getvalue is broken. */
#define HAVE_BROKEN_SEM_GETVALUE 1

/* Define if `unsetenv` does not return an int. */
/* #undef HAVE_BROKEN_UNSETENV */

/* Has builtin atomics */
#define HAVE_BUILTIN_ATOMIC 1

/* Define to 1 if you have the 'chflags' function. */
/* #undef HAVE_CHFLAGS */

/* Define to 1 if you have the `chown' function. */
#define HAVE_CHOWN 1

/* Define if you have the 'chroot' function. */
#define HAVE_CHROOT 1

/* Define to 1 if you have the `clock' function. */
#define HAVE_CLOCK 1

/* Define to 1 if you have the `clock_getres' function. */
#define HAVE_CLOCK_GETRES 1

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `clock_settime' function. */
#define HAVE_CLOCK_SETTIME 1

/* Define if the C compiler supports computed gotos. */
#define HAVE_COMPUTED_GOTOS 1

/* Define to 1 if you have the `confstr' function. */
/* #undef HAVE_CONFSTR */

/* Define to 1 if you have the `copysign' function. */
#define HAVE_COPYSIGN 1

/* Define to 1 if you have the `ctermid' function. */
/* #undef HAVE_CTERMID */

/* Define if you have the 'ctermid_r' function. */
/* #undef HAVE_CTERMID_R */

/* Define if you have the 'filter' function. */
#define HAVE_CURSES_FILTER 1

/* Define if you have the 'has_key' function. */
#define HAVE_CURSES_HAS_KEY 1

/* Define if you have the 'immedok' function. */
#define HAVE_CURSES_IMMEDOK 1

/* Define if you have the 'is_pad' function or macro. */
#define HAVE_CURSES_IS_PAD 1

/* Define if you have the 'is_term_resized' function. */
#define HAVE_CURSES_IS_TERM_RESIZED 1

/* Define if you have the 'resizeterm' function. */
#define HAVE_CURSES_RESIZETERM 1

/* Define if you have the 'resize_term' function. */
#define HAVE_CURSES_RESIZE_TERM 1

/* Define if you have the 'syncok' function. */
#define HAVE_CURSES_SYNCOK 1

/* Define if you have the 'typeahead' function. */
#define HAVE_CURSES_TYPEAHEAD 1

/* Define if you have the 'use_env' function. */
#define HAVE_CURSES_USE_ENV 1

/* Define if you have the 'wchgat' function. */
#define HAVE_CURSES_WCHGAT 1

/* Define to 1 if you have the declaration of `isfinite', and to 0 if you
   don't. */
#define HAVE_DECL_ISFINITE 1

/* Define to 1 if you have the declaration of `isinf', and to 0 if you don't.
 */
#define HAVE_DECL_ISINF 1

/* Define to 1 if you have the declaration of `isnan', and to 0 if you don't.
 */
#define HAVE_DECL_ISNAN 1

/* Define to 1 if you have the declaration of `RTLD_DEEPBIND', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_DEEPBIND 0

/* Define to 1 if you have the declaration of `RTLD_GLOBAL', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_GLOBAL 1

/* Define to 1 if you have the declaration of `RTLD_LAZY', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_LAZY 1

/* Define to 1 if you have the declaration of `RTLD_LOCAL', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_LOCAL 1

/* Define to 1 if you have the declaration of `RTLD_NODELETE', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_NODELETE 0

/* Define to 1 if you have the declaration of `RTLD_NOLOAD', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_NOLOAD 0

/* Define to 1 if you have the declaration of `RTLD_NOW', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_NOW 1

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
 */
/* #undef HAVE_DECL_TZNAME */

/* Define to 1 if you have the device macros. */
#define HAVE_DEVICE_MACROS 1

/* Define to 1 if you have the /dev/ptc device file. */
/* #undef HAVE_DEV_PTC */

/* Define to 1 if you have the /dev/ptmx device file. */
#define HAVE_DEV_PTMX 1

/* Define to 1 if the dirent structure has a d_type field */
#define HAVE_DIRENT_D_TYPE 1

/* Define to 1 if you have the `dlopen' function. */
#define HAVE_DLOPEN 1

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Define to 1 if you have the `dup3' function. */
#define HAVE_DUP3 1

/* Defined when any dynamic module loading is enabled. */
#define HAVE_DYNAMIC_LOADING 1

/* Define if you have the 'epoll' functions. */
#define HAVE_EPOLL         1
#define HAVE_EPOLL_CREATE1 1

/* Define to 1 if you have the `erf' function. */
#define HAVE_ERF 1

/* Define to 1 if you have the `erfc' function. */
#define HAVE_ERFC 1

/* Define to 1 if you have the `execv' function. */
#define HAVE_EXECV 1

/* Define to 1 if you have the `expm1' function. */
#define HAVE_EXPM1 1

/* Define to 1 if you have the `faccessat' function. */
#define HAVE_FACCESSAT 1

/* Define if you have the 'fchdir' function. */
#define HAVE_FCHDIR 1

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the `fchmodat' function. */
#define HAVE_FCHMODAT 1

/* Define to 1 if you have the `fchown' function. */
#define HAVE_FCHOWN 1

/* Define to 1 if you have the `fchownat' function. */
#define HAVE_FCHOWNAT 1

/* Define if you have the 'fdatasync' function. */
#define HAVE_FDATASYNC 1

/* Define to 1 if you have the `fdopendir' function. */
#define HAVE_FDOPENDIR 1

/* Define to 1 if you have the `fexecve' function. */
/* #undef HAVE_FEXECVE */

/* Define to 1 if you have the `finite' function. */
#define HAVE_FINITE 1

/* Define to 1 if you have the `flock' function. */
#define HAVE_FLOCK 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `forkpty' function. */
#define HAVE_FORKPTY 1

/* Define to 1 if you have the `fpathconf' function. */
#define HAVE_FPATHCONF 1

/* Define to 1 if you have the `fseek64' function. */
/* #undef HAVE_FSEEK64 */

/* Define to 1 if you have the `fseeko' function. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `fstatat' function. */
#define HAVE_FSTATAT 1

/* Define to 1 if you have the `fstatvfs' function. */
/* #undef HAVE_FSTATVFS */

/* Define if you have the 'fsync' function. */
#define HAVE_FSYNC 1

/* Define to 1 if you have the `ftell64' function. */
/* #undef HAVE_FTELL64 */

/* Define to 1 if you have the `ftello' function. */
#define HAVE_FTELLO 1

/* Define to 1 if you have the `ftime' function. */
/* #undef HAVE_FTIME */

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `futimens' function. */
#define HAVE_FUTIMENS 1

/* Define to 1 if you have the `futimes' function. */
#define HAVE_FUTIMES 1

/* Define to 1 if you have the `futimesat' function. */
#define HAVE_FUTIMESAT 1

/* Define to 1 if you have the `gai_strerror' function. */
#define HAVE_GAI_STRERROR 1

/* Define to 1 if you have the `gamma' function. */
/* #undef HAVE_GAMMA */

/* Define if we can use gcc inline assembler to get and set mc68881 fpcr */
/* #undef HAVE_GCC_ASM_FOR_MC68881 */

/* Define if we can use x64 gcc inline assembler */
#define HAVE_GCC_ASM_FOR_X64 1

/* Define if we can use gcc inline assembler to get and set x87 control word
 */
#define HAVE_GCC_ASM_FOR_X87 1

/* Define if your compiler provides __uint128_t */
#define HAVE_GCC_UINT128_T 1

/* Define if you have the getaddrinfo function. */
#define HAVE_GETADDRINFO 1

/* In Cosmopolitan the unlocked functions are slower. */
/* #undef HAVE_GETC_UNLOCKED */

/* Define to 1 if you have the `getentropy' function. */
#define HAVE_GETENTROPY 1

/* Define to 1 if you have the `getgrouplist' function. */
#define HAVE_GETGROUPLIST 1

/* Define to 1 if you have the `getgroups' function. */
#define HAVE_GETGROUPS 1

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define this if you have some version of gethostbyname_r() */
/* #undef HAVE_GETHOSTBYNAME_R */

/* Define this if you have the 3-arg version of gethostbyname_r(). */
/* #undef HAVE_GETHOSTBYNAME_R_3_ARG */

/* Define this if you have the 5-arg version of gethostbyname_r(). */
/* #undef HAVE_GETHOSTBYNAME_R_5_ARG */

/* Define this if you have the 6-arg version of gethostbyname_r(). */
/* #undef HAVE_GETHOSTBYNAME_R_6_ARG */

/* Define to 1 if you have the `getitimer' function. */
#define HAVE_GETITIMER 1

/* Define to 1 if you have the `getloadavg' function. */
/* #undef HAVE_GETLOADAVG */

/* Define to 1 if you have the `getlogin' function. */
#define HAVE_GETLOGIN 1

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* Define if you have the 'getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpeername' function. */
#define HAVE_GETPEERNAME 1

/* Define to 1 if you have the `getpgid' function. */
#define HAVE_GETPGID 1

/* Define to 1 if you have the `getpgrp' function. */
#define HAVE_GETPGRP 1

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `getpriority' function. */
#define HAVE_GETPRIORITY 1

/* Define to 1 if you have the `getpwent' function. */
#define HAVE_GETPWENT 1

/* Define to 1 if the getrandom() function is available */
#define HAVE_GETRANDOM 1

/* Define to 1 if the Linux getrandom() syscall is available */
/* #define HAVE_GETRANDOM_SYSCALL */

/* Define to 1 if you have the `getresgid' function. */
/* #undef HAVE_GETRESGID */

/* Define to 1 if you have the `getresuid' function. */
/* #undef HAVE_GETRESUID */

/* Define to 1 if you have the `getsid' function. */
#define HAVE_GETSID 1

/* Define to 1 if you have the `getspent' function. */
/* #undef HAVE_GETSPENT */

/* Define to 1 if you have the `getspnam' function. */
/* #undef HAVE_GETSPNAM */

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Define to 1 if you have the `getwd' function. */
/* #undef HAVE_GETWD */

/* Define if glibc has incorrect _FORTIFY_SOURCE wrappers for memmove and
   bcopy. */
#define HAVE_GLIBC_MEMMOVE_BUG 1

/* Define if you have the 'hstrerror' function. */
/* #undef HAVE_HSTRERROR */

/* Define this if you have le64toh() */
#define HAVE_HTOLE64 1

/* Define to 1 if you have the `hypot' function. */
#define HAVE_HYPOT 1

/* Define to 1 if you have the 'if_nameindex' function. */
/* #undef HAVE_IF_NAMEINDEX */

/* Define if you have the 'inet_aton' function. */
#define HAVE_INET_ATON 1

/* Define if you have the 'inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define if gcc has the ipa-pure-const bug. */
#define HAVE_IPA_PURE_CONST_BUG 1

/* Define to 1 if you have the `kill' function. */
#define HAVE_KILL 1

/* Define to 1 if you have the `killpg' function. */
#define HAVE_KILLPG 1

/* Define if you have the 'kqueue' functions. */
/* #undef HAVE_KQUEUE */

/* Defined to enable large file support when an off_t is bigger than a long
   and long long is available and at least as big as an off_t. You may need to
   add some flags for configuration and compilation to enable this mode. (For
   Solaris and Linux, the necessary defines are already defined.) */
/* #undef HAVE_LARGEFILE_SUPPORT */

/* Define to 1 if you have the 'lchflags' function. */
/* #undef HAVE_LCHFLAGS */

/* Define to 1 if you have the `lchmod' function. */
/* #undef HAVE_LCHMOD */

/* Define to 1 if you have the `lchown' function. */
#define HAVE_LCHOWN 1

/* Define to 1 if you have the `lgamma' function. */
#define HAVE_LGAMMA 1

/* Define to 1 if you have the `tgamma' function. */
#define HAVE_TGAMMA 1

/* Define to 1 if you have the `dl' library (-ldl). */
/* #undef HAVE_LIBDL */

/* Define to 1 if you have the `dld' library (-ldld). */
/* #undef HAVE_LIBDLD */

/* Define to 1 if you have the `ieee' library (-lieee). */
/* #undef HAVE_LIBIEEE */

/* Define if you have the readline library (-lreadline). */
/* #undef HAVE_LIBREADLINE */

/* Define to 1 if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* Define to 1 if you have the `sendfile' library (-lsendfile). */
/* #undef HAVE_LIBSENDFILE */

/* Define if you have the 'link' function. */
#define HAVE_LINK 1

/* Define to 1 if you have the `linkat' function. */
#define HAVE_LINKAT 1

/* Define if compiling using Linux 3.6 or later. */
/* #undef HAVE_LINUX_CAN_RAW_FD_FRAMES */

/* Define to 1 if you have the 'lockf' function and the F_LOCK macro. */
/* #undef HAVE_LOCKF */

/* Define to 1 if you have the `log1p' function. */
#define HAVE_LOG1P 1

/* Define to 1 if you have the `log2' function. */
#define HAVE_LOG2 1

/* Define this if you have the type long double. */
#define HAVE_LONG_DOUBLE 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if you have the `lutimes' function. */
#define HAVE_LUTIMES 1

/* Define this if you have the makedev macro. */
#define HAVE_MAKEDEV 1

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the `memrchr' function. */
#define HAVE_MEMRCHR 1

/* Define to 1 if you have the `mkdirat' function. */
#define HAVE_MKDIRAT 1

/* Define to 1 if you have the `mkfifo' function. */
#define HAVE_MKFIFO 1

/* Define to 1 if you have the `mkfifoat' function. */
#define HAVE_MKFIFOAT 1

/* Define to 1 if you have the `mknod' function. */
#define HAVE_MKNOD 1

/* Define to 1 if you have the `mknodat' function. */
#define HAVE_MKNODAT 1

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `mremap' function. */
#define HAVE_MREMAP 1

/* Define to 1 if you have the `nice' function. */
#define HAVE_NICE 1

/* Define to 1 if you have the `openat' function. */
#define HAVE_OPENAT 1

/* Define to 1 if you have the `openpty' function. */
#define HAVE_OPENPTY 1

/* Define to 1 if you have the `pathconf' function. */
#define HAVE_PATHCONF 1

/* Define to 1 if you have the `pause' function. */
#define HAVE_PAUSE 1

/* Define to 1 if you have the `pipe' function. */
#define HAVE_PIPE 1

/* Define to 1 if you have the `pipe2' function. */
#define HAVE_PIPE2 1

/* Define to 1 if you have the `plock' function. */
/* #undef HAVE_PLOCK */

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the `posix_fadvise' function. */
#define HAVE_POSIX_FADVISE 1

/* Define to 1 if you have the `posix_fallocate' function. */
/* #undef HAVE_POSIX_FALLOCATE */

/* Define to 1 if you have the `pread' function. */
#define HAVE_PREAD 1

/* Define if you have the 'prlimit' functions. */
/* #undef HAVE_PRLIMIT */

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the `pwrite' function. */
#define HAVE_PWRITE 1

/* it's so evil */
#define HAVE_READLINK   1
#define HAVE_READLINKAT 1
#define HAVE_REALPATH   1

/* Define to 1 if you have the `readv' function. */
#define HAVE_READV 1

/* Define to 1 if you have the `renameat' function. */
#define HAVE_RENAMEAT
#define HAVE_DIRENT_H 1

/* Define if readline supports append_history */
/* #undef HAVE_RL_APPEND_HISTORY */

/* Define if you have readline 2.1 */
/* #undef HAVE_RL_CALLBACK */

/* Define if you can turn off readline's signal handling. */
#define HAVE_RL_CATCH_SIGNAL 1

/* Define if you have readline 2.2 */
#define HAVE_RL_COMPLETION_APPEND_CHARACTER 1

/* Define if you have readline 4.0 */
#define HAVE_RL_COMPLETION_DISPLAY_MATCHES_HOOK 1

/* Define if you have readline 4.2 */
/* #undef HAVE_RL_COMPLETION_MATCHES */

/* Define if you have rl_completion_suppress_append */
#define HAVE_RL_COMPLETION_SUPPRESS_APPEND 1

/* Define if you have readline 4.0 */
#define HAVE_RL_PRE_INPUT_HOOK 1

/* Define if you have readline 4.0 */
/* #undef HAVE_RL_RESIZE_TERMINAL */

/* Define to 1 if you have the `round' function. */
#define HAVE_ROUND 1

/* Define to 1 if you have the `sched_get_priority_max' function. */
/* #undef HAVE_SCHED_GET_PRIORITY_MAX */

/* Define to 1 if you have the `sched_rr_get_interval' function. */
/* #undef HAVE_SCHED_RR_GET_INTERVAL */

/* Define to 1 if you have the `sched_setaffinity' function. */
#define HAVE_SCHED_SETAFFINITY 1

/* Define to 1 if you have the `sched_setparam' function. */
#define HAVE_SCHED_SETPARAM 1

/* Define to 1 if you have the `sched_setscheduler' function. */
#define HAVE_SCHED_SETSCHEDULER 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `sem_getvalue' function. */
/* #undef HAVE_SEM_GETVALUE */

/* Define to 1 if you have the `sem_open' function. */
/* #undef HAVE_SEM_OPEN */

/* Define to 1 if you have the `sem_timedwait' function. */
/* #undef HAVE_SEM_TIMEDWAIT */

/* Define to 1 if you have the `sem_unlink' function. */
/* #undef HAVE_SEM_UNLINK */

/* Define to 1 if you have the `sendfile' function. */
#define HAVE_SENDFILE 1

/* Define to 1 if you have the `setegid' function. */
#define HAVE_SETEGID 1

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the `setgid' function. */
#define HAVE_SETGID 1

/* Define if you have the 'setgroups' function. */
#define HAVE_SETGROUPS 1

/* Define to 1 if you have the `sethostname' function. */
#define HAVE_SETHOSTNAME 1

/* Define to 1 if you have the `setitimer' function. */
#define HAVE_SETITIMER 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setpgid' function. */
#define HAVE_SETPGID 1

/* Define to 1 if you have the `setpgrp' function. */
/* #undef HAVE_SETPGRP */

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the `setregid' function. */
#define HAVE_SETREGID 1

/* Define to 1 if you have the `setresgid' function. */
#define HAVE_SETRESGID 1

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define to 1 if you have the `setreuid' function. */
#define HAVE_SETREUID 1

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the `setuid' function. */
#define HAVE_SETUID 1

/* Define to 1 if you have the `setvbuf' function. */
#define HAVE_SETVBUF 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigaltstack' function. */
/* #undef HAVE_SIGALTSTACK */

/* Define to 1 if you have the `siginterrupt' function. */
#define HAVE_SIGINTERRUPT 1

/* Define to 1 if you have the `sigpending' function. */
/* #undef HAVE_SIGPENDING */

/* Define to 1 if you have the `sigrelse' function. */
/* #undef HAVE_SIGRELSE */

/* Define to 1 if you have the `sigtimedwait' function. */
/* #undef HAVE_SIGTIMEDWAIT */

/* Define to 1 if you have the `sigwait' function. */
/* #undef HAVE_SIGWAIT */

/* Define to 1 if you have the `sigwaitinfo' function. */
/* #undef HAVE_SIGWAITINFO */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* struct sockaddr_alg (linux/if_alg.h) */
/* #undef HAVE_SOCKADDR_ALG */

/* Define if sockaddr has sa_len member */
/* #undef HAVE_SOCKADDR_SA_LEN */

/* struct sockaddr_storage (sys/socket.h) */
#define HAVE_SOCKADDR_STORAGE 1

/* Define if you have the 'socketpair' function. */
#define HAVE_SOCKETPAIR 1

/* Define if your compiler provides ssize_t */
#define HAVE_SSIZE_T 1

/* Define to 1 if you have the `statvfs' function. */
/* #undef HAVE_STATVFS */

/* Define if you have struct stat.st_mtim.tv_nsec */
#define HAVE_STAT_TV_NSEC 1

/* Define if you have struct stat.st_mtimensec */
/* #undef HAVE_STAT_TV_NSEC2 */

/* Define if your compiler supports variable length function prototypes (e.g.
   void fprintf(FILE *, char *, ...);) *and* <stdarg.h> */
#define HAVE_STDARG_PROTOTYPES 1

/* Has stdatomic.h with atomic_int */
/* #undef HAVE_STD_ATOMIC */

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if `pw_gecos' is a member of `struct passwd'. */
#define HAVE_STRUCT_PASSWD_PW_GECOS 1

/* Define to 1 if `pw_passwd' is a member of `struct passwd'. */
#define HAVE_STRUCT_PASSWD_PW_PASSWD 1

/* Define to 1 if `st_birthtime' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BIRTHTIME 1

/* Define to 1 if `st_blksize' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1

/* Define to 1 if `st_blocks' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLOCKS 1

/* Define to 1 if `st_flags' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_FLAGS 1

/* Define to 1 if `st_gen' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_GEN 1

/* Define to 1 if `st_rdev' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_RDEV 1

#define HAVE_STRUCT_STAT_ST_FILE_ATTRIBUTES 1

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_ZONE 1

/* Define if you have the 'symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the `symlinkat' function. */
#define HAVE_SYMLINKAT 1

/* Define to 1 if you have the `sync' function. */
#define HAVE_SYNC 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the `tcgetpgrp' function. */
#define HAVE_TCGETPGRP 1

/* Define to 1 if you have the `tcsetpgrp' function. */
#define HAVE_TCSETPGRP 1

/* Define to 1 if you have the `tempnam' function. */
#define HAVE_TEMPNAM 1

/* Define to 1 if you have the `timegm' function. */
#define HAVE_TIMEGM 1

/* Define to 1 if you have the `times' function. */
#define HAVE_TIMES 1

/* Define to 1 if you have the `tmpfile' function. */
#define HAVE_TMPFILE 1

/* Define to 1 if you have the `tmpnam' function. */
/* #undef HAVE_TMPNAM */

/* Define to 1 if you have the `tmpnam_r' function. */
/* #undef HAVE_TMPNAM_R */

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#define HAVE_TM_ZONE 1

/* Define to 1 if you have the `truncate' function. */
#define HAVE_TRUNCATE 1

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
/* #undef HAVE_TZNAME */

/* Define this if you have tcl and TCL_UTF_MAX==6 */
/* #undef HAVE_UCS4_TCL */

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the `unlinkat' function. */
#define HAVE_UNLINKAT 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define if you have a useable wchar_t type defined in wchar.h; useable means
   wchar_t must be an unsigned type with at least 16 bits. (see
   Include/unicodeobject.h). */
#define HAVE_USABLE_WCHAR_T 1

/* Define to 1 if you have the `utimensat' function. */
#define HAVE_UTIMENSAT 1

/* Define to 1 if you have the `utimes' function. */
#define HAVE_UTIMES 1

#define HAVE_WAIT 1

/* Define to 1 if you have the `wait3' function. */
#define HAVE_WAIT3 1

/* Define to 1 if you have the `wait4' function. */
#define HAVE_WAIT4 1

/* Define to 1 if you have the `waitid' function. */
/* #undef HAVE_WAITID */

/* Define to 1 if you have the `waitpid' function. */
#define HAVE_WAITPID 1

/* Define to 1 if you have the `wcscoll' function. */
/* #undef HAVE_WCSCOLL */

/* Define to 1 if you have the `wcsftime' function. */
/* #undef HAVE_WCSFTIME */

/* Define to 1 if you have the `wcsxfrm' function. */
/* #undef HAVE_WCSXFRM */

/* Define to 1 if you have the `wmemcmp' function. */
#define HAVE_WMEMCMP 1

/* Define if tzset() actually switches the local timezone in a meaningful way.
 */
#define HAVE_WORKING_TZSET 1

/* Define to 1 if you have the `writev' function. */
#define HAVE_WRITEV 1

/* Define if the zlib library has inflateCopy */
#define HAVE_ZLIB_COPY 1

/* Define to 1 if you have the `_getpty' function. */
/* #undef HAVE__GETPTY */

/* Define if log1p(-0.) is 0. rather than -0. */
/* #undef LOG1P_DROPS_ZERO_SIGN */

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
 */
/* #undef MAJOR_IN_MKDEV */

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
/* #undef MAJOR_IN_SYSMACROS */

/* Define if mvwdelch in curses.h is an expression. */
#define MVWDELCH_IS_EXPRESSION 1

/* Define to the address where bug reports for this package should be sent. */
/* #undef PACKAGE_BUGREPORT */

/* Define to the full name of this package. */
/* #undef PACKAGE_NAME */

/* Define to the full name and version of this package. */
/* #undef PACKAGE_STRING */

/* Define to the one symbol short name of this package. */
/* #undef PACKAGE_TARNAME */

/* Define to the home page for this package. */
/* #undef PACKAGE_URL */

/* Define to the version of this package. */
/* #undef PACKAGE_VERSION */

/* Define if POSIX semaphores aren't enabled on your system */
#define POSIX_SEMAPHORES_NOT_ENABLED 1

/* Defined if PTHREAD_SCOPE_SYSTEM supported. */
/* #undef PTHREAD_SYSTEM_SCHED_SUPPORTED */

/* #undef HAVE_PTHREAD_ATFORK */
/* #undef HAVE_PTHREAD_DESTRUCTOR */
/* #undef HAVE_PTHREAD_INIT */
/* #undef HAVE_PTHREAD_KILL */
/* #undef HAVE_PTHREAD_SIGMASK */

/* Define as the preferred size in bits of long digits */
/* #undef PYLONG_BITS_IN_DIGIT */

/* Define to printf format modifier for Py_ssize_t */
#define PY_FORMAT_SIZE_T "z"

/* Define if you want to build an interpreter with many run-time checks. */
/* #define Py_DEBUG 1 */

/* Defined if Python is built as a shared library. */
/* #undef Py_ENABLE_SHARED */

/* Define hash algorithm for str, bytes and memoryview. SipHash24: 1, FNV: 2,
   externally defined: 0 */
/* #undef Py_HASH_ALGORITHM */

/* assume C89 semantics that RETSIGTYPE is always void */
#define RETSIGTYPE void

/* Define if setpgrp() must be called as setpgrp(0, 0). */
/* #undef SETPGRP_HAVE_ARG */

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE __SIZEOF_DOUBLE__

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT __SIZEOF_FLOAT__

/* The size of `fpos_t', as computed by sizeof. */
#define SIZEOF_FPOS_T 8

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT __SIZEOF_INT__

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG __SIZEOF_LONG__

/* The size of `long double', as computed by sizeof. */
#define SIZEOF_LONG_DOUBLE __SIZEOF_LONG_DOUBLE__

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG __SIZEOF_LONG_LONG__

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `pid_t', as computed by sizeof. */
#define SIZEOF_PID_T 4

/* The size of `pthread_t', as computed by sizeof. */
/* #undef SIZEOF_PTHREAD_T */

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT __SIZEOF_SHORT__

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T __SIZEOF_SIZE_T__

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 8

/* The size of `uintptr_t', as computed by sizeof. */
#define SIZEOF_UINTPTR_T 8

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* The size of `wchar_t', as computed by sizeof. */
#define SIZEOF_WCHAR_T __SIZEOF_WCHAR_T__

/* The size of `_Bool', as computed by sizeof. */
#define SIZEOF__BOOL 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if you can safely include both <sys/select.h> and <sys/time.h>
   (which you can't on SCO ODT 3.0). */
#define SYS_SELECT_WITH_SYS_TIME 1

/* Define if tanh(-0.) is -0., or if platform doesn't have signed zeros */
#define TANH_PRESERVES_ZERO_SIGN 1

/* Library needed by timemodule.c: librt may be needed for clock_gettime() */
/* #undef TIMEMODULE_LIB */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define if you want to use computed gotos in ceval.c. */
/* #define USE_COMPUTED_GOTOS 1 */

/* Define to use the C99 inline keyword. */
#define USE_INLINE 1

/* Define if you want SIGFPE handled (see Include/pyfpe.h). */
/* #undef WANT_SIGFPE_HANDLER */

/* Define if WINDOW in curses.h offers a field _flags. */
#define WINDOW_HAS_FLAGS 1

/* Define if you want documentation strings in extension modules */
#if !IsTiny()
#define WITH_DOC_STRINGS 1
#endif

/* Define if you want to compile in DTrace support */
/* #undef WITH_DTRACE */

/* Define if you want to use the new-style (Openstep, Rhapsody, MacOS) dynamic
   linker (dyld) instead of the old-style (NextStep) dynamic linker (rld).
   Dyld is necessary to support frameworks. */
/* #undef WITH_DYLD */

/* Define to 1 if libintl is needed for locale functions. */
/* #undef WITH_LIBINTL */

/* Define if you want to compile in Python-specific mallocs */
#ifndef __FSANITIZE_ADDRESS__
#define WITH_PYMALLOC 1
#endif

/* Define if you want to compile in rudimentary thread support */
/* #undef WITH_THREAD */

/* Define if you want pymalloc to be disabled when running under valgrind */
/* #undef WITH_VALGRIND */

/* Define if arithmetic is subject to x87-style double rounding issue */
/* #undef X87_DOUBLE_ROUNDING */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define if you have POSIX threads, and your system does not define that. */
/* #undef _POSIX_THREADS */

/* #define _Py_MEMORY_SANITIZER */

#define Py_NSIG 32

#define HAVE_SYSTEM 1

#define SELECT_USES_HEAP 1

#define OPENSSL_NO_SCRYPT
#define OPENSSL_NO_COMP

#define HAVE_LANGINFO_H

#endif /*Py_PYCONFIG_H*/
