`include "default.v"

module exu (

  input wire  [`XLEN-1:0]  pc        ,
  input wire  [`XLEN-1:0]  data_rs1  ,
  input wire  [`XLEN-1:0]  data_rs2  ,
  input wire  [`XLEN-1:0]  data_imm  ,

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

`ifdef __RV64__
  input  wire         addiw     ,
  input  wire         slliw     ,
  input  wire         srliw     ,
  input  wire         sraiw     ,
  input  wire         addw      ,
  input  wire         subw      ,
  input  wire         sllw      ,
  input  wire         srlw      ,
  input  wire         sraw      ,
`endif

  input wire          mul       ,
  input wire          mulh      ,
  input wire          mulhsu    ,
  input wire          mulhu     ,
  input wire          div       ,
  input wire          divu      ,
  input wire          rem       ,
  input wire          remu      ,
`ifdef __RV64__
  input wire          mulw      ,
  input wire          divw      ,
  input wire          divuw     ,
  input wire          remw      ,
  input wire          remuw     ,
`endif

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
  input  wire         lbu       ,
  input  wire         lhu       ,
`ifdef __RV64__
  input  wire         ld        ,
  input  wire         lwu       ,
`endif

  input  wire         sb        ,
  input  wire         sh        ,
  input  wire         sw        ,
`ifdef __RV64__
  input  wire         sd        ,
`endif

  output  wire                 wb_en       ,
  output  wire  [`XLEN-1:0]    wb_data     ,

  output  wire                 jump_en     ,
  output  wire  [`XLEN-1:0]    jump_pc     ,  
  
  output  wire                 acs_en      ,
  output  wire                 acs_wr      ,
  output  wire  [`XLEN/8-1:0]  acs_bytes   ,
  output  wire  [`XLEN-1:0]    acs_addr    ,  // address of memory access
  output  wire  [`XLEN-1:0]    acs_wdata   ,
  input   wire  [`XLEN-1:0]    acs_rdata     

);


//************** jump pc ****************//
  wire  [`XLEN-1:0]  jb_pc   =        pc + data_imm ;
  wire  [`XLEN-1:0]  jalr_pc = (data_rs1 + data_imm ) & (~`XLEN'b1) ; 
  assign  jump_pc =  jalr ? jalr_pc : jb_pc ;

  wire  [`XLEN-1:0]  pc_rslt = ( {`XLEN{jal | jalr}} & (pc+`XLEN'd4) ) ;

//************** memory access****************//
  assign  acs_addr = data_rs1 + data_imm; 
  assign  acs_en   = lb  | lh  | lw  | lbu | lhu | 
                     sb  | sh  | sw   
                   `ifdef __RV64__
                     | ld  | lwu | sd  
                   `endif
                     ;

  assign  acs_wr   = sb  | sh  | sw  

                   `ifdef __RV64__
                     | sd  
                   `endif
                     ;

  assign  acs_wdata = data_rs2; 
  assign  acs_bytes =   ( {(`XLEN/8){lb|lbu|sb}} & 'b1  )  
                      | ( {(`XLEN/8){lh|lhu|sh}} & 'b11 )
                      | ( {(`XLEN/8){lw|sw    }} & 'hf  ) 

                    `ifdef __RV64__
                      | ( {(`XLEN/8){lwu      }} & 8'h0f  ) 
                      | ( {(`XLEN/8){ld|sd    }} & 8'hff ) 
                    `endif
                      ;

  wire [`XLEN-1:0]  load_rslt =    ( {`XLEN{lb }} & { {(`XLEN-8 ){acs_rdata[7] }}, acs_rdata[7:0] } ) 
                                 | ( {`XLEN{lh }} & { {(`XLEN-16){acs_rdata[15]}}, acs_rdata[15:0]} ) 
                                 | ( {`XLEN{lw }} & { {(`XLEN-32){acs_rdata[31]}}, acs_rdata[31:0]} ) 
                                 | ( {`XLEN{lbu}} & { {(`XLEN-8 ){   1'b0      }}, acs_rdata[7:0] } ) 
                                 | ( {`XLEN{lhu}} & { {(`XLEN-16){   1'b0      }}, acs_rdata[15:0]} )  
                               `ifdef __RV64__
                                 | ( {`XLEN{lwu}} & {  32'b0 , acs_rdata[31:0]} ) 
                                 | ( {`XLEN{ld }} & {          acs_rdata[63:0]} ) 
                               `endif
                                 ;


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
  wire  [`XLEN-1:0]  arith_in2  =  ( {`XLEN{arith_imm_en}} & data_imm ) |
                              ( {`XLEN{arith_rs2_en}} & data_rs2 ) ;

  wire  [`XLEN-1:0]  srl_rslt = data_rs1 >> arith_in2[5:0] ;
  wire  [`XLEN-1:0]  sra_mask = (~`XLEN'b0) >> arith_in2[5:0] ;
  wire  [`XLEN-1:0]  sra_rslt = (srl_rslt & sra_mask) | ( {`XLEN{data_rs1[`XLEN-1]}} & ~sra_mask );

  wire  [`XLEN-1:0]  arith_rslt =  ( {`XLEN{add |addi }} & (data_rs1 +   arith_in2) ) |
                                   ( {`XLEN{sub       }} & (data_rs1 -   arith_in2) ) |
                                   ( {`XLEN{and_|andi }} & (data_rs1 &   arith_in2) ) |
                                   ( {`XLEN{or_ |ori  }} & (data_rs1 |   arith_in2) ) |
                                   ( {`XLEN{xor_|xori }} & (data_rs1 ^   arith_in2) ) |
                                   ( {`XLEN{sll |slli }} & (data_rs1 <<  arith_in2[5:0]) ) |
                                   ( {`XLEN{srl |srli }} & srl_rslt ) |
                                   ( {`XLEN{sra |srai }} & sra_rslt ) |
                                   ( {`XLEN{slt |slti }} & { {(`XLEN-1){1'b0}}, ($signed(data_rs1) < $signed(arith_in2))} ) |
                                   ( {`XLEN{sltu|sltiu}} & { {(`XLEN-1){1'b0}}, (data_rs1 < arith_in2)} ) ;
                                 

  //*************** mdr ***************//
  wire  [`XLEN*2-1:0]  product  = $signed(data_rs1) * $signed(data_rs2) ;
  wire  [`XLEN*2-1:0]  productu = (data_rs1) * (data_rs2) ;
  wire  [`XLEN*2-1:0]  productsu = $signed(data_rs1) * (data_rs2) ;

  wire  [`XLEN-1:0]  mdr_rslt = ( {`XLEN{mul   }} & product[`XLEN-1:0]         ) |
                                ( {`XLEN{mulh  }} & product[`XLEN*2-1:`XLEN]       ) |
                                ( {`XLEN{mulhsu}} & productsu[`XLEN*2-1:`XLEN]     ) |
                                ( {`XLEN{mulhu }} & productu [`XLEN*2-1:`XLEN]     ) |
                                ( {`XLEN{div   }} & ($signed(data_rs1) / $signed(data_rs2)) ) |
                                ( {`XLEN{divu  }} & (data_rs1 / data_rs2) ) |
                                ( {`XLEN{rem   }} & ($signed(data_rs1) % $signed(data_rs2)) ) |
                                ( {`XLEN{remu  }} & (data_rs1 % data_rs2) ) ;


  //*************** arithw ***************//
`ifdef __RV64__
  wire  arithw_imm_en = addiw | slliw | srliw | sraiw ;
  wire  arithw_rs2_en = addw  |  sllw | srlw  | sraw | subw ;
  wire  [31:0]  arithw_in2 = ( {32{arithw_imm_en}} & data_imm[31:0] ) |
                             ( {32{arithw_rs2_en}} & data_rs2[31:0] ) ;
  
  wire  [31:0]  srlw_rslt = data_rs1[31:0] >> arithw_in2[4:0] ;
  wire  [31:0]  sraw_mask = (~32'b0) >> arithw_in2[4:0] ;
  wire  [31:0]  sraw_rslt = (srlw_rslt & sraw_mask) | ( {32{data_rs1[31]}} & ~sraw_mask );


  wire  [31:0]  arithw_rslt_pre = ( {32{addw | addiw }} & (data_rs1[31:0] +   arithw_in2     ) ) |
                                  ( {32{   subw      }} & (data_rs1[31:0] -   arithw_in2     ) ) |
                                  ( {32{sllw | slliw }} & (data_rs1[31:0] <<  arithw_in2[4:0]) ) |
                                  ( {32{srlw | srliw }} & srlw_rslt ) |
                                  ( {32{sraw | sraiw }} & sraw_rslt ) ;

  wire  [`XLEN-1:0]  arithw_rslt = { {32{arithw_rslt_pre[31]}}, arithw_rslt_pre } ;
`endif


  //*************** mdrw ***************//
`ifdef __RV64__  
  wire  [63:0]  productw    = $signed(data_rs1[31:0]) * $signed(data_rs2[31:0]) ;
  wire  [31:0]  discussw    = $signed(data_rs1[31:0]) / $signed(data_rs2[31:0]) ;
  wire  [31:0]  discussuw   =        (data_rs1[31:0]) /        (data_rs2[31:0]) ;
  wire  [31:0]  remainderw  = $signed(data_rs1[31:0]) % $signed(data_rs2[31:0]) ;
  wire  [31:0]  remainderuw =        (data_rs1[31:0]) %        (data_rs2[31:0]) ;

  wire  [`XLEN-1:0]  mdrw_rslt  = ( {`XLEN{mulw }} & { {32{   productw[31]}},   productw[31:0]} ) |
                                  ( {`XLEN{divw }} & { {32{   discussw[31]}},   discussw[31:0]} ) |
                                  ( {`XLEN{divuw}} & { {32{  discussuw[31]}},  discussuw[31:0]} ) |
                                  ( {`XLEN{remw }} & { {32{ remainderw[31]}}, remainderw[31:0]} ) |
                                  ( {`XLEN{remuw}} & { {32{remainderuw[31]}},remainderuw[31:0]} ) ;
`endif


  wire  [`XLEN-1:0]  li_rslt = ( {`XLEN{auipc}} & ( pc + data_imm) ) |
                               ( {`XLEN{lui  }} &        data_imm  ) ;

  assign  wb_en =    lui   | auipc 
                   | addi  | slti  | sltiu | xori  | ori   | andi  | slli  | srli  | srai  
                   | add   | sub   | sll   | slt   | sltu  | xor_  | srl   | sra   | or_   | and_  
                   | mul   | mulh  | mulhsu| mulhu | div   | divu  | rem   | remu  
                   | jal   | jalr  |
                   | lb    | lh    | lw    | lbu   | lhu   
`ifdef __RV64__  
                   | addiw | slliw | srliw | sraiw | addw  | subw  | sllw  | srlw  | sraw  
                   | mulw  | divw  | divuw | remw  | remuw 
                   | ld    | lwu   
`endif
                   ;



  assign  wb_data =         pc_rslt | arith_rslt | mdr_rslt 
                      |   load_rslt |    li_rslt 
`ifdef __RV64__  
                      | arithw_rslt |  mdrw_rslt
`endif
                      ;


endmodule

