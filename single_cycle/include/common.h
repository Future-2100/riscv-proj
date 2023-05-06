#ifndef __COMMON_H_
#define __COMMON_H_

#define COLOR_RED    "\033[1;31m" 
#define COLOR_GREEN  "\033[1;32m"
#define COLOR_BLUE   "\033[1;34m"
#define COLOR_NONE   "\033[0m"

#include <config.h>


typedef struct{
  uint64_t gpr[32];
  uint64_t pc     ;
} CPU_state;

#endif
