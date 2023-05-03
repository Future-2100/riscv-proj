// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/wuchenze/riscv-proj/single_cycle/vsrc/top.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge top.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge top.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->diff_clk = VL_RAND_RESET_I(1);
    vlSelf->diff_rstn = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__acs_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__acs_wr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__acs_addr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__acs_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ebreak = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__diff_clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__diff_rstn = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__rstn = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__acs_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__acs_wr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__acs_bytes = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__acs_addr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT____Vtogcov__acs_wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT____Vtogcov__acs_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT____Vtogcov__pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT____Vtogcov__ebreak = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__jump_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__jump_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__lui = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__auipc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__xor_ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__or_ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__and_ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__addiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__slliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__srliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sraiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__addw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__subw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sllw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__srlw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__sraw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mulh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mulhsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mulhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__divu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__rem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__remu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mulw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__divuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__remw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__remuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__data_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__data_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__wb_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__wb_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lui = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__auipc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__xor_ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__or_ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__and_ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__addiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__slliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sraiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__addw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__subw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sllw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__srlw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__sraw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulhsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__divu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__rem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__remu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__mulw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__divuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__remw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__remuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__data_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__snpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_63_32 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__pc_30_0 = VL_RAND_RESET_I(31);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT____Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg = VL_RAND_RESET_I(31);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F010000x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F000000x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__system = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__U_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20 = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_1_0___05F11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F001 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F010 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F011 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F100 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F101 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F110 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_4_2___05F111 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F00 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F01 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode_6_5___05F11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F0000000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F0100000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F0000001 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F010000x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct7___05F000000x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F001 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F010 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F011 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F100 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F101 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F110 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3___05F111 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arithi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arithiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arith = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__arithw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__system = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__I_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__U_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_63_31 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_imm_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rs2_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__product);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__productu);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__mdr_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_imm_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rs2_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srlw_rslt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__productw = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__discussw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__discussuw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__remainderw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__remainderuw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__mdrw_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jb_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__jalr_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_imm_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rs2_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_in2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srl_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_mask = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sra_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arith_rslt = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__product);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__productu);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__mdr_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_imm_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rs2_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__srlw_rslt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_mask = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__sraw_rslt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt_pre = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__arithw_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__productw = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__discussw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__discussuw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__remainderw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__remainderuw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__mdrw_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__li_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_hd7d3eb0b__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr_wen = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vtogcov__gpr_wen = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 134217728; ++__Vi0) {
        vlSelf->top__DOT__memory_inst__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__memory_inst__DOT__instr_byte_0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__instr_byte_1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__instr_byte_2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__instr_byte_3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT__rdata_64 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__memory_inst__DOT__rmask = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__memory_inst__DOT__wen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__instr_byte_3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_byte_7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rdata_64 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__memory_inst__DOT____Vtogcov__rmask = VL_RAND_RESET_Q(64);
    vlSelf->__VdfgTmp_h1d12b509__0 = 0;
    vlSelf->__VdfgTmp_h1ed97af1__0 = 0;
    vlSelf->__VdfgTmp_h7531cb2f__0 = 0;
    vlSelf->__VdfgTmp_hf3a996b5__0 = 0;
    vlSelf->__Vdlyvval__top__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__top__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
