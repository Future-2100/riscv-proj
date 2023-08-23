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
                VL_FATAL_MT("/home/wuchenze/riscv-proj/design/vsrc/top.v", 3, "", "Settle region did not converge.");
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
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
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
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
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
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
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
    vlSelf->top__DOT__acs_bytes = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__acs_addr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__acs_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__acs_error = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ebreak = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mmy_cen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mmy_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__uart_cen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_error = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timer_cen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timer_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__timer_error = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc_error = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mmy_icen = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT____Vtogcov__acs_error = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT____Vtogcov__ebreak = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__mmy_cen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__mmy_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT____Vtogcov__mmy_error = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__uart_cen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__uart_error = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__timer_cen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__timer_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT____Vtogcov__timer_error = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__pc_error = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__mmy_icen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__jump_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__jump_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__data_imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__lui = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__auipc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__arith = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__arithi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__system = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__funct7_0000000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__funct7_0100000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__funct7_0000001 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__arithw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__arithiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__funct7_000000x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__funct7_010000x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__data_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__data_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__wb_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__wb_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jump_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__snxt_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__data_imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__lui = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__auipc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__arith = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__arithi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__system = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct7_0000000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct7_0100000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct7_0000001 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct3_000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct3_001 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct3_010 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct3_011 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct3_100 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct3_101 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct3_110 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct3_111 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__rs2_00000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__rs2_00001 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__rs1_00000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__rd___05F00000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__arithw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__arithiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct7_000000x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__funct7_010000x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__data_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__wb_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT____Vtogcov__index_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT____Vtogcov__dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_reg__DOT__q_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_reg__DOT____Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__I_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__U_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_4_1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_10_5 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_19_12 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_30_20 = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT____Vtogcov__imm_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_lt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_geu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_eq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_divu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_remu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_divu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_rem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_remu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_addiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sraiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_addw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_subw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sllw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srlw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sraw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_mulw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_divuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_remw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_remuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data1_l = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__wop_sextends = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data1_h = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_l = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_h = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_adder_in1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_adder_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_data1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_data2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_lt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_ltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_ge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_geu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_eq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_ne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_mulh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_mulhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_divu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_remu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_divu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_rem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_remu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_addiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_slliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_srliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sraiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_addw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_subw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sllw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_srlw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_sraw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_mulw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_divuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_remw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__instr_remuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_data1_l = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__wop_sextends = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_data1_h = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_data2_l = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__op_data2_h = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_adder_in1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__pc_adder_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____Vtogcov__load_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_hd7d3eb0b__0 = 0;
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_hbacb44df__0 = 0;
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h7cdff104__0 = 0;
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_ha48b4733__0 = 0;
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_hfeb7ec11__0 = 0;
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h06f58f3b__0 = 0;
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT____VdfgTmp_h979321f9__0 = 0;
    VL_RAND_RESET_W(68, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in1);
    VL_RAND_RESET_W(68, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__cin = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata1_sext = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata2_sext_noinv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata2_sext_inv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata2_uext_inv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2_xlen = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2_extbits = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__or_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__and_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__be_sr_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__be_sl_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_in1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__divider_in1);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__divider_in2);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder);
    VL_RAND_RESET_W(68, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in1);
    VL_RAND_RESET_W(68, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__cin = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata1_sext = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata2_sext_inv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata2_uext_inv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2_xlen = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__adder_in2_extbits = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ltx_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gex_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__or_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__and_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__xor_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__ne_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__eq_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__be_sl_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_in1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__srl_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_mask = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sra_rslt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sll_rslt = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__multipiler_in2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__product);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__divider_in1);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__divider_in2);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__discuss);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__remainder);
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____VdfgTmp_h4c35b133__0 = 0;
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____VdfgTmp_h4f0fbb8e__0 = 0;
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____VdfgTmp_h74fcdec3__0 = 0;
    vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT____VdfgTmp_ha64da557__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr_wen = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vtogcov__gpr_wen = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__bus_inst__DOT__addr_error = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__bus_inst__DOT____Vtogcov__addr_error = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__timer_inst__DOT__counter = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__timer_inst__DOT____Vtogcov__counter = VL_RAND_RESET_Q(64);
    vlSelf->__VdfgTmp_hb1b17408__0 = 0;
    vlSelf->__VdfgTmp_hc08bd6b7__0 = 0;
    vlSelf->__VdfgTmp_h5fb51c9b__0 = 0;
    vlSelf->__Vdlyvval__top__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__top__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
