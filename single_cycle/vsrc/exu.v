`include "default.v"

module exu (

  input wire  [63:0]  pc        ,
  input wire  [63:0]  data_rs1  ,
  input wire  [63:0]  data_rs2  ,
  input wire  [63:0]  data_imm  ,

  input  wire         lui       ,
  input  wire         auipc     ,
  input  wire         addi      ,
  input  wire         slti      ,
  input  wire         sltiu     ,
  input  wire         xori      ,
  input  wire         ori       ,
  input  wire         andi      ,
  input  wire         slli      ,
  input  wire         srli      ,
  input  wire         srai      ,

  input  wire         add       ,
  input  wire         sub       ,
  input  wire         sll       ,
  input  wire         slt       ,
  input  wire         sltu      ,
  input  wire         xor_      ,
  input  wire         srl       ,
  input  wire         sra       ,
  input  wire         or_       ,
  input  wire         and_      ,

  input  wire         addiw     ,
  input  wire         slliw     ,
  input  wire         srliw     ,
  input  wire         sraiw     ,
  input  wire         addw      ,
  input  wire         subw      ,
  input  wire         sllw      ,
  input  wire         srlw      ,
  input  wire         sraw      ,

  input wire          mul       ,
  input wire          mulh      ,
  input wire          mulhsu    ,
  input wire          mulhu     ,
  input wire          div       ,
  input wire          divu      ,
  input wire          rem       ,
  input wire          remu      ,
  input wire          mulw      ,
  input wire          divw      ,
  input wire          divuw     ,
  input wire          remw      ,
  input wire          remuw     ,

  input  wire         beq       ,
  input  wire         bne       ,
  input  wire         blt       ,
  input  wire         bge       ,
  input  wire         bltu      ,
  input  wire         bgeu      ,
  input  wire         jal       ,
  input  wire         jalr      ,

  input  wire         lb        ,
  input  wire         lh        ,
  input  wire         lw        ,
  input  wire         ld        ,
  input  wire         lbu       ,
  input  wire         lhu       ,
  input  wire         lwu       ,

  input  wire         sb        ,
  input  wire         sh        ,
  input  wire         sw        ,
  input  wire         sd        ,

  output  wire          wb_en   ,
  output  wire  [63:0]  wb_data ,

  output  wire          jump_en     ,
  output  wire  [63:0]  jump_pc     ,  
  
  output  wire          acs_en      ,
  output  wire          acs_wr      ,
  output  wire  [7:0]   acs_bytes   ,
  output  wire  [63:0]  acs_addr    ,  // address of memory access
  output  wire  [63:0]  acs_wdata   ,
  input   wire  [63:0]  acs_rdata     

);


//************** jump pc ****************//
  wire  [63:0]  jb_pc   =        pc + data_imm ;
  wire  [63:0]  jalr_pc = (data_rs1 + data_imm ) & (~64'b1) ; 
  assign  jump_pc =  jalr ? jalr_pc : jb_pc ;

  wire  [63:0]  pc_rslt = ( {64{jal | jalr}} & (pc+64'd4) ) ;

//************** memory access****************//
  assign  acs_addr = data_rs1 + data_imm; 
  assign  acs_en   = lb  | lh  | lw  | ld  | lbu | lhu | lwu | sb  | sh  | sw  | sd  ;
  assign  acs_wr   = sb  | sh  | sw  | sd  ;
  assign  acs_wdata = data_rs2; 
  assign  acs_bytes = ( {8{lb|lbu|sb}} & 8'b1  ) | 
                      ( {8{lh|lhu|sh}} & 8'b11 ) |
                      ( {8{lw|lwu|sw}} & 8'hf  ) |
                      ( {8{ld|sd    }} & 8'hff ) ;

  wire [63:0]  load_rslt =  ( {64{lb }} & { {56{acs_rdata[7] }}, acs_rdata[7:0] } ) |
                            ( {64{lh }} & { {48{acs_rdata[15]}}, acs_rdata[15:0]} ) |
                            ( {64{lw }} & { {32{acs_rdata[31]}}, acs_rdata[31:0]} ) |
                            ( {64{ld }} & {                      acs_rdata[63:0]} ) |
                            ( {64{lbu}} & {  56'b0 , acs_rdata[7:0] } ) |
                            ( {64{lhu}} & {  48'b0 , acs_rdata[15:0]} ) |
                            ( {64{lwu}} & {  32'b0 , acs_rdata[31:0]} ) ;


//************** branch ****************//
  wire  taken =  ( beq  & (data_rs1 == data_rs2) ) |
                 ( bne  & (data_rs1 != data_rs2) ) |
                 ( blt  & ($signed(data_rs1) < $signed(data_rs2)) ) |
                 ( bltu & (data_rs1 < data_rs2) ) |
                 ( bge  & ($signed(data_rs1) >= $signed(data_rs2)) ) |
                 ( bgeu & (data_rs1 >= data_rs2) ) ;

  assign jump_en = taken | jal | jalr ;

//************** arith ****************//
  wire  arith_imm_en = addi | andi | ori | xori | slli | srli | srai | slti | sltiu ;
  wire  arith_rs2_en = add | sub | and_ | or_ | xor_ | sll | srl | sra | slt | sltu ;
  wire  [63:0]  arith_in2  =  ( {64{arith_imm_en}} & data_imm ) |
                              ( {64{arith_rs2_en}} & data_rs2 ) ;

  wire  [63:0]  srl_rslt = data_rs1 >> arith_in2[5:0] ;
  wire  [63:0]  sra_mask = (~64'b0) >> arith_in2[5:0] ;
  wire  [63:0]  sra_rslt = (srl_rslt & sra_mask) | ( {64{data_rs1[63]}} & ~sra_mask );

  wire  [63:0]  arith_rslt =  ( {64{add |addi }} & (data_rs1 +   arith_in2) ) |
                              ( {64{sub       }} & (data_rs1 -   arith_in2) ) |
                              ( {64{and_|andi }} & (data_rs1 &   arith_in2) ) |
                              ( {64{or_ |ori  }} & (data_rs1 |   arith_in2) ) |
                              ( {64{xor_|xori }} & (data_rs1 ^   arith_in2) ) |
                              ( {64{sll |slli }} & (data_rs1 <<  arith_in2[5:0]) ) |
                              ( {64{srl |srli }} & srl_rslt ) |
                              ( {64{sra |srai }} & sra_rslt ) |
                              ( {64{slt |slti }} & {63'b0, ($signed(data_rs1) < $signed(arith_in2))} ) |
                              ( {64{sltu|sltiu}} & {63'b0, (data_rs1 < arith_in2)} ) ;


  //*************** mdr ***************//
  wire  [127:0]  product  = $signed(data_rs1) * $signed(data_rs2) ;
  wire  [127:0]  productu = (data_rs1) * (data_rs2) ;
  wire  [127:0]  productsu = $signed(data_rs1) * (data_rs2) ;

  wire  [63:0]  mdr_rslt = ( {64{mul   }} & product[63:0]         ) |
                           ( {64{mulh  }} & product[127:64]       ) |
                           ( {64{mulhsu}} & productsu[127:64]     ) |
                           ( {64{mulhu }} & productu [127:64]     ) |
                           ( {64{div   }} & ($signed(data_rs1) / $signed(data_rs2)) ) |
                           ( {64{divu  }} & (data_rs1 / data_rs2) ) |
                           ( {64{rem   }} & ($signed(data_rs1) % $signed(data_rs2)) ) |
                           ( {64{remu  }} & (data_rs1 % data_rs2) ) ;


  //*************** arithw ***************//
  wire  arithw_imm_en = addiw | slliw | srliw | sraiw ;
  wire  arithw_rs2_en = addw  |  sllw | srlw  | sraw | subw ;
  wire  [31:0]  arithw_in2 = ( {32{arithw_imm_en}} & data_imm[31:0] ) |
                             ( {32{arithw_rs2_en}} & data_rs2[31:0] ) ;

  //wire  [31:0]  addxw_rslt = data_rs1[31:0] +   arithw_in2       ;
  //wire  [31:0]  subxw_rslt = data_rs1[31:0] -   arithw_in2       ;
  //wire  [31:0]  sllxw_rslt = data_rs1[31:0] <<  arithw_in2[4:0]  ;
  //wire  [31:0]  srlxw_rslt = data_rs1[31:0] >>> arithw_in2[4:0]  ;
  //wire  [31:0]  sraxw_rslt = data_rs1[31:0] >>  arithw_in2[4:0]  ;
  
  wire  [31:0]  srlw_rslt = data_rs1[31:0] >> arithw_in2[4:0] ;
  wire  [31:0]  sraw_mask = (~32'b0) >> arithw_in2[4:0] ;
  wire  [31:0]  sraw_rslt = (srlw_rslt & sraw_mask) | ( {32{data_rs1[31]}} & ~sraw_mask );


  wire  [31:0]  arithw_rslt_pre = ( {32{addw | addiw }} & (data_rs1[31:0] +   arithw_in2     ) ) |
                                  ( {32{   subw      }} & (data_rs1[31:0] -   arithw_in2     ) ) |
                                  ( {32{sllw | slliw }} & (data_rs1[31:0] <<  arithw_in2[4:0]) ) |
                                  ( {32{srlw | srliw }} & srlw_rslt ) |
                                  ( {32{sraw | sraiw }} & sraw_rslt ) ;

  wire  [63:0]  arithw_rslt = { {32{arithw_rslt_pre[31]}}, arithw_rslt_pre } ;


  //*************** mdrw ***************//
  wire  [63:0]  productw    = $signed(data_rs1[31:0]) * $signed(data_rs2[31:0]) ;
  wire  [31:0]  discussw    = $signed(data_rs1[31:0]) / $signed(data_rs2[31:0]) ;
  wire  [31:0]  discussuw   =        (data_rs1[31:0]) /        (data_rs2[31:0]) ;
  wire  [31:0]  remainderw  = $signed(data_rs1[31:0]) % $signed(data_rs2[31:0]) ;
  wire  [31:0]  remainderuw =        (data_rs1[31:0]) %        (data_rs2[31:0]) ;

  wire  [63:0]  mdrw_rslt  = ( {64{mulw }} & { {32{   productw[31]}},   productw[31:0]} ) |
                             ( {64{divw }} & { {32{   discussw[31]}},   discussw[31:0]} ) |
                             ( {64{divuw}} & { {32{  discussuw[31]}},  discussuw[31:0]} ) |
                             ( {64{remw }} & { {32{ remainderw[31]}}, remainderw[31:0]} ) |
                             ( {64{remuw}} & { {32{remainderuw[31]}},remainderuw[31:0]} ) ;


  wire  [63:0]  li_rslt = ( {64{auipc}} & ( pc + data_imm) ) |
                          ( {64{lui  }} &        data_imm  ) ;

  assign  wb_en = lui   | auipc |
                  addi  | slti  | sltiu | xori  | ori   | andi  | slli  | srli  | srai  |
                  add   | sub   | sll   | slt   | sltu  | xor_  | srl   | sra   | or_   | and_  |
                  addiw | slliw | srliw | sraiw | addw  | subw  | sllw  | srlw  | sraw  |
                  mul   | mulh  | mulhsu| mulhu | div   | divu  | rem   | remu  | mulw  | divw  | divuw | remw  | remuw |
                  jal   | jalr  |
                  lb    | lh    | lw    | ld    | lbu   | lhu   | lwu   ;

  assign  wb_data =  pc_rslt | arith_rslt | mdr_rslt |
                    load_rslt| arithw_rslt| mdrw_rslt|
                     li_rslt ;

endmodule

