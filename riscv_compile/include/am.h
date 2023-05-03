
#ifndef __AM_H_
#define __AM_H_

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct {
  void *start, *end;
} Area;

void halt (int code) __attribute__((__noreturn__));

#endif
