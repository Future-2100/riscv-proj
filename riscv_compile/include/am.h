#ifndef __AM_H_
#define __AM_H_

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct {
  void *start, *end;
} Area;

extern Area heap;
void putch(char ch);
void halt (int code) __attribute__((__noreturn__));

bool ioe_init(void);
void ioe_read(int reg, void *buf);
void ioe_write(int reg, void *buf);
#include "device.h"

#endif
