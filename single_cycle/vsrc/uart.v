`include "default.v"

module uart(
  input   wire          clk   ,
  input   wire          rstn  ,

  input   wire          wen   ,
  input   wire  [63:0]  wdata ,
  input   wire  [63:0]  waddr 
);

  wire  [7:0]  char  = wdata[7:0] ;

  wire  out_en = wen && (waddr==64'ha000_0000) ;

  always@(posedge clk) begin
    if(!rstn)
      $write("%c", 8'b0);
    else if( out_en )
      $write("%c", char);
  end

endmodule

