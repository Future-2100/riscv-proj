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
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__memory_inst__DOT__wen),8);
        bufp->chgQData(oldp+68,(vlSelf->top__DOT__acs_addr),64);
        bufp->chgQData(oldp+70,(vlSelf->top__DOT__cpu_inst__DOT__data_rs2),64);
        bufp->chgQData(oldp+72,(vlSelf->top__DOT__acs_rdata),64);
        bufp->chgQData(oldp+74,(vlSelf->top__DOT__pc),64);
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__ebreak));
        bufp->chgQData(oldp+77,(vlSelf->top__DOT__cpu_inst__DOT__jump_pc),64);
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__cpu_inst__DOT__jump_en));
        bufp->chgQData(oldp+80,(vlSelf->top__DOT__cpu_inst__DOT__imm),64);
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__cpu_inst__DOT__lui));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__cpu_inst__DOT__auipc));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__cpu_inst__DOT__jal));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__cpu_inst__DOT__jalr));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__cpu_inst__DOT__beq));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__cpu_inst__DOT__bne));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__cpu_inst__DOT__blt));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__cpu_inst__DOT__bge));
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__cpu_inst__DOT__bltu));
        bufp->chgBit(oldp+91,(vlSelf->top__DOT__cpu_inst__DOT__bgeu));
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__cpu_inst__DOT__lb));
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__cpu_inst__DOT__lh));
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__cpu_inst__DOT__lw));
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__cpu_inst__DOT__ld));
        bufp->chgBit(oldp+96,(vlSelf->top__DOT__cpu_inst__DOT__lbu));
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__cpu_inst__DOT__lhu));
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__cpu_inst__DOT__lwu));
        bufp->chgBit(oldp+99,(vlSelf->top__DOT__cpu_inst__DOT__sb));
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__cpu_inst__DOT__sh));
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__cpu_inst__DOT__sw));
        bufp->chgBit(oldp+102,(vlSelf->top__DOT__cpu_inst__DOT__sd));
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__cpu_inst__DOT__addi));
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__cpu_inst__DOT__slti));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__cpu_inst__DOT__sltiu));
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__cpu_inst__DOT__xori));
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__cpu_inst__DOT__ori));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__cpu_inst__DOT__andi));
        bufp->chgBit(oldp+109,(vlSelf->top__DOT__cpu_inst__DOT__slli));
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__cpu_inst__DOT__srli));
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__cpu_inst__DOT__srai));
        bufp->chgBit(oldp+112,(vlSelf->top__DOT__cpu_inst__DOT__add));
        bufp->chgBit(oldp+113,(vlSelf->top__DOT__cpu_inst__DOT__sub));
        bufp->chgBit(oldp+114,(vlSelf->top__DOT__cpu_inst__DOT__sll));
        bufp->chgBit(oldp+115,(vlSelf->top__DOT__cpu_inst__DOT__slt));
        bufp->chgBit(oldp+116,(vlSelf->top__DOT__cpu_inst__DOT__sltu));
        bufp->chgBit(oldp+117,(vlSelf->top__DOT__cpu_inst__DOT__xor_));
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__cpu_inst__DOT__srl));
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__cpu_inst__DOT__sra));
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__cpu_inst__DOT__or_));
        bufp->chgBit(oldp+121,(vlSelf->top__DOT__cpu_inst__DOT__and_));
        bufp->chgBit(oldp+122,(vlSelf->top__DOT__cpu_inst__DOT__addiw));
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__cpu_inst__DOT__slliw));
        bufp->chgBit(oldp+124,(vlSelf->top__DOT__cpu_inst__DOT__srliw));
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__cpu_inst__DOT__sraiw));
        bufp->chgBit(oldp+126,(vlSelf->top__DOT__cpu_inst__DOT__addw));
        bufp->chgBit(oldp+127,(vlSelf->top__DOT__cpu_inst__DOT__subw));
        bufp->chgBit(oldp+128,(vlSelf->top__DOT__cpu_inst__DOT__sllw));
        bufp->chgBit(oldp+129,(vlSelf->top__DOT__cpu_inst__DOT__srlw));
        bufp->chgBit(oldp+130,(vlSelf->top__DOT__cpu_inst__DOT__sraw));
        bufp->chgBit(oldp+131,(vlSelf->top__DOT__cpu_inst__DOT__mul));
        bufp->chgBit(oldp+132,(vlSelf->top__DOT__cpu_inst__DOT__mulh));
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__cpu_inst__DOT__mulhsu));
        bufp->chgBit(oldp+134,(vlSelf->top__DOT__cpu_inst__DOT__mulhu));
        bufp->chgBit(oldp+135,(vlSelf->top__DOT__cpu_inst__DOT__div));
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__cpu_inst__DOT__divu));
        bufp->chgBit(oldp+137,(vlSelf->top__DOT__cpu_inst__DOT__rem));
        bufp->chgBit(oldp+138,(vlSelf->top__DOT__cpu_inst__DOT__remu));
        bufp->chgBit(oldp+139,(vlSelf->top__DOT__cpu_inst__DOT__mulw));
        bufp->chgBit(oldp+140,(vlSelf->top__DOT__cpu_inst__DOT__divw));
        bufp->chgBit(oldp+141,(vlSelf->top__DOT__cpu_inst__DOT__divuw));
        bufp->chgBit(oldp+142,(vlSelf->top__DOT__cpu_inst__DOT__remw));
        bufp->chgBit(oldp+143,(vlSelf->top__DOT__cpu_inst__DOT__remuw));
        bufp->chgQData(oldp+144,(vlSelf->top__DOT__cpu_inst__DOT__data_rs1),64);
        bufp->chgBit(oldp+146,(vlSelf->top__DOT__cpu_inst__DOT__wb_en));
        bufp->chgQData(oldp+147,(vlSelf->top__DOT__cpu_inst__DOT__wb_data),64);
        bufp->chgCData(oldp+149,((0x1fU & ((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                                           >> 7U))),5);
        bufp->chgCData(oldp+150,((0x1fU & (vlSelf->__VdfgTmp_h1d12b509__0 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+151,((0x1fU & (vlSelf->top__DOT__instr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+152,((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))),7);
        bufp->chgCData(oldp+153,((7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+154,((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                      >> 6U))));
        bufp->chgBit(oldp+155,((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                      >> 1U))));
        bufp->chgCData(oldp+156,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F),5);
        bufp->chgBit(oldp+157,((3U == (3U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)))));
        bufp->chgBit(oldp+158,((0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+159,((1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+160,((2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+161,((3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+162,((4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+163,((5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+164,((6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+165,((7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 2U)))));
        bufp->chgBit(oldp+166,((0U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 5U)))));
        bufp->chgBit(oldp+167,((1U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 5U)))));
        bufp->chgBit(oldp+168,((2U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 5U)))));
        bufp->chgBit(oldp+169,((3U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                             >> 5U)))));
        bufp->chgBit(oldp+170,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
        bufp->chgBit(oldp+171,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000));
        bufp->chgBit(oldp+172,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
        bufp->chgBit(oldp+173,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F010000x));
        bufp->chgBit(oldp+174,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F000000x));
        bufp->chgBit(oldp+175,((0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+176,((1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+177,((2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+178,((3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+179,((4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+180,((5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+181,((6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+182,((7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                             >> 4U)))));
        bufp->chgBit(oldp+183,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch));
        bufp->chgBit(oldp+184,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load));
        bufp->chgBit(oldp+185,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store));
        bufp->chgBit(oldp+186,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi));
        bufp->chgBit(oldp+187,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithiw));
        bufp->chgBit(oldp+188,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith));
        bufp->chgBit(oldp+189,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw));
        bufp->chgBit(oldp+190,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__system));
        bufp->chgBit(oldp+191,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type));
        bufp->chgBit(oldp+192,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__U_type));
        bufp->chgBit(oldp+193,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_0));
        bufp->chgCData(oldp+194,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1),4);
        bufp->chgCData(oldp+195,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5),6);
        bufp->chgBit(oldp+196,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_11));
        bufp->chgCData(oldp+197,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12),8);
        bufp->chgSData(oldp+198,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20),11);
        bufp->chgQData(oldp+199,((0x1ffffffffULL & 
                                  (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                                         >> 7U))))))),33);
        bufp->chgQData(oldp+201,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc),64);
        bufp->chgQData(oldp+203,((0xfffffffffffffffeULL 
                                  & vlSelf->top__DOT__acs_addr)),64);
        bufp->chgQData(oldp+205,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt),64);
        bufp->chgQData(oldp+207,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt),64);
        bufp->chgBit(oldp+209,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__taken));
        bufp->chgBit(oldp+210,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_imm_en));
        bufp->chgBit(oldp+211,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rs2_en));
        bufp->chgQData(oldp+212,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2),64);
        bufp->chgQData(oldp+214,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt),64);
        bufp->chgQData(oldp+216,((0xffffffffffffffffULL 
                                  >> (0x3fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)))),64);
        bufp->chgQData(oldp+218,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt),64);
        bufp->chgQData(oldp+220,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt),64);
        bufp->chgWData(oldp+222,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__product),128);
        bufp->chgWData(oldp+226,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__productu),128);
        bufp->chgQData(oldp+230,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__mdr_rslt),64);
        bufp->chgBit(oldp+232,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_imm_en));
        bufp->chgBit(oldp+233,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rs2_en));
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_in2),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srlw_rslt),32);
        bufp->chgIData(oldp+236,((0xffffffffU >> (0x1fU 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_in2))),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre),32);
        bufp->chgQData(oldp+239,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt),64);
        bufp->chgQData(oldp+241,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__productw),64);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__discussw),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__discussuw),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__remainderw),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__remainderuw),32);
        bufp->chgQData(oldp+247,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__mdrw_rslt),64);
        bufp->chgQData(oldp+249,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt),64);
        bufp->chgQData(oldp+251,((4ULL + vlSelf->top__DOT__pc)),64);
        bufp->chgQData(oldp+253,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc),64);
        bufp->chgBit(oldp+255,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_31));
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg),31);
        bufp->chgIData(oldp+258,((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+259,((0x7fffffffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc))),31);
        bufp->chgIData(oldp+260,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr_wen),32);
        bufp->chgIData(oldp+261,((0x7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg)),27);
        bufp->chgIData(oldp+262,((0x7ffffffU & (IData)(vlSelf->top__DOT__acs_addr))),27);
        bufp->chgCData(oldp+263,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0),8);
        bufp->chgCData(oldp+264,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1),8);
        bufp->chgCData(oldp+265,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2),8);
        bufp->chgCData(oldp+266,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3),8);
        bufp->chgCData(oldp+267,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0),8);
        bufp->chgCData(oldp+268,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1),8);
        bufp->chgCData(oldp+269,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2),8);
        bufp->chgCData(oldp+270,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3),8);
        bufp->chgCData(oldp+271,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4),8);
        bufp->chgCData(oldp+272,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5),8);
        bufp->chgCData(oldp+273,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6),8);
        bufp->chgCData(oldp+274,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7),8);
        bufp->chgQData(oldp+275,(vlSelf->top__DOT__memory_inst__DOT__rdata_64),64);
        bufp->chgQData(oldp+277,(vlSelf->top__DOT__memory_inst__DOT__rmask),64);
        bufp->chgBit(oldp+279,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+280,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+282,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+283,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+285,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+286,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+288,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+289,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+291,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+292,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+294,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+295,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+297,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+298,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+300,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+301,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+303,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+304,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+306,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+307,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+309,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+310,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+312,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+313,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+315,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+316,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+318,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+319,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+321,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+322,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+324,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+325,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+327,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+328,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+330,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+331,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+333,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+334,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+336,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+337,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+339,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+340,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+342,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+343,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+345,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+346,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+348,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+349,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+351,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+352,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+354,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+355,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+357,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+358,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+360,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+361,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+363,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+364,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+366,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+367,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
        bufp->chgBit(oldp+369,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
        bufp->chgQData(oldp+370,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    }
    bufp->chgBit(oldp+372,(vlSelf->diff_clk));
    bufp->chgBit(oldp+373,(vlSelf->diff_rstn));
    bufp->chgBit(oldp+374,(vlSelf->top__DOT__clk));
    bufp->chgBit(oldp+375,(vlSelf->top__DOT__rstn));
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
