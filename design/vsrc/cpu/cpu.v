`include "default.v"

module cpu(
  input  wire               clk         ,
  input  wire               rstn        ,

  output wire  [`XLEN-1:0]  pc          ,
  input  wire  [31:0]       instr       ,

  output wire               acs_en      ,
  output wire               acs_wr      ,
  output wire  [`XLEN/8-1:0]acs_bytes   ,
  output wire  [`XLEN-1:0]  acs_addr    ,  
  output wire  [`XLEN-1:0]  acs_wdata   ,
  input  wire  [`XLEN-1:0]  acs_rdata   ,
  output wire               ebreak      
);

wire [`XLEN-1:0]  jump_pc ;
wire              jump_en ;
wire [`XLEN-1:0]  snxt_pc ;

pc_gen pc_gen_inst(
  .clk     ( clk     )  ,
  .rstn    ( rstn    )  ,
  .jump_pc ( jump_pc )  ,
  .jump_en ( jump_en )  ,
  .snxt_pc ( snxt_pc )  ,
  .pc      ( pc      )  
);


  wire    [`XLEN-1:0]    data_imm       ;

  wire                   lui            ;
  wire                   auipc          ;
  wire                   jal            ;
  wire                   jalr           ;
  wire                   branch         ;
  wire                   load           ;
  wire                   store          ;
  wire                   arith          ;
  wire                   arithi         ;
  wire                   system         ;

  wire                   funct7_0000000 ; 
  wire                   funct7_0100000 ; 
  wire                   funct7_0000001 ; 

  wire                   funct3_000     ;
  wire                   funct3_001     ;
  wire                   funct3_010     ;
  wire                   funct3_011     ;
  wire                   funct3_100     ;
  wire                   funct3_101     ;
  wire                   funct3_110     ;
  wire                   funct3_111     ;

  wire                   rs2_00000      ;
  wire                   rs2_00001      ;
  wire                   rs1_00000      ;
  wire                   rd__00000      ;

`ifdef __RV64__
  wire                   arithw         ;
  wire                   arithiw        ;
  wire                   funct7_000000x ; 
  wire                   funct7_010000x ; 
`endif

decoder decoder_inst(
   .instr           ( instr          )  
 , .data_imm        ( data_imm       )  
 , .lui             ( lui            )  
 , .auipc           ( auipc          )  
 , .jal             ( jal            )  
 , .jalr            ( jalr           )  
 , .branch          ( branch         )  
 , .load            ( load           )  
 , .store           ( store          )  
 , .arith           ( arith          )  
 , .arithi          ( arithi         )  
 , .system          ( system         )  
 , .funct7_0000000  ( funct7_0000000 )   
 , .funct7_0100000  ( funct7_0100000 )   
 , .funct7_0000001  ( funct7_0000001 )   
 , .funct3_000      ( funct3_000     )  
 , .funct3_001      ( funct3_001     )  
 , .funct3_010      ( funct3_010     )  
 , .funct3_011      ( funct3_011     )  
 , .funct3_100      ( funct3_100     )  
 , .funct3_101      ( funct3_101     )  
 , .funct3_110      ( funct3_110     )  
 , .funct3_111      ( funct3_111     )  
 , .rs2_00000       ( rs2_00000      )  
 , .rs2_00001       ( rs2_00001      )  
 , .rs1_00000       ( rs1_00000      )  
 , .rd__00000       ( rd__00000      )  
`ifdef __RV64__
 , .arithw          ( arithw         )  
 , .arithiw         ( arithiw        )  
 , .funct7_000000x  ( funct7_000000x )   
 , .funct7_010000x  ( funct7_010000x )  
`endif
);

  wire  [`XLEN-1:0]  data_rs1       ;
  wire  [`XLEN-1:0]  data_rs2       ;

  wire                 wb_en       ;
  wire  [`XLEN-1:0]    wb_data     ;

exu exu_inst(
    .data_pc        (      pc         )   
  , .data_rs1       ( data_rs1        )   
  , .data_rs2       ( data_rs2        )   
  , .data_imm       ( data_imm        )   
  , .snxt_pc        ( snxt_pc         )   
  , .lui            ( lui             )   
  , .auipc          ( auipc           )   
  , .jal            ( jal             )   
  , .jalr           ( jalr            )   
  , .branch         ( branch          )   
  , .load           ( load            )   
  , .store          ( store           )   
  , .arith          ( arith           )   
  , .arithi         ( arithi          )   
  , .system         ( system          )   
  , .funct7_0000000 ( funct7_0000000  )    
  , .funct7_0100000 ( funct7_0100000  )    
  , .funct7_0000001 ( funct7_0000001  )    
  , .funct3_000     ( funct3_000      )   
  , .funct3_001     ( funct3_001      )   
  , .funct3_010     ( funct3_010      )   
  , .funct3_011     ( funct3_011      )   
  , .funct3_100     ( funct3_100      )   
  , .funct3_101     ( funct3_101      )   
  , .funct3_110     ( funct3_110      )   
  , .funct3_111     ( funct3_111      )   
  , .rs2_00000      ( rs2_00000       )   
  , .rs2_00001      ( rs2_00001       )   
  , .rs1_00000      ( rs1_00000       )   
  , .rd__00000      ( rd__00000       )   
`ifdef __RV64__
  , .arithw         ( arithw          )
  , .arithiw        ( arithiw         )
  , .funct7_000000x ( funct7_000000x  ) 
  , .funct7_010000x ( funct7_010000x  ) 
`endif
  , .wb_en          ( wb_en           )   
  , .wb_data        ( wb_data         )   
  , .jump_en        ( jump_en         )   
  , .jump_pc        ( jump_pc         )     
  , .acs_en         ( acs_en          )   
  , .acs_wr         ( acs_wr          )   
  , .acs_bytes      ( acs_bytes       )   
  , .acs_addr       ( acs_addr        )     // address of memory access
  , .acs_wdata      ( acs_wdata       )   
  , .acs_rdata      ( acs_rdata       )   
  , .ebreak         ( ebreak          )   
);


wire  [4:0]  index_rd   =  instr[11:7] ;
wire  [4:0]  index_rs1  =  instr[19:15];
wire  [4:0]  index_rs2  =  instr[24:20];

regfile regfile_inst(
  .wen       ( wb_en      ) ,
  .index_rd  ( index_rd   ) ,
  .data_rd   ( wb_data    ) ,
  .index_rs1 ( index_rs1  ) ,
  .data_rs1  ( data_rs1   ) ,
  .index_rs2 ( index_rs2  ) ,
  .data_rs2  ( data_rs2   ) ,
  .clk       ( clk        ) ,
  .rstn      ( rstn       ) 
);

endmodule

