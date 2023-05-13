`include "default.v"

module memory(
  input   wire          clk    ,

  input   wire          icen   ,
  input   wire  [26:0]  iaddr  ,
  output  wire  [31:0]  instr  ,

  input   wire          dcen   ,
  input   wire          wr     ,
  input   wire  [7:0]   strb   ,
  input   wire  [26:0]  daddr  ,
  input   wire  [63:0]  wdata  ,
  output  wire  [63:0]  rdata  ,
  output  wire          error   
);


reg  [7:0]  data[27'h7ff_ffff:27'h0];  // 128MB

wire  [7:0]  instr_byte_0 = {8{icen}} & data[iaddr]      ;
wire  [7:0]  instr_byte_1 = {8{icen}} & data[iaddr+27'd1];
wire  [7:0]  instr_byte_2 = {8{icen}} & data[iaddr+27'd2];
wire  [7:0]  instr_byte_3 = {8{icen}} & data[iaddr+27'd3];

assign   instr  =  { instr_byte_3, instr_byte_2, instr_byte_1, instr_byte_0 } ;


wire  [7:0]  rdata_byte_0 = data[daddr]      ;
wire  [7:0]  rdata_byte_1 = data[daddr+27'd1];
wire  [7:0]  rdata_byte_2 = data[daddr+27'd2];
wire  [7:0]  rdata_byte_3 = data[daddr+27'd3];
wire  [7:0]  rdata_byte_4 = data[daddr+27'd4];
wire  [7:0]  rdata_byte_5 = data[daddr+27'd5];
wire  [7:0]  rdata_byte_6 = data[daddr+27'd6];
wire  [7:0]  rdata_byte_7 = data[daddr+27'd7];

wire  [63:0]  rdata_64 = { rdata_byte_7, rdata_byte_6, rdata_byte_5, rdata_byte_4, rdata_byte_3, rdata_byte_2, rdata_byte_1, rdata_byte_0 } ;

wire  [63:0]  rmask;
genvar i;
generate
  for(i=0;i<8;i=i+1) begin
    assign rmask[i*8+7:i*8] = {8{strb[i]}} ;
  end
endgenerate

assign  rdata = ( dcen && !wr )? (rmask & rdata_64) : 64'b0 ;

wire  [7:0]  wen  =  strb ;

generate
  for(i=0; i<8; i=i+1) begin
    always@(posedge clk) begin
      if(dcen && wr && wen[i])
        data[daddr+i] <= wdata[i*8+7:i*8];
    end
  end
endgenerate

assign error = 1'b0 ;

endmodule

