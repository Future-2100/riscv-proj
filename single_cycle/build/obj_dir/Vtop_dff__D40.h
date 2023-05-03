// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_DFF__D40_H_
#define VERILATED_VTOP_DFF__D40_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"

class Vtop__Syms;

class Vtop_dff__D40 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN8(en,0,0);
    CData/*0:0*/ __Vtogcov__en;
    VL_IN64(d,63,0);
    VL_OUT64(q,63,0);
    QData/*63:0*/ __PVT__q_reg;
    QData/*63:0*/ __Vtogcov__q;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_dff__D40(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_dff__D40();
    VL_UNCOPYABLE(Vtop_dff__D40);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
