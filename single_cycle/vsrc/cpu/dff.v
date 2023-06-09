`include "default.v"

module dff
#(
  parameter DW = 1,
  parameter RST_VALUE = {DW{1'b0}}
) (
  input   wire              clk     ,
  input   wire              rstn    ,
  input   wire              en      ,
  input   wire    [DW-1:0]  d       ,
  output  wire    [DW-1:0]  q   
);

reg  [DW-1:0]  q_reg ;
always@(posedge clk) begin
  if(!rstn)
    q_reg <= RST_VALUE;
  else if (en)
    q_reg <= d ;
end

assign q = q_reg ;

endmodule

