#ifndef COSMOPOLITAN_LIBC_MEM_INTERNAL_H_
#define COSMOPOLITAN_LIBC_MEM_INTERNAL_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

int PutEnvImpl(char *, bool) hidden;
void __freeenv(void *) hidden;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_MEM_INTERNAL_H_ */
