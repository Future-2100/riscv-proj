// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_dff__D40.h"

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->__PVT__q_reg) ^ (IData)(vlSelf->__Vtogcov__q)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffeULL 
                                 & vlSelf->__Vtogcov__q) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlSelf->__PVT__q_reg)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 1U))))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffdULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 1U))))) 
                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 2U))))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffffbULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 2U))))) 
                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 3U))))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffff7ULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 3U))))) 
                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 4U))))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffefULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 4U))))) 
                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 5U))))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffdfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 5U))))) 
                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 6U))))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffffbfULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 6U))))) 
                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 7U))))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffff7fULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 7U))))) 
                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 8U))))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffeffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 8U))))) 
                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 9U))))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffdffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 9U))))) 
                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xaU))))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffffbffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xaU))))) 
                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xbU))))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffff7ffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xbU))))) 
                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xcU))))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffefffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xcU))))) 
                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xdU))))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffdfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xdU))))) 
                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xeU))))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffffbfffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xeU))))) 
                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0xfU))))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffff7fffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0xfU))))) 
                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x10U))))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffeffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x10U))))) 
                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x11U))))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffdffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x11U))))) 
                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x12U))))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffffbffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x12U))))) 
                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x13U))))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffff7ffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x13U))))) 
                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x14U))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffefffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x14U))))) 
                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x15U))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffdfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x15U))))) 
                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x16U))))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffffbfffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x16U))))) 
                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x17U))))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffff7fffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x17U))))) 
                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x18U))))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffeffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x18U))))) 
                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x19U))))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffdffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x19U))))) 
                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffffbffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1aU))))) 
                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffff7ffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1bU))))) 
                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffefffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1cU))))) 
                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffdfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1dU))))) 
                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffffbfffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1eU))))) 
                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffff7fffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x1fU))))) 
                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x20U))))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffeffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x20U))))) 
                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x21U))))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffdffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x21U))))) 
                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x22U))))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffffbffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x22U))))) 
                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x23U))))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffff7ffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x23U))))) 
                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x24U))))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffefffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x24U))))) 
                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x25U))))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffdfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x25U))))) 
                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x26U))))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffffbfffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x26U))))) 
                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x27U))))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffff7fffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x27U))))) 
                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x28U))))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffeffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x28U))))) 
                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x29U))))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffdffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x29U))))) 
                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffffbffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2aU))))) 
                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffff7ffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2bU))))) 
                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffefffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2cU))))) 
                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffdfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2dU))))) 
                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffffbfffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2eU))))) 
                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x2fU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffff7fffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x2fU))))) 
                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x30U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x30U))))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffeffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x30U))))) 
                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x31U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x31U))))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffdffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x31U))))) 
                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x32U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x32U))))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfffbffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x32U))))) 
                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x33U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x33U))))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfff7ffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x33U))))) 
                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x34U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x34U))))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffefffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x34U))))) 
                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x35U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x35U))))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffdfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x35U))))) 
                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x36U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x36U))))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xffbfffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x36U))))) 
                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x37U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x37U))))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xff7fffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x37U))))) 
                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x38U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x38U))))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfeffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x38U))))) 
                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x39U)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x39U))))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfdffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x39U))))) 
                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3aU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xfbffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3aU))))) 
                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3bU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xf7ffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3bU))))) 
                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3cU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xefffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3cU))))) 
                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3dU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xdfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3dU))))) 
                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__q_reg >> 0x3eU)) 
               ^ (IData)((vlSelf->__Vtogcov__q >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0xbfffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3eU))))) 
                                   << 0x3eU));
    }
    if ((IData)(((vlSelf->__PVT__q_reg ^ vlSelf->__Vtogcov__q) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = ((0x7fffffffffffffffULL 
                                 & vlSelf->__Vtogcov__q) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__q_reg 
                                                               >> 0x3fU))))) 
                                   << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}
