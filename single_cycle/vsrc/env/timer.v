`include "default.v"

module timer(
  input   wire            clk    ,
  input   wire            rstn   ,

  input   wire            cen    ,
  input   wire            wr     ,
  output  wire [`XLEN-1:0]rdata  ,
  output  wire            error   
);


reg  [`XLEN-1:0]  counter;
always@(posedge clk) begin
  if(!rstn)
    counter <= `XLEN'b0;
  else
    counter <= counter + 1'b1;
end

assign rdata = (cen && !wr) ? counter : `XLEN'b0 ;
assign error =  cen &&  wr ;

endmodule

