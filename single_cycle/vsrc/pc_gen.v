`default_nettype none

module pc_gen(

  input   wire            clk       ,
  input   wire            rstn      ,

  input   wire    [63:0]  jump_pc   ,
  input   wire            jump_en   ,

  output  wire    [63:0]  pc
);

  wire  [63:0]  snpc = pc + 64'd4;

  wire  [63:0]  dnpc = ( {64{ jump_en}} & jump_pc ) |
                       ( {64{~jump_en}} & snpc    ) ;

  reg  pc_31 ;
  always@(posedge clk) begin
    if(!rstn)
      pc_31 <= 1'b1;
    else
      pc_31 <= dnpc[31];
  end

  wire  [31:0]  pc_63_32 ;
  dff #(32) pc_dff_h(clk, rstn, 1'b1, dnpc[63:32], pc_63_32);

  wire  [30:0]  pc_30_0 ;
  dff #(31) pc_dff_l(clk, rstn, 1'b1, dnpc[30:0], pc_30_0);

  assign  pc = { pc_63_32, pc_31, pc_30_0 } ;

endmodule

