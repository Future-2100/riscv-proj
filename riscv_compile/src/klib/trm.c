#include <am.h>
#include <klib-macros.h>


int main(const char *args);

static const char mainargs[] = "";

void halt(int code){
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while(1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}

