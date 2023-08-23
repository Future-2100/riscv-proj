.PHONY: clean $(ALL) rom runall run rungame runtest help $(RUNS) wave showtest readelf

COLOR_RED        = \033[1;31m
COLOR_GREEN      = \033[1;32m
COLOR_YELLOW     = \033[1;33m
COLOR_BLUE       = \033[1;34m
COLOR_PEPER      = \033[1;35m
COLOR_DARK_GREEN = \033[1;36m
COLOR_WHITE      = \033[1;37m
COLOR_NONE       = \033[0m

############################ pretreatment #############################
ifeq ($(MAKECMDGOALS),)
  MAKECMDGOALS  = image
  .DEFAULT_GOAL = image
endif

default: image

### ignore to deal with the ARCH if make clean|help|wave|showtest|readelf
ifeq ($(findstring $(MAKECMDGOALS), clean|help|wave|showtest|readelf),)
  ifeq ($(MAKECMDGOALS),rungame)
    ARCH = rv64
  endif

  ifndef ARCH
    $(info $$ARCH has not specified, use 'ARCH=rv32' by default)
    ARCH = rv32
  endif
  
  ARCHS = rv32 rv64
  
  ifeq ($(filter $(ARCHS), $(ARCH)),)
    $(error Expected $$ARCH in {$(ARCHS)}, Got "$(ARCH)")
  endif
endif


############################## compiler ###############################

ifeq ($(ARCH), rv64)
CROSS_COMPILE = riscv64-linux-gnu
endif

ifeq ($(ARCH), rv32)
#CROSS_COMPILE = riscv32-unknown-linux-gnu
CROSS_COMPILE = riscv64-linux-gnu
endif

AS = $(CROSS_COMPILE)-gcc
CC = $(CROSS_COMPILE)-gcc
CXX = $(CROSS_COMPILE)-g++
LD = $(CROSS_COMPILE)-ld
OBJDUMP = $(CROSS_COMPILE)-objdump
OBJCOPY = $(CROSS_COMPILE)-objcopy
READELF = $(CROSS_COMPILE)-readelf
OBJCOPY = $(CROSS_COMPILE)-objcopy


############################## file path ###############################
WORKDIR = $(shell pwd)
DSTDIR = $(WORKDIR)/build
$(shell mkdir -p $(DSTDIR))

INCDIR  = $(WORKDIR)/include
SRCDIR  = $(WORKDIR)/src

TESTDIR = $(SRCDIR)/tests
GAMEDIR = $(SRCDIR)/game
LIBDIR  = $(SRCDIR)/libs

############################## objects ###############################

ALL = $(basename $(notdir $(shell find $(TESTDIR) -name "*.c" -o -name "*.S")))

ifneq ($(findstring $(MAKECMDGOALS), image|runtest),)
  NAME = $(TEST)
  SRCS = $(shell find $(TESTDIR) -name "$(NAME).c" -o -name "$(NAME).S")
  ifeq ($(SRCS),)
    $(error Expected $$TEST in {$(ALL)}, Got "$(TEST)")
  endif
endif

ifeq ($(MAKECMDGOALS),rungame)
  NAME     = game
  ROM_PATH = $(GAMEDIR)/nes
  ROMS     = $(shell ls $(ROM_PATH)/rom/*.nes)
  ROM_SRC  = $(addprefix $(ROM_PATH)/gen/, $(addsuffix .c, $(notdir $(basename $(ROMS)))))
  GAME_SRC = $(shell find -L $(GAMEDIR)/src/ -name "*.c" -o -name "*.cpp")
  GAMEINC  = $(sort $(dir $(shell find $(GAMEDIR) -name "*.h")))
  INCDIR  += $(GAMEINC)
  SRCS     = $(ROM_SRC) $(GAME_SRC) 
  
rom:
	@-cd $(ROM_PATH) && python3 build-roms.py
$(ROM_SRC): rom

endif


#ifeq ($(NAME),)
#  $(error Compile target has not been specified yet)
#endif

IMAGE = $(DSTDIR)/$(NAME)

OBJS := $(subst $(WORKDIR)/src/, , $(SRCS))
OBJS := $(basename $(OBJS))
OBJS := $(addsuffix .o, $(OBJS))
OBJS := $(addprefix $(DSTDIR)/, $(OBJS))

LIBS := lib
LIBS := $(addsuffix .a, $(addprefix $(DSTDIR)/libs/, $(LIBS)))

LIBOBJS := $(shell find $(LIBDIR) -name "*.c" -o -name "*.S")
LIBOBJS := $(basename $(notdir $(LIBOBJS)))
LIBOBJS := $(addprefix $(DSTDIR)/libs/, $(addsuffix .o, $(LIBOBJS)))

LINKAGE = $(OBJS) $(LIBS)

CPUDIR = $(WORKDIR)/../design
RUNFILE = $(CPUDIR)/build/top


############################## flags ###############################
ASFLAGS = -fno-pic -mcmodel=medany -mstrict-align -MMD

ifeq ($(ARCH),rv32)
  ASFLAGS += -march=rv32im -mabi=ilp32
  LDFLAGS = -melf32lriscv
	BITS = 32
endif

ifeq ($(ARCH), rv64)
  ASFLAGS += -march=rv64g
  LDFLAGS = -melf64lriscv
	BITS = 64
endif

INCFLAGS += $(addprefix -I, $(INCDIR))

ASFLAGS += $(INCFLAGS)

CFLAGS += $(ASFLAGS)
CFLAGS += -Wall -Werror -O0
CFLAGS += -fno-asynchronous-unwind-tables -fno-builtin -fno-stack-protector -fdata-sections -ffunction-sections 
CFLAGS += #-fomit-frame-pointer
CFLAGS += -Wno-main -U_FORTIFY_SOURCE -static

CXXFLAGS += $(CFLAGS) -ffreestanding -fno-rtti -fno-exceptions -DMAINARGS=\"mario\"
CXXFLAGS += -D__CPP__

LDFLAGS += -T $(WORKDIR)/script/linker.ld
LDFLAGS += --gc-sections 
LDFLAGS += -e _start

ifeq ($(MAKECMDGOALS), runtest)
  COMPILE_CPU_FLAGS += WAVE=en
  COMPILE_CPU_FLAGS += DIFFTEST=en
endif

ifeq ($(MAKECMDGOALS), rungame)
  CFLAGS += -DPSS_STYLE=1 -DPRAMESKIP -D__NO_FILE_SYSTEM__
  ifeq ($(ARCH), rv32)
    CFLAGS += -D__ISA__=\"riscv32\"
    CFLAGS += -D__ISA_RISCV32__
  endif
  ifeq ($(ARCH), rv64)
    CFLAGS += -D__ISA__=\"riscv64\"
    CFLAGS += -D__ISA_RISCV64__
  endif
endif


############################## compile rules ###############################
$(DSTDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@) && echo +CC "->" $(notdir $<)
	@$(CC) -std=gnu11 $(CFLAGS) -c -o $@ $<

$(DSTDIR)/%.o: $(SRCDIR)/%.cc
	@mkdir -p $(dir $@) && echo +CXX "->" $(notdir $<)
	@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $<

$(DSTDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@) && echo +CXX "->" $(notdir $<)
	@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $<

$(DSTDIR)/%.o: $(SRCDIR)/%.S
	@mkdir -p $(dir $@) && echo +AS "->" $(notdir $<)
	@$(AS) $(ASFLAGS) -c -o $@ $<

$(LIBS): %: $(LIBOBJS)
	@ar rcs $@ $^

$(IMAGE).elf: $(OBJS) $(LIBS) 
	@echo +LD "->" $(IMAGE).elf
	@$(LD) $(LDFLAGS) -o $@ --start-group $^ --end-group

$(IMAGE).bin: $(IMAGE).elf
	@$(OBJCOPY) -S -O binary $(realpath $<) $@
	@xxd -e -b $@ | sed 's/  .*//' | sed 's/.*: //' > $(IMAGE).txt
	@$(OBJDUMP) -d $^ > $(IMAGE)_dumpelf.txt

$(RUNFILE):
	@echo +VERILATOR "->" $(BITS)-bit CPU
	@make -s -C $(CPUDIR) -f $(CPUDIR)/Makefile $(COMPILE_CPU_FLAGS) ARCH=$(ARCH)

image: $(IMAGE).bin


ifeq ($(ARCH),rv32)
  DIFFFILE = difftest/riscv32-nemu-interpreter-so
endif

ifeq ($(ARCH),rv64)
    DIFFFILE = difftest/riscv64-nemu-interpreter-so
endif


RUNS = run runtest rungame

$(RUNS): %: $(IMAGE).bin $(RUNFILE)
	@echo "----------------------RUNNING------------------------------"
	$(RUNFILE) --diff=$(CPUDIR)/$(DIFFFILE) --bin=$< "+img_txt=$(IMAGE).txt"
	@echo "----------------------FINISHED-----------------------------"

dumpbin:
	$(OBJDUMP) -D -b binary -m riscv:rv64 $(IMAGE).bin

dumpelf:
	$(OBJDUMP) -d $(IMAGE).elf


############################ run test ###################################

$(ALL): %:
	@if make -s TEST=$* runtest; then \
		printf "[%14s] $(COLOR_GREEN) PASS!$(COLOR_NONE) \n" $* >> $(RESULT) ; \
	else \
		printf "[%14s] $(COLOR_RED) FAIL!$(COLOR_NONE) \n" $* >> $(RESULT) ; \
	fi
	-@rm -f Makefile.$*

RESULT = .result

runall: $(ALL)
	@cat $(RESULT)
	@rm $(RESULT)

showtest:
	@echo $(ALL)

########################## run mario #####################################



############################ others ######################################

wave:
	gtkwave wave.vcd -a cpu.gtkw

readelf:
	vim $(DSTDIR)/$(TEST)_dumpelf.txt

clean:
	rm -rf build Makefile.* .result
	rm -rf $(CPUDIR)/build


help:
	@echo "  ####################################################### Help Info ######################################################################"
	@echo "  Usage: make [target] [arguments]";
	@echo "  Available targets:";
	@echo "    TEST=[testname] ARCH=[rvxx]              :  Compile a cpu test program from C language to a binary executable file,"
	@echo "                                                RV32IM or RV64IM instruction sets determined by ARCH. "
	@echo "    runtest TEST=[testname] ARCH=[rvxx]      :  Run a cpu test program."
	@echo "    runall ALL=[testname] ARCH=[rvxx]        :  Run a cpu test program."
	@echo "    runall ARCH=[rvxx]                       :  Run all the cpu test programs and show whether they are passed."
	@echo "    rungame                                  :  Run the game mario. Mario run in 64-bit CPU only"
	@echo "    clean                                    :  Clean the compiled file."
	@echo "    wave                                     :  Watch the CPU wave generated after runing a cpu test program by gtkwave."
	@echo "    showtest                                 :  Show the list of options [testname]."
	@echo "    readelf TEST=[testname]                  :  Read the risc-v assembly instruction of [testname]. "
	@echo "                                                You must run the test or compile the test before reading its assembly instruction."
	@echo ""
	@echo "  Optional arguments:";
	@echo "    ARCH=                                    :  options: rv32 / rv64, default is rv32 if not specified "
	@echo "    TEST=                                    :  options: the list print by 'make showtest'."
	@echo "    ALL=                                     :  options: the list print by 'make showtest',"
	@echo "                                                         if not specified, it is the set of all the filename in directory /riscv_compile/src/test/ "
	@echo "                                                         with the suffix removed. "
	@echo ""
	@echo "  Examples:";
	@echo "    make TEST=dummy ARCH=rv64                :  Compile dummy program to a RV64IM binary executable file. "
	@echo "    make runtest TEST=dummy                  :  Run test dummy on a 32-bit CPU."
	@echo "    make runtest TEST=dummy ARCH=rv64        :  Run test dummy on a 64-bit CPU."
	@echo "    make readelf TEST=dummy                  :  Read the risc-v assembly instruction of the program dummy. "
	@echo "    make rungame                             :  Run the game mario in 64-bit CPU."


