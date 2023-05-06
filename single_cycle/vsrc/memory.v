`include "default.v"

module memory(
  input   wire          clk    ,

  input   wire  [63:0]  pc     ,
  output  wire  [31:0]  instr  ,

  input   wire          en     ,
  input   wire          wr     ,
  input   wire  [7:0]   strb   ,
  input   wire  [63:0]  addr   ,
  input   wire  [63:0]  wdata  ,
  output  wire  [63:0]  rdata  

);


wire  i_csel  =  (pc[63:32]  ==32'b0) && (pc[31:27]   == 5'b1_0000) ;

wire  d_csel  =  en && (addr[63:32]==32'b0) && (addr[31:27] == 5'b1_0000) ;

wire  [26:0]  iaddr   =    pc[26:0] ;
wire  [26:0]  daddr   =  addr[26:0] ;

reg  [7:0]  data[27'h7ff_ffff:27'h0];  // 128MB

// 000_00000 : 7ff_ffff
//
// 1000_00000...000   
// 0000_00000...000 

wire  [7:0]  instr_byte_0 = {8{i_csel}} & data[iaddr]      ;
wire  [7:0]  instr_byte_1 = {8{i_csel}} & data[iaddr+27'd1];
wire  [7:0]  instr_byte_2 = {8{i_csel}} & data[iaddr+27'd2];
wire  [7:0]  instr_byte_3 = {8{i_csel}} & data[iaddr+27'd3];

wire  [7:0]  rdata_byte_0 = data[daddr]      ;
wire  [7:0]  rdata_byte_1 = data[daddr+27'd1];
wire  [7:0]  rdata_byte_2 = data[daddr+27'd2];
wire  [7:0]  rdata_byte_3 = data[daddr+27'd3];
wire  [7:0]  rdata_byte_4 = data[daddr+27'd4];
wire  [7:0]  rdata_byte_5 = data[daddr+27'd5];
wire  [7:0]  rdata_byte_6 = data[daddr+27'd6];
wire  [7:0]  rdata_byte_7 = data[daddr+27'd7];


/*
wire  [26:0]  apc   =   pc[26:0];
wire  [26:0]  aaddr = addr[26:0];
reg  [7:0]  data[64'h7ff_ffff:64'h0];

wire  [7:0]  instr_byte_0 = data[apc]  ;
wire  [7:0]  instr_byte_1 = data[apc+27'd1];
wire  [7:0]  instr_byte_2 = data[apc+27'd2];
wire  [7:0]  instr_byte_3 = data[apc+27'd3];

wire  [7:0]  rdata_byte_0 = data[aaddr]  ;
wire  [7:0]  rdata_byte_1 = data[aaddr+27'd1];
wire  [7:0]  rdata_byte_2 = data[aaddr+27'd2];
wire  [7:0]  rdata_byte_3 = data[aaddr+27'd3];
wire  [7:0]  rdata_byte_4 = data[aaddr+27'd4];
wire  [7:0]  rdata_byte_5 = data[aaddr+27'd5];
wire  [7:0]  rdata_byte_6 = data[aaddr+27'd6];
wire  [7:0]  rdata_byte_7 = data[aaddr+27'd7];
*/

assign   instr  =  { instr_byte_3, instr_byte_2, instr_byte_1, instr_byte_0 } ;

wire  [63:0]  rdata_64 = { rdata_byte_7, rdata_byte_6, rdata_byte_5, rdata_byte_4, rdata_byte_3, rdata_byte_2, rdata_byte_1, rdata_byte_0 } ;

wire  [63:0]  rmask;
genvar i;
generate
  for(i=0;i<8;i=i+1) begin
    assign rmask[i*8+7:i*8] = {8{strb[i]}} ;
  end
endgenerate
assign  rdata = ( d_csel && !wr )? (rmask & rdata_64) : 64'b0 ;


wire  [7:0]  wen  =  strb ;

generate
  for(i=0; i<8; i=i+1) begin
    always@(posedge clk) begin
      if(d_csel && wr && wen[i])
        data[daddr+i] <= wdata[i*8+7:i*8];
    end
  end
endgenerate


endmodule

