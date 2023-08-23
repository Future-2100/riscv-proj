// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_dff__D40.h"

VL_ATTR_COLD void Vtop_dff__D40___ctor_var_reset(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->d = VL_RAND_RESET_Q(64);
    vlSelf->q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__q_reg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__q = VL_RAND_RESET_Q(64);
}
