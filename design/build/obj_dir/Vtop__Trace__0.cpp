// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+0,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[0]),64);
        bufp->chgQData(oldp+2,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[1]),64);
        bufp->chgQData(oldp+4,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[2]),64);
        bufp->chgQData(oldp+6,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[3]),64);
        bufp->chgQData(oldp+8,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[4]),64);
        bufp->chgQData(oldp+10,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[5]),64);
        bufp->chgQData(oldp+12,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[6]),64);
        bufp->chgQData(oldp+14,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[7]),64);
        bufp->chgQData(oldp+16,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[8]),64);
        bufp->chgQData(oldp+18,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[9]),64);
        bufp->chgQData(oldp+20,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[10]),64);
        bufp->chgQData(oldp+22,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[11]),64);
        bufp->chgQData(oldp+24,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[12]),64);
        bufp->chgQData(oldp+26,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[13]),64);
        bufp->chgQData(oldp+28,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[14]),64);
        bufp->chgQData(oldp+30,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[15]),64);
        bufp->chgQData(oldp+32,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[16]),64);
        bufp->chgQData(oldp+34,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[17]),64);
        bufp->chgQData(oldp+36,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[18]),64);
        bufp->chgQData(oldp+38,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[19]),64);
        bufp->chgQData(oldp+40,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[20]),64);
        bufp->chgQData(oldp+42,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[21]),64);
        bufp->chgQData(oldp+44,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[22]),64);
        bufp->chgQData(oldp+46,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[23]),64);
        bufp->chgQData(oldp+48,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[24]),64);
        bufp->chgQData(oldp+50,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[25]),64);
        bufp->chgQData(oldp+52,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[26]),64);
        bufp->chgQData(oldp+54,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[27]),64);
        bufp->chgQData(oldp+56,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[28]),64);
        bufp->chgQData(oldp+58,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[29]),64);
        bufp->chgQData(oldp+60,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[30]),64);
        bufp->chgQData(oldp+62,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[31]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__instr),32);
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__acs_en));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__acs_wr));
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__acs_bytes),8);
        bufp->chgQData(oldp+68,(vlSelf->top__DOT__acs_addr),64);
        bufp->chgQData(oldp+70,(vlSelf->top__DOT__cpu_inst__DOT__data_rs2),64);
        bufp->chgQData(oldp+72,(vlSelf->top__DOT__acs_rdata),64);
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__acs_error));
        bufp->chgQData(oldp+75,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_reg__DOT__q_reg),64);
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__ebreak));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__mmy_cen));
        bufp->chgIData(oldp+79,((0x7ffffffU & (IData)(vlSelf->top__DOT__acs_addr))),27);
        bufp->chgQData(oldp+80,(vlSelf->top__DOT__mmy_rdata),64);
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__uart_cen));
        bufp->chgCData(oldp+83,((0xffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__data_rs2))),8);
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__uart_error));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__timer_cen));
        bufp->chgQData(oldp+86,(vlSelf->top__DOT__timer_rdata),64);
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__timer_error));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__pc_error));
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__mmy_icen));
        bufp->chgIData(oldp+91,((0x7ffffffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_reg__DOT__q_reg))),27);
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__bus_inst__DOT__addr_error));
        bufp->chgQData(oldp+93,(vlSelf->top__DOT__cpu_inst__DOT__jump_pc),64);
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__cpu_inst__DOT__jump_en));
        bufp->chgQData(oldp+96,((4ULL + vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_reg__DOT__q_reg)),64);
        bufp->chgQData(oldp+98,(vlSelf->top__DOT__cpu_inst__DOT__data_imm),64);
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__cpu_inst__DOT__lui));
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__cpu_inst__DOT__auipc));
        bufp->chgBit(oldp+102,(vlSelf->top__DOT__cpu_inst__DOT__jal));
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__cpu_inst__DOT__jalr));
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__cpu_inst__DOT__branch));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__cpu_inst__DOT__load));
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__cpu_inst__DOT__store));
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__cpu_inst__DOT__arith));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__cpu_inst__DOT__arithi));
        bufp->chgBit(oldp+109,(vlSelf->top__DOT__cpu_inst__DOT__system));
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__cpu_inst__DOT__funct7_0000000));
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__cpu_inst__DOT__funct7_0100000));
        bufp->chgBit(oldp+112,(vlSelf->top__DOT__cpu_inst__DOT__funct7_0000001));
        bufp->chgBit(oldp+113,((0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+114,((1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+115,((2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+116,((3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+117,((4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+118,((5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+119,((6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+120,((7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+121,((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+122,((1U == (0x1fU & (vlSelf->top__DOT__instr 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+123,((0U == (0x1fU & (vlSelf->__VdfgTmp_hb1b17408__0 
                                                >> 0xfU)))));
        bufp->chgBit(oldp+124,((0U == (0x1fU & ((IData)(vlSelf->__VdfgTmp_h5fb51c9b__0) 
                                                >> 7U)))));
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__cpu_inst__DOT__arithw));
        bufp->chgBit(oldp+126,(vlSelf->top__DOT__cpu_inst__DOT__arithiw));
        bufp->chgBit(oldp+127,(vlSelf->top__DOT__cpu_inst__DOT__funct7_000000x));
        bufp->chgBit(oldp+128,(vlSelf->top__DOT__cpu_inst__DOT__funct7_010000x));
        bufp->chgQData(oldp+129,(vlSelf->top__DOT__cpu_inst__DOT__data_rs1),64);
        bufp->chgBit(oldp+131,(vlSelf->top__DOT__cpu_inst__DOT__wb_en));
        bufp->chgQData(oldp+132,(vlSelf->top__DOT__cpu_inst__DOT__wb_data),64);
        bufp->chgCData(oldp+134,((0x1fU & ((IData)(vlSelf->__VdfgTmp_h5fb51c9b__0) 
                                           >> 7U))),5);
        bufp->chgCData(oldp+135,((0x1fU & (vlSelf->__VdfgTmp_hb1b17408__0 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+136,((0x1fU & (vlSelf->top__DOT__instr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+137,((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))),7);
        bufp->chgCData(oldp+138,((7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                      >> 6U))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                      >> 1U))));
        bufp->chgCData(oldp+141,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F),5);
        bufp->chgBit(oldp+142,((3U == (3U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)))));
        bufp->chgBit(oldp+143,((0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+144,((1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+145,((2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+146,((3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+147,((4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+148,((5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+149,((6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+150,((7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+151,((0U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 5U)))));
        bufp->chgBit(oldp+152,((1U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 5U)))));
        bufp->chgBit(oldp+153,((2U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 5U)))));
        bufp->chgBit(oldp+154,((3U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 5U)))));
        bufp->chgBit(oldp+155,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type));
        bufp->chgBit(oldp+156,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__U_type));
        bufp->chgBit(oldp+157,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_0));
        bufp->chgCData(oldp+158,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1),4);
        bufp->chgCData(oldp+159,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5),6);
        bufp->chgBit(oldp+160,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_11));
        bufp->chgCData(oldp+161,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12),8);
        bufp->chgSData(oldp+162,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20),11);
        bufp->chgBit(oldp+163,((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                      >> 7U))));
        bufp->chgIData(oldp+164,((- (IData)((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                                   >> 7U))))),32);
        bufp->chgQData(oldp+165,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__be_sr_data),64);
        bufp->chgQData(oldp+167,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2),64);
        bufp->chgBit(oldp+169,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata2_sext_noinv));
        bufp->chgBit(oldp+170,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sub));
        bufp->chgBit(oldp+171,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_and));
        bufp->chgBit(oldp+172,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_or));
        bufp->chgBit(oldp+173,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_xor));
        bufp->chgBit(oldp+174,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sll));
        bufp->chgBit(oldp+175,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_srl));
        bufp->chgBit(oldp+176,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sra));
        bufp->chgBit(oldp+177,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_lt));
        bufp->chgBit(oldp+178,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ltu));
        bufp->chgBit(oldp+179,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ge));
        bufp->chgBit(oldp+180,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_geu));
        bufp->chgBit(oldp+181,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_eq));
        bufp->chgBit(oldp+182,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ne));
        bufp->chgBit(oldp+183,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mul));
        bufp->chgBit(oldp+184,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulh));
        bufp->chgBit(oldp+185,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulhsu));
        bufp->chgBit(oldp+186,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulhu));
        bufp->chgBit(oldp+187,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_div));
        bufp->chgBit(oldp+188,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_divu));
        bufp->chgBit(oldp+189,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rem));
        bufp->chgBit(oldp+190,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_remu));
        bufp->chgQData(oldp+191,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt),64);
        bufp->chgBit(oldp+193,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_blt));
        bufp->chgBit(oldp+194,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_bltu));
        bufp->chgBit(oldp+195,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lb));
        bufp->chgBit(oldp+196,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lh));
        bufp->chgBit(oldp+197,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lw));
        bufp->chgBit(oldp+198,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lbu));
        bufp->chgBit(oldp+199,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lhu));
        bufp->chgBit(oldp+200,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sb));
        bufp->chgBit(oldp+201,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sh));
        bufp->chgBit(oldp+202,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sw));
        bufp->chgBit(oldp+203,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lwu));
        bufp->chgBit(oldp+204,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_ld));
        bufp->chgBit(oldp+205,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sd));
        bufp->chgBit(oldp+206,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_addi));
        bufp->chgBit(oldp+207,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slti));
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sltiu));
        bufp->chgBit(oldp+209,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_xori));
        bufp->chgBit(oldp+210,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_ori));
        bufp->chgBit(oldp+211,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_andi));
        bufp->chgBit(oldp+212,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slli));
        bufp->chgBit(oldp+213,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srli));
        bufp->chgBit(oldp+214,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srai));
        bufp->chgBit(oldp+215,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_add));
        bufp->chgBit(oldp+216,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sub));
        bufp->chgBit(oldp+217,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slt));
        bufp->chgBit(oldp+218,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sltu));
        bufp->chgBit(oldp+219,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_xor));
        bufp->chgBit(oldp+220,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_or));
        bufp->chgBit(oldp+221,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_and));
        bufp->chgBit(oldp+222,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sll));
        bufp->chgBit(oldp+223,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srl));
        bufp->chgBit(oldp+224,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sra));
        bufp->chgBit(oldp+225,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_mul));
        bufp->chgBit(oldp+226,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_div));
        bufp->chgBit(oldp+227,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_divu));
        bufp->chgBit(oldp+228,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_rem));
        bufp->chgBit(oldp+229,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_remu));
        bufp->chgBit(oldp+230,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_addiw));
        bufp->chgBit(oldp+231,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slliw));
        bufp->chgBit(oldp+232,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srliw));
        bufp->chgBit(oldp+233,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sraiw));
        bufp->chgBit(oldp+234,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_addw));
        bufp->chgBit(oldp+235,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_subw));
        bufp->chgBit(oldp+236,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sllw));
        bufp->chgBit(oldp+237,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srlw));
        bufp->chgBit(oldp+238,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sraw));
        bufp->chgBit(oldp+239,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_mulw));
        bufp->chgBit(oldp+240,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_divw));
        bufp->chgBit(oldp+241,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_divuw));
        bufp->chgBit(oldp+242,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_remw));
        bufp->chgBit(oldp+243,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_remuw));
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data1_l),32);
        bufp->chgBit(oldp+245,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__wop_sextends));
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data1_h),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_l),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_h),32);
        bufp->chgQData(oldp+249,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_adder_in1),64);
        bufp->chgQData(oldp+251,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_adder_rslt),64);
        bufp->chgBit(oldp+253,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__taken));
        bufp->chgQData(oldp+254,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt),64);
        bufp->chgWData(oldp+256,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in1),68);
        bufp->chgWData(oldp+259,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2),68);
        bufp->chgBit(oldp+262,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__cin));
        bufp->chgWData(oldp+263,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum),68);
        bufp->chgBit(oldp+266,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata1_sext));
        bufp->chgBit(oldp+267,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata2_sext_inv));
        bufp->chgBit(oldp+268,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata2_uext_inv));
        bufp->chgQData(oldp+269,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2_xlen),64);
        bufp->chgCData(oldp+271,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2_extbits),4);
        bufp->chgQData(oldp+272,((QData)((IData)((1U 
                                                  & (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                     >> 3U))))),64);
        bufp->chgQData(oldp+274,((QData)((IData)((1U 
                                                  & (~ 
                                                     (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                      >> 3U)))))),64);
        bufp->chgQData(oldp+276,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__or_rslt),64);
        bufp->chgQData(oldp+278,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__and_rslt),64);
        bufp->chgQData(oldp+280,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt),64);
        bufp->chgBit(oldp+282,((0U != vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt)));
        bufp->chgQData(oldp+283,((QData)((IData)((0U 
                                                  != vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt)))),64);
        bufp->chgQData(oldp+285,((QData)((IData)((1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt))))))),64);
        bufp->chgQData(oldp+287,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__be_sl_data),64);
        bufp->chgQData(oldp+289,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_in1),64);
        bufp->chgCData(oldp+291,((0x3fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_l)),6);
        bufp->chgQData(oldp+292,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt),64);
        bufp->chgQData(oldp+294,((0xffffffffffffffffULL 
                                  >> (0x3fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_l))),64);
        bufp->chgQData(oldp+296,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt),64);
        bufp->chgQData(oldp+298,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt),64);
        bufp->chgWData(oldp+300,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in1),128);
        bufp->chgWData(oldp+304,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2),128);
        bufp->chgWData(oldp+308,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product),128);
        bufp->chgQData(oldp+312,((((QData)((IData)(
                                                   vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U])))),64);
        bufp->chgQData(oldp+314,((((QData)((IData)(
                                                   vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U])))),64);
        bufp->chgWData(oldp+316,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__divider_in1),65);
        bufp->chgWData(oldp+319,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__divider_in2),65);
        bufp->chgWData(oldp+322,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss),65);
        bufp->chgWData(oldp+325,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder),65);
        bufp->chgQData(oldp+328,((((QData)((IData)(
                                                   vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U])))),64);
        bufp->chgQData(oldp+330,((((QData)((IData)(
                                                   vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U])))),64);
        bufp->chgQData(oldp+332,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc),64);
        bufp->chgIData(oldp+334,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr_wen),32);
        bufp->chgCData(oldp+335,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0),8);
        bufp->chgCData(oldp+336,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1),8);
        bufp->chgCData(oldp+337,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2),8);
        bufp->chgCData(oldp+338,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3),8);
        bufp->chgCData(oldp+339,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0),8);
        bufp->chgCData(oldp+340,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1),8);
        bufp->chgCData(oldp+341,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2),8);
        bufp->chgCData(oldp+342,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3),8);
        bufp->chgCData(oldp+343,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4),8);
        bufp->chgCData(oldp+344,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5),8);
        bufp->chgCData(oldp+345,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6),8);
        bufp->chgCData(oldp+346,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7),8);
        bufp->chgQData(oldp+347,(vlSelf->top__DOT__memory_inst__DOT__rdata_64),64);
        bufp->chgQData(oldp+349,(vlSelf->top__DOT__memory_inst__DOT__rmask),64);
        bufp->chgQData(oldp+351,(vlSelf->top__DOT__timer_inst__DOT__counter),64);
        bufp->chgBit(oldp+353,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+354,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+356,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+357,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+359,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+360,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+362,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+363,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+365,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+366,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+368,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+369,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+371,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+372,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+374,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+375,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+377,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+378,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+380,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+381,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+383,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+384,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+386,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+387,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+389,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+390,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+392,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+393,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+395,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+396,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+398,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+399,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+401,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+402,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+404,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+405,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+407,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+408,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+410,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+411,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+413,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+414,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+416,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+417,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+419,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+420,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+422,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+423,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+425,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+426,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+428,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+429,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+431,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+432,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+434,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+435,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+437,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+438,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+440,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+441,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+443,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+444,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    }
    bufp->chgBit(oldp+446,(vlSelf->diff_clk));
    bufp->chgBit(oldp+447,(vlSelf->diff_rstn));
    bufp->chgBit(oldp+448,(vlSelf->top__DOT__clk));
    bufp->chgBit(oldp+449,(vlSelf->top__DOT__rstn));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
