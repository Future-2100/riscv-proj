`include "default.v"

module uart(
  input   wire          clk   ,
  input   wire          rstn  ,

  input   wire          cen   ,
  input   wire          wr    ,
  input   wire  [7:0]   wdata ,
  output  wire          error  
);

  always@(posedge clk) begin
    if(!rstn)
      $write("%c", 8'b0);
    else if( cen && wr )
      $write("%c", wdata);
  end

  assign error = cen && !wr ;

endmodule

