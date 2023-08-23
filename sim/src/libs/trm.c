#include <am.h>
#include <klib-macros.h>


extern char _heap_start;
int main(const char *args);

#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void halt(int code){
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while(1);
}

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);

#define UART_ADDR  0xa0000000
void putch(char ch){
  *(volatile uint8_t *)UART_ADDR = ch;
}


#define TIMER_ADDR 0xb0000000
uint64_t read_timer(void){
  return  *(volatile uint64_t *)(TIMER_ADDR) ;
}

//#endif

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}


