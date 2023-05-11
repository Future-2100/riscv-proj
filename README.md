# 1. single\_cycle

``single_cycle``文件夹下包含了risc-v单周期CPU的设计文件
该设计使用verilog硬件描述语言进行编写,只实现了RV64IM指令集

本设计添加了串口和定时器两个外设。
串口地址为0xa0000000，为一个8位可写不可读的寄存器。
定时器地址为0xb0000000，为一个64位只读寄存器。
若不需要这两个外设中的任何一个，可在``single_cycle/include/config.v``文件中将`` `define DEVICE_UART``或者`` `define DEVICE_TIMER``注释掉
本设计没有实现中断，因此这两个外设都只能通过地址寻址的方式进行访问，即通过load、store指令对其进行读写。


串口的功能：当对地址0xa0000000进行写操作时，会将写入的数据以ASCII编码的字符串的形式打印出来。
为了方便使用，已经在``riscv_compile/src/klib/stdio.c``中定义好了printf函数。
测试程序中直接使用printf函数即可输出想要的内容。
**若开启了串口功能，则必须关闭difftest！**
这里的测试程序指的是需要经过``riscv_compile``文件夹下的makefile脚本文件编译的程序，应当使用C语言编写，并且放在``riscv_compile/src/tests``文件夹下


可通过修改``single_cycle/include/config.v``文件中``PERIOD``的值来调整仿真的周期。
可通过修改``single_cycle/include/default.v``文件中```timescale``的值来调整仿真时间的单位和精度。

仿真文件有3个，分别是``single_cycle/vsrc/top.v``、``single_cycle/csrc/sim_main.cpp``、 ``single_cycle/csrc/difftest.c``
本设计使用verilator进行仿真验证，使用的版本为verilator 5.009
仿真使用了difftest进行验证，以快速查找设计中的错误，difftest的模型文件为``single_cycle/riscv64-nemu-interpreter-so``
若想关闭difftest功能，则可在``single_cycle/include/config.h``文件中将``#define DIFFTEST``注释掉
**注意: 若设计中添加了串口或者定时器，并且运行的程序需要对串口或者定时器进行访问，那么必须关掉difftest再编译仿真，否则difftest必然会报错并终止仿真**


在``single_cycle``文件夹下输入命令
```bash
make
```
即可对设计进行编译,编译后会在``single_cycle/build``文件夹下生成``top``可执行文件。



# 2. riscv\_compile

``riscv_compile``文件夹下包含了33个测试程序，位于``riscv_compile/src/tests``文件夹下,用于验证单周期CPU的正确性
``riscv_compile/src/klib``文件夹下包含了编译测试程序所需的文件
``riscv_compile/script/linker.ld``为链接脚本

## 一键编译并运行仿真测试所有测试程序
在``riscv_compile``路径下输入命令：
```bash
make runall
```

## 编译单个测试程序并运行仿真
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

``test_name``可在``riscv_compile/src/tests``文件夹下查看，测试程序的文件名为``<test_name>.c``


## 只编译单个测试程序，不运行仿真
在``riscv_compile``路径下输入命令：
```bash
make NAME=<test_name>
```
即可编译``<test_name>``测试程序
编译会在``riscv_compile/build``文件夹下生成四个文件，分别是``<test_name>.elf``、``<test_name>.bin``、``<test_name>.txt``以及``<test_name>_dumpelf.txt``
``<test_name>.bin``文件是测试程序的二进制文件，包含了测试程序的指令和数据
``<test_name>.txt``文件是将``<test_name>.bin``文件以ASCII字符0和1的形式显示的结果,单周期CPU中的``top``模块会使用``$readmemb()``函数将``<test_name.txt>``文件数据载入存储器中，然后执行。
``<test_name>_dumpelf.txt``文件会显示测试程序对应的指令，用于进行debug时给读者查询指令
要想查询``<test_name>``测试程序的汇编指令，可在``riscv_compile``路径下输入命令：

```bash
make readelf NAME=<test_name>
```

