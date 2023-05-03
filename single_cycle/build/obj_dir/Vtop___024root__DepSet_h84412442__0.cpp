// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_pc(const svOpenArrayHandle b);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__set_pc__Vdpioc2_TOP(const QData/*63:0*/ &b) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__set_pc__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps b__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar b__Vopenarray (&b__Vopenprops, &b);
    set_pc(&b__Vopenarray);
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x989680ULL, 
                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                       26);
    VL_WRITEF("\033[1;31m------------------------time out----------------------------\033[0m\n");
    VL_FINISH_MT("/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 28, "");
    vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__clk = 0U;
    vlSelf->top__DOT__rstn = 0U;
    co_await vlSelf->__VtrigSched_hb25cf626__0.trigger(
                                                       "@(negedge top.clk)", 
                                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                                       38);
    vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_hb25cf626__0.trigger(
                                                       "@(negedge top.clk)", 
                                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                                       38);
    vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_hb25cf626__0.trigger(
                                                       "@(negedge top.clk)", 
                                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                                       38);
    vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_hb25cf626__0.trigger(
                                                       "@(negedge top.clk)", 
                                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                                       38);
    vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_hb25cf626__0.trigger(
                                                       "@(negedge top.clk)", 
                                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                                       38);
    vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_hb25cf626__0.trigger(
                                                       "@(negedge top.clk)", 
                                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                                       38);
    vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_hb25cf626__0.trigger(
                                                       "@(negedge top.clk)", 
                                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                                       38);
    vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_hb25cf626__0.trigger(
                                                       "@(negedge top.clk)", 
                                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                                       38);
    vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_hb25cf626__0.trigger(
                                                       "@(negedge top.clk)", 
                                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                                       38);
    vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_hb25cf626__0.trigger(
                                                       "@(negedge top.clk)", 
                                                       "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                                       38);
    vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__rstn = 1U;
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           "/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 
                                           32);
        vlSelf->__Vdlyvval__top__DOT__clk__v0 = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__clk)));
        vlSelf->__Vdlyvset__top__DOT__clk__v0 = 1U;
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->top__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0)));
    vlSelf->__VactTriggered.at(1U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__VactTriggered.at(2U) = ((~ (IData)(vlSelf->top__DOT__clk)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0));
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0 
        = vlSelf->top__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->top__DOT__clk;
    }
    if (((IData)(vlSelf->top__DOT__rstn) ^ (IData)(vlSelf->top__DOT____Vtogcov__rstn))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rstn = vlSelf->top__DOT__rstn;
    }
    vlSelf->diff_clk = vlSelf->top__DOT__clk;
    vlSelf->diff_rstn = vlSelf->top__DOT__rstn;
    if (((IData)(vlSelf->diff_clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__diff_clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__diff_clk = vlSelf->diff_clk;
    }
    if (((IData)(vlSelf->diff_rstn) ^ (IData)(vlSelf->top__DOT____Vtogcov__diff_rstn))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__diff_rstn = vlSelf->diff_rstn;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h6e8420ac__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h6e8420ac__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h07e2c6d3__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h07e2c6d3__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa165fc__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa165fc__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa565d7__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa565d7__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2a79060a__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2a79060a__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h289b5076__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h289b5076__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd26f8e18__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd26f8e18__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd261cfd8__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd261cfd8__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2a846fe1__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2a846fe1__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h28d16b8e__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h28d16b8e__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h32c0a4bc__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h32c0a4bc__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hf32fd91d__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hf32fd91d__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h34a54223__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h34a54223__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h0ce4fccf__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h0ce4fccf__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h999ba2bc__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h999ba2bc__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hb4b772de__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hb4b772de__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h63b5e77e__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h63b5e77e__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_had500c1b__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_had500c1b__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h5a00e1f5__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h5a00e1f5__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hc1dc7933__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hc1dc7933__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h846f6128__0;
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h846f6128__0 = 0;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v0;
    __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory_inst__DOT__data__v0;
    __Vdlyvval__top__DOT__memory_inst__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory_inst__DOT__data__v0;
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v0 = 0;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v1;
    __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v1 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory_inst__DOT__data__v1;
    __Vdlyvval__top__DOT__memory_inst__DOT__data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory_inst__DOT__data__v1;
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v1 = 0;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v2;
    __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v2 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory_inst__DOT__data__v2;
    __Vdlyvval__top__DOT__memory_inst__DOT__data__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory_inst__DOT__data__v2;
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v2 = 0;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v3;
    __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v3 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory_inst__DOT__data__v3;
    __Vdlyvval__top__DOT__memory_inst__DOT__data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory_inst__DOT__data__v3;
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v3 = 0;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v4;
    __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v4 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory_inst__DOT__data__v4;
    __Vdlyvval__top__DOT__memory_inst__DOT__data__v4 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory_inst__DOT__data__v4;
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v4 = 0;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v5;
    __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v5 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory_inst__DOT__data__v5;
    __Vdlyvval__top__DOT__memory_inst__DOT__data__v5 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory_inst__DOT__data__v5;
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v5 = 0;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v6;
    __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v6 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory_inst__DOT__data__v6;
    __Vdlyvval__top__DOT__memory_inst__DOT__data__v6 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory_inst__DOT__data__v6;
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v6 = 0;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v7;
    __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v7 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory_inst__DOT__data__v7;
    __Vdlyvval__top__DOT__memory_inst__DOT__data__v7 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory_inst__DOT__data__v7;
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v7 = 0;
    // Body
    vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__ebreak)))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__rstn)))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__acs_en) 
                   & (IData)(vlSelf->top__DOT__acs_wr)) 
                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen))))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__acs_en) 
                   & (IData)(vlSelf->top__DOT__acs_wr)) 
                  & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                     >> 1U))))) {
        vlSymsp->__Vcoverage[2627].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__acs_en) 
                   & (IData)(vlSelf->top__DOT__acs_wr)) 
                  & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                     >> 2U))))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__acs_en) 
                   & (IData)(vlSelf->top__DOT__acs_wr)) 
                  & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                     >> 3U))))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__acs_en) 
                   & (IData)(vlSelf->top__DOT__acs_wr)) 
                  & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                     >> 4U))))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__acs_en) 
                   & (IData)(vlSelf->top__DOT__acs_wr)) 
                  & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                     >> 5U))))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__acs_en) 
                   & (IData)(vlSelf->top__DOT__acs_wr)) 
                  & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                     >> 6U))))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__acs_en) 
                   & (IData)(vlSelf->top__DOT__acs_wr)) 
                  & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                     >> 7U))))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__ebreak) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
    }
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
    }
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 1U))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
    }
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 2U))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
    }
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 3U))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
    }
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 4U))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
    }
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 5U))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
    }
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 6U))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
    }
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 7U))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__rstn) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(vlSelf->top__DOT__ebreak)) {
        if ((0ULL == vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr
             [0xaU])) {
            VL_WRITEF("\033[1;32mSUCCESS\033[0m\n");
        } else {
            VL_WRITEF("\033[1;31mFAIL\033[1;31m\n");
        }
        VL_FINISH_MT("/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 75, "");
    }
    if (vlSelf->top__DOT__rstn) {
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
            = (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                       >> 0x20U));
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
            = (0x7fffffffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc));
    } else {
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg = 0U;
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg = 0U;
    }
    if (vlSelf->top__DOT__ebreak) {
        if ((0ULL == vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr
             [0xaU])) {
            vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0ULL != vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr
             [0xaU])) {
            vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        }
    }
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v0 = 0U;
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen))) {
        __Vdlyvval__top__DOT__memory_inst__DOT__data__v0 
            = (0xffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__data_rs2));
        __Vdlyvset__top__DOT__memory_inst__DOT__data__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v0 
            = (0x7ffffffU & (IData)(vlSelf->top__DOT__acs_addr));
    }
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v1 = 0U;
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 1U))) {
        __Vdlyvval__top__DOT__memory_inst__DOT__data__v1 
            = (0xffU & (IData)((vlSelf->top__DOT__cpu_inst__DOT__data_rs2 
                                >> 8U)));
        __Vdlyvset__top__DOT__memory_inst__DOT__data__v1 = 1U;
        __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v1 
            = (0x7ffffffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__acs_addr)));
    }
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v2 = 0U;
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 2U))) {
        __Vdlyvval__top__DOT__memory_inst__DOT__data__v2 
            = (0xffU & (IData)((vlSelf->top__DOT__cpu_inst__DOT__data_rs2 
                                >> 0x10U)));
        __Vdlyvset__top__DOT__memory_inst__DOT__data__v2 = 1U;
        __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v2 
            = (0x7ffffffU & ((IData)(2U) + (IData)(vlSelf->top__DOT__acs_addr)));
    }
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v3 = 0U;
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 3U))) {
        __Vdlyvval__top__DOT__memory_inst__DOT__data__v3 
            = (0xffU & (IData)((vlSelf->top__DOT__cpu_inst__DOT__data_rs2 
                                >> 0x18U)));
        __Vdlyvset__top__DOT__memory_inst__DOT__data__v3 = 1U;
        __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v3 
            = (0x7ffffffU & ((IData)(3U) + (IData)(vlSelf->top__DOT__acs_addr)));
    }
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v4 = 0U;
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 4U))) {
        __Vdlyvval__top__DOT__memory_inst__DOT__data__v4 
            = (0xffU & (IData)((vlSelf->top__DOT__cpu_inst__DOT__data_rs2 
                                >> 0x20U)));
        __Vdlyvset__top__DOT__memory_inst__DOT__data__v4 = 1U;
        __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v4 
            = (0x7ffffffU & ((IData)(4U) + (IData)(vlSelf->top__DOT__acs_addr)));
    }
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v5 = 0U;
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 5U))) {
        __Vdlyvval__top__DOT__memory_inst__DOT__data__v5 
            = (0xffU & (IData)((vlSelf->top__DOT__cpu_inst__DOT__data_rs2 
                                >> 0x28U)));
        __Vdlyvset__top__DOT__memory_inst__DOT__data__v5 = 1U;
        __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v5 
            = (0x7ffffffU & ((IData)(5U) + (IData)(vlSelf->top__DOT__acs_addr)));
    }
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v6 = 0U;
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 6U))) {
        __Vdlyvval__top__DOT__memory_inst__DOT__data__v6 
            = (0xffU & (IData)((vlSelf->top__DOT__cpu_inst__DOT__data_rs2 
                                >> 0x30U)));
        __Vdlyvset__top__DOT__memory_inst__DOT__data__v6 = 1U;
        __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v6 
            = (0x7ffffffU & ((IData)(6U) + (IData)(vlSelf->top__DOT__acs_addr)));
    }
    __Vdlyvset__top__DOT__memory_inst__DOT__data__v7 = 0U;
    if ((((IData)(vlSelf->top__DOT__acs_en) & (IData)(vlSelf->top__DOT__acs_wr)) 
         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
            >> 7U))) {
        __Vdlyvval__top__DOT__memory_inst__DOT__data__v7 
            = (0xffU & (IData)((vlSelf->top__DOT__cpu_inst__DOT__data_rs2 
                                >> 0x38U)));
        __Vdlyvset__top__DOT__memory_inst__DOT__data__v7 = 1U;
        __Vdlyvdim0__top__DOT__memory_inst__DOT__data__v7 
            = (0x7ffffffU & ((IData)(7U) + (IData)(vlSelf->top__DOT__acs_addr)));
    }
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_31 
        = (1U & ((~ (IData)(vlSelf->top__DOT__rstn)) 
                 | (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                            >> 0x1fU))));
    if (__Vdlyvset__top__DOT__memory_inst__DOT__data__v0) {
        vlSelf->top__DOT__memory_inst__DOT__data[__Vdlyvdim0__top__DOT__memory_inst__DOT__data__v0] 
            = __Vdlyvval__top__DOT__memory_inst__DOT__data__v0;
    }
    if (__Vdlyvset__top__DOT__memory_inst__DOT__data__v1) {
        vlSelf->top__DOT__memory_inst__DOT__data[__Vdlyvdim0__top__DOT__memory_inst__DOT__data__v1] 
            = __Vdlyvval__top__DOT__memory_inst__DOT__data__v1;
    }
    if (__Vdlyvset__top__DOT__memory_inst__DOT__data__v2) {
        vlSelf->top__DOT__memory_inst__DOT__data[__Vdlyvdim0__top__DOT__memory_inst__DOT__data__v2] 
            = __Vdlyvval__top__DOT__memory_inst__DOT__data__v2;
    }
    if (__Vdlyvset__top__DOT__memory_inst__DOT__data__v3) {
        vlSelf->top__DOT__memory_inst__DOT__data[__Vdlyvdim0__top__DOT__memory_inst__DOT__data__v3] 
            = __Vdlyvval__top__DOT__memory_inst__DOT__data__v3;
    }
    if (__Vdlyvset__top__DOT__memory_inst__DOT__data__v4) {
        vlSelf->top__DOT__memory_inst__DOT__data[__Vdlyvdim0__top__DOT__memory_inst__DOT__data__v4] 
            = __Vdlyvval__top__DOT__memory_inst__DOT__data__v4;
    }
    if (__Vdlyvset__top__DOT__memory_inst__DOT__data__v5) {
        vlSelf->top__DOT__memory_inst__DOT__data[__Vdlyvdim0__top__DOT__memory_inst__DOT__data__v5] 
            = __Vdlyvval__top__DOT__memory_inst__DOT__data__v5;
    }
    if (__Vdlyvset__top__DOT__memory_inst__DOT__data__v6) {
        vlSelf->top__DOT__memory_inst__DOT__data[__Vdlyvdim0__top__DOT__memory_inst__DOT__data__v6] 
            = __Vdlyvval__top__DOT__memory_inst__DOT__data__v6;
    }
    if (__Vdlyvset__top__DOT__memory_inst__DOT__data__v7) {
        vlSelf->top__DOT__memory_inst__DOT__data[__Vdlyvdim0__top__DOT__memory_inst__DOT__data__v7] 
            = __Vdlyvval__top__DOT__memory_inst__DOT__data__v7;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_31) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_31))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_31 
            = vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_31;
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
               ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
               ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
               ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
               ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg 
          ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
               ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffffffeU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
               ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffffffdU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
               ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffffffbU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
               ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffffff7U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fffffefU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fffffdfU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fffffbfU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fffff7fU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffffeffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffffdffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffffbffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fffefffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fffdfffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fffbfffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fff7fffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffeffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffdffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ffbffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7ff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fefffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fdfffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7fbfffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7f7fffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7effffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7dffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x7bffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x77ffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x6fffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x5fffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 
            = ((0x3fffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg));
    }
    vlSelf->top__DOT__pc = (((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg)) 
                             << 0x20U) | (QData)((IData)(
                                                         (((IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_31) 
                                                           << 0x1fU) 
                                                          | vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg))));
    vlSelf->top__DOT__memory_inst__DOT__instr_byte_2 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & ((IData)(2U) + vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg))];
    vlSelf->top__DOT__memory_inst__DOT__instr_byte_1 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & ((IData)(1U) + vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg))];
    vlSelf->top__DOT__memory_inst__DOT__instr_byte_3 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & ((IData)(3U) + vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg))];
    vlSelf->top__DOT__memory_inst__DOT__instr_byte_0 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg)];
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__pc) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
                                              >> 0x3fU))))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__pc) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc)))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffeULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (IData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->top__DOT__pc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 1U))))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffdULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 1U))))) 
                                              << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 2U))))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffbULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 2U))))) 
                                              << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 3U))))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffff7ULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 3U))))) 
                                              << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 4U))))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffefULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 4U))))) 
                                              << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 5U))))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffdfULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 5U))))) 
                                              << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 6U))))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffbfULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 6U))))) 
                                              << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 7U))))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffff7fULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 7U))))) 
                                              << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 8U))))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffeffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 8U))))) 
                                              << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 9U))))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffdffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 9U))))) 
                                              << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0xaU))))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffbffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0xaU))))) 
                                              << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0xbU))))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffff7ffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0xbU))))) 
                                              << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0xcU))))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffefffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0xcU))))) 
                                              << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0xdU))))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffdfffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0xdU))))) 
                                              << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0xeU))))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffbfffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0xeU))))) 
                                              << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0xfU))))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffff7fffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0xfU))))) 
                                              << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x10U))))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffeffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x10U))))) 
                                              << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x11U))))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffdffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x11U))))) 
                                              << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x12U))))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffbffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x12U))))) 
                                              << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x13U))))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffff7ffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x13U))))) 
                                              << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x14U))))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffefffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x14U))))) 
                                              << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x15U))))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffdfffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x15U))))) 
                                              << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x16U))))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffbfffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x16U))))) 
                                              << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x17U))))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffff7fffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x17U))))) 
                                              << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x18U))))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffeffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x18U))))) 
                                              << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x19U))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffdffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x19U))))) 
                                              << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x1aU))))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffbffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x1aU))))) 
                                              << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x1bU))))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffff7ffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x1bU))))) 
                                              << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x1cU))))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffefffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x1cU))))) 
                                              << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x1dU))))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffdfffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x1dU))))) 
                                              << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x1eU))))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffbfffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x1eU))))) 
                                              << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x1fU))))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffff7fffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x1fU))))) 
                                              << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x20U))))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffeffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x20U))))) 
                                              << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x21U))))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffdffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x21U))))) 
                                              << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x22U))))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffbffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x22U))))) 
                                              << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x23U))))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffff7ffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x23U))))) 
                                              << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x24U))))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffefffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x24U))))) 
                                              << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x25U))))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffdfffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x25U))))) 
                                              << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x26U))))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffbfffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x26U))))) 
                                              << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x27U))))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffff7fffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x27U))))) 
                                              << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x28U))))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffeffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x28U))))) 
                                              << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x29U))))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffdffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x29U))))) 
                                              << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x2aU))))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffbffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x2aU))))) 
                                              << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x2bU))))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffff7ffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x2bU))))) 
                                              << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x2cU))))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffefffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x2cU))))) 
                                              << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x2dU))))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffdfffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x2dU))))) 
                                              << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x2eU))))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffbfffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x2eU))))) 
                                              << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x2fU))))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffff7fffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x2fU))))) 
                                              << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x30U))))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffeffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x30U))))) 
                                              << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x31U))))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffdffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x31U))))) 
                                              << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x32U))))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffbffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x32U))))) 
                                              << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x33U))))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfff7ffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x33U))))) 
                                              << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x34U))))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffefffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x34U))))) 
                                              << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x35U))))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffdfffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x35U))))) 
                                              << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x36U))))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffbfffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x36U))))) 
                                              << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x37U))))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xff7fffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x37U))))) 
                                              << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x38U))))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfeffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x38U))))) 
                                              << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x39U))))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfdffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x39U))))) 
                                              << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x3aU))))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfbffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x3aU))))) 
                                              << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x3bU))))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xf7ffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x3bU))))) 
                                              << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x3cU))))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xefffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x3cU))))) 
                                              << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x3dU))))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xdfffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x3dU))))) 
                                              << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__pc 
                          >> 0x3eU))))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xbfffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x3eU))))) 
                                              << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0x7fffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__pc 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)))) {
        vlSymsp->__Vcoverage[2418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)))) {
        vlSymsp->__Vcoverage[2419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2 
            = ((0xfdU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)))) {
        vlSymsp->__Vcoverage[2420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)))) {
        vlSymsp->__Vcoverage[2421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)))) {
        vlSymsp->__Vcoverage[2422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2 
            = ((0xefU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)))) {
        vlSymsp->__Vcoverage[2423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2 
            = ((0xdfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)))) {
        vlSymsp->__Vcoverage[2424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2 
            = ((0xbfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)) 
               | (0x40U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)))) {
        vlSymsp->__Vcoverage[2425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2)));
    }
    if (((0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                       >> 4U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F000))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F000 
            = (0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                            >> 4U)));
    }
    if (((1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                       >> 4U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F001))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F001 
            = (1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                            >> 4U)));
    }
    if (((2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                       >> 4U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F010))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F010 
            = (2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                            >> 4U)));
    }
    if (((3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                       >> 4U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F011))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F011 
            = (3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                            >> 4U)));
    }
    if (((4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                       >> 4U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F100))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F100 
            = (4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                            >> 4U)));
    }
    if (((5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                       >> 4U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F101))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F101 
            = (5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                            >> 4U)));
    }
    if (((6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                       >> 4U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F110))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F110 
            = (6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                            >> 4U)));
    }
    if (((7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                       >> 4U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F111))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F111 
            = (7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                            >> 4U)));
    }
    if ((1U & (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                >> 4U) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3)))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3 
            = ((6U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3)) 
               | (1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                        >> 4U)));
    }
    if ((1U & (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                >> 5U) ^ ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3) 
                          >> 1U)))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3 
            = ((5U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3)) 
               | (2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                        >> 4U)));
    }
    if ((1U & (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                >> 6U) ^ ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3) 
                          >> 2U)))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3 
            = ((3U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3)) 
               | (4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                        >> 4U)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1)))) {
        vlSymsp->__Vcoverage[2413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1)))) {
        vlSymsp->__Vcoverage[2414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1 
            = ((0xfdU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1)))) {
        vlSymsp->__Vcoverage[2415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1)))) {
        vlSymsp->__Vcoverage[2416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1)))) {
        vlSymsp->__Vcoverage[2417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1)));
    }
    if ((1U & (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                >> 6U) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7_5)))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7_5 
            = (1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                     >> 6U));
    }
    if ((1U & (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                >> 1U) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7_0)))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7_0 
            = (1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                     >> 1U));
    }
    if ((1U & (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                >> 7U) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_63_31)))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_63_31 
            = ((0x1fffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_63_31) 
               | (IData)((IData)((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                        >> 7U)))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3)))) {
        vlSymsp->__Vcoverage[2426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3)))) {
        vlSymsp->__Vcoverage[2427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3)))) {
        vlSymsp->__Vcoverage[2428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3)))) {
        vlSymsp->__Vcoverage[2429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3 
            = ((0xefU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3)))) {
        vlSymsp->__Vcoverage[2430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3 
            = ((0xdfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3)));
    }
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F 
        = ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                     >> 3U)) | (0xfU & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                        >> 2U)));
    if (((3U == (3U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_1_0___05F11))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_1_0___05F11 
            = (3U == (3U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)));
    }
    if (((0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 2U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F000))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F000 
            = (0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 2U)));
    }
    if (((1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 2U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F001))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F001 
            = (1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 2U)));
    }
    if (((2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 2U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F010))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F010 
            = (2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 2U)));
    }
    if (((3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 2U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F011))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F011 
            = (3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 2U)));
    }
    if (((4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 2U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F100))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F100 
            = (4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 2U)));
    }
    if (((5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 2U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F101))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F101 
            = (5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 2U)));
    }
    if (((6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 2U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F110))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F110 
            = (6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 2U)));
    }
    if (((7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 2U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F111))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F111 
            = (7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 2U)));
    }
    if (((0U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 5U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F00))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F00 
            = (0U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 5U)));
    }
    if (((1U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 5U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F01))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F01 
            = (1U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 5U)));
    }
    if (((2U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 5U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F10))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F10 
            = (2U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 5U)));
    }
    if (((3U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                       >> 5U))) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F11))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F11 
            = (3U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                            >> 5U)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_0)))) {
        vlSymsp->__Vcoverage[2412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_0 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_0)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode 
            = ((0x7eU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode 
            = ((0x7dU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode 
            = ((0x7bU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode 
            = ((0x77U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode 
            = ((0x6fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode 
            = ((0x5fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode 
            = ((0x3fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode)) 
               | (0x40U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)));
    }
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h6e8420ac__0 
        = (IData)((0x17U == (0x1fU & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))));
    vlSelf->__VdfgTmp_hf3a996b5__0 = (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                       << 8U) | (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0));
    vlSelf->top__DOT__cpu_inst__DOT__jal = (IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))));
    vlSelf->top__DOT__cpu_inst__DOT__jalr = (IData)(
                                                    (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_had500c1b__0 
        = (IData)((0x1bU == (0x1fU & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h63b5e77e__0 
        = (IData)((0x13U == (0x1fU & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hb4b772de__0 
        = (IData)((3U == (0x1fU & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F)))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F 
            = ((0x1eU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F)))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F 
            = ((0x1dU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F)))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F 
            = ((0x1bU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F)) 
               | (4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F)))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F 
            = ((0x17U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F)) 
               | (8U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F)))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F 
            = ((0xfU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F)) 
               | (0x10U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F)));
    }
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F010000x 
        = (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
            >> 6U) & (0U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F000000x 
        = ((~ ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
               >> 6U)) & (0U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001 
        = (IData)(((2U == (0x42U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3))) 
                   & (0U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h999ba2bc__0 
        = ((~ ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
               >> 1U)) & (0U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F)));
    vlSelf->top__DOT__cpu_inst__DOT__lui = (IData)(
                                                   ((0x20U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
                                                    & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h6e8420ac__0)));
    vlSelf->top__DOT__cpu_inst__DOT__auipc = (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x60U 
                                                        & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
                                                      & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h6e8420ac__0)));
    if ((1U & (((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                >> 7U) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd)))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd 
            = ((0x1eU & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd)) 
               | (1U & ((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                        >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                >> 8U) ^ ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd) 
                          >> 1U)))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd 
            = ((0x1dU & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd)) 
               | (2U & ((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                        >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                >> 9U) ^ ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd) 
                          >> 2U)))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd 
            = ((0x1bU & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd)) 
               | (4U & ((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                        >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                >> 0xaU) ^ ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd) 
                            >> 3U)))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd 
            = ((0x17U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd)) 
               | (8U & ((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                        >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                >> 0xbU) ^ ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd) 
                            >> 4U)))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd 
            = ((0xfU & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd)) 
               | (0x10U & ((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                           >> 7U)));
    }
    vlSelf->__VdfgTmp_h1d12b509__0 = (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_hf3a996b5__0));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__jal) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jal))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jal 
            = vlSelf->top__DOT__cpu_inst__DOT__jal;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__jalr) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jalr))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jalr 
            = vlSelf->top__DOT__cpu_inst__DOT__jalr;
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_hd7d3eb0b__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__jal) 
           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__jalr));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw 
        = (IData)(((0x20U == (0x60U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
                   & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_had500c1b__0)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithiw 
        = (IData)(((0U == (0x60U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
                   & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_had500c1b__0)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__system 
        = (IData)(((0x60U == (0x60U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
                   & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h63b5e77e__0)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith 
        = (IData)(((0x20U == (0x60U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
                   & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h63b5e77e__0)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi 
        = (IData)(((0U == (0x60U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
                   & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h63b5e77e__0)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch 
        = (IData)(((0x60U == (0x60U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
                   & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hb4b772de__0)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store 
        = (IData)(((0x20U == (0x60U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
                   & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hb4b772de__0)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load 
        = (IData)(((0U == (0x60U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))) 
                   & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hb4b772de__0)));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F010000x) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F010000x))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F010000x 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F010000x;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F000000x) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F000000x))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F000000x 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F000000x;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F0000001))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F0000001 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001;
    }
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000 
        = (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
            >> 6U) & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h999ba2bc__0));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000 
        = ((~ ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
               >> 6U)) & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h999ba2bc__0));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__lui) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lui))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lui 
            = vlSelf->top__DOT__cpu_inst__DOT__lui;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__auipc) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__auipc))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__auipc 
            = vlSelf->top__DOT__cpu_inst__DOT__auipc;
    }
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__U_type 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lui) 
           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__auipc));
    if ((1U & ((vlSelf->__VdfgTmp_h1d12b509__0 >> 0xfU) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1)))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1 
            = ((0x1eU & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1)) 
               | (1U & (vlSelf->__VdfgTmp_h1d12b509__0 
                        >> 0xfU)));
    }
    if ((1U & ((vlSelf->__VdfgTmp_h1d12b509__0 >> 0x10U) 
               ^ ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1) 
                  >> 1U)))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1 
            = ((0x1dU & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1)) 
               | (2U & (vlSelf->__VdfgTmp_h1d12b509__0 
                        >> 0xfU)));
    }
    if ((1U & ((vlSelf->__VdfgTmp_h1d12b509__0 >> 0x11U) 
               ^ ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1) 
                  >> 2U)))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1 
            = ((0x1bU & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1)) 
               | (4U & (vlSelf->__VdfgTmp_h1d12b509__0 
                        >> 0xfU)));
    }
    if ((1U & ((vlSelf->__VdfgTmp_h1d12b509__0 >> 0x12U) 
               ^ ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1) 
                  >> 3U)))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1 
            = ((0x17U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1)) 
               | (8U & (vlSelf->__VdfgTmp_h1d12b509__0 
                        >> 0xfU)));
    }
    if ((1U & ((vlSelf->__VdfgTmp_h1d12b509__0 >> 0x13U) 
               ^ ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1) 
                  >> 4U)))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1 
            = ((0xfU & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1)) 
               | (0x10U & (vlSelf->__VdfgTmp_h1d12b509__0 
                           >> 0xfU)));
    }
    vlSelf->top__DOT__instr = (((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                << 0x18U) | vlSelf->__VdfgTmp_h1d12b509__0);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
        = ((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_hd7d3eb0b__0))) 
           & (4ULL + vlSelf->top__DOT__pc));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arithw))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arithw 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw;
    }
    vlSelf->top__DOT__cpu_inst__DOT__divw = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw) 
                                             & (IData)(
                                                       ((0x40U 
                                                         == 
                                                         (0x70U 
                                                          & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))) 
                                                        & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001))));
    vlSelf->top__DOT__cpu_inst__DOT__remw = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw) 
                                             & (IData)(
                                                       ((0x60U 
                                                         == 
                                                         (0x70U 
                                                          & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))) 
                                                        & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001))));
    vlSelf->top__DOT__cpu_inst__DOT__remuw = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw) 
                                              & (IData)(
                                                        ((0x70U 
                                                          == 
                                                          (0x70U 
                                                           & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))) 
                                                         & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h34a54223__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw) 
           & (0U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h0ce4fccf__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw) 
           & (0x50U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithiw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arithiw))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arithiw 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithiw;
    }
    vlSelf->top__DOT__cpu_inst__DOT__addiw = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithiw) 
                                              & (0U 
                                                 == 
                                                 (0x70U 
                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hf32fd91d__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithiw) 
           & (0x50U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__system) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__system))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__system 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__system;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arith))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arith 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith;
    }
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa565d7__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith) 
           & (0x10U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2a79060a__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith) 
           & (0x20U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h289b5076__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith) 
           & (0x30U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd26f8e18__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith) 
           & (0x40U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2a846fe1__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith) 
           & (0x60U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h28d16b8e__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith) 
           & (0x70U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa165fc__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith) 
           & (0U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd261cfd8__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith) 
           & (0x50U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arithi))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arithi 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi;
    }
    vlSelf->top__DOT__cpu_inst__DOT__addi = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi) 
                                             & (0U 
                                                == 
                                                (0x70U 
                                                 & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__slti = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi) 
                                             & (0x20U 
                                                == 
                                                (0x70U 
                                                 & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__sltiu = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi) 
                                              & (0x30U 
                                                 == 
                                                 (0x70U 
                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__xori = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi) 
                                             & (0x40U 
                                                == 
                                                (0x70U 
                                                 & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__ori = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi) 
                                            & (0x60U 
                                               == (0x70U 
                                                   & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__andi = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi) 
                                             & (0x70U 
                                                == 
                                                (0x70U 
                                                 & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__slli = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi) 
                                             & (IData)(
                                                       ((0x10U 
                                                         == 
                                                         (0x70U 
                                                          & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))) 
                                                        & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F000000x))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h07e2c6d3__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi) 
           & (0x50U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__branch))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__branch 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch;
    }
    vlSelf->top__DOT__cpu_inst__DOT__beq = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch) 
                                            & (0U == 
                                               (0x70U 
                                                & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__bne = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch) 
                                            & (0x10U 
                                               == (0x70U 
                                                   & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__blt = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch) 
                                            & (0x40U 
                                               == (0x70U 
                                                   & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__bge = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch) 
                                            & (0x50U 
                                               == (0x70U 
                                                   & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__bltu = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch) 
                                             & (0x60U 
                                                == 
                                                (0x70U 
                                                 & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__bgeu = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch) 
                                             & (0x70U 
                                                == 
                                                (0x70U 
                                                 & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__store))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__store 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store;
    }
    vlSelf->top__DOT__cpu_inst__DOT__sb = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store) 
                                           & (0U == 
                                              (0x70U 
                                               & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__sh = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store) 
                                           & (0x10U 
                                              == (0x70U 
                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__sw = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store) 
                                           & (0x20U 
                                              == (0x70U 
                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__sd = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store) 
                                           & (0x30U 
                                              == (0x70U 
                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__load))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__load 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load;
    }
    vlSelf->top__DOT__cpu_inst__DOT__lb = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load) 
                                           & (0U == 
                                              (0x70U 
                                               & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__lh = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load) 
                                           & (0x10U 
                                              == (0x70U 
                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__lw = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load) 
                                           & (0x20U 
                                              == (0x70U 
                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__ld = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load) 
                                           & (0x30U 
                                              == (0x70U 
                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__lbu = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load) 
                                            & (0x40U 
                                               == (0x70U 
                                                   & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__lhu = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load) 
                                            & (0x50U 
                                               == (0x70U 
                                                   & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__lwu = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load) 
                                            & (0x60U 
                                               == (0x70U 
                                                   & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load) 
           | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__jalr) 
              | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi) 
                 | (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithiw))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F0100000))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F0100000 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F0000000))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F0000000 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000;
    }
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h32c0a4bc__0 
        = (IData)(((0x10U == (0x70U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))) 
                   & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000)));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__U_type) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__U_type))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__U_type 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__U_type;
    }
    vlSelf->top__DOT__ebreak = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__system) 
                                & (IData)((((((0U == 
                                               (0x70U 
                                                & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))) 
                                              & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000)) 
                                             & (0x100000U 
                                                == 
                                                (0x1f00000U 
                                                 & vlSelf->top__DOT__instr))) 
                                            & (0U == 
                                               (0xf8000U 
                                                & vlSelf->__VdfgTmp_h1d12b509__0))) 
                                           & (0U == 
                                              (0xf80U 
                                               & (IData)(vlSelf->__VdfgTmp_hf3a996b5__0))))));
    if ((1U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffffeU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (1U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((2U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffffdU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (2U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((4U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffffbU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (4U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((8U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffff7U 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (8U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x10U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffffefU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x10U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x20U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffffdfU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x20U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x40U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffffbfU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x40U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x80U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffff7fU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x80U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x100U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffeffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x100U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x200U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffdffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x200U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x400U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffbffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x400U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x800U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffff7ffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x800U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x1000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffefffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x1000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x2000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffdfffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x2000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x4000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffbfffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x4000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x8000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffff7fffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x8000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x10000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffeffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x10000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x20000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffdffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x20000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x40000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffbffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x40000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x80000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfff7ffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x80000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x100000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffefffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x100000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x200000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffdfffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x200000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x400000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffbfffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x400000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x800000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xff7fffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x800000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfeffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x1000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfdffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x2000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfbffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x4000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xf7ffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x8000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xefffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x10000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xdfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x20000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0xbfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x40000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if (((vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__instr = ((0x7fffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x80000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt)))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__divw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__divw))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__divw 
            = vlSelf->top__DOT__cpu_inst__DOT__divw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__remw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__remw))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__remw 
            = vlSelf->top__DOT__cpu_inst__DOT__remw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__remuw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__remuw))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__remuw 
            = vlSelf->top__DOT__cpu_inst__DOT__remuw;
    }
    vlSelf->top__DOT__cpu_inst__DOT__mulw = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h34a54223__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    vlSelf->top__DOT__cpu_inst__DOT__addw = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h34a54223__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__subw = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h34a54223__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000));
    vlSelf->top__DOT__cpu_inst__DOT__divuw = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h0ce4fccf__0) 
                                              & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    vlSelf->top__DOT__cpu_inst__DOT__srlw = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h0ce4fccf__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__sraw = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h0ce4fccf__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__addiw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__addiw))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__addiw 
            = vlSelf->top__DOT__cpu_inst__DOT__addiw;
    }
    vlSelf->top__DOT__cpu_inst__DOT__srliw = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hf32fd91d__0) 
                                              & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__sraiw = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hf32fd91d__0) 
                                              & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000));
    vlSelf->top__DOT__cpu_inst__DOT__mulh = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa565d7__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    vlSelf->top__DOT__cpu_inst__DOT__sll = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa565d7__0) 
                                            & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__mulhsu = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2a79060a__0) 
                                               & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    vlSelf->top__DOT__cpu_inst__DOT__slt = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2a79060a__0) 
                                            & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__mulhu = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h289b5076__0) 
                                              & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    vlSelf->top__DOT__cpu_inst__DOT__sltu = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h289b5076__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__div = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd26f8e18__0) 
                                            & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    vlSelf->top__DOT__cpu_inst__DOT__xor_ = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd26f8e18__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__rem = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2a846fe1__0) 
                                            & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    vlSelf->top__DOT__cpu_inst__DOT__or_ = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2a846fe1__0) 
                                            & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__remu = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h28d16b8e__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    vlSelf->top__DOT__cpu_inst__DOT__and_ = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h28d16b8e__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__mul = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa165fc__0) 
                                            & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    vlSelf->top__DOT__cpu_inst__DOT__add = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa165fc__0) 
                                            & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__sub = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h2aa165fc__0) 
                                            & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000));
    vlSelf->top__DOT__cpu_inst__DOT__divu = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd261cfd8__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    vlSelf->top__DOT__cpu_inst__DOT__srl = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd261cfd8__0) 
                                            & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    vlSelf->top__DOT__cpu_inst__DOT__sra = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hd261cfd8__0) 
                                            & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__addi) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__addi))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__addi 
            = vlSelf->top__DOT__cpu_inst__DOT__addi;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__slti) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slti))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slti 
            = vlSelf->top__DOT__cpu_inst__DOT__slti;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sltiu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sltiu))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sltiu 
            = vlSelf->top__DOT__cpu_inst__DOT__sltiu;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__xori) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__xori))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__xori 
            = vlSelf->top__DOT__cpu_inst__DOT__xori;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__ori) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__ori))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__ori 
            = vlSelf->top__DOT__cpu_inst__DOT__ori;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__andi) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__andi))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__andi 
            = vlSelf->top__DOT__cpu_inst__DOT__andi;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__slli) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slli))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slli 
            = vlSelf->top__DOT__cpu_inst__DOT__slli;
    }
    vlSelf->top__DOT__cpu_inst__DOT__srli = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h07e2c6d3__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F000000x));
    vlSelf->top__DOT__cpu_inst__DOT__srai = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h07e2c6d3__0) 
                                             & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F010000x));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__beq) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__beq))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__beq 
            = vlSelf->top__DOT__cpu_inst__DOT__beq;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__bne) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bne))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bne 
            = vlSelf->top__DOT__cpu_inst__DOT__bne;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__blt) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__blt))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__blt 
            = vlSelf->top__DOT__cpu_inst__DOT__blt;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__bge) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bge))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bge 
            = vlSelf->top__DOT__cpu_inst__DOT__bge;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__bltu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bltu))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bltu 
            = vlSelf->top__DOT__cpu_inst__DOT__bltu;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__bgeu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bgeu))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bgeu 
            = vlSelf->top__DOT__cpu_inst__DOT__bgeu;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sb) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sb))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sb 
            = vlSelf->top__DOT__cpu_inst__DOT__sb;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sh) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sh))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sh 
            = vlSelf->top__DOT__cpu_inst__DOT__sh;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sw))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sw 
            = vlSelf->top__DOT__cpu_inst__DOT__sw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sd) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sd))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sd 
            = vlSelf->top__DOT__cpu_inst__DOT__sd;
    }
    vlSelf->top__DOT__acs_wr = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sb) 
                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sh) 
                                   | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sd) 
                                      | (IData)(vlSelf->top__DOT__cpu_inst__DOT__sw))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__lb) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lb))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lb 
            = vlSelf->top__DOT__cpu_inst__DOT__lb;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__lh) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lh))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lh 
            = vlSelf->top__DOT__cpu_inst__DOT__lh;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__lw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lw))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lw 
            = vlSelf->top__DOT__cpu_inst__DOT__lw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__ld) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__ld))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__ld 
            = vlSelf->top__DOT__cpu_inst__DOT__ld;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__lbu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lbu))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lbu 
            = vlSelf->top__DOT__cpu_inst__DOT__lbu;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__lhu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lhu))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lhu 
            = vlSelf->top__DOT__cpu_inst__DOT__lhu;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__lwu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lwu))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lwu 
            = vlSelf->top__DOT__cpu_inst__DOT__lwu;
    }
    vlSelf->top__DOT__memory_inst__DOT__wen = (0xffU 
                                               & ((1U 
                                                   & (- (IData)(
                                                                ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lb) 
                                                                 | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lbu) 
                                                                    | (IData)(vlSelf->top__DOT__cpu_inst__DOT__sb)))))) 
                                                  | ((3U 
                                                      & (- (IData)(
                                                                   ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lh) 
                                                                    | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lhu) 
                                                                       | (IData)(vlSelf->top__DOT__cpu_inst__DOT__sh)))))) 
                                                     | ((0xfU 
                                                         & (- (IData)(
                                                                      ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lw) 
                                                                       | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lwu) 
                                                                          | (IData)(vlSelf->top__DOT__cpu_inst__DOT__sw)))))) 
                                                        | (- (IData)(
                                                                     ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ld) 
                                                                      | (IData)(vlSelf->top__DOT__cpu_inst__DOT__sd))))))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__I_type))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__I_type 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type;
    }
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_0 
        = (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type) 
            & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
               >> 4U)) | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store) 
                          & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                             >> 7U)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1 
        = (0xfU & (((- (IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type) 
                                | (IData)(vlSelf->top__DOT__cpu_inst__DOT__jal)))) 
                    & (vlSelf->top__DOT__instr >> 0x15U)) 
                   | ((- (IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store) 
                                  | (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch)))) 
                      & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hc1dc7933__0 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type) 
           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store));
    vlSelf->top__DOT__cpu_inst__DOT__slliw = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithiw) 
                                              & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h32c0a4bc__0));
    vlSelf->top__DOT__cpu_inst__DOT__sllw = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw) 
                                             & (IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h32c0a4bc__0));
    if (((IData)(vlSelf->top__DOT__ebreak) ^ (IData)(vlSelf->top__DOT____Vtogcov__ebreak))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ebreak = vlSelf->top__DOT__ebreak;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__mulw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulw))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulw 
            = vlSelf->top__DOT__cpu_inst__DOT__mulw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__addw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__addw))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__addw 
            = vlSelf->top__DOT__cpu_inst__DOT__addw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__subw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__subw))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__subw 
            = vlSelf->top__DOT__cpu_inst__DOT__subw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__divuw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__divuw))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__divuw 
            = vlSelf->top__DOT__cpu_inst__DOT__divuw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__srlw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srlw))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srlw 
            = vlSelf->top__DOT__cpu_inst__DOT__srlw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sraw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sraw))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sraw 
            = vlSelf->top__DOT__cpu_inst__DOT__sraw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__srliw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srliw))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srliw 
            = vlSelf->top__DOT__cpu_inst__DOT__srliw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sraiw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sraiw))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sraiw 
            = vlSelf->top__DOT__cpu_inst__DOT__sraiw;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__mulh) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulh))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulh 
            = vlSelf->top__DOT__cpu_inst__DOT__mulh;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sll) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sll))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sll 
            = vlSelf->top__DOT__cpu_inst__DOT__sll;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__mulhsu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulhsu))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulhsu 
            = vlSelf->top__DOT__cpu_inst__DOT__mulhsu;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__slt) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slt))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slt 
            = vlSelf->top__DOT__cpu_inst__DOT__slt;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__mulhu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulhu))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulhu 
            = vlSelf->top__DOT__cpu_inst__DOT__mulhu;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sltu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sltu))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sltu 
            = vlSelf->top__DOT__cpu_inst__DOT__sltu;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__div) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__div))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__div 
            = vlSelf->top__DOT__cpu_inst__DOT__div;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__xor_) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__xor_))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__xor_ 
            = vlSelf->top__DOT__cpu_inst__DOT__xor_;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__rem) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__rem))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__rem 
            = vlSelf->top__DOT__cpu_inst__DOT__rem;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__or_) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__or_))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__or_ 
            = vlSelf->top__DOT__cpu_inst__DOT__or_;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__remu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__remu))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__remu 
            = vlSelf->top__DOT__cpu_inst__DOT__remu;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__and_) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__and_))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__and_ 
            = vlSelf->top__DOT__cpu_inst__DOT__and_;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__mul) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mul))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mul 
            = vlSelf->top__DOT__cpu_inst__DOT__mul;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__add) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__add))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__add 
            = vlSelf->top__DOT__cpu_inst__DOT__add;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sub) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sub))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sub 
            = vlSelf->top__DOT__cpu_inst__DOT__sub;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__divu) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__divu))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__divu 
            = vlSelf->top__DOT__cpu_inst__DOT__divu;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__srl) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srl))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srl 
            = vlSelf->top__DOT__cpu_inst__DOT__srl;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sra) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sra))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sra 
            = vlSelf->top__DOT__cpu_inst__DOT__sra;
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rs2_en 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__add) 
           | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sub) 
              | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__and_) 
                 | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__or_) 
                    | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__xor_) 
                       | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sll) 
                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__srl) 
                             | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sra) 
                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__slt) 
                                   | (IData)(vlSelf->top__DOT__cpu_inst__DOT__sltu))))))))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__srli) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srli))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srli 
            = vlSelf->top__DOT__cpu_inst__DOT__srli;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__srai) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srai))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srai 
            = vlSelf->top__DOT__cpu_inst__DOT__srai;
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_imm_en 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__addi) 
           | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__andi) 
              | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ori) 
                 | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__xori) 
                    | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__slli) 
                       | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__srli) 
                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__srai) 
                             | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__slti) 
                                | (IData)(vlSelf->top__DOT__cpu_inst__DOT__sltiu)))))))));
    if (((IData)(vlSelf->top__DOT__acs_wr) ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_wr))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_wr = vlSelf->top__DOT__acs_wr;
    }
    vlSelf->top__DOT__acs_en = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lb) 
                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lh) 
                                   | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lw) 
                                      | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ld) 
                                         | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lbu) 
                                            | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lhu) 
                                               | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lwu) 
                                                  | (IData)(vlSelf->top__DOT__acs_wr))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_bytes = ((0xfeU 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_bytes = ((0xfdU 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_bytes = ((0xfbU 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_bytes = ((0xf7U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_bytes = ((0xefU 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_bytes = ((0xdfU 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_bytes = ((0xbfU 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_bytes = ((0x7fU 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__acs_bytes)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen)));
    }
    vlSelf->top__DOT__memory_inst__DOT__rmask = (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                                                                                >> 7U))))))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                                                                                >> 6U))))))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                                                                                >> 5U))))))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                                                                                >> 4U))))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                                                                                >> 3U)))) 
                                                                              << 0x18U) 
                                                                             | ((0xff0000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                                                                                >> 2U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__memory_inst__DOT__wen) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT__memory_inst__DOT__wen))))))))))))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_0) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_0))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_0 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_0;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1)))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1 
            = ((0xeU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1)))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1 
            = ((0xdU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1)))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1 
            = ((0xbU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1)) 
               | (4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1)))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1 
            = ((7U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1)) 
               | (8U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1)));
    }
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_11 
        = (((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hc1dc7933__0) 
            & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
               >> 7U)) | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch) 
                           & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                              >> 7U)) | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__jal) 
                                         & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2) 
                                            >> 4U))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h846f6128__0 
        = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_hc1dc7933__0) 
           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__slliw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slliw))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slliw 
            = vlSelf->top__DOT__cpu_inst__DOT__slliw;
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_imm_en 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__addiw) 
           | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__slliw) 
              | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sraiw) 
                 | (IData)(vlSelf->top__DOT__cpu_inst__DOT__srliw))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__sllw) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sllw))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sllw 
            = vlSelf->top__DOT__cpu_inst__DOT__sllw;
    }
    vlSelf->top__DOT__cpu_inst__DOT__wb_en = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lui) 
                                              | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__auipc) 
                                                 | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__addi) 
                                                    | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__slti) 
                                                       | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sltiu) 
                                                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__xori) 
                                                             | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ori) 
                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__andi) 
                                                                   | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__slli) 
                                                                      | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__srli) 
                                                                         | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__srai) 
                                                                            | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__add) 
                                                                               | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sub) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sll) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__slt) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sltu) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__xor_) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__srl) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sra) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__or_) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__and_) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__addiw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__slliw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__srliw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sraiw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__addw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__subw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sllw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__srlw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sraw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mul) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mulh) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mulhsu) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mulhu) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__div) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__divu) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__rem) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__remu) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mulw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__divw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__divuw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__remw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__remuw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__jal) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__jalr) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lb) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lh) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lw) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ld) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lbu) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__lhu) 
                                                                                | (IData)(vlSelf->top__DOT__cpu_inst__DOT__lwu))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rs2_en 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__addw) 
           | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sllw) 
              | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__srlw) 
                 | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sraw) 
                    | (IData)(vlSelf->top__DOT__cpu_inst__DOT__subw)))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rs2_en) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rs2_en))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rs2_en 
            = vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rs2_en;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_imm_en) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_imm_en))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_imm_en 
            = vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_imm_en;
    }
    if (((IData)(vlSelf->top__DOT__acs_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_en))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_en = vlSelf->top__DOT__acs_en;
    }
    vlSelf->__VdfgTmp_h1ed97af1__0 = ((~ (IData)(vlSelf->top__DOT__acs_wr)) 
                                      & (IData)(vlSelf->top__DOT__acs_en));
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rmask) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask)))) {
        vlSymsp->__Vcoverage[2559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rmask)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__memory_inst__DOT__rmask 
                  ^ vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rmask 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_11) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_11))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_11 
            = vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_11;
    }
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12 
        = (0xffU & (((- (IData)((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h846f6128__0))) 
                     & (- (IData)((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                         >> 7U))))) 
                    | ((- (IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__U_type) 
                                   | (IData)(vlSelf->top__DOT__cpu_inst__DOT__jal)))) 
                       & (vlSelf->__VdfgTmp_h1d12b509__0 
                          >> 0xcU))));
    top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h5a00e1f5__0 
        = ((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h846f6128__0) 
           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__jal));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_imm_en) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_imm_en))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_imm_en 
            = vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_imm_en;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__wb_en) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_en))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_en 
            = vlSelf->top__DOT__cpu_inst__DOT__wb_en;
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rs2_en) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rs2_en))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rs2_en 
            = vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rs2_en;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12 
            = ((0xfeU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12 
            = ((0xfdU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12 
            = ((0xfbU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)) 
               | (4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12 
            = ((0xf7U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)) 
               | (8U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12 
            = ((0xefU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)) 
               | (0x10U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12 
            = ((0xdfU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)) 
               | (0x20U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12 
            = ((0xbfU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)) 
               | (0x40U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12 
            = ((0x7fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12)) 
               | (0x80U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12)));
    }
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5 
        = (0x3fU & ((- (IData)((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h5a00e1f5__0))) 
                    & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                       >> 1U)));
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20 
        = (0x7ffU & (((- (IData)((IData)(top__DOT__cpu_inst__DOT__decoder_inst__DOT____VdfgTmp_h5a00e1f5__0))) 
                      & (- (IData)((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                          >> 7U))))) 
                     | ((- (IData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__U_type))) 
                        & (vlSelf->top__DOT__instr 
                           >> 0x14U))));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5 
            = ((0x3eU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5 
            = ((0x3dU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5 
            = ((0x3bU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)) 
               | (4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5 
            = ((0x37U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)) 
               | (8U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5 
            = ((0x2fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)) 
               | (0x10U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5 
            = ((0x1fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5)) 
               | (0x20U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x7feU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (8U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x7efU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (0x10U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (0x20U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (0x40U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
                  ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x77fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (0x80U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
                   ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (0x100U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
                   ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (0x200U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
                   ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20)) 
               | (0x400U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20)));
    }
    vlSelf->__VdfgTmp_h7531cb2f__0 = (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20) 
                                       << 0x14U) | 
                                      (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_11) 
                                         << 0xbU) | 
                                        (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5) 
                                          << 5U) | 
                                         (((IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1) 
                                           << 1U) | (IData)(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_0))))));
    vlSelf->top__DOT__cpu_inst__DOT__imm = (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                                                    >> 7U))))) 
                                             << 0x1fU) 
                                            | (QData)((IData)(vlSelf->__VdfgTmp_h7531cb2f__0)));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__imm) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__imm)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__imm 
                  ^ vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__imm 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
        = (vlSelf->top__DOT__cpu_inst__DOT__imm + vlSelf->top__DOT__pc);
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc)))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
        = (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__auipc))) 
            & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc) 
           | ((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__lui))) 
              & vlSelf->top__DOT__cpu_inst__DOT__imm));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt)))) {
        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
