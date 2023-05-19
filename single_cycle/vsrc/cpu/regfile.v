`include "default.v"

module regfile (
  input   wire                   wen       ,
  input   wire    [4:0]          index_rd  ,
  input   wire    [`XLEN-1:0]    data_rd   ,

  input   wire    [4:0]          index_rs1 ,
  output  wire    [`XLEN-1:0]    data_rs1  ,

  input   wire    [4:0]          index_rs2 ,
  output  wire    [`XLEN-1:0]    data_rs2  ,

  input   wire              clk       ,
  input   wire              rstn      
);

  //wire  clkn = ~clk;

  wire  [`XLEN-1:0]  gpr  [31:0]  ;
  wire  [31:0]  gpr_wen      ;

  genvar i;
  generate
    for (i=0; i<32; i=i+1) begin

      if(i==0) begin
        assign gpr_wen[i] = 1'b0;
        assign gpr[i] = `XLEN'b0;
      end else begin
        assign gpr_wen[i] = wen & (index_rd == i);
        dff #(`XLEN) gpr_dff(clk, rstn, gpr_wen[i], data_rd, gpr[i]);
      end

    end
  endgenerate

  assign  data_rs1 =  gpr[index_rs1] ;
  assign  data_rs2 =  gpr[index_rs2] ;

endmodule

