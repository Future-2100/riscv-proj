// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h42367447__0;
    VlWide<3>/*95:0*/ __Vtemp_h109d0dc5__0;
    VlWide<3>/*95:0*/ __Vtemp_hc960da60__0;
    VlWide<3>/*95:0*/ __Vtemp_h8a4d6ab8__0;
    // Body
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[0U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[0U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]))) {
        vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[2U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[2U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2[3U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2[3U]));
    }
    VL_MUL_W(4, __Vtemp_h42367447__0, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in1, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
        = __Vtemp_h42367447__0[0U];
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
        = __Vtemp_h42367447__0[1U];
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
        = __Vtemp_h42367447__0[2U];
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
        = __Vtemp_h42367447__0[3U];
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt)))) {
        vlSymsp->__Vcoverage[2388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
        = (((QData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt)))) 
            << 0x3fU) | (((QData)((IData)((1U & (IData)(
                                                        (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                         >> 1U))))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                    >> 2U))))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                     >> 3U))))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                        >> 4U))))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                           >> 5U))))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                              >> 6U))))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 7U))))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 8U))))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 9U))))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0xaU))))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0xbU))))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0xcU))))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0xdU))))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0xeU))))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0xfU))))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x10U))))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x11U))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x12U))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x13U))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x14U))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x15U))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x16U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x17U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x18U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x19U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x1aU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x1bU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x1dU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x1eU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x1fU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x20U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x21U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x22U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x23U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x24U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x25U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x26U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x27U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x28U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x2aU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x2bU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
                                                                                >> 0x3fU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
        = ((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt 
            & (0xffffffffffffffffULL >> (0x3fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_l))) 
           | ((~ (0xffffffffffffffffULL >> (0x3fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_l))) 
              & (- (QData)((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data1_h 
                                    >> 0x1fU))))));
    if ((1U & ((IData)(vlSelf->top__DOT__mmy_rdata) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__mmy_rdata)))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffffffeULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->top__DOT__mmy_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffffffdULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 1U))))) 
                                                     << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffffffbULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 2U))))) 
                                                     << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffffff7ULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 3U))))) 
                                                     << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffffffefULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 4U))))) 
                                                     << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffffffdfULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 5U))))) 
                                                     << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffffffbfULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 6U))))) 
                                                     << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffffff7fULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 7U))))) 
                                                     << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffffeffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 8U))))) 
                                                     << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffffdffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 9U))))) 
                                                     << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffffbffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffff7ffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffffefffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffffdfffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffffbfffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffff7fffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffeffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffdffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffffbffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffff7ffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffefffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffdfffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffffbfffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffff7fffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffeffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffdffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffffbffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffff7ffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffefffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffdfffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffffbfffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffff7fffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffeffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffdffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffffbffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffff7ffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffefffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffdfffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x25U))))) 
                                                     << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffffbfffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x26U))))) 
                                                     << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffff7fffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x27U))))) 
                                                     << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffeffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x28U))))) 
                                                     << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffdffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x29U))))) 
                                                     << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffffbffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x2aU))))) 
                                                     << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffff7ffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x2bU))))) 
                                                     << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffefffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x2cU))))) 
                                                     << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffdfffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x2dU))))) 
                                                     << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffffbfffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x2eU))))) 
                                                     << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffff7fffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x2fU))))) 
                                                     << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffeffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x30U))))) 
                                                     << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffdffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x31U))))) 
                                                     << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfffbffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x32U))))) 
                                                     << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfff7ffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x33U))))) 
                                                     << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffefffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x34U))))) 
                                                     << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffdfffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x35U))))) 
                                                     << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xffbfffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x36U))))) 
                                                     << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xff7fffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x37U))))) 
                                                     << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfeffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x38U))))) 
                                                     << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfdffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x39U))))) 
                                                     << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xfbffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x3aU))))) 
                                                     << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xf7ffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x3bU))))) 
                                                     << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xefffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x3cU))))) 
                                                     << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xdfffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x3dU))))) 
                                                     << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmy_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmy_rdata 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0xbfffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x3eU))))) 
                                                     << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__mmy_rdata ^ vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mmy_rdata = ((0x7fffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__mmy_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mmy_rdata 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU));
    }
    vlSelf->top__DOT__acs_rdata = (((- (QData)((IData)(vlSelf->top__DOT__mmy_cen))) 
                                    & vlSelf->top__DOT__mmy_rdata) 
                                   | ((- (QData)((IData)(vlSelf->top__DOT__timer_cen))) 
                                      & vlSelf->top__DOT__timer_rdata));
    if (((IData)(vlSelf->top__DOT__acs_error) ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_error))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_error = vlSelf->top__DOT__acs_error;
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[0U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U]))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U] 
            = ((0xeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[2U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U]))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U] 
            = ((0xdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U]))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U] 
            = ((0xbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U]))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U] 
            = ((7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2[2U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2[2U]));
    }
    __Vtemp_h109d0dc5__0[0U] = vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__cin;
    __Vtemp_h109d0dc5__0[1U] = 0U;
    __Vtemp_h109d0dc5__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hc960da60__0, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2, __Vtemp_h109d0dc5__0);
    VL_ADD_W(3, __Vtemp_h8a4d6ab8__0, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in1, __Vtemp_hc960da60__0);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
        = __Vtemp_h8a4d6ab8__0[0U];
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
        = __Vtemp_h8a4d6ab8__0[1U];
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
        = (0xfU & __Vtemp_h8a4d6ab8__0[2U]);
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]))) {
        vlSymsp->__Vcoverage[3188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]))) {
        vlSymsp->__Vcoverage[3220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U]));
    }
    if ((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[2U] 
         ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[2U])) {
        vlSymsp->__Vcoverage[3222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss[2U] 
            = (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[2U]);
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]))) {
        vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]))) {
        vlSymsp->__Vcoverage[3285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U]));
    }
    if ((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[2U] 
         ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[2U])) {
        vlSymsp->__Vcoverage[3287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder[2U] 
            = (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[2U]);
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]))) {
        vlSymsp->__Vcoverage[2930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]))) {
        vlSymsp->__Vcoverage[2962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[2U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product[3U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U]));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt)))) {
        vlSymsp->__Vcoverage[2580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt)))) {
        vlSymsp->__Vcoverage[2516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__acs_rdata) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__acs_rdata)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffffffeULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->top__DOT__acs_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffffffdULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 1U))))) 
                                                     << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffffffbULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 2U))))) 
                                                     << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffffff7ULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 3U))))) 
                                                     << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffffffefULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 4U))))) 
                                                     << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffffffdfULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 5U))))) 
                                                     << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffffffbfULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 6U))))) 
                                                     << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffffff7fULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 7U))))) 
                                                     << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffffeffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 8U))))) 
                                                     << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffffdffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 9U))))) 
                                                     << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffffbffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffff7ffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffffefffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffffdfffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffffbfffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffff7fffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffeffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffdffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffffbffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffff7ffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffefffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffdfffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffffbfffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffff7fffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffeffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffdffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffffbffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffff7ffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffefffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffdfffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffffbfffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffff7fffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffeffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffdffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffffbffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffff7ffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffefffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffdfffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x25U))))) 
                                                     << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffffbfffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x26U))))) 
                                                     << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffff7fffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x27U))))) 
                                                     << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffeffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x28U))))) 
                                                     << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffdffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x29U))))) 
                                                     << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffffbffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x2aU))))) 
                                                     << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffff7ffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x2bU))))) 
                                                     << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffefffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x2cU))))) 
                                                     << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffdfffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x2dU))))) 
                                                     << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffffbfffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x2eU))))) 
                                                     << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffff7fffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x2fU))))) 
                                                     << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffeffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x30U))))) 
                                                     << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffdffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x31U))))) 
                                                     << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfffbffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x32U))))) 
                                                     << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfff7ffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x33U))))) 
                                                     << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffefffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x34U))))) 
                                                     << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffdfffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x35U))))) 
                                                     << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xffbfffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x36U))))) 
                                                     << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xff7fffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x37U))))) 
                                                     << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfeffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x38U))))) 
                                                     << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfdffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x39U))))) 
                                                     << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xfbffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x3aU))))) 
                                                     << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xf7ffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x3bU))))) 
                                                     << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xefffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x3cU))))) 
                                                     << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xdfffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x3dU))))) 
                                                     << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_rdata 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0xbfffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x3eU))))) 
                                                     << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__acs_rdata ^ vlSelf->top__DOT____Vtogcov__acs_rdata) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_rdata = ((0x7fffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__acs_rdata) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__acs_rdata 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU));
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
        = (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lb))) 
            & (((- (QData)((IData)((1U & (IData)((vlSelf->top__DOT__acs_rdata 
                                                  >> 7U)))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__acs_rdata)))))) 
           | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lh))) 
               & (((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->top__DOT__acs_rdata 
                                                     >> 0xfU)))))) 
                   << 0x10U) | (QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->top__DOT__acs_rdata)))))) 
              | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lw))) 
                  & (((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__acs_rdata 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__acs_rdata)))) 
                 | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lbu))) 
                     & (QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__acs_rdata))))) 
                    | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lhu))) 
                        & (QData)((IData)((0xffffU 
                                           & (IData)(vlSelf->top__DOT__acs_rdata))))) 
                       | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lwu))) 
                           & (QData)((IData)(vlSelf->top__DOT__acs_rdata))) 
                          | ((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_ld))) 
                             & vlSelf->top__DOT__acs_rdata)))))));
    if ((2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt)) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x20U))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x21U))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x22U))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x23U))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x24U))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x25U))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x26U))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x27U))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x28U))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x29U))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x2aU))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x2bU))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x2cU))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x2dU))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x2eU))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x2fU))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x30U))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x31U))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x32U))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x33U))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x34U))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x35U))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x36U))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x37U))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x38U))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x39U))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x3aU))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x3bU))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x3cU))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x3dU))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
               >> 0x3eU))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
                       >> 0x3fU)))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                   >> 3U)) ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt)))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | (IData)((IData)((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                           >> 3U))))));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 1U)))) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 2U)))) {
        vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 3U)))) {
        vlSymsp->__Vcoverage[1879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 4U)))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 5U)))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 6U)))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 7U)))) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 8U)))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 9U)))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0xaU)))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0xbU)))) {
        vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0xcU)))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0xdU)))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0xeU)))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0xfU)))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x10U)))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x11U)))) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x12U)))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x13U)))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x14U)))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x15U)))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x16U)))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x17U)))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x18U)))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x19U)))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x1aU)))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x1bU)))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x1cU)))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x1dU)))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x1eU)))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x1fU)))) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x20U)))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x21U)))) {
        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x22U)))) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x23U)))) {
        vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x24U)))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x25U)))) {
        vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x26U)))) {
        vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x27U)))) {
        vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x28U)))) {
        vlSymsp->__Vcoverage[1916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x29U)))) {
        vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x2aU)))) {
        vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x2bU)))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x2cU)))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x2dU)))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x2eU)))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x2fU)))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x30U)))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x31U)))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x32U)))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x33U)))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x34U)))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x35U)))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x36U)))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x37U)))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x38U)))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x39U)))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x3aU)))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x3bU)))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x3cU)))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x3dU)))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                  >> 0x3eU)))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & (1U ^ (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
                     >> 0x3fU)))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                                      >> 3U))))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U] 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U]))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U] 
            = ((0xeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U]));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U]))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U] 
            = ((0xdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U]))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U] 
            = ((0xbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U]))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U] 
            = ((7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U]));
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
        = (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____VdfgTmp_h4c35b133__0))) 
            & (((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[0U])))) 
           | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_and))) 
               & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__and_rslt) 
              | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_or))) 
                  & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__or_rslt) 
                 | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_xor))) 
                     & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt) 
                    | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sll))) 
                        & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt) 
                       | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_srl))) 
                           & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt) 
                          | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sra))) 
                              & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt) 
                             | (((- (QData)((IData)(
                                                    ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_lt) 
                                                     | (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ltu))))) 
                                 & (QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                       >> 3U))))) 
                                | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____VdfgTmp_h4f0fbb8e__0))) 
                                    & (QData)((IData)(
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                           >> 3U)))))) 
                                   | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_eq))) 
                                       & (QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt))))))) 
                                      | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ne))) 
                                          & (QData)((IData)(
                                                            (0U 
                                                             != vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt)))) 
                                         | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mul))) 
                                             & (((QData)((IData)(
                                                                 vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U])))) 
                                            | (((- (QData)((IData)(
                                                                   ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulh) 
                                                                    | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulhsu) 
                                                                       | (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulhu)))))) 
                                                & (((QData)((IData)(
                                                                    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U])))) 
                                               | (((- (QData)((IData)(
                                                                      ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_div) 
                                                                       | (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_divu))))) 
                                                   & (((QData)((IData)(
                                                                       vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U])))) 
                                                  | ((- (QData)((IData)(
                                                                        ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rem) 
                                                                         | (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_remu))))) 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U]))))))))))))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt)))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[1516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[1522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[1523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[1524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[1525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[1526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[1527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[1531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[1533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[1534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[1535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[1536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt)))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__taken 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__branch) 
           & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt));
    vlSelf->top__DOT__cpu_inst__DOT__wb_data = (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_hd7d3eb0b__0))) 
                                                 & (4ULL 
                                                    + vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_reg__DOT__q_reg)) 
                                                | (((- (QData)((IData)(
                                                                       ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h7cdff104__0) 
                                                                        | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__auipc) 
                                                                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__lui)))))) 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt) 
                                                   | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__load))) 
                                                       & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt) 
                                                      | ((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_hbacb44df__0))) 
                                                         & (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt 
                                                                                >> 0x1fU))))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt)))))));
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__taken) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__taken))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__taken 
            = vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__taken;
    }
    vlSelf->top__DOT__cpu_inst__DOT__jump_en = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__taken) 
                                                | (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_hd7d3eb0b__0));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__wb_data) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data)))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__wb_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                  ^ vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__cpu_inst__DOT__jump_en) 
         ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_en))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_en 
            = vlSelf->top__DOT__cpu_inst__DOT__jump_en;
    }
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
        = (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__jump_en))) 
            & vlSelf->top__DOT__cpu_inst__DOT__jump_pc) 
           | ((- (QData)((IData)((1U & (~ (IData)(vlSelf->top__DOT__cpu_inst__DOT__jump_en)))))) 
              & (4ULL + vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_reg__DOT__q_reg)));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc)))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
