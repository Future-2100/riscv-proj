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
    tracep->declBit(c+447,"diff_clk", false,-1);
    tracep->declBit(c+448,"diff_rstn", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+447,"diff_clk", false,-1);
    tracep->declBit(c+448,"diff_rstn", false,-1);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBus(c+65,"instr", false,-1, 31,0);
    tracep->declBit(c+66,"acs_en", false,-1);
    tracep->declBit(c+67,"acs_wr", false,-1);
    tracep->declBus(c+68,"acs_bytes", false,-1, 7,0);
    tracep->declQuad(c+69,"acs_addr", false,-1, 63,0);
    tracep->declQuad(c+71,"acs_wdata", false,-1, 63,0);
    tracep->declQuad(c+73,"acs_rdata", false,-1, 63,0);
    tracep->declBit(c+75,"acs_error", false,-1);
    tracep->declQuad(c+76,"pc", false,-1, 63,0);
    tracep->declBit(c+78,"ebreak", false,-1);
    tracep->declBit(c+79,"mmy_cen", false,-1);
    tracep->declBit(c+67,"mmy_wr", false,-1);
    tracep->declBus(c+68,"mmy_strb", false,-1, 7,0);
    tracep->declBus(c+80,"mmy_addr", false,-1, 26,0);
    tracep->declQuad(c+71,"mmy_wdata", false,-1, 63,0);
    tracep->declQuad(c+81,"mmy_rdata", false,-1, 63,0);
    tracep->declBit(c+451,"mmy_error", false,-1);
    tracep->declBit(c+83,"uart_cen", false,-1);
    tracep->declBit(c+67,"uart_wr", false,-1);
    tracep->declBus(c+84,"uart_wdata", false,-1, 7,0);
    tracep->declBit(c+85,"uart_error", false,-1);
    tracep->declBit(c+86,"timer_cen", false,-1);
    tracep->declBit(c+67,"timer_wr", false,-1);
    tracep->declQuad(c+87,"timer_rdata", false,-1, 63,0);
    tracep->declBit(c+89,"timer_error", false,-1);
    tracep->declBit(c+90,"pc_error", false,-1);
    tracep->declBit(c+91,"mmy_icen", false,-1);
    tracep->declBus(c+92,"mmy_iaddr", false,-1, 26,0);
    tracep->pushNamePrefix("bus_inst ");
    tracep->declBit(c+66,"acs_en", false,-1);
    tracep->declBit(c+67,"acs_wr", false,-1);
    tracep->declBus(c+68,"acs_bytes", false,-1, 7,0);
    tracep->declQuad(c+69,"acs_addr", false,-1, 63,0);
    tracep->declQuad(c+71,"acs_wdata", false,-1, 63,0);
    tracep->declQuad(c+73,"acs_rdata", false,-1, 63,0);
    tracep->declBit(c+75,"acs_error", false,-1);
    tracep->declBit(c+79,"mmy_cen", false,-1);
    tracep->declBit(c+67,"mmy_wr", false,-1);
    tracep->declBus(c+68,"mmy_strb", false,-1, 7,0);
    tracep->declBus(c+80,"mmy_addr", false,-1, 26,0);
    tracep->declQuad(c+71,"mmy_wdata", false,-1, 63,0);
    tracep->declQuad(c+81,"mmy_rdata", false,-1, 63,0);
    tracep->declBit(c+451,"mmy_error", false,-1);
    tracep->declBit(c+83,"uart_cen", false,-1);
    tracep->declBit(c+67,"uart_wr", false,-1);
    tracep->declBus(c+84,"uart_wdata", false,-1, 7,0);
    tracep->declBit(c+85,"uart_error", false,-1);
    tracep->declBit(c+86,"timer_cen", false,-1);
    tracep->declBit(c+67,"timer_wr", false,-1);
    tracep->declQuad(c+87,"timer_rdata", false,-1, 63,0);
    tracep->declBit(c+89,"timer_error", false,-1);
    tracep->declBit(c+66,"en", false,-1);
    tracep->declBit(c+93,"addr_error", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cpu_inst ");
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declQuad(c+76,"pc", false,-1, 63,0);
    tracep->declBus(c+65,"instr", false,-1, 31,0);
    tracep->declBit(c+66,"acs_en", false,-1);
    tracep->declBit(c+67,"acs_wr", false,-1);
    tracep->declBus(c+68,"acs_bytes", false,-1, 7,0);
    tracep->declQuad(c+69,"acs_addr", false,-1, 63,0);
    tracep->declQuad(c+71,"acs_wdata", false,-1, 63,0);
    tracep->declQuad(c+73,"acs_rdata", false,-1, 63,0);
    tracep->declBit(c+78,"ebreak", false,-1);
    tracep->declQuad(c+94,"jump_pc", false,-1, 63,0);
    tracep->declBit(c+96,"jump_en", false,-1);
    tracep->declQuad(c+97,"snxt_pc", false,-1, 63,0);
    tracep->declQuad(c+99,"data_imm", false,-1, 63,0);
    tracep->declBit(c+101,"lui", false,-1);
    tracep->declBit(c+102,"auipc", false,-1);
    tracep->declBit(c+103,"jal", false,-1);
    tracep->declBit(c+104,"jalr", false,-1);
    tracep->declBit(c+105,"branch", false,-1);
    tracep->declBit(c+106,"load", false,-1);
    tracep->declBit(c+107,"store", false,-1);
    tracep->declBit(c+108,"arith", false,-1);
    tracep->declBit(c+109,"arithi", false,-1);
    tracep->declBit(c+110,"system", false,-1);
    tracep->declBit(c+111,"funct7_0000000", false,-1);
    tracep->declBit(c+112,"funct7_0100000", false,-1);
    tracep->declBit(c+113,"funct7_0000001", false,-1);
    tracep->declBit(c+114,"funct3_000", false,-1);
    tracep->declBit(c+115,"funct3_001", false,-1);
    tracep->declBit(c+116,"funct3_010", false,-1);
    tracep->declBit(c+117,"funct3_011", false,-1);
    tracep->declBit(c+118,"funct3_100", false,-1);
    tracep->declBit(c+119,"funct3_101", false,-1);
    tracep->declBit(c+120,"funct3_110", false,-1);
    tracep->declBit(c+121,"funct3_111", false,-1);
    tracep->declBit(c+122,"rs2_00000", false,-1);
    tracep->declBit(c+123,"rs2_00001", false,-1);
    tracep->declBit(c+124,"rs1_00000", false,-1);
    tracep->declBit(c+125,"rd__00000", false,-1);
    tracep->declBit(c+126,"arithw", false,-1);
    tracep->declBit(c+127,"arithiw", false,-1);
    tracep->declBit(c+128,"funct7_000000x", false,-1);
    tracep->declBit(c+129,"funct7_010000x", false,-1);
    tracep->declQuad(c+130,"data_rs1", false,-1, 63,0);
    tracep->declQuad(c+71,"data_rs2", false,-1, 63,0);
    tracep->declBit(c+132,"wb_en", false,-1);
    tracep->declQuad(c+133,"wb_data", false,-1, 63,0);
    tracep->declBus(c+135,"index_rd", false,-1, 4,0);
    tracep->declBus(c+136,"index_rs1", false,-1, 4,0);
    tracep->declBus(c+137,"index_rs2", false,-1, 4,0);
    tracep->pushNamePrefix("decoder_inst ");
    tracep->declBus(c+65,"instr", false,-1, 31,0);
    tracep->declQuad(c+99,"data_imm", false,-1, 63,0);
    tracep->declBit(c+101,"lui", false,-1);
    tracep->declBit(c+102,"auipc", false,-1);
    tracep->declBit(c+103,"jal", false,-1);
    tracep->declBit(c+104,"jalr", false,-1);
    tracep->declBit(c+105,"branch", false,-1);
    tracep->declBit(c+106,"load", false,-1);
    tracep->declBit(c+107,"store", false,-1);
    tracep->declBit(c+108,"arith", false,-1);
    tracep->declBit(c+109,"arithi", false,-1);
    tracep->declBit(c+110,"system", false,-1);
    tracep->declBit(c+111,"funct7_0000000", false,-1);
    tracep->declBit(c+112,"funct7_0100000", false,-1);
    tracep->declBit(c+113,"funct7_0000001", false,-1);
    tracep->declBit(c+114,"funct3_000", false,-1);
    tracep->declBit(c+115,"funct3_001", false,-1);
    tracep->declBit(c+116,"funct3_010", false,-1);
    tracep->declBit(c+117,"funct3_011", false,-1);
    tracep->declBit(c+118,"funct3_100", false,-1);
    tracep->declBit(c+119,"funct3_101", false,-1);
    tracep->declBit(c+120,"funct3_110", false,-1);
    tracep->declBit(c+121,"funct3_111", false,-1);
    tracep->declBit(c+122,"rs2_00000", false,-1);
    tracep->declBit(c+123,"rs2_00001", false,-1);
    tracep->declBit(c+124,"rs1_00000", false,-1);
    tracep->declBit(c+125,"rd__00000", false,-1);
    tracep->declBit(c+126,"arithw", false,-1);
    tracep->declBit(c+127,"arithiw", false,-1);
    tracep->declBit(c+128,"funct7_000000x", false,-1);
    tracep->declBit(c+129,"funct7_010000x", false,-1);
    tracep->declBus(c+138,"opcode", false,-1, 6,0);
    tracep->declBus(c+139,"funct3", false,-1, 2,0);
    tracep->declBit(c+140,"funct7_5", false,-1);
    tracep->declBit(c+141,"funct7_0", false,-1);
    tracep->declBus(c+142,"funct7__", false,-1, 4,0);
    tracep->declBit(c+143,"opcode_1_0__11", false,-1);
    tracep->declBit(c+144,"opcode_4_2__000", false,-1);
    tracep->declBit(c+145,"opcode_4_2__001", false,-1);
    tracep->declBit(c+146,"opcode_4_2__010", false,-1);
    tracep->declBit(c+147,"opcode_4_2__011", false,-1);
    tracep->declBit(c+148,"opcode_4_2__100", false,-1);
    tracep->declBit(c+149,"opcode_4_2__101", false,-1);
    tracep->declBit(c+150,"opcode_4_2__110", false,-1);
    tracep->declBit(c+151,"opcode_4_2__111", false,-1);
    tracep->declBit(c+152,"opcode_6_5__00", false,-1);
    tracep->declBit(c+153,"opcode_6_5__01", false,-1);
    tracep->declBit(c+154,"opcode_6_5__10", false,-1);
    tracep->declBit(c+155,"opcode_6_5__11", false,-1);
    tracep->declBit(c+156,"I_type", false,-1);
    tracep->declBit(c+107,"S_type", false,-1);
    tracep->declBit(c+105,"B_type", false,-1);
    tracep->declBit(c+157,"U_type", false,-1);
    tracep->declBit(c+103,"J_type", false,-1);
    tracep->declBit(c+158,"imm_0", false,-1);
    tracep->declBus(c+159,"imm_4_1", false,-1, 3,0);
    tracep->declBus(c+160,"imm_10_5", false,-1, 5,0);
    tracep->declBit(c+161,"imm_11", false,-1);
    tracep->declBus(c+162,"imm_19_12", false,-1, 7,0);
    tracep->declBus(c+163,"imm_30_20", false,-1, 10,0);
    tracep->declBit(c+164,"imm_31", false,-1);
    tracep->declBus(c+165,"imm_63_32", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_inst ");
    tracep->declQuad(c+76,"data_pc", false,-1, 63,0);
    tracep->declQuad(c+130,"data_rs1", false,-1, 63,0);
    tracep->declQuad(c+71,"data_rs2", false,-1, 63,0);
    tracep->declQuad(c+99,"data_imm", false,-1, 63,0);
    tracep->declQuad(c+97,"snxt_pc", false,-1, 63,0);
    tracep->declBit(c+101,"lui", false,-1);
    tracep->declBit(c+102,"auipc", false,-1);
    tracep->declBit(c+103,"jal", false,-1);
    tracep->declBit(c+104,"jalr", false,-1);
    tracep->declBit(c+105,"branch", false,-1);
    tracep->declBit(c+106,"load", false,-1);
    tracep->declBit(c+107,"store", false,-1);
    tracep->declBit(c+108,"arith", false,-1);
    tracep->declBit(c+109,"arithi", false,-1);
    tracep->declBit(c+110,"system", false,-1);
    tracep->declBit(c+111,"funct7_0000000", false,-1);
    tracep->declBit(c+112,"funct7_0100000", false,-1);
    tracep->declBit(c+113,"funct7_0000001", false,-1);
    tracep->declBit(c+114,"funct3_000", false,-1);
    tracep->declBit(c+115,"funct3_001", false,-1);
    tracep->declBit(c+116,"funct3_010", false,-1);
    tracep->declBit(c+117,"funct3_011", false,-1);
    tracep->declBit(c+118,"funct3_100", false,-1);
    tracep->declBit(c+119,"funct3_101", false,-1);
    tracep->declBit(c+120,"funct3_110", false,-1);
    tracep->declBit(c+121,"funct3_111", false,-1);
    tracep->declBit(c+122,"rs2_00000", false,-1);
    tracep->declBit(c+123,"rs2_00001", false,-1);
    tracep->declBit(c+124,"rs1_00000", false,-1);
    tracep->declBit(c+125,"rd__00000", false,-1);
    tracep->declBit(c+126,"arithw", false,-1);
    tracep->declBit(c+127,"arithiw", false,-1);
    tracep->declBit(c+128,"funct7_000000x", false,-1);
    tracep->declBit(c+129,"funct7_010000x", false,-1);
    tracep->declBit(c+132,"wb_en", false,-1);
    tracep->declQuad(c+133,"wb_data", false,-1, 63,0);
    tracep->declBit(c+96,"jump_en", false,-1);
    tracep->declQuad(c+94,"jump_pc", false,-1, 63,0);
    tracep->declBit(c+66,"acs_en", false,-1);
    tracep->declBit(c+67,"acs_wr", false,-1);
    tracep->declBus(c+68,"acs_bytes", false,-1, 7,0);
    tracep->declQuad(c+69,"acs_addr", false,-1, 63,0);
    tracep->declQuad(c+71,"acs_wdata", false,-1, 63,0);
    tracep->declQuad(c+73,"acs_rdata", false,-1, 63,0);
    tracep->declBit(c+78,"ebreak", false,-1);
    tracep->declQuad(c+166,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+168,"op_data2", false,-1, 63,0);
    tracep->declBit(c+170,"op_add", false,-1);
    tracep->declBit(c+171,"op_sub", false,-1);
    tracep->declBit(c+172,"op_and", false,-1);
    tracep->declBit(c+173,"op_or", false,-1);
    tracep->declBit(c+174,"op_xor", false,-1);
    tracep->declBit(c+175,"op_sll", false,-1);
    tracep->declBit(c+176,"op_srl", false,-1);
    tracep->declBit(c+177,"op_sra", false,-1);
    tracep->declBit(c+178,"op_lt", false,-1);
    tracep->declBit(c+179,"op_ltu", false,-1);
    tracep->declBit(c+180,"op_ge", false,-1);
    tracep->declBit(c+181,"op_geu", false,-1);
    tracep->declBit(c+182,"op_eq", false,-1);
    tracep->declBit(c+183,"op_ne", false,-1);
    tracep->declBit(c+184,"op_mul", false,-1);
    tracep->declBit(c+185,"op_mulh", false,-1);
    tracep->declBit(c+186,"op_mulhsu", false,-1);
    tracep->declBit(c+187,"op_mulhu", false,-1);
    tracep->declBit(c+188,"op_div", false,-1);
    tracep->declBit(c+189,"op_divu", false,-1);
    tracep->declBit(c+190,"op_rem", false,-1);
    tracep->declBit(c+191,"op_remu", false,-1);
    tracep->declQuad(c+192,"op_rslt", false,-1, 63,0);
    tracep->declBit(c+182,"instr_beq", false,-1);
    tracep->declBit(c+183,"instr_bne", false,-1);
    tracep->declBit(c+194,"instr_blt", false,-1);
    tracep->declBit(c+180,"instr_bge", false,-1);
    tracep->declBit(c+195,"instr_bltu", false,-1);
    tracep->declBit(c+181,"instr_bgeu", false,-1);
    tracep->declBit(c+196,"instr_lb", false,-1);
    tracep->declBit(c+197,"instr_lh", false,-1);
    tracep->declBit(c+198,"instr_lw", false,-1);
    tracep->declBit(c+199,"instr_lbu", false,-1);
    tracep->declBit(c+200,"instr_lhu", false,-1);
    tracep->declBit(c+201,"instr_sb", false,-1);
    tracep->declBit(c+202,"instr_sh", false,-1);
    tracep->declBit(c+203,"instr_sw", false,-1);
    tracep->declBit(c+204,"instr_lwu", false,-1);
    tracep->declBit(c+205,"instr_ld", false,-1);
    tracep->declBit(c+206,"instr_sd", false,-1);
    tracep->declBit(c+207,"instr_addi", false,-1);
    tracep->declBit(c+208,"instr_slti", false,-1);
    tracep->declBit(c+209,"instr_sltiu", false,-1);
    tracep->declBit(c+210,"instr_xori", false,-1);
    tracep->declBit(c+211,"instr_ori", false,-1);
    tracep->declBit(c+212,"instr_andi", false,-1);
    tracep->declBit(c+213,"instr_slli", false,-1);
    tracep->declBit(c+214,"instr_srli", false,-1);
    tracep->declBit(c+215,"instr_srai", false,-1);
    tracep->declBit(c+216,"instr_add", false,-1);
    tracep->declBit(c+217,"instr_sub", false,-1);
    tracep->declBit(c+218,"instr_slt", false,-1);
    tracep->declBit(c+219,"instr_sltu", false,-1);
    tracep->declBit(c+220,"instr_xor", false,-1);
    tracep->declBit(c+221,"instr_or", false,-1);
    tracep->declBit(c+222,"instr_and", false,-1);
    tracep->declBit(c+223,"instr_sll", false,-1);
    tracep->declBit(c+224,"instr_srl", false,-1);
    tracep->declBit(c+225,"instr_sra", false,-1);
    tracep->declBit(c+226,"instr_mul", false,-1);
    tracep->declBit(c+185,"instr_mulh", false,-1);
    tracep->declBit(c+186,"instr_mulhsu", false,-1);
    tracep->declBit(c+187,"instr_mulhu", false,-1);
    tracep->declBit(c+227,"instr_div", false,-1);
    tracep->declBit(c+228,"instr_divu", false,-1);
    tracep->declBit(c+229,"instr_rem", false,-1);
    tracep->declBit(c+230,"instr_remu", false,-1);
    tracep->declBit(c+231,"instr_addiw", false,-1);
    tracep->declBit(c+232,"instr_slliw", false,-1);
    tracep->declBit(c+233,"instr_srliw", false,-1);
    tracep->declBit(c+234,"instr_sraiw", false,-1);
    tracep->declBit(c+235,"instr_addw", false,-1);
    tracep->declBit(c+236,"instr_subw", false,-1);
    tracep->declBit(c+237,"instr_sllw", false,-1);
    tracep->declBit(c+238,"instr_srlw", false,-1);
    tracep->declBit(c+239,"instr_sraw", false,-1);
    tracep->declBit(c+240,"instr_mulw", false,-1);
    tracep->declBit(c+241,"instr_divw", false,-1);
    tracep->declBit(c+242,"instr_divuw", false,-1);
    tracep->declBit(c+243,"instr_remw", false,-1);
    tracep->declBit(c+244,"instr_remuw", false,-1);
    tracep->declBus(c+245,"op_data1_l", false,-1, 31,0);
    tracep->declBit(c+246,"wop_sextends", false,-1);
    tracep->declBus(c+247,"op_data1_h", false,-1, 31,0);
    tracep->declBus(c+248,"op_data2_l", false,-1, 31,0);
    tracep->declBus(c+249,"op_data2_h", false,-1, 31,0);
    tracep->declQuad(c+250,"pc_adder_in1", false,-1, 63,0);
    tracep->declQuad(c+99,"pc_adder_in2", false,-1, 63,0);
    tracep->declQuad(c+252,"pc_adder_rslt", false,-1, 63,0);
    tracep->declBit(c+254,"taken", false,-1);
    tracep->declQuad(c+255,"load_rslt", false,-1, 63,0);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declQuad(c+166,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+168,"op_data2", false,-1, 63,0);
    tracep->declBit(c+170,"op_add", false,-1);
    tracep->declBit(c+171,"op_sub", false,-1);
    tracep->declBit(c+172,"op_and", false,-1);
    tracep->declBit(c+173,"op_or", false,-1);
    tracep->declBit(c+174,"op_xor", false,-1);
    tracep->declBit(c+175,"op_sll", false,-1);
    tracep->declBit(c+176,"op_srl", false,-1);
    tracep->declBit(c+177,"op_sra", false,-1);
    tracep->declBit(c+178,"op_lt", false,-1);
    tracep->declBit(c+179,"op_ltu", false,-1);
    tracep->declBit(c+180,"op_ge", false,-1);
    tracep->declBit(c+181,"op_geu", false,-1);
    tracep->declBit(c+182,"op_eq", false,-1);
    tracep->declBit(c+183,"op_ne", false,-1);
    tracep->declBit(c+184,"op_mul", false,-1);
    tracep->declBit(c+185,"op_mulh", false,-1);
    tracep->declBit(c+186,"op_mulhsu", false,-1);
    tracep->declBit(c+187,"op_mulhu", false,-1);
    tracep->declBit(c+188,"op_div", false,-1);
    tracep->declBit(c+189,"op_divu", false,-1);
    tracep->declBit(c+190,"op_rem", false,-1);
    tracep->declBit(c+191,"op_remu", false,-1);
    tracep->declQuad(c+192,"op_rslt", false,-1, 63,0);
    tracep->declArray(c+257,"adder_in1", false,-1, 67,0);
    tracep->declArray(c+260,"adder_in2", false,-1, 67,0);
    tracep->declBit(c+263,"cin", false,-1);
    tracep->declArray(c+264,"sum", false,-1, 67,0);
    tracep->declBit(c+267,"opdata1_sext", false,-1);
    tracep->declBit(c+170,"opdata2_sext_noinv", false,-1);
    tracep->declBit(c+268,"opdata2_sext_inv", false,-1);
    tracep->declBit(c+269,"opdata2_uext_inv", false,-1);
    tracep->declQuad(c+270,"adder_in2_xlen", false,-1, 63,0);
    tracep->declBus(c+272,"adder_in2_extbits", false,-1, 3,0);
    tracep->declQuad(c+273,"ltx_rslt", false,-1, 63,0);
    tracep->declQuad(c+275,"gex_rslt", false,-1, 63,0);
    tracep->declQuad(c+277,"or_rslt", false,-1, 63,0);
    tracep->declQuad(c+279,"and_rslt", false,-1, 63,0);
    tracep->declQuad(c+281,"xor_rslt", false,-1, 63,0);
    tracep->declBit(c+283,"ne", false,-1);
    tracep->declQuad(c+284,"ne_rslt", false,-1, 63,0);
    tracep->declQuad(c+286,"eq_rslt", false,-1, 63,0);
    tracep->declQuad(c+166,"be_sr_data", false,-1, 63,0);
    tracep->declQuad(c+288,"be_sl_data", false,-1, 63,0);
    tracep->declQuad(c+290,"srl_in1", false,-1, 63,0);
    tracep->declBus(c+292,"srl_in2", false,-1, 5,0);
    tracep->declQuad(c+293,"srl_rslt", false,-1, 63,0);
    tracep->declQuad(c+295,"sra_mask", false,-1, 63,0);
    tracep->declQuad(c+297,"sra_rslt", false,-1, 63,0);
    tracep->declQuad(c+299,"sll_rslt", false,-1, 63,0);
    tracep->declArray(c+301,"multipiler_in1", false,-1, 127,0);
    tracep->declArray(c+305,"multipiler_in2", false,-1, 127,0);
    tracep->declArray(c+309,"product", false,-1, 127,0);
    tracep->declQuad(c+313,"mul_rslt", false,-1, 63,0);
    tracep->declQuad(c+315,"mulhxx_rslt", false,-1, 63,0);
    tracep->declArray(c+317,"divider_in1", false,-1, 64,0);
    tracep->declArray(c+320,"divider_in2", false,-1, 64,0);
    tracep->declArray(c+323,"discuss", false,-1, 64,0);
    tracep->declArray(c+326,"remainder", false,-1, 64,0);
    tracep->declQuad(c+329,"divx_rslt", false,-1, 63,0);
    tracep->declQuad(c+331,"remx_rslt", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_gen_inst ");
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declQuad(c+94,"jump_pc", false,-1, 63,0);
    tracep->declBit(c+96,"jump_en", false,-1);
    tracep->declQuad(c+97,"snxt_pc", false,-1, 63,0);
    tracep->declQuad(c+76,"pc", false,-1, 63,0);
    tracep->declQuad(c+333,"dnpc", false,-1, 63,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+453,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+455,"en", false,-1);
    tracep->declQuad(c+333,"d", false,-1, 63,0);
    tracep->declQuad(c+76,"q", false,-1, 63,0);
    tracep->declQuad(c+76,"q_reg", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile_inst ");
    tracep->declBit(c+132,"wen", false,-1);
    tracep->declBus(c+135,"index_rd", false,-1, 4,0);
    tracep->declQuad(c+133,"data_rd", false,-1, 63,0);
    tracep->declBus(c+136,"index_rs1", false,-1, 4,0);
    tracep->declQuad(c+130,"data_rs1", false,-1, 63,0);
    tracep->declBus(c+137,"index_rs2", false,-1, 4,0);
    tracep->declQuad(c+71,"data_rs2", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1+i*2,"gpr", true,(i+0), 63,0);
    }
    tracep->declBus(c+335,"gpr_wen", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory_inst ");
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+91,"icen", false,-1);
    tracep->declBus(c+92,"iaddr", false,-1, 26,0);
    tracep->declBus(c+65,"instr", false,-1, 31,0);
    tracep->declBit(c+79,"dcen", false,-1);
    tracep->declBit(c+67,"wr", false,-1);
    tracep->declBus(c+68,"strb", false,-1, 7,0);
    tracep->declBus(c+80,"daddr", false,-1, 26,0);
    tracep->declQuad(c+71,"wdata", false,-1, 63,0);
    tracep->declQuad(c+81,"rdata", false,-1, 63,0);
    tracep->declBit(c+451,"error", false,-1);
    tracep->declBus(c+336,"instr_byte_0", false,-1, 7,0);
    tracep->declBus(c+337,"instr_byte_1", false,-1, 7,0);
    tracep->declBus(c+338,"instr_byte_2", false,-1, 7,0);
    tracep->declBus(c+339,"instr_byte_3", false,-1, 7,0);
    tracep->declBus(c+340,"rdata_byte_0", false,-1, 7,0);
    tracep->declBus(c+341,"rdata_byte_1", false,-1, 7,0);
    tracep->declBus(c+342,"rdata_byte_2", false,-1, 7,0);
    tracep->declBus(c+343,"rdata_byte_3", false,-1, 7,0);
    tracep->declBus(c+344,"rdata_byte_4", false,-1, 7,0);
    tracep->declBus(c+345,"rdata_byte_5", false,-1, 7,0);
    tracep->declBus(c+346,"rdata_byte_6", false,-1, 7,0);
    tracep->declBus(c+347,"rdata_byte_7", false,-1, 7,0);
    tracep->declQuad(c+348,"rdata_64", false,-1, 63,0);
    tracep->declQuad(c+350,"rmask", false,-1, 63,0);
    tracep->declBus(c+68,"wen", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("timer_inst ");
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+86,"cen", false,-1);
    tracep->declBit(c+67,"wr", false,-1);
    tracep->declQuad(c+87,"rdata", false,-1, 63,0);
    tracep->declBit(c+89,"error", false,-1);
    tracep->declQuad(c+352,"counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_inst ");
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+83,"cen", false,-1);
    tracep->declBit(c+67,"wr", false,-1);
    tracep->declBus(c+84,"wdata", false,-1, 7,0);
    tracep->declBit(c+85,"error", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+354,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+355,"q", false,-1, 63,0);
    tracep->declQuad(c+355,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+357,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+358,"q", false,-1, 63,0);
    tracep->declQuad(c+358,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+360,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+361,"q", false,-1, 63,0);
    tracep->declQuad(c+361,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+363,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+364,"q", false,-1, 63,0);
    tracep->declQuad(c+364,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+366,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+367,"q", false,-1, 63,0);
    tracep->declQuad(c+367,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+369,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+370,"q", false,-1, 63,0);
    tracep->declQuad(c+370,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+372,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+373,"q", false,-1, 63,0);
    tracep->declQuad(c+373,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+375,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+376,"q", false,-1, 63,0);
    tracep->declQuad(c+376,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+378,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+379,"q", false,-1, 63,0);
    tracep->declQuad(c+379,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+381,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+382,"q", false,-1, 63,0);
    tracep->declQuad(c+382,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+384,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+385,"q", false,-1, 63,0);
    tracep->declQuad(c+385,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+387,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+388,"q", false,-1, 63,0);
    tracep->declQuad(c+388,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+390,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+391,"q", false,-1, 63,0);
    tracep->declQuad(c+391,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+393,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+394,"q", false,-1, 63,0);
    tracep->declQuad(c+394,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+396,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+397,"q", false,-1, 63,0);
    tracep->declQuad(c+397,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+399,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+400,"q", false,-1, 63,0);
    tracep->declQuad(c+400,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+402,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+403,"q", false,-1, 63,0);
    tracep->declQuad(c+403,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+405,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+406,"q", false,-1, 63,0);
    tracep->declQuad(c+406,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+408,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+409,"q", false,-1, 63,0);
    tracep->declQuad(c+409,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+411,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+412,"q", false,-1, 63,0);
    tracep->declQuad(c+412,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+414,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+415,"q", false,-1, 63,0);
    tracep->declQuad(c+415,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+417,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+418,"q", false,-1, 63,0);
    tracep->declQuad(c+418,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+420,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+421,"q", false,-1, 63,0);
    tracep->declQuad(c+421,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+423,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+424,"q", false,-1, 63,0);
    tracep->declQuad(c+424,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+426,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+427,"q", false,-1, 63,0);
    tracep->declQuad(c+427,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+429,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+430,"q", false,-1, 63,0);
    tracep->declQuad(c+430,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+432,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+433,"q", false,-1, 63,0);
    tracep->declQuad(c+433,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+435,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+436,"q", false,-1, 63,0);
    tracep->declQuad(c+436,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+438,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+439,"q", false,-1, 63,0);
    tracep->declQuad(c+439,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+441,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+442,"q", false,-1, 63,0);
    tracep->declQuad(c+442,"q_reg", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+452,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"RST_VALUE", false,-1, 63,0);
    tracep->declBit(c+449,"clk", false,-1);
    tracep->declBit(c+450,"rstn", false,-1);
    tracep->declBit(c+444,"en", false,-1);
    tracep->declQuad(c+133,"d", false,-1, 63,0);
    tracep->declQuad(c+445,"q", false,-1, 63,0);
    tracep->declQuad(c+445,"q_reg", false,-1, 63,0);
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
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[11] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[12] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[13] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[14] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[15] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[16] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[17] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[18] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[19] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[20] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[21] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[22] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[23] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[24] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[25] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[26] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[27] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[28] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[29] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[30] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[31] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[6] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[7] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[8] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[9] ");
    tracep->pushNamePrefix("other ");
    tracep->pushNamePrefix("gpr_dff ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff__0(vlSelf, tracep);
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
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__acs_bytes),8);
    bufp->fullQData(oldp+69,(vlSelf->top__DOT__acs_addr),64);
    bufp->fullQData(oldp+71,(vlSelf->top__DOT__cpu_inst__DOT__data_rs2),64);
    bufp->fullQData(oldp+73,(vlSelf->top__DOT__acs_rdata),64);
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__acs_error));
    bufp->fullQData(oldp+76,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_reg__DOT__q_reg),64);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__ebreak));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__mmy_cen));
    bufp->fullIData(oldp+80,((0x7ffffffU & (IData)(vlSelf->top__DOT__acs_addr))),27);
    bufp->fullQData(oldp+81,(vlSelf->top__DOT__mmy_rdata),64);
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__uart_cen));
    bufp->fullCData(oldp+84,((0xffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__data_rs2))),8);
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__uart_error));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__timer_cen));
    bufp->fullQData(oldp+87,(vlSelf->top__DOT__timer_rdata),64);
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__timer_error));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__pc_error));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__mmy_icen));
    bufp->fullIData(oldp+92,((0x7ffffffU & (IData)(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_reg__DOT__q_reg))),27);
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__bus_inst__DOT__addr_error));
    bufp->fullQData(oldp+94,(vlSelf->top__DOT__cpu_inst__DOT__jump_pc),64);
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__cpu_inst__DOT__jump_en));
    bufp->fullQData(oldp+97,((4ULL + vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__pc_reg__DOT__q_reg)),64);
    bufp->fullQData(oldp+99,(vlSelf->top__DOT__cpu_inst__DOT__data_imm),64);
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__cpu_inst__DOT__lui));
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__cpu_inst__DOT__auipc));
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__cpu_inst__DOT__jal));
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__cpu_inst__DOT__jalr));
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__cpu_inst__DOT__branch));
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__cpu_inst__DOT__load));
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__cpu_inst__DOT__store));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__cpu_inst__DOT__arith));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__cpu_inst__DOT__arithi));
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__cpu_inst__DOT__system));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__cpu_inst__DOT__funct7_0000000));
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__cpu_inst__DOT__funct7_0100000));
    bufp->fullBit(oldp+113,(vlSelf->top__DOT__cpu_inst__DOT__funct7_0000001));
    bufp->fullBit(oldp+114,((0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+115,((1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+116,((2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+117,((3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+118,((4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+119,((5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+120,((6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+121,((7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                          >> 4U)))));
    bufp->fullBit(oldp+122,((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+123,((1U == (0x1fU & (vlSelf->top__DOT__instr 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+124,((0U == (0x1fU & (vlSelf->__VdfgTmp_hb1b17408__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+125,((0U == (0x1fU & ((IData)(vlSelf->__VdfgTmp_h5fb51c9b__0) 
                                             >> 7U)))));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__cpu_inst__DOT__arithw));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__cpu_inst__DOT__arithiw));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__cpu_inst__DOT__funct7_000000x));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__cpu_inst__DOT__funct7_010000x));
    bufp->fullQData(oldp+130,(vlSelf->top__DOT__cpu_inst__DOT__data_rs1),64);
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__cpu_inst__DOT__wb_en));
    bufp->fullQData(oldp+133,(vlSelf->top__DOT__cpu_inst__DOT__wb_data),64);
    bufp->fullCData(oldp+135,((0x1fU & ((IData)(vlSelf->__VdfgTmp_h5fb51c9b__0) 
                                        >> 7U))),5);
    bufp->fullCData(oldp+136,((0x1fU & (vlSelf->__VdfgTmp_hb1b17408__0 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+137,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+138,((0x7fU & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0))),7);
    bufp->fullCData(oldp+139,((7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+140,((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                   >> 6U))));
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                   >> 1U))));
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__funct7___05F),5);
    bufp->fullBit(oldp+143,((3U == (3U & (IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0)))));
    bufp->fullBit(oldp+144,((0U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+145,((1U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+146,((2U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+147,((3U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+148,((4U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+149,((5U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+150,((6U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+151,((7U == (7U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 2U)))));
    bufp->fullBit(oldp+152,((0U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 5U)))));
    bufp->fullBit(oldp+153,((1U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 5U)))));
    bufp->fullBit(oldp+154,((2U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 5U)))));
    bufp->fullBit(oldp+155,((3U == (3U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0) 
                                          >> 5U)))));
    bufp->fullBit(oldp+156,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__I_type));
    bufp->fullBit(oldp+157,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__U_type));
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_0));
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_4_1),4);
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_10_5),6);
    bufp->fullBit(oldp+161,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_11));
    bufp->fullCData(oldp+162,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_19_12),8);
    bufp->fullSData(oldp+163,(vlSelf->top__DOT__cpu_inst__DOT__decoder_inst__DOT__imm_30_20),11);
    bufp->fullBit(oldp+164,((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                   >> 7U))));
    bufp->fullIData(oldp+165,((- (IData)((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3) 
                                                >> 7U))))),32);
    bufp->fullQData(oldp+166,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__be_sr_data),64);
    bufp->fullQData(oldp+168,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2),64);
    bufp->fullBit(oldp+170,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata2_sext_noinv));
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sub));
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_and));
    bufp->fullBit(oldp+173,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_or));
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_xor));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sll));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_srl));
    bufp->fullBit(oldp+177,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_sra));
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_lt));
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ltu));
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ge));
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_geu));
    bufp->fullBit(oldp+182,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_eq));
    bufp->fullBit(oldp+183,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_ne));
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mul));
    bufp->fullBit(oldp+185,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulh));
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulhsu));
    bufp->fullBit(oldp+187,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_mulhu));
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_div));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_divu));
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rem));
    bufp->fullBit(oldp+191,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_remu));
    bufp->fullQData(oldp+192,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_rslt),64);
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_blt));
    bufp->fullBit(oldp+195,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_bltu));
    bufp->fullBit(oldp+196,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lb));
    bufp->fullBit(oldp+197,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lh));
    bufp->fullBit(oldp+198,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lw));
    bufp->fullBit(oldp+199,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lbu));
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lhu));
    bufp->fullBit(oldp+201,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sb));
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sh));
    bufp->fullBit(oldp+203,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sw));
    bufp->fullBit(oldp+204,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_lwu));
    bufp->fullBit(oldp+205,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_ld));
    bufp->fullBit(oldp+206,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sd));
    bufp->fullBit(oldp+207,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_addi));
    bufp->fullBit(oldp+208,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slti));
    bufp->fullBit(oldp+209,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sltiu));
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_xori));
    bufp->fullBit(oldp+211,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_ori));
    bufp->fullBit(oldp+212,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_andi));
    bufp->fullBit(oldp+213,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slli));
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srli));
    bufp->fullBit(oldp+215,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srai));
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_add));
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sub));
    bufp->fullBit(oldp+218,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slt));
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sltu));
    bufp->fullBit(oldp+220,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_xor));
    bufp->fullBit(oldp+221,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_or));
    bufp->fullBit(oldp+222,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_and));
    bufp->fullBit(oldp+223,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sll));
    bufp->fullBit(oldp+224,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srl));
    bufp->fullBit(oldp+225,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sra));
    bufp->fullBit(oldp+226,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_mul));
    bufp->fullBit(oldp+227,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_div));
    bufp->fullBit(oldp+228,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_divu));
    bufp->fullBit(oldp+229,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_rem));
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_remu));
    bufp->fullBit(oldp+231,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_addiw));
    bufp->fullBit(oldp+232,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_slliw));
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srliw));
    bufp->fullBit(oldp+234,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sraiw));
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_addw));
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_subw));
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sllw));
    bufp->fullBit(oldp+238,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_srlw));
    bufp->fullBit(oldp+239,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_sraw));
    bufp->fullBit(oldp+240,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_mulw));
    bufp->fullBit(oldp+241,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_divw));
    bufp->fullBit(oldp+242,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_divuw));
    bufp->fullBit(oldp+243,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_remw));
    bufp->fullBit(oldp+244,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__instr_remuw));
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data1_l),32);
    bufp->fullBit(oldp+246,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__wop_sextends));
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data1_h),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_l),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_h),32);
    bufp->fullQData(oldp+250,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_adder_in1),64);
    bufp->fullQData(oldp+252,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__pc_adder_rslt),64);
    bufp->fullBit(oldp+254,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__taken));
    bufp->fullQData(oldp+255,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__load_rslt),64);
    bufp->fullWData(oldp+257,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in1),68);
    bufp->fullWData(oldp+260,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2),68);
    bufp->fullBit(oldp+263,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__cin));
    bufp->fullWData(oldp+264,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum),68);
    bufp->fullBit(oldp+267,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata1_sext));
    bufp->fullBit(oldp+268,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata2_sext_inv));
    bufp->fullBit(oldp+269,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__opdata2_uext_inv));
    bufp->fullQData(oldp+270,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2_xlen),64);
    bufp->fullCData(oldp+272,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__adder_in2_extbits),4);
    bufp->fullQData(oldp+273,((QData)((IData)((1U & 
                                               (vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                >> 3U))))),64);
    bufp->fullQData(oldp+275,((QData)((IData)((1U & 
                                               (~ (
                                                   vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sum[2U] 
                                                   >> 3U)))))),64);
    bufp->fullQData(oldp+277,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__or_rslt),64);
    bufp->fullQData(oldp+279,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__and_rslt),64);
    bufp->fullQData(oldp+281,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt),64);
    bufp->fullBit(oldp+283,((0U != vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt)));
    bufp->fullQData(oldp+284,((QData)((IData)((0U != vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt)))),64);
    bufp->fullQData(oldp+286,((QData)((IData)((1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__xor_rslt))))))),64);
    bufp->fullQData(oldp+288,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__be_sl_data),64);
    bufp->fullQData(oldp+290,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_in1),64);
    bufp->fullCData(oldp+292,((0x3fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_l)),6);
    bufp->fullQData(oldp+293,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__srl_rslt),64);
    bufp->fullQData(oldp+295,((0xffffffffffffffffULL 
                               >> (0x3fU & vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__op_data2_l))),64);
    bufp->fullQData(oldp+297,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sra_rslt),64);
    bufp->fullQData(oldp+299,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__sll_rslt),64);
    bufp->fullWData(oldp+301,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in1),128);
    bufp->fullWData(oldp+305,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__multipiler_in2),128);
    bufp->fullWData(oldp+309,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product),128);
    bufp->fullQData(oldp+313,((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[0U])))),64);
    bufp->fullQData(oldp+315,((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__product[2U])))),64);
    bufp->fullWData(oldp+317,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__divider_in1),65);
    bufp->fullWData(oldp+320,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__divider_in2),65);
    bufp->fullWData(oldp+323,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss),65);
    bufp->fullWData(oldp+326,(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder),65);
    bufp->fullQData(oldp+329,((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__discuss[0U])))),64);
    bufp->fullQData(oldp+331,((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__cpu_inst__DOT__exu_inst__DOT__alu_inst__DOT__remainder[0U])))),64);
    bufp->fullQData(oldp+333,(vlSelf->top__DOT__cpu_inst__DOT__pc_gen_inst__DOT__dnpc),64);
    bufp->fullIData(oldp+335,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT__gpr_wen),32);
    bufp->fullCData(oldp+336,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_0),8);
    bufp->fullCData(oldp+337,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_1),8);
    bufp->fullCData(oldp+338,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_2),8);
    bufp->fullCData(oldp+339,(vlSelf->top__DOT__memory_inst__DOT__instr_byte_3),8);
    bufp->fullCData(oldp+340,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_0),8);
    bufp->fullCData(oldp+341,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_1),8);
    bufp->fullCData(oldp+342,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_2),8);
    bufp->fullCData(oldp+343,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_3),8);
    bufp->fullCData(oldp+344,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_4),8);
    bufp->fullCData(oldp+345,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_5),8);
    bufp->fullCData(oldp+346,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_6),8);
    bufp->fullCData(oldp+347,(vlSelf->top__DOT__memory_inst__DOT__rdata_byte_7),8);
    bufp->fullQData(oldp+348,(vlSelf->top__DOT__memory_inst__DOT__rdata_64),64);
    bufp->fullQData(oldp+350,(vlSelf->top__DOT__memory_inst__DOT__rmask),64);
    bufp->fullQData(oldp+352,(vlSelf->top__DOT__timer_inst__DOT__counter),64);
    bufp->fullBit(oldp+354,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+355,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__1__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+357,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+358,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__2__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+360,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+361,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__3__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+363,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+364,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__4__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+366,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+367,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__5__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+369,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+370,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__6__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+372,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+373,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__7__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+375,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+376,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__8__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+378,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+379,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__9__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+381,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+382,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__10__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+384,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+385,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__11__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+387,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+388,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__12__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+390,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+391,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__13__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+393,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+394,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__14__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+396,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+397,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__15__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+399,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+400,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__16__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+402,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+403,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__17__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+405,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+406,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__18__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+408,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+409,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__19__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+411,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+412,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__20__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+414,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+415,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__21__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+417,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+418,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__22__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+420,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+421,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__23__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+423,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+424,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__24__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+426,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+427,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__25__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+429,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+430,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__26__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+432,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+433,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__27__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+435,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+436,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__28__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+438,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+439,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__29__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+441,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+442,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__30__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+444,(vlSelf->top__DOT__cpu_inst__DOT__regfile_inst__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff____pinNumber3));
    bufp->fullQData(oldp+445,(vlSymsp->TOP__top__DOT__cpu_inst__DOT__regfile_inst__DOT__genblk1__BRA__31__KET____DOT__other__DOT__gpr_dff.__PVT__q_reg),64);
    bufp->fullBit(oldp+447,(vlSelf->diff_clk));
    bufp->fullBit(oldp+448,(vlSelf->diff_rstn));
    bufp->fullBit(oldp+449,(vlSelf->top__DOT__clk));
    bufp->fullBit(oldp+450,(vlSelf->top__DOT__rstn));
    bufp->fullBit(oldp+451,(0U));
    bufp->fullIData(oldp+452,(0x40U),32);
    bufp->fullQData(oldp+453,(0x80000000ULL),64);
    bufp->fullBit(oldp+455,(1U));
    bufp->fullQData(oldp+456,(0ULL),64);
}
