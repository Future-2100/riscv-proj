#include <am.h>
#include <klib-macros.h>


int main(const char *args);

static const char mainargs[] = "";

void halt(int code){
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while(1);
}

//#ifdef DEVICE

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


