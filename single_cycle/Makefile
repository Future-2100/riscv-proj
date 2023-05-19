TOPNAME = top

#ARCH = rv32

WORK_DIR = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
INC_DIR = $(WORK_DIR)/include

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

VSRC_DIR = $(WORK_DIR)/vsrc
VSRCS = $(shell find $(VSRC_DIR) -name "*.v")
CSRC_DIR = $(WORK_DIR)/csrc
CSRCS = $(shell find $(CSRC_DIR) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

VC_FLAGS = -O3 -x-initial fast --x-assign fast 
VC_FLAGS += -cc --MMD -Wall -I$(WORK_DIR)/include
VC_FLAGS += --exe --build --assert --timing 

ifeq ($(WAVE),en)
  VC_FLAGS += --trace --coverage
  VC_FLAGS += -D__WAVE__
endif

ifeq ($(DIFFTEST),en)
  VC_FLAGS += -D__DIFFTEST__
  CC_FLAGS += -D__DIFFTEST__
endif

ifeq ($(ARCH), rv64)
	VC_FLAGS += -DXLEN=64
	VC_FLAGS += -D__RV64__
else
  ifeq ($(ARCH), rv32)
  	VC_FLAGS += -DXLEN=32
	VC_FLAGS += -D__RV32__
  endif
endif

VC_FLAGS += --Mdir $(OBJ_DIR) -o $(abspath $(BIN))

CC_FLAGS += -Wall -Werror -g -I$(INC_DIR)
LD_FLAGS = -ldl

VERILATOR_FLAGS += $(VC_FLAGS) $(addprefix -CFLAGS , $(CC_FLAGS)) $(addprefix -LDFLAGS , $(LD_FLAGS))

$(BIN):
	verilator $(VERILATOR_FLAGS) $(VSRCS)  $(CSRCS) \
		--top-module $(TOPNAME)

run:$(BIN)
	$(BIN) +img_file=/home/wuchenze/riscv_compile/build/image.txt

gdb:$(BIN)
	gdb $(BIN) +img_file=/home/wuchenze/riscv_compile/build/dummy.txt

wave:
	gtkwave wave.vcd -a cpu.gtkw

clean:
	rm -rf build

