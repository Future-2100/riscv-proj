#ifndef __COMMON_H_
#define __COMMON_H_


#define COLOR_RED    "\033[1;31m" 
#define COLOR_GREEN  "\033[1;32m"
#define COLOR_BLUE   "\033[1;34m"
#define COLOR_NONE   "\033[0m"

#ifdef __RV32__
  typedef uint32_t xlen_t ;
#endif

#ifdef __RV64__
  typedef uint64_t xlen_t ;
#endif


typedef struct{
  xlen_t gpr[32];
  xlen_t pc     ;
} CPU_state;

#endif

