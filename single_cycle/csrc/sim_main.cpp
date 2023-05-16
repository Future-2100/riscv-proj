#include <verilated.h>

#include <verilated_dpi.h>

#include "svdpi.h"

#include "Vtop__Dpi.h"

#include <stdio.h>

#include <string.h>

#include <getopt.h>

#include <Vtop.h>

#include <assert.h>

#include <common.h>

/*
const char *regname[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
*/

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_bin = NULL;
static char *img_txt = NULL;
static int difftest_port = 1234;
static char *elf_file = NULL;
static char *valueplusargs = NULL;


void init_difftest(char *ref_so_file, long img_size, int port, uint8_t *pmem);
bool difftest_step(uint64_t pc);


static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
      {"log"      , required_argument, NULL, 'l'},
      {"diff"     , required_argument, NULL, 'd'},
      {"port"     , required_argument, NULL, 'p'},
      {"help"     , no_argument      , NULL, 'h'},
      {"elf"      , required_argument, NULL, 'e'},
      {"bin"      , required_argument, NULL, 'b'},
      {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-hb:d:e:t:l:d:p:", table, NULL)) != -1) {
    switch (o) {
        case 'b': img_bin = optarg; break;
        case 'p': sscanf(optarg, "%d", &difftest_port); break;
        case 'l': log_file = optarg; break;
        case 'd': diff_so_file = optarg; break;
        case 'e': elf_file = optarg; break;
        case  1 : valueplusargs = optarg; return 0;
      default :
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--bin=FILE           read bin FILE\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,---diff=REF_SO       run DiffTest with REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with PORT  \n");
        printf("\t-e,--elf=FILE           read elf FILE\n");
        printf("\n");
    }
  }
  return 0;
}


uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r){
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

uint64_t *cpu_pc= NULL;
extern "C" void set_pc(const svOpenArrayHandle r){
  cpu_pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}


uint8_t pmem[0x8000000]  __attribute((aligned(4096))) = { } ;

int main(int argc, char** argv, char** env) {

    if( 0 && argc && argv && env ) {}

    VerilatedContext* contextp = new VerilatedContext;

    contextp->debug(0);

    contextp->traceEverOn(true);

    parse_args(argc, argv);

    contextp->commandArgs(1, &valueplusargs);

    Vtop* top = new Vtop{contextp};

    if(img_bin == NULL){
      printf("No image is given. Use the default build-in image.\n");
      return 1;
    }


#ifdef __DIFFTEST__

    FILE *fp = fopen(img_bin, "rb");
    assert(fp);

    fseek(fp, 0, SEEK_END);
    long img_size = ftell(fp);

    fseek(fp, 0, SEEK_SET);
    int ret = fread(pmem, img_size, 1, fp );
    assert(ret == 1);

    fclose(fp);

    init_difftest(diff_so_file, img_size, difftest_port, pmem);

    bool edge = false ;
    bool resetting = true ;

#endif

    while (!contextp->gotFinish()) {
        
        top->eval();

#ifdef __DIFFTEST__
        if( top->diff_rstn == 1 ) {
          resetting = false ;
        }
        else if( top->diff_rstn == 0 ) {
          resetting = true ;
        }

        if( top->diff_clk == 1 ) {
            edge = true;
        }
        else if( top->diff_clk == 0){
          if( edge == true && resetting == false ) { 
            if( difftest_step(*cpu_pc) == false) {
              printf(COLOR_GREEN);
              printf("time : %ld\n",contextp->time());
              printf("npc pc = 0x%lx\n", *cpu_pc);
              printf(COLOR_NONE);

              //  if difftest check has not passed, let cpu continue three clock cycle and then finish the simulation .
              for(int i=0; i<30; i++){
                contextp->timeInc(1);
              }
              top->final();
              delete top;
              return 1;
            }
          }
          edge = false;
        }
#endif
        
        contextp->timeInc(1);
    }

    int return_value = cpu_gpr[10];
//    printf("pc = 0x%lx\n" , *cpu_pc);

    top->final();

    delete top;

    return return_value;
}

