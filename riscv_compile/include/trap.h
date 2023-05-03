#ifndef __TRAP_H_
#define __TRAP_H_

#include <am.h>
#include <klib.h>
#include <klib-macros.h>

__attribute__((noinline))
void check(bool cond){
  if(!cond) halt(1);
}

#endif

