`default_nettype none 

module top(
  output    wire   diff_clk   ,
  output    wire   diff_rstn   
);

  reg          clk         ;
  reg          rstn        ;
  wire [31:0]  instr       ;
  wire         acs_en      ;
  wire         acs_wr      ;
  wire [7:0]   acs_bytes   ;
  wire [63:0]  acs_addr    ;  
  wire [63:0]  acs_wdata   ;
  wire [63:0]  acs_rdata   ; 
  wire [63:0]  pc          ;
  wire         ebreak      ;


  assign diff_rstn = rstn;
  assign diff_clk  = clk ;


  initial begin: watching_dog
    #10000000 ;
    $display("\033[1;31m------------------------time out----------------------------\033[0m"); 
    $finish(2);
  end


  always #10 clk <= ~clk ;


  initial begin
    clk  = 1'b0;
    rstn = 1'b0;
    repeat(10) @(negedge clk) ;
    rstn = 1'b1;
  end

cpu cpu_inst (
  .clk        ( clk        )  ,
  .rstn       ( rstn       )  ,
  .pc         ( pc         )  ,
  .instr      ( instr      )  ,
  .acs_en     ( acs_en     )  ,
  .acs_wr     ( acs_wr     )  ,
  .acs_bytes  ( acs_bytes  )  ,
  .acs_addr   ( acs_addr   )  ,  
  .acs_wdata  ( acs_wdata  )  ,
  .acs_rdata  ( acs_rdata  )  ,
  .ebreak     ( ebreak     )   
);

memory memory_inst(
   .clk    ( clk       )  ,
   .pc     ( pc        )  ,
   .instr  ( instr     )  ,
   .en     ( acs_en    )  ,
   .wr     ( acs_wr    )  ,
   .strb   ( acs_bytes )  ,
   .addr   ( acs_addr  )  ,
   .wdata  ( acs_wdata )  ,
   .rdata  ( acs_rdata )  
);


  always@(posedge clk) begin
    if(ebreak) begin
      if( cpu_inst.regfile_inst.gpr[10] == 64'b0)
        $display("\033[1;32mSUCCESS\033[0m");
      else
        $display("\033[1;31mFAIL\033[1;31m");
      $finish(0);
    end
  end

  import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
  initial set_gpr_ptr(cpu_inst.regfile_inst.gpr);

  import "DPI-C" function void set_pc(input logic [63:0] b[]);
  initial set_pc(pc);

  /*
  import "DPI-C" function void set_pmem(input logic [7:0] c[]);
  initial set_pmem(memory_inst.data);
  */

  wire  _unused_ok = & { 1'b0,
                         acs_addr,
                         pc      ,
                         cpu_inst.regfile_inst.gpr_wen,
                         cpu_inst.exu_inst.productu,
                         cpu_inst.exu_inst.productsu,
                         cpu_inst.exu_inst.productw,
                         cpu_inst.decoder_inst.opcode_4_2__010,
                         cpu_inst.decoder_inst.opcode_4_2__111,
                         cpu_inst.decoder_inst.opcode_6_5__10 ,
                         memory_inst.pc,
                         memory_inst.addr
                       };

  string img_file ;
  initial begin
    if($value$plusargs("img_txt=%s", img_file)) begin
      $readmemb(img_file, memory_inst.data) ;
      $display("\033[1;33mLoad image : %s \033[0m ", img_file);
    end
    $dumpfile("wave.vcd");
    $dumpvars(0, tb);
  end

endmodule
