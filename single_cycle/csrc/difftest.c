#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <common.h>

#include <dlfcn.h>

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

extern uintptr_t *cpu_gpr;

static CPU_state ref_r;

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction)=NULL;
void (*ref_difftest_regcpy)(CPU_state *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;


void init_difftest(char *ref_so_file, long img_size, int port, uint8_t *pmem) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint64_t addr, void *buf, size_t n, bool direction))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(CPU_state *dut, bool direction))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  printf("\033[1;33m");
  printf("Differential testing : ON\n" ) ;
  printf("The result of every instruction will be compared with %s.\n", ref_so_file) ;
  printf("\033[0m");

  ref_difftest_init(port);
  
  ref_r.pc = 0x80000000;
  for(int i=0; i<32; i++){
    ref_r.gpr[i] = 0;
  }
  
  ref_difftest_memcpy(0x80000000, pmem, img_size, DIFFTEST_TO_REF);
}


static bool checkregs(CPU_state *ref, uint64_t pc){
  bool check = true ;
  printf(COLOR_RED);
  for(int i=1; i<32; i++) {
    if( ref->gpr[i] != cpu_gpr[i] ) {
      printf("%s is different after executing instruction at pc =  0x%8lx, "
             " right = 0x%8lx, wrong = 0x%8lx \n", regs[i], pc, ref->gpr[i], cpu_gpr[i] );
      check = false;
      break ;
    }
  }
  
  if( pc != ref->pc ) {
    printf("pc is different at DUT pc = 0x%8lx, "
           " right = 0x%8lx, wrong = 0x%8lx \n", pc, ref->pc, pc );
    check = false;
  }

  /*
  if(check == false) {
    for(int i=0; i<(sizeof(regs)/sizeof(regs[0])); i++) {
      printf("%s = 0x%lx\n", regs[i], cpu_gpr[i]);
    }
  }
  */
  printf(COLOR_NONE);
  return check;
}



bool difftest_step(uint64_t pc) {

  bool check_result ;
  check_result = checkregs(&ref_r, pc);
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  /*
  for(int i=0; i<32; i++){
    ref_delay.gpr[i] = ref_r.gpr[i];
  }
  ref_delay.pc = ref_r.pc;
  */

  /*
  printf(COLOR_BLUE);
  for(int i=0; i<32; i++){
    printf("x%d(%s) = 0x%lx\n", i, regs[i], ref_r.gpr[i] );
  }
  printf("nemu pc = 0x%lx\n", ref_r.pc);
  printf(COLOR_NONE);
  */
  return check_result ;
}

