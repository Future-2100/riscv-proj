`default_nettype none

module cpu(
  input  wire          clk         ,
  input  wire          rstn        ,

  output wire  [63:0]  pc          ,
  input  wire  [31:0]  instr       ,

  output wire          acs_en      ,
  output wire          acs_wr      ,
  output wire  [7:0]   acs_bytes   ,
  output wire  [63:0]  acs_addr    ,  
  output wire  [63:0]  acs_wdata   ,
  input  wire  [63:0]  acs_rdata   ,
  output wire          ebreak      

);

wire [63:0]  jump_pc ;
wire         jump_en ;

pc_gen pc_gen_inst(
  .clk     ( clk     )  ,
  .rstn    ( rstn    )  ,
  .jump_pc ( jump_pc )  ,
  .jump_en ( jump_en )  ,
  .pc      ( pc      )  
);

  wire    [63:0]    imm     ;
  wire              lui     ;
  wire              auipc   ;
  wire              jal     ;
  wire              jalr    ;
  wire              beq     ;
  wire              bne     ;
  wire              blt     ;
  wire              bge     ;
  wire              bltu    ;
  wire              bgeu    ;
  wire              lb      ;
  wire              lh      ;
  wire              lw      ;
  wire              ld      ;
  wire              lbu     ;
  wire              lhu     ;
  wire              lwu     ;
  wire              sb      ;
  wire              sh      ;
  wire              sw      ;
  wire              sd      ;
  wire              addi    ;
  wire              slti    ;
  wire              sltiu   ;
  wire              xori    ;
  wire              ori     ;
  wire              andi    ;
  wire              slli    ;
  wire              srli    ;
  wire              srai    ;
  wire              add     ;
  wire              sub     ;
  wire              sll     ;
  wire              slt     ;
  wire              sltu    ;
  wire              xor_    ;
  wire              srl     ;
  wire              sra     ;
  wire              or_     ;
  wire              and_    ;
  wire              addiw   ;
  wire              slliw   ;
  wire              srliw   ;
  wire              sraiw   ;
  wire              addw    ;
  wire              subw    ;
  wire              sllw    ;
  wire              srlw    ;
  wire              sraw    ;
  wire              mul     ;
  wire              mulh    ;
  wire              mulhsu  ;
  wire              mulhu   ;
  wire              div     ;
  wire              divu    ;
  wire              rem     ;
  wire              remu    ;
  wire              mulw    ;
  wire              divw    ;
  wire              divuw   ;
  wire              remw    ;
  wire              remuw   ;

decoder decoder_inst(
  .instr  ( instr  ) ,
  .imm    ( imm    ) ,
  .lui    ( lui    ) ,
  .auipc  ( auipc  ) ,
  .jal    ( jal    ) ,
  .jalr   ( jalr   ) ,
  .beq    ( beq    ) ,
  .bne    ( bne    ) ,
  .blt    ( blt    ) ,
  .bge    ( bge    ) ,
  .bltu   ( bltu   ) ,
  .bgeu   ( bgeu   ) ,
  .lb     ( lb     ) ,
  .lh     ( lh     ) ,
  .lw     ( lw     ) ,
  .ld     ( ld     ) ,
  .lbu    ( lbu    ) ,
  .lhu    ( lhu    ) ,
  .lwu    ( lwu    ) ,
  .sb     ( sb     ) ,
  .sh     ( sh     ) ,
  .sw     ( sw     ) ,
  .sd     ( sd     ) ,
  .addi   ( addi   ) ,
  .slti   ( slti   ) ,
  .sltiu  ( sltiu  ) ,
  .xori   ( xori   ) ,
  .ori    ( ori    ) ,
  .andi   ( andi   ) ,
  .slli   ( slli   ) ,
  .srli   ( srli   ) ,
  .srai   ( srai   ) ,
  .add    ( add    ) ,
  .sub    ( sub    ) ,
  .sll    ( sll    ) ,
  .slt    ( slt    ) ,
  .sltu   ( sltu   ) ,
  .xor_   ( xor_   ) ,
  .srl    ( srl    ) ,
  .sra    ( sra    ) ,
  .or_    ( or_    ) ,
  .and_   ( and_   ) ,
  .addiw  ( addiw  ) ,
  .slliw  ( slliw  ) ,
  .srliw  ( srliw  ) ,
  .sraiw  ( sraiw  ) ,
  .addw   ( addw   ) ,
  .subw   ( subw   ) ,
  .sllw   ( sllw   ) ,
  .srlw   ( srlw   ) ,
  .sraw   ( sraw   ) ,
  .mul    ( mul    ) ,
  .mulh   ( mulh   ) ,
  .mulhsu ( mulhsu ) ,
  .mulhu  ( mulhu  ) ,
  .div    ( div    ) ,
  .divu   ( divu   ) ,
  .rem    ( rem    ) ,
  .remu   ( remu   ) ,
  .mulw   ( mulw   ) ,
  .divw   ( divw   ) ,
  .divuw  ( divuw  ) ,
  .remw   ( remw   ) ,
  .remuw  ( remuw  ) ,
  .ebreak ( ebreak )  
);


wire  [63:0]  data_imm = imm ;
wire  [63:0]  data_rs1  ;
wire  [63:0]  data_rs2  ;

wire  wb_en ;
wire  [63:0]  wb_data ;

exu exu_inst(
  .pc        ( pc        )  ,
  .data_rs1  ( data_rs1  )  ,
  .data_rs2  ( data_rs2  )  ,
  .data_imm  ( data_imm  )  ,
  .lui       ( lui       )  ,
  .auipc     ( auipc     )  ,
  .addi      ( addi      )  ,
  .slti      ( slti      )  ,
  .sltiu     ( sltiu     )  ,
  .xori      ( xori      )  ,
  .ori       ( ori       )  ,
  .andi      ( andi      )  ,
  .slli      ( slli      )  ,
  .srli      ( srli      )  ,
  .srai      ( srai      )  ,
  .add       ( add       )  ,
  .sub       ( sub       )  ,
  .sll       ( sll       )  ,
  .slt       ( slt       )  ,
  .sltu      ( sltu      )  ,
  .xor_      ( xor_      )  ,
  .srl       ( srl       )  ,
  .sra       ( sra       )  ,
  .or_       ( or_       )  ,
  .and_      ( and_      )  ,
  .addiw     ( addiw     )  ,
  .slliw     ( slliw     )  ,
  .srliw     ( srliw     )  ,
  .sraiw     ( sraiw     )  ,
  .addw      ( addw      )  ,
  .subw      ( subw      )  ,
  .sllw      ( sllw      )  ,
  .srlw      ( srlw      )  ,
  .sraw      ( sraw      )  ,
  .mul       ( mul       )  ,
  .mulh      ( mulh      )  ,
  .mulhsu    ( mulhsu    )  ,
  .mulhu     ( mulhu     )  ,
  .div       ( div       )  ,
  .divu      ( divu      )  ,
  .rem       ( rem       )  ,
  .remu      ( remu      )  ,
  .mulw      ( mulw      )  ,
  .divw      ( divw      )  ,
  .divuw     ( divuw     )  ,
  .remw      ( remw      )  ,
  .remuw     ( remuw     )  ,
  .beq       ( beq       )  ,
  .bne       ( bne       )  ,
  .blt       ( blt       )  ,
  .bge       ( bge       )  ,
  .bltu      ( bltu      )  ,
  .bgeu      ( bgeu      )  ,
  .jal       ( jal       )  ,
  .jalr      ( jalr      )  ,
  .lb        ( lb        )  ,
  .lh        ( lh        )  ,
  .lw        ( lw        )  ,
  .ld        ( ld        )  ,
  .lbu       ( lbu       )  ,
  .lhu       ( lhu       )  ,
  .lwu       ( lwu       )  ,
  .sb        ( sb        )  ,
  .sh        ( sh        )  ,
  .sw        ( sw        )  ,
  .sd        ( sd        )  ,
  .wb_en     ( wb_en     )  ,
  .wb_data   ( wb_data   )  ,
  .jump_en   ( jump_en   )  ,
  .jump_pc   ( jump_pc   )  ,  
  .acs_en    ( acs_en    )  ,
  .acs_wr    ( acs_wr    )  ,
  .acs_bytes ( acs_bytes )  ,
  .acs_addr  ( acs_addr  )  ,  
  .acs_wdata ( acs_wdata )  ,
  .acs_rdata ( acs_rdata )    
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

