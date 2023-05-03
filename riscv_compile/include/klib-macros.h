#ifndef KLIB_MACROS_H__
#define KLIB_MACROS_H__

#define LENGTH(arr)         (sizeof(arr) / sizeof((arr)[0]))

#define panic_on(cond, s) \
  ({ if (cond) { \
   halt(1); \
   } })

#define panic(s) panic_on(1, s)

#endif

