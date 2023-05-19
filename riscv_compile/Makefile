.PHONY: clean $(ALL) rom runall run rungame

ARCH = rv64
#ARCH = rv32

COLOR_RED        = \033[1;31m
COLOR_GREEN      = \033[1;32m
COLOR_YELLOW     = \033[1;33m
COLOR_BLUE       = \033[1;34m
COLOR_PEPER      = \033[1;35m
COLOR_DARK_GREEN = \033[1;36m
COLOR_WHITE      = \033[1;37m
COLOR_NONE       = \033[0m

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
ifeq ($(TEST),en)
  SRCS = $(shell find $(TESTDIR) -name "$(NAME).c" -o -name "$(NAME).S")
endif

ifeq ($(GAME),en)
  NAME = game
  ROM_PATH = $(GAMEDIR)/nes
  ROMS     = $(shell ls $(ROM_PATH)/rom/*.nes)
  ROM_SRC  = $(addprefix $(ROM_PATH)/gen/, $(addsuffix .c, $(notdir $(basename $(ROMS)))))
  GAME_SRC = $(shell find -L $(GAMEDIR)/src/ -name "*.c" -o -name "*.cpp")
  GAMEINC = $(sort $(dir $(shell find $(GAMEDIR) -name "*.h")))
  INCDIR += $(GAMEINC)
  SRCS = $(ROM_SRC) $(GAME_SRC) 
  
rom:
	@-cd $(ROM_PATH) && python3 build-roms.py
$(ROM_SRC): rom

endif

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

CPUDIR = $(WORKDIR)/../single_cycle
RUNFILE = $(CPUDIR)/build/top

default: $(IMAGE).bin


############################## flags ###############################
ASFLAGS = -fno-pic -mcmodel=medany -mstrict-align -MMD

ifeq ($(ARCH),rv32)
ASFLAGS += -march=rv32g -mabi=ilp32
LDFLAGS = -melf32lriscv
else
  ifeq ($(ARCH), rv64)
  ASFLAGS += -march=rv64g
  LDFLAGS = -melf64lriscv
  else
  	$(shell echo "error: ARCH has never defined as rv32 or rv64")
  endif
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
#LDFLAGS += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0 
LDFLAGS += --gc-sections 
LDFLAGS += -e _start

ifeq ($(TEST), en)
  COMPILE_CPU_FLAGS += WAVE=en
  #COMPILE_CPU_FLAGS += DIFFTEST=en
endif

ifeq ($(GAME), en)
  CFLAGS += -DPSS_STYLE=1 -DPRAMESKIP -D__NO_FILE_SYSTEM__
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
	@echo +VERILATOR "->" top
	make -C $(CPUDIR) -f $(CPUDIR)/Makefile $(COMPILE_CPU_FLAGS) ARCH=$(ARCH)


#RUN = run
#$(RUN): %: $(IMAGE).bin $(RUNFILE)
#	$(RUNFILE) --diff=$(CPUDIR)/riscv64-nemu-interpreter-so --bin=$< "+img_txt=$(IMAGE).txt"

run: $(IMAGE).bin $(RUNFILE)
	@echo "----------------------RUNNING------------------------------"
	$(RUNFILE) --diff=$(CPUDIR)/riscv64-nemu-interpreter-so --bin=$< "+img_txt=$(IMAGE).txt"
	@echo "----------------------FINISHED-----------------------------"

dumpbin:
	$(OBJDUMP) -D -b binary -m riscv:rv64 $(IMAGE).bin

dumpelf:
	$(OBJDUMP) -d $(IMAGE).elf


############################ run test ###################################

ALL = $(basename $(notdir $(shell find $(TESTDIR) -name "*.c" -o -name "*.S")))

$(ALL): %:
	@if make -s NAME=$* TEST=en run; then \
		printf "[%14s] $(COLOR_GREEN) PASS!$(COLOR_NONE) \n" $* >> $(RESULT) ; \
	else \
		printf "[%14s] $(COLOR_RED) FAIL!$(COLOR_NONE) \n" $* >> $(RESULT) ; \
	fi
	-@rm -f Makefile.$*

RESULT = .result

runall: $(ALL)
	@cat $(RESULT)
	@rm $(RESULT)

runtest:
	@make -s run TEST=en

showtest:
	@echo $(ALL)

########################## run mario #####################################

rungame:
	@make -s GAME=en run


############################ others ######################################

wave:
	gtkwave wave.vcd -a cpu.gtkw

readelf:
	vim $(IMAGE)_dumpelf.txt

clean:
	rm -rf build Makefile.* .result
	rm -rf $(CPUDIR)/build


help:
	@echo "  ####################### Help Info ##############################"
	@echo "  Usage: make [target] [arguments]";
	@echo "  Available targets:";
	@echo ""
	@echo "  TEST=en NAME=[testname]      :  compile a cpu test program from C language to a binary executable file"
	@echo ""
	@echo "  runtest NAME=[testname]      :  run a cpu test program"
	@echo "  run TEST=en NAME=[testname]  :  run a cpu test program"
	@echo "  runall ALL=[testname]        :  run a cpu test program"
	@echo "  runall                       :  run all the cpu test programs and show whether they are passed"
	@echo ""
	@echo "  run GAME=en                  :  run the game mario      "
	@echo "  rungame                      :  run the game mario      "
	@echo ""
	@echo "  clean                        :  clean the compiled file"
	@echo "  wave                         :  watch the CPU wave generated after runing a cpu test program by gtkwave"
	@echo "  showtest                     :  show the list of options [testname]"
	@echo "  readelf NAME=[testname]      :  read the risc-v assembly instruction of [testname]. "
	@echo "                                  You must run the test or compile the test before reading its assembly instruction"

