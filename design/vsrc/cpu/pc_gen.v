`include "default.v"

module pc_gen(

  input   wire                 clk       ,
  input   wire                 rstn      ,

  input   wire    [`XLEN-1:0]  jump_pc   ,
  input   wire                 jump_en   ,

  output  wire    [`XLEN-1:0]  snxt_pc   ,
  output  wire    [`XLEN-1:0]  pc

);

  assign  snxt_pc = pc + `XLEN'd4;

  wire  [`XLEN-1:0]  dnpc = ( {`XLEN{ jump_en}} & jump_pc ) |
                            ( {`XLEN{~jump_en}} & snxt_pc ) ;

  dff #(`XLEN, `XLEN'h8000_0000) pc_reg(clk, rstn, 1'b1, dnpc, pc);

endmodule

