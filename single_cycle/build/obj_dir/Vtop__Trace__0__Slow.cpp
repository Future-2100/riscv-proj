// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+373,"diff_clk", false,-1);
    tracep->declBit(c+374,"diff_rstn", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+373,"diff_clk", false,-1);
    tracep->declBit(c+374,"diff_rstn", false,-1);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBus(c+65,"instr", false,-1, 31,0);
    tracep->declBit(c+66,"acs_en", false,-1);
    tracep->declBit(c+67,"acs_wr", false,-1);
    tracep->declBus(c+68,"acs_bytes", false,-1, 7,0);
    tracep->declQuad(c+69,"acs_addr", false,-1, 63,0);
    tracep->declQuad(c+71,"acs_wdata", false,-1, 63,0);
    tracep->declQuad(c+73,"acs_rdata", false,-1, 63,0);
    tracep->declQuad(c+75,"pc", false,-1, 63,0);
    tracep->declBit(c+77,"ebreak", false,-1);
    tracep->pushNamePrefix("cpu_inst ");
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declQuad(c+75,"pc", false,-1, 63,0);
    tracep->declBus(c+65,"instr", false,-1, 31,0);
    tracep->declBit(c+66,"acs_en", false,-1);
    tracep->declBit(c+67,"acs_wr", false,-1);
    tracep->declBus(c+68,"acs_bytes", false,-1, 7,0);
    tracep->declQuad(c+69,"acs_addr", false,-1, 63,0);
    tracep->declQuad(c+71,"acs_wdata", false,-1, 63,0);
    tracep->declQuad(c+73,"acs_rdata", false,-1, 63,0);
    tracep->declBit(c+77,"ebreak", false,-1);
    tracep->declQuad(c+78,"jump_pc", false,-1, 63,0);
    tracep->declBit(c+80,"jump_en", false,-1);
    tracep->declQuad(c+81,"imm", false,-1, 63,0);
    tracep->declBit(c+83,"lui", false,-1);
    tracep->declBit(c+84,"auipc", false,-1);
    tracep->declBit(c+85,"jal", false,-1);
    tracep->declBit(c+86,"jalr", false,-1);
    tracep->declBit(c+87,"beq", false,-1);
    tracep->declBit(c+88,"bne", false,-1);
    tracep->declBit(c+89,"blt", false,-1);
    tracep->declBit(c+90,"bge", false,-1);
    tracep->declBit(c+91,"bltu", false,-1);
    tracep->declBit(c+92,"bgeu", false,-1);
    tracep->declBit(c+93,"lb", false,-1);
    tracep->declBit(c+94,"lh", false,-1);
    tracep->declBit(c+95,"lw", false,-1);
    tracep->declBit(c+96,"ld", false,-1);
    tracep->declBit(c+97,"lbu", false,-1);
    tracep->declBit(c+98,"lhu", false,-1);
    tracep->declBit(c+99,"lwu", false,-1);
    tracep->declBit(c+100,"sb", false,-1);
    tracep->declBit(c+101,"sh", false,-1);
    tracep->declBit(c+102,"sw", false,-1);
    tracep->declBit(c+103,"sd", false,-1);
    tracep->declBit(c+104,"addi", false,-1);
    tracep->declBit(c+105,"slti", false,-1);
    tracep->declBit(c+106,"sltiu", false,-1);
    tracep->declBit(c+107,"xori", false,-1);
    tracep->declBit(c+108,"ori", false,-1);
    tracep->declBit(c+109,"andi", false,-1);
    tracep->declBit(c+110,"slli", false,-1);
    tracep->declBit(c+111,"srli", false,-1);
    tracep->declBit(c+112,"srai", false,-1);
    tracep->declBit(c+113,"add", false,-1);
    tracep->declBit(c+114,"sub", false,-1);
    tracep->declBit(c+115,"sll", false,-1);
    tracep->declBit(c+116,"slt", false,-1);
    tracep->declBit(c+117,"sltu", false,-1);
    tracep->declBit(c+118,"xor_", false,-1);
    tracep->declBit(c+119,"srl", false,-1);
    tracep->declBit(c+120,"sra", false,-1);
    tracep->declBit(c+121,"or_", false,-1);
    tracep->declBit(c+122,"and_", false,-1);
    tracep->declBit(c+123,"addiw", false,-1);
    tracep->declBit(c+124,"slliw", false,-1);
    tracep->declBit(c+125,"srliw", false,-1);
    tracep->declBit(c+126,"sraiw", false,-1);
    tracep->declBit(c+127,"addw", false,-1);
    tracep->declBit(c+128,"subw", false,-1);
    tracep->declBit(c+129,"sllw", false,-1);
    tracep->declBit(c+130,"srlw", false,-1);
    tracep->declBit(c+131,"sraw", false,-1);
    tracep->declBit(c+132,"mul", false,-1);
    tracep->declBit(c+133,"mulh", false,-1);
    tracep->declBit(c+134,"mulhsu", false,-1);
    tracep->declBit(c+135,"mulhu", false,-1);
    tracep->declBit(c+136,"div", false,-1);
    tracep->declBit(c+137,"divu", false,-1);
    tracep->declBit(c+138,"rem", false,-1);
    tracep->declBit(c+139,"remu", false,-1);
    tracep->declBit(c+140,"mulw", false,-1);
    tracep->declBit(c+141,"divw", false,-1);
    tracep->declBit(c+142,"divuw", false,-1);
    tracep->declBit(c+143,"remw", false,-1);
    tracep->declBit(c+144,"remuw", false,-1);
    tracep->declQuad(c+81,"data_imm", false,-1, 63,0);
    tracep->declQuad(c+145,"data_rs1", false,-1, 63,0);
    tracep->declQuad(c+71,"data_rs2", false,-1, 63,0);
    tracep->declBit(c+147,"wb_en", false,-1);
    tracep->declQuad(c+148,"wb_data", false,-1, 63,0);
    tracep->declBus(c+150,"index_rd", false,-1, 4,0);
    tracep->declBus(c+151,"index_rs1", false,-1, 4,0);
    tracep->declBus(c+152,"index_rs2", false,-1, 4,0);
    tracep->pushNamePrefix("decoder_inst ");
    tracep->declBus(c+65,"instr", false,-1, 31,0);
    tracep->declQuad(c+81,"imm", false,-1, 63,0);
    tracep->declBit(c+83,"lui", false,-1);
    tracep->declBit(c+84,"auipc", false,-1);
    tracep->declBit(c+85,"jal", false,-1);
    tracep->declBit(c+86,"jalr", false,-1);
    tracep->declBit(c+87,"beq", false,-1);
    tracep->declBit(c+88,"bne", false,-1);
    tracep->declBit(c+89,"blt", false,-1);
    tracep->declBit(c+90,"bge", false,-1);
    tracep->declBit(c+91,"bltu", false,-1);
    tracep->declBit(c+92,"bgeu", false,-1);
    tracep->declBit(c+93,"lb", false,-1);
    tracep->declBit(c+94,"lh", false,-1);
    tracep->declBit(c+95,"lw", false,-1);
    tracep->declBit(c+96,"ld", false,-1);
    tracep->declBit(c+97,"lbu", false,-1);
    tracep->declBit(c+98,"lhu", false,-1);
    tracep->declBit(c+99,"lwu", false,-1);
    tracep->declBit(c+100,"sb", false,-1);
    tracep->declBit(c+101,"sh", false,-1);
    tracep->declBit(c+102,"sw", false,-1);
    tracep->declBit(c+103,"sd", false,-1);
    tracep->declBit(c+104,"addi", false,-1);
    tracep->declBit(c+105,"slti", false,-1);
    tracep->declBit(c+106,"sltiu", false,-1);
    tracep->declBit(c+107,"xori", false,-1);
    tracep->declBit(c+108,"ori", false,-1);
    tracep->declBit(c+109,"andi", false,-1);
    tracep->declBit(c+110,"slli", false,-1);
    tracep->declBit(c+111,"srli", false,-1);
    tracep->declBit(c+112,"srai", false,-1);
    tracep->declBit(c+113,"add", false,-1);
    tracep->declBit(c+114,"sub", false,-1);
    tracep->declBit(c+115,"sll", false,-1);
    tracep->declBit(c+116,"slt", false,-1);
    tracep->declBit(c+117,"sltu", false,-1);
    tracep->declBit(c+118,"xor_", false,-1);
    tracep->declBit(c+119,"srl", false,-1);
    tracep->declBit(c+120,"sra", false,-1);
    tracep->declBit(c+121,"or_", false,-1);
    tracep->declBit(c+122,"and_", false,-1);
    tracep->declBit(c+123,"addiw", false,-1);
    tracep->declBit(c+124,"slliw", false,-1);
    tracep->declBit(c+125,"srliw", false,-1);
    tracep->declBit(c+126,"sraiw", false,-1);
    tracep->declBit(c+127,"addw", false,-1);
    tracep->declBit(c+128,"subw", false,-1);
    tracep->declBit(c+129,"sllw", false,-1);
    tracep->declBit(c+130,"srlw", false,-1);
    tracep->declBit(c+131,"sraw", false,-1);
    tracep->declBit(c+132,"mul", false,-1);
    tracep->declBit(c+133,"mulh", false,-1);
    tracep->declBit(c+134,"mulhsu", false,-1);
    tracep->declBit(c+135,"mulhu", false,-1);
    tracep->declBit(c+136,"div", false,-1);
    tracep->declBit(c+137,"divu", false,-1);
    tracep->declBit(c+138,"rem", false,-1);
    tracep->declBit(c+139,"remu", false,-1);
    tracep->declBit(c+140,"mulw", false,-1);
    tracep->declBit(c+141,"divw", false,-1);
    tracep->declBit(c+142,"divuw", false,-1);
    tracep->declBit(c+143,"remw", false,-1);
    tracep->declBit(c+144,"remuw", false,-1);
    tracep->declBit(c+77,"ebreak", false,-1);
    tracep->declBus(c+153,"opcode", false,-1, 6,0);
    tracep->declBus(c+154,"funct3", false,-1, 2,0);
    tracep->declBit(c+155,"funct7_5", false,-1);
    tracep->declBit(c+156,"funct7_0", false,-1);
    tracep->declBus(c+157,"funct7__", false,-1, 4,0);
    tracep->declBit(c+158,"opcode_1_0__11", false,-1);
    tracep->declBit(c+159,"opcode_4_2__000", false,-1);
    tracep->declBit(c+160,"opcode_4_2__001", false,-1);
    tracep->declBit(c+161,"opcode_4_2__010", false,-1);
    tracep->declBit(c+162,"opcode_4_2__011", false,-1);
    tracep->declBit(c+163,"opcode_4_2__100", false,-1);
    tracep->declBit(c+164,"opcode_4_2__101", false,-1);
    tracep->declBit(c+165,"opcode_4_2__110", false,-1);
    tracep->declBit(c+166,"opcode_4_2__111", false,-1);
    tracep->declBit(c+167,"opcode_6_5__00", false,-1);
    tracep->declBit(c+168,"opcode_6_5__01", false,-1);
    tracep->declBit(c+169,"opcode_6_5__10", false,-1);
    tracep->declBit(c+170,"opcode_6_5__11", false,-1);
    tracep->declBit(c+171,"funct7__0000000", false,-1);
    tracep->declBit(c+172,"funct7__0100000", false,-1);
    tracep->declBit(c+173,"funct7__0000001", false,-1);
    tracep->declBit(c+174,"funct7__010000x", false,-1);
    tracep->declBit(c+175,"funct7__000000x", false,-1);
    tracep->declBit(c+176,"funct3__000", false,-1);
    tracep->declBit(c+177,"funct3__001", false,-1);
    tracep->declBit(c+178,"funct3__010", false,-1);
    tracep->declBit(c+179,"funct3__011", false,-1);
    tracep->declBit(c+180,"funct3__100", false,-1);
    tracep->declBit(c+181,"funct3__101", false,-1);
    tracep->declBit(c+182,"funct3__110", false,-1);
    tracep->declBit(c+183,"funct3__111", false,-1);
    tracep->declBit(c+184,"branch", false,-1);
    tracep->declBit(c+185,"load", false,-1);
    tracep->declBit(c+186,"store", false,-1);
    tracep->declBit(c+187,"arithi", false,-1);
    tracep->declBit(c+188,"arithiw", false,-1);
    tracep->declBit(c+189,"arith", false,-1);
    tracep->declBit(c+190,"arithw", false,-1);
    tracep->declBit(c+191,"system", false,-1);
    tracep->declBit(c+192,"I_type", false,-1);
    tracep->declBit(c+186,"S_type", false,-1);
    tracep->declBit(c+184,"B_type", false,-1);
    tracep->declBit(c+193,"U_type", false,-1);
    tracep->declBit(c+85,"J_type", false,-1);
    tracep->declBit(c+194,"imm_0", false,-1);
    tracep->declBus(c+195,"imm_4_1", false,-1, 3,0);
    tracep->declBus(c+196,"imm_10_5", false,-1, 5,0);
    tracep->declBit(c+197,"imm_11", false,-1);
    tracep->declBus(c+198,"imm_19_12", false,-1, 7,0);
    tracep->declBus(c+199,"imm_30_20", false,-1, 10,0);
    tracep->declQuad(c+200,"imm_63_31", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_inst ");
    tracep->declQuad(c+75,"pc", false,-1, 63,0);
    tracep->declQuad(c+145,"data_rs1", false,-1, 63,0);
    tracep->declQuad(c+71,"data_rs2", false,-1, 63,0);
    tracep->declQuad(c+81,"data_imm", false,-1, 63,0);
    tracep->declBit(c+83,"lui", false,-1);
    tracep->declBit(c+84,"auipc", false,-1);
    tracep->declBit(c+104,"addi", false,-1);
    tracep->declBit(c+105,"slti", false,-1);
    tracep->declBit(c+106,"sltiu", false,-1);
    tracep->declBit(c+107,"xori", false,-1);
    tracep->declBit(c+108,"ori", false,-1);
    tracep->declBit(c+109,"andi", false,-1);
    tracep->declBit(c+110,"slli", false,-1);
    tracep->declBit(c+111,"srli", false,-1);
    tracep->declBit(c+112,"srai", false,-1);
    tracep->declBit(c+113,"add", false,-1);
    tracep->declBit(c+114,"sub", false,-1);
    tracep->declBit(c+115,"sll", false,-1);
    tracep->declBit(c+116,"slt", false,-1);
    tracep->declBit(c+117,"sltu", false,-1);
    tracep->declBit(c+118,"xor_", false,-1);
    tracep->declBit(c+119,"srl", false,-1);
    tracep->declBit(c+120,"sra", false,-1);
    tracep->declBit(c+121,"or_", false,-1);
    tracep->declBit(c+122,"and_", false,-1);
    tracep->declBit(c+123,"addiw", false,-1);
    tracep->declBit(c+124,"slliw", false,-1);
    tracep->declBit(c+125,"srliw", false,-1);
    tracep->declBit(c+126,"sraiw", false,-1);
    tracep->declBit(c+127,"addw", false,-1);
    tracep->declBit(c+128,"subw", false,-1);
    tracep->declBit(c+129,"sllw", false,-1);
    tracep->declBit(c+130,"srlw", false,-1);
    tracep->declBit(c+131,"sraw", false,-1);
    tracep->declBit(c+132,"mul", false,-1);
    tracep->declBit(c+133,"mulh", false,-1);
    tracep->declBit(c+134,"mulhsu", false,-1);
    tracep->declBit(c+135,"mulhu", false,-1);
    tracep->declBit(c+136,"div", false,-1);
    tracep->declBit(c+137,"divu", false,-1);
    tracep->declBit(c+138,"rem", false,-1);
    tracep->declBit(c+139,"remu", false,-1);
    tracep->declBit(c+140,"mulw", false,-1);
    tracep->declBit(c+141,"divw", false,-1);
    tracep->declBit(c+142,"divuw", false,-1);
    tracep->declBit(c+143,"remw", false,-1);
    tracep->declBit(c+144,"remuw", false,-1);
    tracep->declBit(c+87,"beq", false,-1);
    tracep->declBit(c+88,"bne", false,-1);
    tracep->declBit(c+89,"blt", false,-1);
    tracep->declBit(c+90,"bge", false,-1);
    tracep->declBit(c+91,"bltu", false,-1);
    tracep->declBit(c+92,"bgeu", false,-1);
    tracep->declBit(c+85,"jal", false,-1);
    tracep->declBit(c+86,"jalr", false,-1);
    tracep->declBit(c+93,"lb", false,-1);
    tracep->declBit(c+94,"lh", false,-1);
    tracep->declBit(c+95,"lw", false,-1);
    tracep->declBit(c+96,"ld", false,-1);
    tracep->declBit(c+97,"lbu", false,-1);
    tracep->declBit(c+98,"lhu", false,-1);
    tracep->declBit(c+99,"lwu", false,-1);
    tracep->declBit(c+100,"sb", false,-1);
    tracep->declBit(c+101,"sh", false,-1);
    tracep->declBit(c+102,"sw", false,-1);
    tracep->declBit(c+103,"sd", false,-1);
    tracep->declBit(c+147,"wb_en", false,-1);
    tracep->declQuad(c+148,"wb_data", false,-1, 63,0);
    tracep->declBit(c+80,"jump_en", false,-1);
    tracep->declQuad(c+78,"jump_pc", false,-1, 63,0);
    tracep->declBit(c+66,"acs_en", false,-1);
    tracep->declBit(c+67,"acs_wr", false,-1);
    tracep->declBus(c+68,"acs_bytes", false,-1, 7,0);
    tracep->declQuad(c+69,"acs_addr", false,-1, 63,0);
    tracep->declQuad(c+71,"acs_wdata", false,-1, 63,0);
    tracep->declQuad(c+73,"acs_rdata", false,-1, 63,0);
    tracep->declQuad(c+202,"jb_pc", false,-1, 63,0);
    tracep->declQuad(c+204,"jalr_pc", false,-1, 63,0);
    tracep->declQuad(c+206,"pc_rslt", false,-1, 63,0);
    tracep->declQuad(c+208,"load_rslt", false,-1, 63,0);
    tracep->declBit(c+210,"taken", false,-1);
    tracep->declBit(c+211,"arith_imm_en", false,-1);
    tracep->declBit(c+212,"arith_rs2_en", false,-1);
    tracep->declQuad(c+213,"arith_in2", false,-1, 63,0);
    tracep->declQuad(c+215,"srl_rslt", false,-1, 63,0);
    tracep->declQuad(c+217,"sra_mask", false,-1, 63,0);
    tracep->declQuad(c+219,"sra_rslt", false,-1, 63,0);
    tracep->declQuad(c+221,"arith_rslt", false,-1, 63,0);
    tracep->declArray(c+223,"product", false,-1, 127,0);
    tracep->declArray(c+227,"productu", false,-1, 127,0);
    tracep->declArray(c+227,"productsu", false,-1, 127,0);
    tracep->declQuad(c+231,"mdr_rslt", false,-1, 63,0);
    tracep->declBit(c+233,"arithw_imm_en", false,-1);
    tracep->declBit(c+234,"arithw_rs2_en", false,-1);
    tracep->declBus(c+235,"arithw_in2", false,-1, 31,0);
    tracep->declBus(c+236,"srlw_rslt", false,-1, 31,0);
    tracep->declBus(c+237,"sraw_mask", false,-1, 31,0);
    tracep->declBus(c+238,"sraw_rslt", false,-1, 31,0);
    tracep->declBus(c+239,"arithw_rslt_pre", false,-1, 31,0);
    tracep->declQuad(c+240,"arithw_rslt", false,-1, 63,0);
    tracep->declQuad(c+242,"productw", false,-1, 63,0);
    tracep->declBus(c+244,"discussw", false,-1, 31,0);
    tracep->declBus(c+245,"discussuw", false,-1, 31,0);
    tracep->declBus(c+246,"remainderw", false,-1, 31,0);
    tracep->declBus(c+247,"remainderuw", false,-1, 31,0);
    tracep->declQuad(c+248,"mdrw_rslt", false,-1, 63,0);
    tracep->declQuad(c+250,"li_rslt", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_gen_inst ");
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declQuad(c+78,"jump_pc", false,-1, 63,0);
    tracep->declBit(c+80,"jump_en", false,-1);
    tracep->declQuad(c+75,"pc", false,-1, 63,0);
    tracep->declQuad(c+252,"snpc", false,-1, 63,0);
    tracep->declQuad(c+254,"dnpc", false,-1, 63,0);
    tracep->declBit(c+256,"pc_31", false,-1);
    tracep->declBus(c+257,"pc_63_32", false,-1, 31,0);
    tracep->declBus(c+258,"pc_30_0", false,-1, 30,0);
    tracep->pushNamePrefix("pc_dff_h ");
    tracep->declBus(c+377,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+378,"en", false,-1);
    tracep->declBus(c+259,"d", false,-1, 31,0);
    tracep->declBus(c+257,"q", false,-1, 31,0);
    tracep->declBus(c+257,"q_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_dff_l ");
    tracep->declBus(c+379,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+378,"en", false,-1);
    tracep->declBus(c+260,"d", false,-1, 30,0);
    tracep->declBus(c+258,"q", false,-1, 30,0);
    tracep->declBus(c+258,"q_reg", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile_inst ");
    tracep->declBit(c+147,"wen", false,-1);
    tracep->declBus(c+150,"index_rd", false,-1, 4,0);
    tracep->declQuad(c+148,"data_rd", false,-1, 63,0);
    tracep->declBus(c+151,"index_rs1", false,-1, 4,0);
    tracep->declQuad(c+145,"data_rs1", false,-1, 63,0);
    tracep->declBus(c+152,"index_rs2", false,-1, 4,0);
    tracep->declQuad(c+71,"data_rs2", false,-1, 63,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1+i*2,"gpr", true,(i+0), 63,0);
    }
    tracep->declBus(c+261,"gpr_wen", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory_inst ");
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declQuad(c+75,"pc", false,-1, 63,0);
    tracep->declBus(c+65,"instr", false,-1, 31,0);
    tracep->declBit(c+66,"en", false,-1);
    tracep->declBit(c+67,"wr", false,-1);
    tracep->declBus(c+68,"strb", false,-1, 7,0);
    tracep->declQuad(c+69,"addr", false,-1, 63,0);
    tracep->declQuad(c+71,"wdata", false,-1, 63,0);
    tracep->declQuad(c+73,"rdata", false,-1, 63,0);
    tracep->declBus(c+262,"apc", false,-1, 26,0);
    tracep->declBus(c+263,"aaddr", false,-1, 26,0);
    tracep->declBus(c+264,"instr_byte_0", false,-1, 7,0);
    tracep->declBus(c+265,"instr_byte_1", false,-1, 7,0);
    tracep->declBus(c+266,"instr_byte_2", false,-1, 7,0);
    tracep->declBus(c+267,"instr_byte_3", false,-1, 7,0);
    tracep->declBus(c+268,"rdata_byte_0", false,-1, 7,0);
    tracep->declBus(c+269,"rdata_byte_1", false,-1, 7,0);
    tracep->declBus(c+270,"rdata_byte_2", false,-1, 7,0);
    tracep->declBus(c+271,"rdata_byte_3", false,-1, 7,0);
    tracep->declBus(c+272,"rdata_byte_4", false,-1, 7,0);
    tracep->declBus(c+273,"rdata_byte_5", false,-1, 7,0);
    tracep->declBus(c+274,"rdata_byte_6", false,-1, 7,0);
    tracep->declBus(c+275,"rdata_byte_7", false,-1, 7,0);
    tracep->declQuad(c+276,"rdata_64", false,-1, 63,0);
    tracep->declQuad(c+278,"rmask", false,-1, 63,0);
    tracep->declBus(c+68,"wen", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+280,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+281,"q", false,-1, 63,0);
    tracep->declQuad(c+281,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+283,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+284,"q", false,-1, 63,0);
    tracep->declQuad(c+284,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+286,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+287,"q", false,-1, 63,0);
    tracep->declQuad(c+287,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+289,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+290,"q", false,-1, 63,0);
    tracep->declQuad(c+290,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+292,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+293,"q", false,-1, 63,0);
    tracep->declQuad(c+293,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+295,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+296,"q", false,-1, 63,0);
    tracep->declQuad(c+296,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+298,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+299,"q", false,-1, 63,0);
    tracep->declQuad(c+299,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+301,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+302,"q", false,-1, 63,0);
    tracep->declQuad(c+302,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+304,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+305,"q", false,-1, 63,0);
    tracep->declQuad(c+305,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+307,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+308,"q", false,-1, 63,0);
    tracep->declQuad(c+308,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+310,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+311,"q", false,-1, 63,0);
    tracep->declQuad(c+311,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+313,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+314,"q", false,-1, 63,0);
    tracep->declQuad(c+314,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+316,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+317,"q", false,-1, 63,0);
    tracep->declQuad(c+317,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+319,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+320,"q", false,-1, 63,0);
    tracep->declQuad(c+320,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+322,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+323,"q", false,-1, 63,0);
    tracep->declQuad(c+323,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+325,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+326,"q", false,-1, 63,0);
    tracep->declQuad(c+326,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+328,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+329,"q", false,-1, 63,0);
    tracep->declQuad(c+329,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+331,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+332,"q", false,-1, 63,0);
    tracep->declQuad(c+332,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+334,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+335,"q", false,-1, 63,0);
    tracep->declQuad(c+335,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+337,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+338,"q", false,-1, 63,0);
    tracep->declQuad(c+338,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+340,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+341,"q", false,-1, 63,0);
    tracep->declQuad(c+341,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+343,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+344,"q", false,-1, 63,0);
    tracep->declQuad(c+344,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+346,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+347,"q", false,-1, 63,0);
    tracep->declQuad(c+347,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+349,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+350,"q", false,-1, 63,0);
    tracep->declQuad(c+350,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+352,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+353,"q", false,-1, 63,0);
    tracep->declQuad(c+353,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+355,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+356,"q", false,-1, 63,0);
    tracep->declQuad(c+356,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+358,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+359,"q", false,-1, 63,0);
    tracep->declQuad(c+359,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+361,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+362,"q", false,-1, 63,0);
    tracep->declQuad(c+362,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+364,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+365,"q", false,-1, 63,0);
    tracep->declQuad(c+365,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+367,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+368,"q", false,-1, 63,0);
    tracep->declQuad(c+368,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+380,"DW", false,-1, 31,0);
    tracep->declBit(c+375,"clk", false,-1);
    tracep->declBit(c+376,"rstn", false,-1);
    tracep->declBit(c+370,"en", false,-1);
    tracep->declQuad(c+148,"d", false,-1, 63,0);
    tracep->declQuad(c+371,"q", false,-1, 63,0);
    tracep->declQuad(c+371,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    tracep->pushNamePrefix("cpu_inst ");
    tracep->pushNamePrefix("regfile_inst ");
    tracep->pushNamePrefix("genblk1[10] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[11] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[12] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[13] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[14] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[15] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[16] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[17] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[18] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[19] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[20] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[21] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[22] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[23] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[24] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[25] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[26] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[27] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[28] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[29] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[30] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[31] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[6] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[7] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[8] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[9] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(6);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[0]),64);
    bufp->fullQData(oldp+3,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[1]),64);
    bufp->fullQData(oldp+5,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[2]),64);
    bufp->fullQData(oldp+7,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[3]),64);
    bufp->fullQData(oldp+9,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[4]),64);
    bufp->fullQData(oldp+11,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[5]),64);
    bufp->fullQData(oldp+13,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[6]),64);
    bufp->fullQData(oldp+15,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[7]),64);
    bufp->fullQData(oldp+17,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[8]),64);
    bufp->fullQData(oldp+19,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[9]),64);
    bufp->fullQData(oldp+21,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[10]),64);
    bufp->fullQData(oldp+23,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[11]),64);
    bufp->fullQData(oldp+25,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[12]),64);
    bufp->fullQData(oldp+27,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[13]),64);
    bufp->fullQData(oldp+29,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[14]),64);
    bufp->fullQData(oldp+31,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[15]),64);
    bufp->fullQData(oldp+33,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[16]),64);
    bufp->fullQData(oldp+35,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[17]),64);
    bufp->fullQData(oldp+37,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[18]),64);
    bufp->fullQData(oldp+39,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[19]),64);
    bufp->fullQData(oldp+41,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[20]),64);
    bufp->fullQData(oldp+43,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[21]),64);
    bufp->fullQData(oldp+45,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[22]),64);
    bufp->fullQData(oldp+47,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[23]),64);
    bufp->fullQData(oldp+49,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[24]),64);
    bufp->fullQData(oldp+51,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[25]),64);
    bufp->fullQData(oldp+53,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[26]),64);
    bufp->fullQData(oldp+55,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[27]),64);
    bufp->fullQData(oldp+57,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[28]),64);
    bufp->fullQData(oldp+59,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[29]),64);
    bufp->fullQData(oldp+61,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[30]),64);
    bufp->fullQData(oldp+63,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr[31]),64);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__instr),32);
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__acs_en));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__acs_wr));
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__memory_inst__DOT__wen),8);
    bufp->fullQData(oldp+69,(vlSelf->top__DOT__acs_addr),64);
    bufp->fullQData(oldp+71,(vlSelf->top__DOT__cpu_inst__DOT__data_rs2),64);
    bufp->fullQData(oldp+73,(vlSelf->top__DOT__acs_rdata),64);
    bufp->fullQData(oldp+75,(vlSelf->top__DOT__pc),64);
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__ebreak));
    bufp->fullQData(oldp+78,(vlSelf->top__DOT__cpu_inst__DOT__jump_pc),64);
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__cpu_inst__DOT__jump_en));
    bufp->fullQData(oldp+81,(vlSelf->top__DOT__cpu_inst__DOT__imm),64);
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__cpu_inst__DOT__lui));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__cpu_inst__DOT__auipc));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__cpu_inst__DOT__jal));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__cpu_inst__DOT__jalr));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__cpu_inst__DOT__beq));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__cpu_inst__DOT__bne));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__cpu_inst__DOT__blt));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__cpu_inst__DOT__bge));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__cpu_inst__DOT__bltu));
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__cpu_inst__DOT__bgeu));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__cpu_inst__DOT__lb));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__cpu_inst__DOT__lh));
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__cpu_inst__DOT__lw));
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__cpu_inst__DOT__ld));
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__cpu_inst__DOT__lbu));
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__cpu_inst__DOT__lhu));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__cpu_inst__DOT__lwu));
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__cpu_inst__DOT__sb));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__cpu_inst__DOT__sh));
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__cpu_inst__DOT__sw));
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__cpu_inst__DOT__sd));
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__cpu_inst__DOT__addi));
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__cpu_inst__DOT__slti));
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__cpu_inst__DOT__sltiu));
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__cpu_inst__DOT__xori));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__cpu_inst__DOT__ori));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__cpu_inst__DOT__andi));
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__cpu_inst__DOT__slli));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__cpu_inst__DOT__srli));
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__cpu_inst__DOT__srai));
    bufp->fullBit(oldp+113,(vlSelf->top__DOT__cpu_inst__DOT__add));
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__cpu_inst__DOT__sub));
    bufp->fullBit(oldp+115,(vlSelf->top__DOT__cpu_inst__DOT__sll));
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__cpu_inst__DOT__slt));
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__cpu_inst__DOT__sltu));
    bufp->fullBit(oldp+118,(vlSelf->top__DOT__cpu_inst__DOT__xor_));
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__cpu_inst__DOT__srl));
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__cpu_inst__DOT__sra));
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__cpu_inst__DOT__or_));
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__cpu_inst__DOT__and_));
    bufp->fullBit(oldp+123,(vlSelf->top__DOT__cpu_inst__DOT__addiw));
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__cpu_inst__DOT__slliw));
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__cpu_inst__DOT__srliw));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__cpu_inst__DOT__sraiw));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__cpu_inst__DOT__addw));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__cpu_inst__DOT__subw));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__cpu_inst__DOT__sllw));
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__cpu_inst__DOT__srlw));
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__cpu_inst__DOT__sraw));
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__cpu_inst__DOT__mul));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__cpu_inst__DOT__mulh));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__cpu_inst__DOT__mulhsu));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__cpu_inst__DOT__mulhu));
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__cpu_inst__DOT__div));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__cpu_inst__DOT__divu));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__cpu_inst__DOT__rem));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__cpu_inst__DOT__remu));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__cpu_inst__DOT__mulw));
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__cpu_inst__DOT__divw));
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__cpu_inst__DOT__divuw));
    bufp->fullBit(oldp+143,(vlSelf->top__DOT__cpu_inst__DOT__remw));
    bufp->fullBit(oldp+144,(vlSelf->top__DOT__cpu_inst__DOT__remuw));
    bufp->fullQData(oldp+145,(vlSelf->top__DOT__cpu_inst__DOT__data_rs1),64);
    bufp->fullBit(oldp+147,(vlSelf->top__DOT__cpu_inst__DOT__wb_en));
    bufp->fullQData(oldp+148,(vlSelf->top__DOT__cpu_inst__DOT__wb_data),64);
    bufp->fullCData(oldp+150,((0x1fU & ((IData)(vlSelf->__VdfgTmp_hf3a996b5__0) 
                                        >> 7U))),5);
    bufp->fullCData(oldp+151,((0x1fU & (vlSelf->__VdfgTmp_h1d12b509__0 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+152,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+153,((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))),7);
    bufp->fullCData(oldp+154,((7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                   >> 6U))));
    bufp->fullBit(oldp+156,((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                   >> 1U))));
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F),5);
    bufp->fullBit(oldp+158,((3U == (3U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)))));
    bufp->fullBit(oldp+159,((0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+160,((1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+161,((2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+162,((3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+163,((4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+164,((5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+165,((6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+166,((7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+167,((0U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 5U)))));
    bufp->fullBit(oldp+168,((1U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 5U)))));
    bufp->fullBit(oldp+169,((2U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 5U)))));
    bufp->fullBit(oldp+170,((3U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 5U)))));
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000000));
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0100000));
    bufp->fullBit(oldp+173,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F0000001));
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F010000x));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F000000x));
    bufp->fullBit(oldp+176,((0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+177,((1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+178,((2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+179,((3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+180,((4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+181,((5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+182,((6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+183,((7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__branch));
    bufp->fullBit(oldp+185,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__load));
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__store));
    bufp->fullBit(oldp+187,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithi));
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithiw));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arith));
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__arithw));
    bufp->fullBit(oldp+191,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__system));
    bufp->fullBit(oldp+192,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type));
    bufp->fullBit(oldp+193,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__U_type));
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_0));
    bufp->fullCData(oldp+195,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1),4);
    bufp->fullCData(oldp+196,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5),6);
    bufp->fullBit(oldp+197,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_11));
    bufp->fullCData(oldp+198,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12),8);
    bufp->fullSData(oldp+199,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20),11);
    bufp->fullQData(oldp+200,((0x1ffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                                                       >> 7U))))))),33);
    bufp->fullQData(oldp+202,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__jb_pc),64);
    bufp->fullQData(oldp+204,((0xfffffffffffffffeULL 
                               & vlSelf->top__DOT__acs_addr)),64);
    bufp->fullQData(oldp+206,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_rslt),64);
    bufp->fullQData(oldp+208,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt),64);
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__taken));
    bufp->fullBit(oldp+211,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_imm_en));
    bufp->fullBit(oldp+212,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rs2_en));
    bufp->fullQData(oldp+213,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2),64);
    bufp->fullQData(oldp+215,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srl_rslt),64);
    bufp->fullQData(oldp+217,((0xffffffffffffffffULL 
                               >> (0x3fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_in2)))),64);
    bufp->fullQData(oldp+219,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sra_rslt),64);
    bufp->fullQData(oldp+221,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arith_rslt),64);
    bufp->fullWData(oldp+223,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__product),128);
    bufp->fullWData(oldp+227,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__productu),128);
    bufp->fullQData(oldp+231,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__mdr_rslt),64);
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_imm_en));
    bufp->fullBit(oldp+234,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rs2_en));
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_in2),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__srlw_rslt),32);
    bufp->fullIData(oldp+237,((0xffffffffU >> (0x1fU 
                                               & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_in2))),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__sraw_rslt),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt_pre),32);
    bufp->fullQData(oldp+240,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__arithw_rslt),64);
    bufp->fullQData(oldp+242,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__productw),64);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__discussw),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__discussuw),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__remainderw),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__remainderuw),32);
    bufp->fullQData(oldp+248,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__mdrw_rslt),64);
    bufp->fullQData(oldp+250,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__li_rslt),64);
    bufp->fullQData(oldp+252,((4ULL + vlSelf->top__DOT__pc)),64);
    bufp->fullQData(oldp+254,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc),64);
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_31));
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_h__DOT__q_reg),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg),31);
    bufp->fullIData(oldp+259,((IData)((vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+260,((0x7fffffffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc))),31);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr_wen),32);
    bufp->fullIData(oldp+262,((0x7ffffffU & vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_dff_l__DOT__q_reg)),27);
    bufp->fullIData(oldp+263,((0x7ffffffU & (IData)(vlSelf->top__DOT__acs_addr))),27);
    bufp->fullCData(oldp+264,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0),8);
    bufp->fullCData(oldp+265,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1),8);
    bufp->fullCData(oldp+266,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2),8);
    bufp->fullCData(oldp+267,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3),8);
    bufp->fullCData(oldp+268,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0),8);
    bufp->fullCData(oldp+269,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1),8);
    bufp->fullCData(oldp+270,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2),8);
    bufp->fullCData(oldp+271,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3),8);
    bufp->fullCData(oldp+272,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4),8);
    bufp->fullCData(oldp+273,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5),8);
    bufp->fullCData(oldp+274,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6),8);
    bufp->fullCData(oldp+275,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7),8);
    bufp->fullQData(oldp+276,(vlSelf->top__DOT__memory_inst__DOT__rdata_64),64);
    bufp->fullQData(oldp+278,(vlSelf->top__DOT__memory_inst__DOT__rmask),64);
    bufp->fullBit(oldp+280,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+281,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+283,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+284,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+287,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+289,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+290,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+292,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+293,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+295,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+296,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+298,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+299,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+301,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+302,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+304,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+305,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+307,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+308,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+310,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+311,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+313,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+314,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+316,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+317,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+319,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+320,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+322,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+323,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+325,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+326,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+328,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+329,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+331,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+332,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+334,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+335,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+337,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+338,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+340,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+341,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+343,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+344,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+346,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+347,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+349,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+350,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+352,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+353,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+355,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+356,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+358,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+359,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+361,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+362,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+364,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+365,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+367,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+368,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+370,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+371,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+373,(vlSelf->diff_clk));
    bufp->fullBit(oldp+374,(vlSelf->diff_rstn));
    bufp->fullBit(oldp+375,(vlSelf->top__DOT__clk));
    bufp->fullBit(oldp+376,(vlSelf->top__DOT__rstn));
    bufp->fullIData(oldp+377,(0x20U),32);
    bufp->fullBit(oldp+378,(1U));
    bufp->fullIData(oldp+379,(0x1fU),32);
    bufp->fullIData(oldp+380,(0x40U),32);
}
