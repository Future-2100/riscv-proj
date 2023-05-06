//#include "klib.h"

int main() {
/*

    uint64_t pre_time = read_timer();
    uint64_t cur_time ;
    int i = 0;

    while(1) {
      cur_time = read_timer();
      if( (cur_time - pre_time) >= 50000ull ) {
        pre_time = read_timer();
        i++;
        printf("at time: %02d ms\n", i);
        if( i == 10)  return 0;
      }
    }
    return 0;
}
*/

/*
  struct {
    int id;
    uint64_t next;
  } kmem[5];

int main() {

  kmem[0].id = 0;
  kmem[0].next = (uint64_t)(&kmem[1]) ;

  kmem[1].id = 1;
  kmem[1].next = (uint64_t)(&kmem[2]) ;
  
  kmem[2].id = 2;
  kmem[2].next = (uint64_t)(&kmem[3]) ;
  
  kmem[3].id = 3;
  kmem[3].next = (uint64_t)(&kmem[4]) ;

  kmem[4].id = 4;
  kmem[4].next = 0;
*/

  return 0;
}

