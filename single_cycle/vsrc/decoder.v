`default_nettype none

module decoder(

  input   wire    [31:0]    instr   ,

  output  wire    [63:0]    imm     ,

  output  wire              lui     ,
  output  wire              auipc   ,

  output  wire              jal     ,
  output  wire              jalr    ,

  output  wire              beq     ,
  output  wire              bne     ,
  output  wire              blt     ,
  output  wire              bge     ,
  output  wire              bltu    ,
  output  wire              bgeu    ,

  output  wire              lb      ,
  output  wire              lh      ,
  output  wire              lw      ,
  output  wire              ld      ,
  output  wire              lbu     ,
  output  wire              lhu     ,
  output  wire              lwu     ,

  output  wire              sb      ,
  output  wire              sh      ,
  output  wire              sw      ,
  output  wire              sd      ,

  output  wire              addi    ,
  output  wire              slti    ,
  output  wire              sltiu   ,
  output  wire              xori    ,
  output  wire              ori     ,
  output  wire              andi    ,
  output  wire              slli    ,
  output  wire              srli    ,
  output  wire              srai    ,

  output  wire              add     ,
  output  wire              sub     ,
  output  wire              sll     ,
  output  wire              slt     ,
  output  wire              sltu    ,
  output  wire              xor_    ,
  output  wire              srl     ,
  output  wire              sra     ,
  output  wire              or_     ,
  output  wire              and_    ,

  output  wire              addiw   ,
  output  wire              slliw   ,
  output  wire              srliw   ,
  output  wire              sraiw   ,
  output  wire              addw    ,
  output  wire              subw    ,
  output  wire              sllw    ,
  output  wire              srlw    ,
  output  wire              sraw    ,

  output  wire              mul     ,
  output  wire              mulh    ,
  output  wire              mulhsu  ,
  output  wire              mulhu   ,
  output  wire              div     ,
  output  wire              divu    ,
  output  wire              rem     ,
  output  wire              remu    ,

  output  wire              mulw    ,
  output  wire              divw    ,
  output  wire              divuw   ,
  output  wire              remw    ,
  output  wire              remuw   ,

  output  wire              ebreak   
);

wire  [6:0]   opcode  =  instr[6:0];
wire  [2:0]   funct3  =  instr[14:12];

wire          funct7_5 = instr[30];
wire          funct7_0 = instr[25];
wire  [4:0]   funct7__ = { instr[31], instr[29:26] } ;



wire  opcode_1_0__11  = opcode[1:0] == 2'b11;

wire  opcode_4_2__000 = opcode[4:2] == 3'b000;
wire  opcode_4_2__001 = opcode[4:2] == 3'b001;
wire  opcode_4_2__010 = opcode[4:2] == 3'b010;
wire  opcode_4_2__011 = opcode[4:2] == 3'b011;
wire  opcode_4_2__100 = opcode[4:2] == 3'b100;
wire  opcode_4_2__101 = opcode[4:2] == 3'b101;
wire  opcode_4_2__110 = opcode[4:2] == 3'b110;
wire  opcode_4_2__111 = opcode[4:2] == 3'b111;

wire  opcode_6_5__00  = opcode[6:5] == 2'b00 ;
wire  opcode_6_5__01  = opcode[6:5] == 2'b01 ;
wire  opcode_6_5__10  = opcode[6:5] == 2'b10 ;
wire  opcode_6_5__11  = opcode[6:5] == 2'b11 ;

wire  funct7__0000000  = (funct7_5 == 1'b0) && (funct7_0 == 1'b0) && (funct7__ == 5'b0);
wire  funct7__0100000  = (funct7_5 == 1'b1) && (funct7_0 == 1'b0) && (funct7__ == 5'b0);
wire  funct7__0000001  = (funct7_5 == 1'b0) && (funct7_0 == 1'b1) && (funct7__ == 5'b0);
wire  funct7__010000x  = (funct7_5 == 1'b1) && (funct7__ == 5'b0) ;
wire  funct7__000000x  = (funct7_5 == 1'b0) && (funct7__ == 5'b0) ;

wire  funct3__000 = (funct3 == 3'b000)  ;
wire  funct3__001 = (funct3 == 3'b001)  ;
wire  funct3__010 = (funct3 == 3'b010)  ;
wire  funct3__011 = (funct3 == 3'b011)  ;
wire  funct3__100 = (funct3 == 3'b100)  ;
wire  funct3__101 = (funct3 == 3'b101)  ;
wire  funct3__110 = (funct3 == 3'b110)  ;
wire  funct3__111 = (funct3 == 3'b111)  ;

assign  lui   = opcode_6_5__01 & opcode_4_2__101 & opcode_1_0__11 ;
assign  auipc = opcode_6_5__00 & opcode_4_2__101 & opcode_1_0__11 ;
assign  jal   = opcode_6_5__11 & opcode_4_2__011 & opcode_1_0__11 ;
assign  jalr  = opcode_6_5__11 & opcode_4_2__001 & opcode_1_0__11 ;

wire  branch = opcode_6_5__11 & opcode_4_2__000 & opcode_1_0__11 ;
wire  load   = opcode_6_5__00 & opcode_4_2__000 & opcode_1_0__11 ;
wire  store  = opcode_6_5__01 & opcode_4_2__000 & opcode_1_0__11 ;
wire  arithi = opcode_6_5__00 & opcode_4_2__100 & opcode_1_0__11 ;
wire  arithiw= opcode_6_5__00 & opcode_4_2__110 & opcode_1_0__11 ;
wire  arith  = opcode_6_5__01 & opcode_4_2__100 & opcode_1_0__11 ;
wire  arithw = opcode_6_5__01 & opcode_4_2__110 & opcode_1_0__11 ;
wire  system = opcode_6_5__11 & opcode_4_2__100 & opcode_1_0__11 ;

assign beq  = branch & funct3__000;
assign bne  = branch & funct3__001;
assign blt  = branch & funct3__100;
assign bge  = branch & funct3__101;
assign bltu = branch & funct3__110;
assign bgeu = branch & funct3__111;

assign  lb  = load & funct3__000 ;
assign  lh  = load & funct3__001 ;
assign  lw  = load & funct3__010 ;
assign  ld  = load & funct3__011 ;
assign  lbu = load & funct3__100 ;
assign  lhu = load & funct3__101 ;
assign  lwu = load & funct3__110 ;

assign  sb  = store & funct3__000 ;
assign  sh  = store & funct3__001 ;
assign  sw  = store & funct3__010 ;
assign  sd  = store & funct3__011 ;

assign addi =  arithi & funct3__000 ;
assign slti  = arithi & funct3__010 ;
assign sltiu = arithi & funct3__011 ;
assign xori  = arithi & funct3__100 ;
assign ori   = arithi & funct3__110 ;
assign andi  = arithi & funct3__111 ;
assign slli  = arithi & funct3__001 & funct7__000000x ;
assign srli  = arithi & funct3__101 & funct7__000000x ;
assign srai  = arithi & funct3__101 & funct7__010000x ;

assign add   = arith  & funct3__000 & funct7__0000000 ;
assign sub   = arith  & funct3__000 & funct7__0100000 ;
assign sll   = arith  & funct3__001 & funct7__0000000 ;
assign slt   = arith  & funct3__010 & funct7__0000000 ;
assign sltu  = arith  & funct3__011 & funct7__0000000 ;
assign xor_  = arith  & funct3__100 & funct7__0000000 ;
assign srl   = arith  & funct3__101 & funct7__0000000 ;
assign sra   = arith  & funct3__101 & funct7__0100000 ;
assign or_   = arith  & funct3__110 & funct7__0000000 ;
assign and_  = arith  & funct3__111 & funct7__0000000 ;

assign addiw = arithiw & funct3__000 ;
assign slliw = arithiw & funct3__001 & funct7__0000000 ;
assign srliw = arithiw & funct3__101 & funct7__0000000 ;
assign sraiw = arithiw & funct3__101 & funct7__0100000 ;

assign addw  = arithw & funct3__000 & funct7__0000000 ;
assign subw  = arithw & funct3__000 & funct7__0100000 ;
assign sllw  = arithw & funct3__001 & funct7__0000000 ;
assign srlw  = arithw & funct3__101 & funct7__0000000 ;
assign sraw  = arithw & funct3__101 & funct7__0100000 ;

assign mul   = arith & funct3__000 & funct7__0000001 ;
assign mulh  = arith & funct3__001 & funct7__0000001 ;
assign mulhsu= arith & funct3__010 & funct7__0000001 ;
assign mulhu = arith & funct3__011 & funct7__0000001 ;
assign div   = arith & funct3__100 & funct7__0000001 ; 
assign divu  = arith & funct3__101 & funct7__0000001 ; 
assign rem   = arith & funct3__110 & funct7__0000001 ; 
assign remu  = arith & funct3__111 & funct7__0000001 ; 

assign mulw  = arithw & funct3__000 & funct7__0000001 ; 
assign divw  = arithw & funct3__100 & funct7__0000001 ; 
assign divuw = arithw & funct3__101 & funct7__0000001 ; 
assign remw  = arithw & funct3__110 & funct7__0000001 ; 
assign remuw = arithw & funct3__111 & funct7__0000001 ; 
      
assign ebreak = system & funct3__000 & funct7__0000000 & 
                (instr[24:20]==5'b1) & (instr[19:15]==5'b0) & 
                (instr[11:7] ==5'b0) ;


wire  I_type = load | jalr | arithi | arithiw;
wire  S_type = store  ;
wire  B_type = branch ;
wire  U_type = lui | auipc ;
wire  J_type = jal ;

wire imm_0 = (I_type & instr[20]) | 
             (S_type & instr[7] ) ; 

wire  [3:0]  imm_4_1 = ({4{I_type | J_type}} & instr[24:21]) |
                       ({4{S_type | B_type}} & instr[11:08]) ;


wire  [5:0]  imm_10_5 = ( {6{I_type | S_type | B_type | J_type}} & instr[30:25] ) ;

wire  imm_11 = ( (I_type | S_type) & instr[31] ) | 
               (  B_type & instr[7] ) |
               (  J_type & instr[20]) ;

wire  [7:0]  imm_19_12 = ( {8{I_type | S_type | B_type}} & {8{instr[31]}} ) |
                         ( {8{U_type | J_type}} & instr[19:12] ) ;

wire  [10:0] imm_30_20 = ( {11{I_type | S_type | B_type | J_type }} & {11{instr[31]}} ) | 
                         ( {11{U_type}} & instr[30:20] ) ;

wire  [32:0] imm_63_31 = {33{instr[31]}} ;

assign imm = { imm_63_31, imm_30_20, imm_19_12, imm_11, imm_10_5, imm_4_1, imm_0 } ;

endmodule

