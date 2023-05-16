#include <am.h>
#include <klib.h>
#include <klib-macros.h>

static char *hbrk = 0;

static unsigned long int next = 1;

int rand(void){
  next = next * 1103515245 + 12345 ;
  return  (unsigned int)(next/65536) % 32768 ;
}

void srand(unsigned int seed){
  next = seed ;
}

void *malloc(size_t size) {
  if( hbrk == 0) {
    hbrk = (void *)ROUNDUP(heap.start, 8);
  }
  size = (size_t )ROUNDUP(size, 8);
  char *old = hbrk;
  hbrk += size;
  assert((uintptr_t)heap.start <= (uintptr_t)hbrk && (uintptr_t)hbrk < (uintptr_t)heap.end);
  for( uint64_t *p = (uint64_t *)old; p != (uint64_t *)hbrk; p++){
    *p = 0;
  }
  return old;
}


void free(void *ptr) {

}
