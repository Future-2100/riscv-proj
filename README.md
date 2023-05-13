RISC-V单周期CPU
===============
这是一个64位的RISC-V单周期CPU的文档，包含了两个模块：
* 单周期CPU的RTL设计文档，在``single_cycle``文件夹下
* 提供给CPU运行的测试程序，在``riscv_compile``文件夹下

# 1. single\_cycle

``single_cycle/vsrc/cpu``文件夹下包含了risc-v单周期CPU的设计文件,
该设计使用verilog硬件描述语言进行编写,只实现了RV64IM指令集

本设计有一块存储区域以及串口和定时器这两个外设,位于``single_cycle/vsrc/env``中。
* memory: 存储器，地址从``0x8000_0000`` - ``0x87ff_ffff``。
共128MB的存储空间，支持非对齐访问。实现代码见``single_cycle/vsrc/env/memory.v``
* uart : 串口,地址为``0xa000_0000``，为一个8位可写不可读的寄存器。
当CPU对地址0xa0000000进行写操作时，会将写入的数据以ASCII编码的字符串的形式打印出来。实现代码见``single_cycle/vsrc/env/uart.v``
* timer: 定时器,地址为``0xb000_0000``，为一个64位只读寄存器。
当CPU对地址0xb0000000进行读操作时，会将CPU自复位以来的时钟周期数读取出来。实现代码见``single_cycle/vsrc/env/timer.v``

本设计没有实现中断，因此这两个外设都只能通过地址寻址的方式进行访问，即通过load、store指令对其进行读写。

**若运行的测试程序需要使用串口或者定时器，则必须关闭difftest功能!**

可通过修改``single_cycle/include/default.v``文件中``PERIOD``的值来调整仿真的周期。

可通过修改``single_cycle/include/default.v``文件中``timescale``的值来调整仿真时间的单位和精度。


## 个人CPU与本仿真环境对接
可将``single_cycle/vsrc/cpu``中的verilog文件替换成你自己的CPU设计文档，以对接本仿真环境。CPU模块的接口规范如下: 
1. 设计要求
  * 设计必须是单周期CPU
  * 设计使用的仿真软件为verilator，版本为verilator 5.009
  * 设计的顶层模块名必须为``cpu``
  * 设计的输入输出信号必须与本设计的输入输出信号保持完全一致，见代码``single_cycle/vsrc/cpu/cpu.v``。
  * 设计内部不得包含存储器和外设模块，对存储器和外设的访问均通过``acs_*``信号，取指通过``pc``和``instr``信号


2. `cpu`模块的输入输出信号功能定义:
  * ``clk``       ：全局时钟信号
  * ``rstn``      ：全局复位信号，低电平复位
  * ``pc``        ：取指令的地址信号
  * ``instr``     ：指令信号，同周期返回memory模块中pc地址对应的32位数据。
  * ``acs_en``    ：访存有效信号，当执行load或store指令时，该信号需为高电平。
  * ``acs_wr``    ：访存写信号，当执行store指令时，该信号需为高电平。
  * ``acs_bytes`` ：访存字节信号，

                              8'b1          ---字节(byte, 8位)
                              8'b11         ---半字(half word, 16位)
                              8'b1111       ---字(word, 32位)
                              8'b1111_1111  ---双字(double world, 64位)
  * ``acs_addr``  ：访存地址信号
  * ``acs_wdata`` ：当执行store指令时，该信号表示需要写入的数据
  * ``acs_rdata`` ：当执行load指令时，该信号表示读取的数据
  * ``ebreak``    ：当执行的指令为ebreak时，该信号需为高电平。
ebreak指令在risc-v指令集中表示进入debug模式，本设计没有debug模式，ebreak在本设计中作为程序运行结束的标志，用于结束仿真。


在``single_cycle``文件夹下输入命令
```bash
make
```
即可对设计进行编译,编译后会在``single_cycle/build``文件夹下生成``top``可执行文件。


## difftest功能介绍
difftest是CPU验证的常用方法，能够快速定位设计中的错误，difftest的模型文件为``single_cycle/riscv64-nemu-interpreter-so``，该模型为一生一芯中不完整的nemu模型，可用于验证RV64G指令集。
若想关闭difftest功能，则在``single_cycle/include/config.h``文件中将``#define DIFFTEST``注释掉
**注意: 若运行的测试程序需要对串口或定时器进行访问，则必须关掉difftest再编译仿真，否则difftest必然会报错并终止仿真**


# 2. riscv\_compile
``riscv_compile``用于将C语言程序编译成risc-v指令集的程序，编译生成的程序文件用于在单周期CPU中运行。

``riscv_compile/src/tests``文件夹下包含了33个测试程序,用于验证单周期CPU的正确性

若要自己编写测试程序，则测试程序文件可以是以.c结尾的C语言程序文件，也可以是以.S结尾的汇编程序文件。

测试程序可以使用printf函数打印字符串，该函数会访问单周期CPU中的uart外设，因此若使用了printf函数，则必须关闭difftest功能。

``riscv_compile/src/klib``文件夹下包含了CPU正常运行程序所需的运行时环境，以及一些常用的库函数。

``riscv_compile/script/linker.ld``为链接脚本

### 一键编译并运行仿真测试所有测试程序
在``riscv_compile``路径下输入命令：
```bash
make runall
```

### 编译单个测试程序并运行仿真
在``riscv_compile``路径下输入命令：
```bash
make runall ALL=<test_name>
```
或者在``riscv_compile``路径下输入命令：
```bash
make run NAME=<test_name>
```
即可编译``<test_name>``测试程序，并将测试程序载入``single_cycle``文件夹下的单周期CPU设计中进行仿真

例如，运行dummy测试程序，则应在``riscv_compile``文件夹下执行
```bash
make runall ALL=dummy
```
或者
```bash
make run NAME=dummy
```
即可编译``dummy``测试程序并在单周期CPU中运行

``test_name``可在``riscv_compile/src/tests``文件夹下查看，测试程序的文件名为``<test_name>.c``或者``<test_name>.S``


### 只编译单个测试程序，不运行仿真
在``riscv_compile``路径下输入命令：
```bash
make NAME=<test_name>
```
即可编译``<test_name>``测试程序。
编译会在``riscv_compile/build``文件夹下生成四个文件，分别是``<test_name>.elf``、``<test_name>.bin``、``<test_name>.txt``以及``<test_name>_dumpelf.txt``。
* ``<test_name>.bin``文件是测试程序的二进制文件，包含了测试程序的指令和数据
* ``<test_name>.txt``文件是将``<test_name>.bin``文件以ASCII字符0和1的形式显示的结果,单周期CPU中的``top``模块会使用``$readmemb()``函数将``<test_name.txt>``文件数据载入存储器中，然后执行。
* ``<test_name>_dumpelf.txt``文件会显示测试程序对应的指令，用于进行debug时给读者查询指令

要想查询``<test_name>``测试程序的汇编指令，可在``riscv_compile``路径下输入命令：
```bash
make readelf NAME=<test_name>
```

