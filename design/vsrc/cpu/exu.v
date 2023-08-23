`include "default.v"

module exu (
  input  wire  [`XLEN-1:0]  data_pc        ,
  input  wire  [`XLEN-1:0]  data_rs1       ,
  input  wire  [`XLEN-1:0]  data_rs2       ,
  input  wire  [`XLEN-1:0]  data_imm       ,
  input  wire  [`XLEN-1:0]  snxt_pc        ,

  input  wire               lui            ,
  input  wire               auipc          ,
  input  wire               jal            ,
  input  wire               jalr           ,
  input  wire               branch         ,
  input  wire               load           ,
  input  wire               store          ,
  input  wire               arith          ,
  input  wire               arithi         ,
  input  wire               system         ,

  input  wire               funct7_0000000 , 
  input  wire               funct7_0100000 , 
  input  wire               funct7_0000001 , 

  input  wire               funct3_000     ,
  input  wire               funct3_001     ,
  input  wire               funct3_010     ,
  input  wire               funct3_011     ,
  input  wire               funct3_100     ,
  input  wire               funct3_101     ,
  input  wire               funct3_110     ,
  input  wire               funct3_111     ,

  input  wire               rs2_00000      ,
  input  wire               rs2_00001      ,
  input  wire               rs1_00000      ,
  input  wire               rd__00000      ,

`ifdef __RV64__
  input  wire               arithw         ,
  input  wire               arithiw        ,
  input  wire               funct7_000000x , 
  input  wire               funct7_010000x , 
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
  input   wire  [`XLEN-1:0]    acs_rdata   ,

  output  wire                 ebreak        

);


  wire  [`XLEN-1:0]   op_data1    ;
  wire  [`XLEN-1:0]   op_data2    ;

  wire                op_add      ;
  wire                op_sub      ;
  wire                op_and      ;
  wire                op_or       ;
  wire                op_xor      ;
  wire                op_sll      ;
  wire                op_srl      ;
  wire                op_sra      ;
  wire                op_lt       ;
  wire                op_ltu      ;
  wire                op_ge       ;
  wire                op_geu      ;
  wire                op_eq       ;
  wire                op_ne       ;

  wire                op_mul      ;
  wire                op_mulh     ;
  wire                op_mulhsu   ;
  wire                op_mulhu    ;
  wire                op_div      ;
  wire                op_divu     ;
  wire                op_rem      ;
  wire                op_remu     ;

  wire  [`XLEN-1:0]   op_rslt     ;

alu alu_inst(
  .op_data1   ( op_data1    )  ,
  .op_data2   ( op_data2    )  ,
  .op_add     ( op_add      )  ,
  .op_sub     ( op_sub      )  ,
  .op_and     ( op_and      )  ,
  .op_or      ( op_or       )  ,
  .op_xor     ( op_xor      )  ,
  .op_sll     ( op_sll      )  ,
  .op_srl     ( op_srl      )  ,
  .op_sra     ( op_sra      )  ,
  .op_lt      ( op_lt       )  ,
  .op_ltu     ( op_ltu      )  ,
  .op_ge      ( op_ge       )  ,
  .op_geu     ( op_geu      )  ,
  .op_eq      ( op_eq       )  ,
  .op_ne      ( op_ne       )  ,
  .op_mul     ( op_mul      )  ,
  .op_mulh    ( op_mulh     )  ,
  .op_mulhsu  ( op_mulhsu   )  ,
  .op_mulhu   ( op_mulhu    )  ,
  .op_div     ( op_div      )  ,
  .op_divu    ( op_divu     )  ,
  .op_rem     ( op_rem      )  ,
  .op_remu    ( op_remu     )  ,
  .op_rslt    ( op_rslt     )   
);


//************** decode  ****************//
wire  instr_beq  =  branch & funct3_000 ;
wire  instr_bne  =  branch & funct3_001 ;
wire  instr_blt  =  branch & funct3_100 ;
wire  instr_bge  =  branch & funct3_101 ;
wire  instr_bltu =  branch & funct3_110 ;
wire  instr_bgeu =  branch & funct3_111 ;


wire  instr_lb  =  load & funct3_000 ;
wire  instr_lh  =  load & funct3_001 ;
wire  instr_lw  =  load & funct3_010 ;
wire  instr_lbu =  load & funct3_100 ;
wire  instr_lhu =  load & funct3_101 ;


wire  instr_sb  =  store & funct3_000 ;
wire  instr_sh  =  store & funct3_001 ;
wire  instr_sw  =  store & funct3_010 ;
`ifdef __RV64__
wire  instr_lwu =  load & funct3_110 ;
wire  instr_ld  =  load & funct3_011 ;
wire  instr_sd  =  store & funct3_011 ;
`endif


wire  instr_addi = arithi & funct3_000 ;
wire  instr_slti = arithi & funct3_010 ;
wire  instr_sltiu= arithi & funct3_011 ;
wire  instr_xori = arithi & funct3_100 ;
wire  instr_ori  = arithi & funct3_110 ;
wire  instr_andi = arithi & funct3_111 ;
`ifdef __RV32__
wire  instr_slli = arithi & funct3_001 & funct7_0000000 ;
wire  instr_srli = arithi & funct3_101 & funct7_0000000 ;
wire  instr_srai = arithi & funct3_101 & funct7_0100000 ;
`endif
`ifdef __RV64__
wire  instr_slli = arithi & funct3_001 & funct7_000000x ;
wire  instr_srli = arithi & funct3_101 & funct7_000000x ;
wire  instr_srai = arithi & funct3_101 & funct7_010000x ;
`endif


wire  instr_add   = arith & funct3_000 & funct7_0000000 ;
wire  instr_sub   = arith & funct3_000 & funct7_0100000 ;
wire  instr_slt   = arith & funct3_010 & funct7_0000000 ;
wire  instr_sltu  = arith & funct3_011 & funct7_0000000 ;
wire  instr_xor   = arith & funct3_100 & funct7_0000000 ;
wire  instr_or    = arith & funct3_110 & funct7_0000000 ;
wire  instr_and   = arith & funct3_111 & funct7_0000000 ;
wire  instr_sll   = arith & funct3_001 & funct7_0000000 ;
wire  instr_srl   = arith & funct3_101 & funct7_0000000 ;
wire  instr_sra   = arith & funct3_101 & funct7_0100000 ;

wire  instr_mul    = arith & funct3_000 & funct7_0000001 ;
wire  instr_mulh   = arith & funct3_001 & funct7_0000001 ;
wire  instr_mulhsu = arith & funct3_010 & funct7_0000001 ;
wire  instr_mulhu  = arith & funct3_011 & funct7_0000001 ;
wire  instr_div    = arith & funct3_100 & funct7_0000001 ;
wire  instr_divu   = arith & funct3_101 & funct7_0000001 ;
wire  instr_rem    = arith & funct3_110 & funct7_0000001 ;
wire  instr_remu   = arith & funct3_111 & funct7_0000001 ;

`ifdef __RV64__
wire  instr_addiw = arithiw & funct3_000 ;
wire  instr_slliw = arithiw & funct3_001 & funct7_0000000 ;
wire  instr_srliw = arithiw & funct3_101 & funct7_0000000 ;
wire  instr_sraiw = arithiw & funct3_101 & funct7_0100000 ;
wire  instr_addw  = arithw  & funct3_000 & funct7_0000000 ;
wire  instr_subw  = arithw  & funct3_000 & funct7_0100000 ;
wire  instr_sllw  = arithw  & funct3_001 & funct7_0000000 ;
wire  instr_srlw  = arithw  & funct3_101 & funct7_0000000 ;
wire  instr_sraw  = arithw  & funct3_101 & funct7_0100000 ;
wire  instr_mulw  = arithw  & funct3_000 & funct7_0000001 ;
wire  instr_divw  = arithw  & funct3_100 & funct7_0000001 ;
wire  instr_divuw = arithw  & funct3_101 & funct7_0000001 ;
wire  instr_remw  = arithw  & funct3_110 & funct7_0000001 ;
wire  instr_remuw = arithw  & funct3_111 & funct7_0000001 ;
`endif

assign  ebreak  = system & funct7_0000000 & rs2_00001 & rs1_00000 & funct3_000 & rd__00000 ;

//*************** signal to alu *************************//
wire  [31:0]  op_data1_l = ( {32{auipc}}          & data_pc[31:0] )
                         | ( {32{arith |arithi |branch
                 `ifdef __RV64__
                                |arithw|arithiw
                 `endif
                                }} & data_rs1[31:0])
                         ;

`ifdef __RV64__
wire  wop_sextends = instr_addiw | instr_sraiw
                   | instr_addw  | instr_sraw 
                   | instr_subw  | instr_mulw  | instr_divw 
                   | instr_remw  
                   ;

/*
wire  wop_uextends =  instr_slliw | instr_srliw 
                   |  instr_sllw  | instr_srlw 
                   |  instr_divuw | instr_remuw 
                   ;
*/

wire  [31:0]  op_data1_h = ( {32{auipc}}          & data_pc[63:32]  )
                         | ( {32{arith |arithi |branch}}
                                                  & data_rs1[63:32] )
                         | ( {32{wop_sextends}} & {32{data_rs1[31]}})
                         ;
`endif

assign  op_data1 = {
                  `ifdef __RV64__
                    op_data1_h ,
                  `endif
                   op_data1_l
                  };

wire [31:0] op_data2_l = ( {32{arithi|lui|auipc
                               `ifdef __RV64__
                                 |arithiw
                               `endif
                           }} & data_imm[31:0] )
                       | ( {32{arith | branch 
                               `ifdef __RV64__
                                 |arithw
                               `endif
                           }} & data_rs2[31:0] )
                       ;

`ifdef __RV64__
wire [31:0] op_data2_h = ( {32{arithi|lui|auipc |arithiw }} 
                                                 &   data_imm[63:32] )
                       | ( {32{arith | branch }} &   data_rs2[63:32] )
                       | ( {32{wop_sextends   }} &{32{data_rs2[31]}} )
                       ;
`endif

assign  op_data2 = {
                  `ifdef __RV64__
                    op_data2_h ,
                  `endif
                   op_data2_l
                  };



assign  op_add = instr_add | instr_addi | auipc | lui 
              `ifdef __RV64__
               | instr_addw| instr_addiw 
              `endif
               ; 

assign  op_sub = instr_sub 
              `ifdef __RV64__
               | instr_subw 
              `endif
               ;

assign  op_and    = instr_and | instr_andi ;
assign  op_or     = instr_or  | instr_ori  ;
assign  op_xor    = instr_xor | instr_xori ;

assign  op_sll    = instr_sll | instr_slli 
                 `ifdef __RV64__
                  | instr_sllw 
                  | instr_slliw 
                 `endif
                  ;

assign  op_srl    = instr_srl | instr_srli 
                 `ifdef __RV64__
                  | instr_srlw 
                  | instr_srliw 
                 `endif
                  ;

assign  op_sra    = instr_sra | instr_srai 
                 `ifdef __RV64__
                  | instr_sraw 
                  | instr_sraiw 
                 `endif
                  ;

assign  op_lt     = instr_slt | instr_slti | instr_blt ;
assign  op_ltu    = instr_sltu| instr_sltiu| instr_bltu;
assign  op_ge     = instr_bge ;
assign  op_geu    = instr_bgeu;
assign  op_eq     = instr_beq ;
assign  op_ne     = instr_bne ;
assign  op_mul    = instr_mul    
                 `ifdef __RV64__
                  | instr_mulw
                 `endif
                  ;

assign  op_mulh   = instr_mulh   ;
assign  op_mulhsu = instr_mulhsu ;
assign  op_mulhu  = instr_mulhu  ;

assign  op_div    = instr_div    
                 `ifdef __RV64__
                  | instr_divw
                 `endif
                  ;

assign  op_divu   = instr_divu   
                 `ifdef __RV64__
                  | instr_divuw
                 `endif
                  ;

assign  op_rem    = instr_rem    
                 `ifdef __RV64__
                  | instr_remw
                 `endif
                  ;

assign  op_remu   = instr_remu   
                 `ifdef __RV64__
                  | instr_remuw
                 `endif
                  ;

//************** jump pc ****************//
wire  [`XLEN-1:0]  pc_adder_in1 =  ( {`XLEN{( branch | jal )}} & data_pc  ) 
                                |  ( {`XLEN{  jalr          }} & data_rs1 );
wire  [`XLEN-1:0]  pc_adder_in2 =  data_imm ;
wire  [`XLEN-1:0]  pc_adder_rslt = pc_adder_in1 + pc_adder_in2 ;

assign jump_pc[`XLEN-1:1]  =  pc_adder_rslt[`XLEN-1:1];
assign jump_pc[0]  =  ( (branch | jal ) & pc_adder_rslt[0] ) |
                      (  jalr           &  1'b0            ) ;

wire   taken    = branch & op_rslt[0] ;
assign jump_en  = taken  | jal | jalr ;



//************** memory access****************//
  assign  acs_addr = data_rs1 + data_imm; 
  assign  acs_en   = instr_lb  | instr_lbu | 
                     instr_lh  | instr_lhu | 
                     instr_lw  |  
                     instr_sb  | 
                     instr_sh  | 
                     instr_sw   
                   `ifdef __RV64__
                     | instr_ld  
                     | instr_lwu 
                     | instr_sd  
                   `endif
                     ;

  assign  acs_wr   = instr_sb  
                   | instr_sh  
                   | instr_sw  
                   `ifdef __RV64__
                   | instr_sd  
                   `endif
                   ;

  assign  acs_wdata = data_rs2; 
  assign  acs_bytes =   ( {(`XLEN/8){instr_lb|instr_lbu|instr_sb}} & 'b1   )  
                      | ( {(`XLEN/8){instr_lh|instr_lhu|instr_sh}} & 'b11  )
                      | ( {(`XLEN/8){instr_lw|instr_sw }} & 'hf   ) 
                    `ifdef __RV64__
                      | ( {(`XLEN/8){instr_lwu         }} & 8'h0f ) 
                      | ( {(`XLEN/8){instr_ld|instr_sd }} & 8'hff ) 
                    `endif
                      ;

  wire [`XLEN-1:0]  load_rslt =    ( {`XLEN{instr_lb }} & { {(`XLEN-8 ){acs_rdata[7] }}, acs_rdata[7:0] } ) 
                                 | ( {`XLEN{instr_lh }} & { {(`XLEN-16){acs_rdata[15]}}, acs_rdata[15:0]} ) 
                                 | ( {`XLEN{instr_lw }} & { {(`XLEN-32){acs_rdata[31]}}, acs_rdata[31:0]} ) 
                                 | ( {`XLEN{instr_lbu}} & { {(`XLEN-8 ){   1'b0      }}, acs_rdata[7:0] } ) 
                                 | ( {`XLEN{instr_lhu}} & { {(`XLEN-16){   1'b0      }}, acs_rdata[15:0]} )  
                               `ifdef __RV64__
                                 | ( {`XLEN{instr_lwu}} & {  32'b0 , acs_rdata[31:0]} ) 
                                 | ( {`XLEN{instr_ld }} & {          acs_rdata[63:0]} ) 
                               `endif
                                 ;

//************** write back ****************//
  assign  wb_data  =   ( {`XLEN{(jal  | jalr )}} &   snxt_pc ) // static next pc
                   |   ( {`XLEN{(arith|arithi
                                |  lui|auipc )}} &   op_rslt )
                   |   ( {`XLEN{ load         }} & load_rslt )
`ifdef __RV64__
                   |   ( {`XLEN{arithw | arithiw}} & { {32{op_rslt[31]}},op_rslt[31:0] } ) 
`endif
                   ;

  assign  wb_en = jal | jalr | auipc | lui | arith | arithi | load 
  `ifdef __RV64__
                | arithw | arithiw 
  `endif
  ;


endmodule

