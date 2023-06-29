#!/bin/bash

	cd ~
	sudo apt update
	sudo apt-get update
	sudo apt upgrade -y
	sudo apt-get upgrade -y

	for tools in man git tree net-tools exuberant-ctags vim make ssh gdb gtkwave csh lsb-core tmux build-essential gcc-doc libreadline-dev libsdl2-dev llvm llvm-dev llvm-11 llvm-11-dev g++-riscv64-linux-gnu binutils-riscv64-linux-gnu perl python3 autoconf g++ flex bison ccache libgoogle-perftools-dev numactl perl-doc libfl2 libfl-dev zlib1g zlib1g-dev libsdl2-image-dev device-tree-compiler gdb-multiarch qemu-system-misc gcc-riscv64-linux-gnu automake autotools-dev curl libmpc-dev libmpfr-dev libgmp-dev gawk texinfo gperf libtool patchutils bc libexpat-dev ninja-build help2man
	do
		sudo apt install $tools -y
	done
