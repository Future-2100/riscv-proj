// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912f17__0;
    top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912f17__0 = 0;
    SData/*15:0*/ top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912d1d__0;
    top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912d1d__0 = 0;
    IData/*31:0*/ top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f915121__0;
    top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f915121__0 = 0;
    QData/*63:0*/ __VdfgTmp_he1150839__0;
    __VdfgTmp_he1150839__0 = 0;
    // Body
    if ((1U & ((IData)((vlSelf->top__DOT__acs_addr 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_addr 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_addr = ((0xff7fffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__acs_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__acs_addr 
                                                                                >> 0x37U))))) 
                                                    << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_addr 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_addr 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_addr = ((0xfeffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__acs_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__acs_addr 
                                                                                >> 0x38U))))) 
                                                    << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_addr 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_addr 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_addr = ((0xfdffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__acs_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__acs_addr 
                                                                                >> 0x39U))))) 
                                                    << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_addr 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_addr 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_addr = ((0xfbffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__acs_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__acs_addr 
                                                                                >> 0x3aU))))) 
                                                    << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_addr 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_addr 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_addr = ((0xf7ffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__acs_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__acs_addr 
                                                                                >> 0x3bU))))) 
                                                    << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_addr 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_addr 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_addr = ((0xefffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__acs_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__acs_addr 
                                                                                >> 0x3cU))))) 
                                                    << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_addr 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_addr 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_addr = ((0xdfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__acs_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__acs_addr 
                                                                                >> 0x3dU))))) 
                                                    << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__acs_addr 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__acs_addr 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_addr = ((0xbfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__acs_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__acs_addr 
                                                                                >> 0x3eU))))) 
                                                    << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__acs_addr ^ vlSelf->top__DOT____Vtogcov__acs_addr) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__acs_addr = ((0x7fffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__acs_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__acs_addr 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU));
    }
    vlSelf->top__DOT__cpu_inst__DOT__jump_pc = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT__acs_addr)
                                                 : vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc);
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & (IData)(vlSelf->top__DOT__acs_addr))];
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__acs_addr)))];
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & ((IData)(2U) + (IData)(vlSelf->top__DOT__acs_addr)))];
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & ((IData)(3U) + (IData)(vlSelf->top__DOT__acs_addr)))];
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & ((IData)(4U) + (IData)(vlSelf->top__DOT__acs_addr)))];
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & ((IData)(5U) + (IData)(vlSelf->top__DOT__acs_addr)))];
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & ((IData)(6U) + (IData)(vlSelf->top__DOT__acs_addr)))];
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7 
        = vlSelf->top__DOT__memory_inst__DOT__data[
        (0x7ffffffU & ((IData)(7U) + (IData)(vlSelf->top__DOT__acs_addr)))];
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt))) {
        vlSymsp->__Vcoverage[1962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt));
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
        = (((- (IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__addiw) 
                        | (IData)(vlSelf->top__DOT__cpu_inst__DOT__addw)))) 
            & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__data_rs1) 
               + vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_in2)) 
           | (((- (IData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__subw))) 
               & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__data_rs1) 
                  - vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_in2)) 
              | (((- (IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__slliw) 
                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__sllw)))) 
                  & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__data_rs1) 
                     << (0x1fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_in2))) 
                 | (((- (IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__srliw) 
                                 | (IData)(vlSelf->top__DOT__cpu_inst__DOT__srlw)))) 
                     & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srlw_rslt) 
                    | ((- (IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__sraiw) 
                                   | (IData)(vlSelf->top__DOT__cpu_inst__DOT__sraw)))) 
                       & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt)))));
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
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt)))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
        = ((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt 
            & (0xffffffffffffffffULL >> (0x3fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)))) 
           | ((~ (0xffffffffffffffffULL >> (0x3fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)))) 
              & (- (QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__data_rs1 
                                                  >> 0x3fU))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__jump_pc) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__jump_pc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                  ^ vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__jump_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
        = (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__jump_en))) 
            & vlSelf->top__DOT__cpu_inst__DOT__jump_pc) 
           | ((- (QData)((IData)((1U & (~ (IData)(vlSelf->top__DOT__cpu_inst__DOT__jump_en)))))) 
              & (4ULL + vlSelf->top__DOT__pc)));
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)))) {
        vlSymsp->__Vcoverage[2431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)))) {
        vlSymsp->__Vcoverage[2432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0 
            = ((0xfdU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)))) {
        vlSymsp->__Vcoverage[2433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)))) {
        vlSymsp->__Vcoverage[2434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)))) {
        vlSymsp->__Vcoverage[2435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0 
            = ((0xefU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)))) {
        vlSymsp->__Vcoverage[2436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0 
            = ((0xdfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)))) {
        vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0 
            = ((0xbfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)) 
               | (0x40U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)))) {
        vlSymsp->__Vcoverage[2439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)))) {
        vlSymsp->__Vcoverage[2440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1 
            = ((0xfdU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)))) {
        vlSymsp->__Vcoverage[2441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)))) {
        vlSymsp->__Vcoverage[2442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)))) {
        vlSymsp->__Vcoverage[2443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1 
            = ((0xefU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)))) {
        vlSymsp->__Vcoverage[2444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1 
            = ((0xdfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)))) {
        vlSymsp->__Vcoverage[2445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1 
            = ((0xbfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)) 
               | (0x40U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)))) {
        vlSymsp->__Vcoverage[2446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)))) {
        vlSymsp->__Vcoverage[2447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)))) {
        vlSymsp->__Vcoverage[2448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2 
            = ((0xfdU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)))) {
        vlSymsp->__Vcoverage[2449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)))) {
        vlSymsp->__Vcoverage[2450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)))) {
        vlSymsp->__Vcoverage[2451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2 
            = ((0xefU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)))) {
        vlSymsp->__Vcoverage[2452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2 
            = ((0xdfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)))) {
        vlSymsp->__Vcoverage[2453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2 
            = ((0xbfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)) 
               | (0x40U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)))) {
        vlSymsp->__Vcoverage[2454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)))) {
        vlSymsp->__Vcoverage[2455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)))) {
        vlSymsp->__Vcoverage[2456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3 
            = ((0xfdU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)))) {
        vlSymsp->__Vcoverage[2457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)))) {
        vlSymsp->__Vcoverage[2458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)))) {
        vlSymsp->__Vcoverage[2459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3 
            = ((0xefU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)))) {
        vlSymsp->__Vcoverage[2460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3 
            = ((0xdfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)))) {
        vlSymsp->__Vcoverage[2461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3 
            = ((0xbfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)) 
               | (0x40U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)))) {
        vlSymsp->__Vcoverage[2462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)))) {
        vlSymsp->__Vcoverage[2463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)))) {
        vlSymsp->__Vcoverage[2464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4 
            = ((0xfdU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)))) {
        vlSymsp->__Vcoverage[2465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)))) {
        vlSymsp->__Vcoverage[2466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)))) {
        vlSymsp->__Vcoverage[2467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4 
            = ((0xefU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)))) {
        vlSymsp->__Vcoverage[2468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4 
            = ((0xdfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)))) {
        vlSymsp->__Vcoverage[2469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4 
            = ((0xbfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)) 
               | (0x40U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)))) {
        vlSymsp->__Vcoverage[2470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)))) {
        vlSymsp->__Vcoverage[2471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)))) {
        vlSymsp->__Vcoverage[2472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5 
            = ((0xfdU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)))) {
        vlSymsp->__Vcoverage[2473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)))) {
        vlSymsp->__Vcoverage[2474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)))) {
        vlSymsp->__Vcoverage[2475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5 
            = ((0xefU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)))) {
        vlSymsp->__Vcoverage[2476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5 
            = ((0xdfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)))) {
        vlSymsp->__Vcoverage[2477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5 
            = ((0xbfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)) 
               | (0x40U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)))) {
        vlSymsp->__Vcoverage[2478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)))) {
        vlSymsp->__Vcoverage[2479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)))) {
        vlSymsp->__Vcoverage[2480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6 
            = ((0xfdU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)))) {
        vlSymsp->__Vcoverage[2481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)))) {
        vlSymsp->__Vcoverage[2482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)))) {
        vlSymsp->__Vcoverage[2483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6 
            = ((0xefU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)))) {
        vlSymsp->__Vcoverage[2484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6 
            = ((0xdfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)))) {
        vlSymsp->__Vcoverage[2485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6 
            = ((0xbfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)) 
               | (0x40U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)))) {
        vlSymsp->__Vcoverage[2486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)))) {
        vlSymsp->__Vcoverage[2487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7 
            = ((0xfeU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)) 
               | (1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)))) {
        vlSymsp->__Vcoverage[2488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7 
            = ((0xfdU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)) 
               | (2U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)))) {
        vlSymsp->__Vcoverage[2489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7 
            = ((0xfbU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)) 
               | (4U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)))) {
        vlSymsp->__Vcoverage[2490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7 
            = ((0xf7U & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)) 
               | (8U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)))) {
        vlSymsp->__Vcoverage[2491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7 
            = ((0xefU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)))) {
        vlSymsp->__Vcoverage[2492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7 
            = ((0xdfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)))) {
        vlSymsp->__Vcoverage[2493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7 
            = ((0xbfU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7) 
                  ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)))) {
        vlSymsp->__Vcoverage[2494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7 
            = ((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7)) 
               | (0x80U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7)));
    }
    vlSelf->top__DOT__memory_inst__DOT__rdata_64 = 
        (((QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7)) 
          << 0x38U) | (((QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6)) 
                        << 0x30U) | (((QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5)) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0))))))))));
    if ((1U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (1U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((2U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (2U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((4U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (4U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((8U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
               ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (8U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x10U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x20U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x40U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x80U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x100U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x200U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x400U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                   ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x800U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x1000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x2000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x4000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                    ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x8000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x10000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x20000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x40000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                     ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x80000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x100000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x200000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x400000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                      ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x800000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x1000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x4000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                       ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x8000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x10000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x20000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                        ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre))) {
        vlSymsp->__Vcoverage[1994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x40000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    if (((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
          ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre) 
               | (0x80000000U & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre));
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
        = (((QData)((IData)((- (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre)));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt)))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
        = (((- (QData)((IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__add) 
                                | (IData)(vlSelf->top__DOT__cpu_inst__DOT__addi))))) 
            & (vlSelf->top__DOT__cpu_inst__DOT__data_rs1 
               + vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)) 
           | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__sub))) 
               & (vlSelf->top__DOT__cpu_inst__DOT__data_rs1 
                  - vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)) 
              | (((- (QData)((IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__and_) 
                                      | (IData)(vlSelf->top__DOT__cpu_inst__DOT__andi))))) 
                  & (vlSelf->top__DOT__cpu_inst__DOT__data_rs1 
                     & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)) 
                 | (((- (QData)((IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__or_) 
                                         | (IData)(vlSelf->top__DOT__cpu_inst__DOT__ori))))) 
                     & (vlSelf->top__DOT__cpu_inst__DOT__data_rs1 
                        | vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)) 
                    | (((- (QData)((IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__xor_) 
                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__xori))))) 
                        & (vlSelf->top__DOT__cpu_inst__DOT__data_rs1 
                           ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)) 
                       | (((- (QData)((IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__sll) 
                                               | (IData)(vlSelf->top__DOT__cpu_inst__DOT__slli))))) 
                           & (vlSelf->top__DOT__cpu_inst__DOT__data_rs1 
                              << (0x3fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)))) 
                          | (((- (QData)((IData)(((IData)(vlSelf->top__DOT__cpu_inst__DOT__srl) 
                                                  | (IData)(vlSelf->top__DOT__cpu_inst__DOT__srli))))) 
                              & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt) 
                             | (((- (QData)((IData)(
                                                    ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sra) 
                                                     | (IData)(vlSelf->top__DOT__cpu_inst__DOT__srai))))) 
                                 & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt) 
                                | (((- (QData)((IData)(
                                                       ((IData)(vlSelf->top__DOT__cpu_inst__DOT__slt) 
                                                        | (IData)(vlSelf->top__DOT__cpu_inst__DOT__slti))))) 
                                    & (QData)((IData)(
                                                      VL_LTS_IQQ(64, vlSelf->top__DOT__cpu_inst__DOT__data_rs1, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)))) 
                                   | ((- (QData)((IData)(
                                                         ((IData)(vlSelf->top__DOT__cpu_inst__DOT__sltiu) 
                                                          | (IData)(vlSelf->top__DOT__cpu_inst__DOT__sltu))))) 
                                      & (QData)((IData)(
                                                        (vlSelf->top__DOT__cpu_inst__DOT__data_rs1 
                                                         < vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)))))))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc)))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_64) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64)))) {
        vlSymsp->__Vcoverage[2495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata_64)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                  ^ vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__rdata_64 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    __VdfgTmp_he1150839__0 = (vlSelf->top__DOT__memory_inst__DOT__rmask 
                              & vlSelf->top__DOT__memory_inst__DOT__rdata_64);
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt)))) {
        vlSymsp->__Vcoverage[1996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt)))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (vlSelf->__VdfgTmp_h1ed97af1__0) {
        top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912f17__0 
            = (0xffU & (IData)(__VdfgTmp_he1150839__0));
        top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912d1d__0 
            = (0xffffU & (IData)(__VdfgTmp_he1150839__0));
        top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f915121__0 
            = (IData)(__VdfgTmp_he1150839__0);
        vlSelf->top__DOT__acs_rdata = __VdfgTmp_he1150839__0;
    } else {
        top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912f17__0 = 0U;
        top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912d1d__0 = 0U;
        top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f915121__0 = 0U;
        vlSelf->top__DOT__acs_rdata = 0ULL;
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
        = (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__lb))) 
            & (((- (QData)((IData)(((IData)(vlSelf->__VdfgTmp_h1ed97af1__0) 
                                    & (IData)((__VdfgTmp_he1150839__0 
                                               >> 7U)))))) 
                << 8U) | (QData)((IData)(top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912f17__0)))) 
           | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__lh))) 
               & (((- (QData)((IData)(((IData)(vlSelf->__VdfgTmp_h1ed97af1__0) 
                                       & (IData)((__VdfgTmp_he1150839__0 
                                                  >> 0xfU)))))) 
                   << 0x10U) | (QData)((IData)(top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912d1d__0)))) 
              | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__lw))) 
                  & (((QData)((IData)((- (IData)(((IData)(vlSelf->__VdfgTmp_h1ed97af1__0) 
                                                  & (IData)(
                                                            (__VdfgTmp_he1150839__0 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f915121__0)))) 
                 | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__ld))) 
                     & vlSelf->top__DOT__acs_rdata) 
                    | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__lbu))) 
                        & (QData)((IData)(top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912f17__0))) 
                       | (((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__lhu))) 
                           & (QData)((IData)(top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f912d1d__0))) 
                          | ((- (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__lwu))) 
                             & (QData)((IData)(top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h6f915121__0)))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt)))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                  ^ vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__cpu_inst__DOT__wb_data = (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt 
                                                | (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt 
                                                   | (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__mdr_rslt 
                                                      | (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt 
                                                         | (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt 
                                                            | (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__mdrw_rslt 
                                                               | vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt))))));
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__wb_data) 
               ^ (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data)))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__wb_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cpu_inst__DOT__wb_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
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
