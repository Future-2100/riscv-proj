// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/wuchenze/riscv-proj/single_cycle/vsrc/top.v:79:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/wuchenze/riscv-proj/single_cycle/vsrc/top.v:82:32
    extern void set_pc(const svOpenArrayHandle b);

#ifdef __cplusplus
}
#endif

#endif  // guard
