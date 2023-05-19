`include "default.v"

module pc_gen(

  input   wire                 clk       ,
  input   wire                 rstn      ,

  input   wire    [`XLEN-1:0]  jump_pc   ,
  input   wire                 jump_en   ,

  output  wire    [`XLEN-1:0]  pc
);

  wire  [`XLEN-1:0]  snpc = pc + `XLEN'd4;

  wire  [`XLEN-1:0]  dnpc = ( {`XLEN{ jump_en}} & jump_pc ) |
                            ( {`XLEN{~jump_en}} & snpc    ) ;

  reg  pc_31 ;
  always@(posedge clk) begin
    if(!rstn)
      pc_31 <= 1'b1;
    else
      pc_31 <= dnpc[31];
  end

  wire  [30:0]  pc_30_0 ;
  dff #(31) pc_dff_l(clk, rstn, 1'b1, dnpc[30:0], pc_30_0);

`ifdef __RV64__
  wire  [31:0]  pc_63_32 ;
  dff #(32) pc_dff_h(clk, rstn, 1'b1, dnpc[`XLEN-1:32], pc_63_32);
`endif

  assign  pc = { 
`ifdef __RV64__
                  pc_63_32, 
`endif
                  pc_31   ,  
                  pc_30_0 
                } ;


endmodule

