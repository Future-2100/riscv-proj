`include "default.v"

module timer(
  input   wire    clk  ,
  input   wire    rstn ,

  input   wire            ren    ,
  input   wire    [63:0]  raddr  ,
  output  wire    [63:0]  rdata   
);

reg  [63:0]  counter;
always@(posedge clk) begin
  if(!rstn)
    counter <= 64'b0;
  else
    counter <= counter + 1'b1;
end

wire    sel  =  ren && (raddr == 64'hb000_0000) ;

assign  rdata = sel ? counter : 64'b0;

endmodule



