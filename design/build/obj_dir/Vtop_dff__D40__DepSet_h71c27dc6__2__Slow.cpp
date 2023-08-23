// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_dff__D40.h"

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff__0\n"); );
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
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff__0\n"); );
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
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff__0\n"); );
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
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff__0\n"); );
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
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff__0\n"); );
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
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff__0\n"); );
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
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff__0\n"); );
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
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff__0\n"); );
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
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff__0(Vtop_dff__D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___stl_sequent__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff__0\n"); );
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
    if (((IData)(vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff____pinNumber3) 
         ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSymsp->TOP.top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff____pinNumber3;
    }
}

VL_ATTR_COLD void Vtop_dff__D40___configure_coverage(Vtop_dff__D40* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dff__D40___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 8, 29, "", "v_toggle/dff__D40", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 9, 29, "", "v_toggle/dff__D40", "rstn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3627]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 10, 29, "", "v_toggle/dff__D40", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[743]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[744]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[745]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[746]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[758]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[759]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[760]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[761]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[762]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[804]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[805]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[806]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 11, 29, "", "v_toggle/dff__D40", "d[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3628]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3629]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3630]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3631]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3632]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3633]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3634]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3635]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3636]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3637]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3638]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3639]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3640]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3641]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3642]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3643]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3644]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3645]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3646]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3647]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3648]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3649]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3650]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3651]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3652]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3653]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3654]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3655]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3656]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3657]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3658]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3659]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3660]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3661]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3662]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3663]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3664]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3665]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3666]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3667]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3668]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3669]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3670]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3671]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3672]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3673]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3674]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3675]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3676]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3677]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3678]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3679]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3680]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3681]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3682]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3683]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3684]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3685]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3686]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3687]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3688]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3689]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3690]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3691]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 12, 29, "", "v_toggle/dff__D40", "q[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3628]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3629]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3630]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3631]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3632]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3633]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3634]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3635]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3636]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3637]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3638]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3639]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3640]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3641]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3642]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3643]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3644]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3645]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3646]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3647]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3648]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3649]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3650]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3651]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3652]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3653]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3654]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3655]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3656]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3657]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3658]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3659]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3660]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3661]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3662]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3663]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3664]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3665]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3666]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3667]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3668]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3669]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3670]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3671]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3672]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3673]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3674]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3675]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3676]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3677]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3678]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3679]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3680]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3681]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3682]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3683]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3684]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3685]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3686]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3687]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3688]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3689]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3690]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3691]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 15, 16, "", "v_toggle/dff__D40", "q_reg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3692]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 19, 8, "", "v_branch/dff__D40", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3693]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 19, 9, "", "v_branch/dff__D40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3694]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 17, 3, "", "v_line/dff__D40", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3695]), first, "/home/wuchenze/riscv-proj/design/vsrc/cpu/dff.v", 16, 1, "", "v_line/dff__D40", "block", "16");
}
