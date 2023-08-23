RISC-V单周期CPU
===============
这是一个RISC-V单周期CPU的设计和仿真项目，支持32位和64位，包含了两个模块：
* 单周期CPU的RTL设计文档，在``design``文件夹下
* 提供给CPU运行的测试程序，在``sim``文件夹下


# 1. 环境搭建
1. 系统：Ubuntu22.04
2. 克隆本仓库代码：
```bash
$ git clone https://github.com/Future-2100/riscv-proj.git
```
3. 进入riscv-proj文件夹下，运行setup.sh脚本文件：
```bash
$ cd riscv-proj
$ /bin/bash setup.sh
```
4. 安装verilator，参考https://verilator.org/guide/latest/install.html#git-quick-install
5. 若需要编译risc-v 32位CPU运行的程序，则需要安装risc-v toolchain, 参考https://github.com/riscv-collab/riscv-gnu-toolchain


# 2. cpu介绍
``design/vsrc/cpu``文件夹下包含了一个32/64位的risc-v单周期CPU的设计文件,
该设计使用verilog硬件描述语言进行编写,只实现了RV-IM指令集。

本设计有一块存储区域以及串口和定时器这两个外设,位于``design/vsrc/env``中。
* memory: 存储器，地址从``0x8000_0000`` - ``0x87ff_ffff``。
共128MB的存储空间，支持非对齐访问。实现代码见``single_cycle/vsrc/env/memory.v``
* uart : 串口,地址为``0xa000_0000``，为一个8位可写不可读的寄存器。
当CPU对地址0xa0000000进行写操作时，会将写入的数据以ASCII编码的字符串的形式打印出来。实现代码见``design/vsrc/env/uart.v``。
若对串口进行读操作，则会停止仿真并报错。
* timer: 定时器,地址为``0xb000_0000``，为一个64位只读寄存器。
当CPU对地址0xb0000000进行读操作时，会将CPU自复位以来的时钟周期数读取出来。实现代码见``design/vsrc/env/timer.v``。
若对定时器进行写操作，则会停止仿真并报错。

本设计没有实现中断，因此这两个外设都只能通过地址寻址的方式进行访问，即通过load、store指令对其进行读写。

**若运行的测试程序需要使用串口或者定时器，则必须关闭difftest功能（详见difftest功能介绍）!**

可通过修改``design/include/default.v``文件中``PERIOD``的值来调整仿真的周期。

可通过修改``design/include/default.v``文件中``timescale``的值来调整仿真时间的单位和精度。


## 个人CPU与本仿真环境对接
可将``design/vsrc/cpu``中的verilog文件替换成你自己的CPU设计文档，以对接本仿真环境。CPU模块的接口规范如下: 

1. 设计要求
  * 设计必须是单周期CPU。
  * 设计使用的仿真软件为verilator，版本为verilator 5.009。
  * 设计的顶层模块名必须为``cpu``。
  * 设计的信号类型若为wire，则``wire``关键字不可省略，否则编译会报错。
  * 设计文档中不得设置``tiemscale``。
  * 每一个.v文件必须包含``default.v``头文件。
  一键添加`` `include "default.v"``的方法：在``design/vsrc/cpu``文件夹下执行命令
  ```bash
  $ sed -i '1 i\`include "default.v"' *.v
  ```
  * 设计的输入输出信号必须与本设计中CPU模块的输入输出信号保持完全一致，详见代码``design/vsrc/cpu/cpu.v``。
  * 设计内部不得包含存储器和外设模块，对存储器和外设的访问均通过``acs_*``信号，取指通过``pc``和``instr``信号。
---
2. `cpu`模块的输入输出信号功能定义:
  * ``clk``       ：     1 bit ,  input, 全局时钟信号。
  * ``rstn``      ：     1 bit ,  input, 全局复位信号，低电平复位。
  * ``pc``        ：  XLEN bits, output, 取指令的地址信号。
  * ``instr``     ：    32 bits,  input, 指令信号，同周期返回memory模块中pc地址对应的32位数据。
  * ``acs_en``    ：     1 bit , output, 访存有效信号，当执行load或store指令时，该信号需为高电平。
  * ``acs_wr``    ：     1 bit , output, 访存写信号，当执行store指令时，该信号需为高电平。
  * ``acs_bytes`` ：XLEN/8 bits, output, 访存字节信号，

                                 (XLEN/8)'b1          ---字节(byte, 8位)
                                 (XLEN/8)'b11         ---半字(half word, 16位)
                                 (XLEN/8)'b1111       ---字(word, 32位)
                                 (XLEN/8)'b1111_1111  ---双字(double world, 64位)(32位的CPU请忽略)
  * ``acs_addr``  ：  XLEN bits, output, 访存地址信号
  * ``acs_wdata`` ：  XLEN bits, output, 当执行store指令时，该信号表示需要写入的数据。
  * ``acs_rdata`` ：  XLEN bits,  input, 当执行load指令时，该信号表示读取的数据。
  * ``ebreak``    ：     1 bit , output, 当执行的指令为ebreak时，该信号需为高电平。
其中，若CPU为32位，则XLEN=32; 若CPU为64位，则XLEN=64。
ebreak指令在risc-v指令集中表示进入debug模式，本设计没有debug模式，ebreak在本设计中作为程序运行结束的标志，用于结束仿真。



## difftest功能介绍
difftest是CPU验证的常用方法，能够快速定位设计中的错误，difftest的模型文件为``design/riscv64-nemu-interpreter-so``，该模型为一生一芯中的nemu模型，但并不完整,仅仅可用于验证RV64G指令集。

若想关闭difftest功能，则在``sim/Makefile:158``文件中将``COMPILE_CPU_FLAGS += DIFFTEST=en``注释掉。

**注意: 若运行的测试程序需要对串口或定时器进行访问，则必须关掉difftest再编译仿真，否则difftest必然会报错并终止仿真**


# 3. sim

``sim``用于将C语言程序编译成risc-v指令集的程序，编译生成的程序文件用于在单周期CPU中运行。

``sim/Makefile``中的变量``ARCH``用于设置编译选项,默认情况下``ARCH=rv32``。
若``ARCH = rv32``，则会编译生成一个32位的CPU，并且编译RV32IM指令集的程序。
若``ARCH = rv64``，则会编译生成一个64位的CPU，并且编译RV64IM指令集的程序。
**若切换了ARCH的值，则在运行CPU前必须先执行``make clean``**

``sim/src/tests``文件夹下包含了33个测试程序,用于验证单周期CPU的正确性。
运行自己编写测试程序，只需将测试程序文件放入``sim/src/tests/``目录下即可。
自行编写的测试程序文件可以是以.c结尾的C语言程序文件，也可以是以.S结尾的汇编程序文件。

测试程序允许使用printf函数打印字符串（需包含klib.h头文件），printf函数会访问单周期CPU中的uart外设，因此若使用了printf函数，则必须关闭difftest功能。

``sim/src/game``文件夹下包含了红白游戏机超级玛丽的程序文件，可运行字符串格式的超级玛丽游戏，但由于没有键盘，因此只会输出开头画面。运行超级玛丽时，Makefile脚本会自动关闭difftest功能，并且不会输出波形文件。因此建议个人CPU在通过了33个测试程序之后，再考虑运行超级玛丽游戏。
**超级玛丽游戏暂时不支持在32位CPU中运行，``make rungame``指令会自动指定ARCH=rv64**

``sim/src/klib``文件夹下包含了CPU正常运行程序所需的运行时环境，以及一些常用的库函数。

``sim/script/linker.ld``为链接脚本。

### sim中允许的操作
在``sim``路径下输入命令：
```bash
$ make help
```
即可查看允许进行的所有操作。

