#ifndef KLIB_MACROS_H__
#define KLIB_MACROS_H__

#define ROUNDUP(addr, size) (((uintptr_t)addr + size - 1) & ~(size - 1))
#define ROUNDDOWN(addr, size) (((uintptr_t)addr) & ~(size - 1))
#define LENGTH(arr)         (sizeof(arr) / sizeof((arr)[0]))
#define RANGE(st, ed) (Area) { .start = (void *)(st), .end = (void *)(ed) }

#define io_read(reg) \
  ({ reg##_T __io_param; \
   ioe_read(reg, &__io_param); \
   __io_param; })

#define io_write(reg, ...) \
  ({ reg##_T __io_param = (reg##_T) { __VA_ARGS__ }; \
   ioe_write(reg, &__io_param); })

#define panic_on(cond, s) \
  ({ if (cond) { \
   halt(1); \
   } })

#define panic(s) panic_on(1, s)


#endif

