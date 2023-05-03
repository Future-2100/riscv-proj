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
    // Body
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                  ^ vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__rstn) ^ (IData)(vlSelf->top__DOT____Vtogcov__rstn))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rstn = vlSelf->top__DOT__rstn;
    }
    vlSelf->diff_rstn = vlSelf->top__DOT__rstn;
    if (((IData)(vlSelf->diff_rstn) ^ (IData)(vlSelf->top__DOT____Vtogcov__diff_rstn))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__diff_rstn = vlSelf->diff_rstn;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->top__DOT__clk;
    }
    vlSelf->diff_clk = vlSelf->top__DOT__clk;
    if (((IData)(vlSelf->diff_clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__diff_clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__diff_clk = vlSelf->diff_clk;
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff__1(Vtop_dff__D40* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff__0((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff));
        Vtop_dff__D40___nba_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff__1((&vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff));
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}
