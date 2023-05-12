`include "default.v"

module timer(
  input   wire            clk    ,
  input   wire            rstn   ,

  input   wire            cen    ,
  input   wire            wr     ,
  output  wire    [63:0]  rdata  ,
  output  wire            error   
);


reg  [63:0]  counter;
always@(posedge clk) begin
  if(!rstn)
    counter <= 64'b0;
  else
    counter <= counter + 1'b1;
end

assign rdata = (cen && !wr) ? counter : 64'b0 ;
assign error =  cen &&  wr ;

endmodule

