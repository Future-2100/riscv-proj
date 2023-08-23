`include "default.v"

module decoder(

  input   wire    [31:0]         instr           ,
  output  wire    [`XLEN-1:0]    data_imm        ,

  output  wire                   lui             ,
  output  wire                   auipc           ,
  output  wire                   jal             ,
  output  wire                   jalr            ,
  output  wire                   branch          ,
  output  wire                   load            ,
  output  wire                   store           ,
  output  wire                   arith           ,
  output  wire                   arithi          ,
  output  wire                   system          ,

  output  wire                   funct7_0000000 , 
  output  wire                   funct7_0100000 , 
  output  wire                   funct7_0000001 , 

  output  wire                   funct3_000     ,
  output  wire                   funct3_001     ,
  output  wire                   funct3_010     ,
  output  wire                   funct3_011     ,
  output  wire                   funct3_100     ,
  output  wire                   funct3_101     ,
  output  wire                   funct3_110     ,
  output  wire                   funct3_111     ,

  output  wire                   rs2_00000      ,
  output  wire                   rs2_00001      ,
  output  wire                   rs1_00000      ,
  output  wire                   rd__00000      

`ifdef __RV64__
 , output  wire                   arithw         
 , output  wire                   arithiw        
 , output  wire                   funct7_000000x  
 , output  wire                   funct7_010000x  
`endif
);

wire  [6:0]   opcode  =  instr[6:0];
wire  [2:0]   funct3  =  instr[14:12];

wire          funct7_5 = instr[30];
wire          funct7_0 = instr[25];
wire  [4:0]   funct7__ = { instr[31], instr[29:26] } ;



//wire  opcode_1_0__00  = opcode[1:0] == 2'b00;
//wire  opcode_1_0__01  = opcode[1:0] == 2'b01;
//wire  opcode_1_0__10  = opcode[1:0] == 2'b10;
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
  
  assign  funct7_0000000  = (funct7_5 == 1'b0) && (funct7_0 == 1'b0) && (funct7__ == 5'b0);
  assign  funct7_0100000  = (funct7_5 == 1'b1) && (funct7_0 == 1'b0) && (funct7__ == 5'b0);
  assign  funct7_0000001  = (funct7_5 == 1'b0) && (funct7_0 == 1'b1) && (funct7__ == 5'b0);
`ifdef __RV64__
  assign  funct7_010000x  = (funct7_5 == 1'b1) && (funct7__ == 5'b0) ;
  assign  funct7_000000x  = (funct7_5 == 1'b0) && (funct7__ == 5'b0) ;
`endif

  assign  funct3_000 = (funct3 == 3'b000)  ;
  assign  funct3_001 = (funct3 == 3'b001)  ;
  assign  funct3_010 = (funct3 == 3'b010)  ;
  assign  funct3_011 = (funct3 == 3'b011)  ;
  assign  funct3_100 = (funct3 == 3'b100)  ;
  assign  funct3_101 = (funct3 == 3'b101)  ;
  assign  funct3_110 = (funct3 == 3'b110)  ;
  assign  funct3_111 = (funct3 == 3'b111)  ;

  assign  rs2_00000  = (instr[24:20] == 5'b00000) ;
  assign  rs2_00001  = (instr[24:20] == 5'b00001) ;
  assign  rs1_00000  = (instr[19:15] == 5'b00000) ;
  assign  rd__00000  = (instr[11:07] == 5'b00000) ;

  assign  lui    = opcode_6_5__01 & opcode_4_2__101 & opcode_1_0__11 ;
  assign  auipc  = opcode_6_5__00 & opcode_4_2__101 & opcode_1_0__11 ;
  assign  jal    = opcode_6_5__11 & opcode_4_2__011 & opcode_1_0__11 ;
  assign  jalr   = opcode_6_5__11 & opcode_4_2__001 & opcode_1_0__11 ;
  assign  branch = opcode_6_5__11 & opcode_4_2__000 & opcode_1_0__11 ;
  assign  load   = opcode_6_5__00 & opcode_4_2__000 & opcode_1_0__11 ;
  assign  store  = opcode_6_5__01 & opcode_4_2__000 & opcode_1_0__11 ;
  assign  arithi = opcode_6_5__00 & opcode_4_2__100 & opcode_1_0__11 ;
  assign  arith  = opcode_6_5__01 & opcode_4_2__100 & opcode_1_0__11 ;
  assign  system = opcode_6_5__11 & opcode_4_2__100 & opcode_1_0__11 ;
`ifdef __RV64__
  assign  arithw = opcode_6_5__01 & opcode_4_2__110 & opcode_1_0__11 ;
  assign  arithiw= opcode_6_5__00 & opcode_4_2__110 & opcode_1_0__11 ;
`endif

      
wire  I_type =   load | jalr | arithi 
`ifdef __RV64__
               | arithiw
`endif
               ;

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

wire   imm_31 = instr[31] ;

`ifdef __RV64__
  wire  [31:0] imm_63_32 = {32{instr[31]}} ;
`endif

assign data_imm = { 
  `ifdef __RV64__
    imm_63_32, 
  `endif
    imm_31, 
    imm_30_20, 
    imm_19_12, 
    imm_11, 
    imm_10_5, 
    imm_4_1, 
    imm_0 
  } ;

endmodule

