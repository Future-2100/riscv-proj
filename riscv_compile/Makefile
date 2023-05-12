.PHONY: allrun all clean $(ALL)

COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_YELLOW= \033[1;33m
COLOR_BLUE  = \033[1;34m
COLOR_PEPER = \033[1;35m
COLOR_DARK_GREEN = \033[1;36m
COLOR_WHITE = \033[1;37m
COLOR_NONE  = \033[0m

WORK_DIR = $(shell pwd)
DST_DIR = $(WORK_DIR)/build
$(shell mkdir -p $(DST_DIR))
TEST_DIR = $(WORK_DIR)/src/tests
KLIB_DIR = $(WORK_DIR)/src/klib
INC_DIR = $(WORK_DIR)/include
IMAGE = $(DST_DIR)/$(NAME)

CPU_DIR = /home/wuchenze/riscv-proj/single_cycle
RUN_FILE = $(CPU_DIR)/build/top

RESULT = .result
#$(shell > .result)

ALL = $(basename $(notdir $(shell find $(TEST_DIR) -name "*.c")))

default: $(IMAGE).bin

CROSS_COMPILE = riscv64-linux-gnu
AS = $(CROSS_COMPILE)-as
CC = $(CROSS_COMPILE)-gcc
CXX = $(CROSS_COMPILE)-g++
LD = $(CROSS_COMPILE)-ld
OBJDUMP = $(CROSS_COMPILE)-objdump
OBJCOPY = $(CROSS_COMPILE)-objcopy
READELF = $(CROSS_COMPILE)-readelf
OBJCOPY = $(CROSS_COMPILE)-objcopy

SFLAGS = -fno-pic -march=rv64g -mcmodel=medany -mstrict-align

SFLAGS += -I$(INC_DIR)
CFLAGS += -Wall -Werror -std=gnu11 -O0
CFLAGS += $(SFLAGS)
CFLAGS += -fno-asynchronous-unwind-tables -fno-builtin -fno-stack-protector -fdata-sections -ffunction-sections -fomit-frame-pointer
CFLAGS += -Wno-main -U_FORTIFY_SOURCE -static

Makefile.%: $(TEST_DIR)/%.c
	@/bin/echo -e "-include $(WORK_DIR)/Makefile" > $@
	@if make -s -f $@ NAME=$* run; then \
		printf "[%14s] $(COLOR_GREEN) PASS!$(COLOR_NONE) \n" $* >> $(RESULT) ; \
	else \
		printf "[%14s] $(COLOR_RED) FALL!$(COLOR_NONE) \n" $* >> $(RESULT) ; \
	fi
	-@rm -f Makefile.$*


all: $(addprefix Makefile., $(ALL))
	@echo $(ALL)

#$(ALL): %: Makefile.%

runall: all
	@cat $(RESULT)
	@rm $(RESULT)


$(DST_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(DST_DIR)/%.o: $(TEST_DIR)/%.S
	$(CC) $(CFLAGS) -c -o $@ $<

$(DST_DIR)/%.o: $(KLIB_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(DST_DIR)/%.o: $(KLIB_DIR)/%.S
	$(CC) $(SFLAGS) -c -o $@ $<

$(DST_DIR)/am.a: $(DST_DIR)/start.o $(DST_DIR)/trm.o
	ar rcs $@ $^

$(DST_DIR)/klib.a: $(DST_DIR)/string.o $(DST_DIR)/stdio.o
	ar rcs $@ $^

LD_FLAGS = -melf64lriscv
LD_FLAGS += -T $(WORK_DIR)/script/linker.ld
#LD_FLAGS += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0 --gc-sections 
LD_FLAGS += -e _start


$(IMAGE).elf: $(IMAGE).o $(DST_DIR)/am.a $(DST_DIR)/klib.a
	$(LD) $(LD_FLAGS) -o $@ --start-group $^ --end-group


$(IMAGE).bin: $(IMAGE).elf
	$(OBJCOPY) -S -O binary $(realpath $<) $@
	xxd -e -b $@ | sed 's/  .*//' | sed 's/.*: //' > $(IMAGE).txt
	$(OBJDUMP) -d $^ > $(IMAGE)_dumpelf.txt

$(RUN_FILE):
	make -C $(CPU_DIR) -f $(CPU_DIR)/Makefile


run: $(IMAGE).bin $(RUN_FILE)
	$(RUN_FILE) --diff=$(CPU_DIR)/riscv64-nemu-interpreter-so --bin=$< "+img_txt=$(IMAGE).txt"

wave:
	gtkwave wave.vcd -a cpu.gtkw

dumpbin:
	$(OBJDUMP) -D -b binary -m riscv:rv64 $(IMAGE).bin

dumpelf:
	$(OBJDUMP) -d $(IMAGE).elf

readelf:
	vim $(IMAGE)_dumpelf.txt

clean:
	@rm -rf build Makefile.* .result
	@rm -rf $(CPU_DIR)/build
