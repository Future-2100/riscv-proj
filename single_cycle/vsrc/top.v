`include "default.v"

module top(
  output    wire   diff_clk   ,
  output    wire   diff_rstn   
);

  reg               clk         ;
  reg               rstn        ;
  wire [31:0]       instr       ;
  wire              acs_en      ;
  wire              acs_wr      ;
  wire [`XLEN/8-1:0]acs_bytes   ;
  wire [`XLEN-1:0]  acs_addr    ;  
  wire [`XLEN-1:0]  acs_wdata   ;
  wire [`XLEN-1:0]  acs_rdata   ; 
  wire              acs_error   ;
  wire [`XLEN-1:0]  pc          ;
  wire              ebreak      ;


  assign diff_rstn = rstn;
  assign diff_clk  = clk ;


`ifdef __DIFFTEST__
  initial begin: watching_dog
    #(70000*`PERIOD) ;
    $display("\033[1;31m------------------------time out----------------------------\033[0m"); 
    $finish;
  end
`endif


  always #(`PERIOD/2) clk <= ~clk ;


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


  wire                 mmy_cen     ;
  wire                 mmy_wr      ;
  wire  [`XLEN/8-1:0]  mmy_strb    ;
  wire  [26:0]         mmy_addr    ;
  wire  [`XLEN-1:0]    mmy_wdata   ;
  wire  [`XLEN-1:0]    mmy_rdata   ;
  wire                 mmy_error   ;

  wire                 uart_cen    ;
  wire                 uart_wr     ;
  wire  [7:0]          uart_wdata  ;
  wire                 uart_error  ;

  wire                 timer_cen   ;
  wire                 timer_wr    ;
  wire  [`XLEN-1:0]    timer_rdata ;
  wire                 timer_error ;


bus bus_inst (
  .acs_en      ( acs_en      )  ,
  .acs_wr      ( acs_wr      )  ,
  .acs_bytes   ( acs_bytes   )  ,
  .acs_addr    ( acs_addr    )  ,
  .acs_wdata   ( acs_wdata   )  ,
  .acs_rdata   ( acs_rdata   )  ,
  .acs_error   ( acs_error   )  ,
                            
  .mmy_cen     ( mmy_cen     )  ,
  .mmy_wr      ( mmy_wr      )  ,
  .mmy_strb    ( mmy_strb    )  ,
  .mmy_addr    ( mmy_addr    )  ,
  .mmy_wdata   ( mmy_wdata   )  ,
  .mmy_rdata   ( mmy_rdata   )  ,
  .mmy_error   ( mmy_error   )  ,
                            
  .uart_cen    ( uart_cen    )  ,
  .uart_wr     ( uart_wr     )  ,
  .uart_wdata  ( uart_wdata  )  ,
  .uart_error  ( uart_error  )  ,
                            
  .timer_cen   ( timer_cen   )  ,
  .timer_wr    ( timer_wr    )  ,
  .timer_rdata ( timer_rdata )  ,
  .timer_error ( timer_error )  
);



  //wire  mmy_icen = (pc[`XLEN-1:32]==32'b0) && (pc[31:27]==5'b1000_0) ;
  
  `ifdef __RV64__
    wire  pc_error = (pc[`XLEN-1:32] != 32'b0) && (pc[`XLEN-1:32] != 32'hffff_ffff) ;
  `else
    wire  pc_error = 1'b0;
  `endif

  wire  mmy_icen =  (pc[31:27]==5'b1000_0) && !pc_error ;
  wire  [26:0]  mmy_iaddr = pc[26:0] ;

memory memory_inst(
   .clk    ( clk       )  ,
   .icen   ( mmy_icen  )  ,
   .iaddr  ( mmy_iaddr )  ,
   .instr  ( instr     )  ,

   .dcen   ( mmy_cen   )  ,
   .wr     ( mmy_wr    )  ,
   .strb   ( mmy_strb  )  ,
   .daddr  ( mmy_addr  )  ,
   .wdata  ( mmy_wdata )  ,
   .rdata  ( mmy_rdata )  ,
   .error  ( mmy_error )  
);


uart  uart_inst(
  .clk   ( clk        ) ,
  .rstn  ( rstn       ) ,
  .cen   ( uart_cen   ) ,
  .wr    ( uart_wr    ) ,
  .wdata ( uart_wdata ) ,
  .error ( uart_error )
);


timer timer_inst(
  .clk    ( clk         ) ,
  .rstn   ( rstn        ) ,
  .cen    ( timer_cen   ) ,
  .wr     ( timer_wr    ) ,
  .rdata  ( timer_rdata ) ,
  .error  ( timer_error ) 
);


  always@(posedge clk) begin
    if(ebreak) begin
      if( cpu_inst.regfile_inst.gpr[10] == `XLEN'b0)
        $display("\033[1;32mSUCCESS at %0tns\033[0m", $time);
      else
        $display("\033[1;31mFAIL\033[1;31m");
      $finish;
    end
  end

  always@(posedge clk) begin:access_error
    if(acs_error | pc_error) begin
        $display("\033[1;31mACCSEE FAIL at %0tns\033[0m", $time);
        $finish;
    end
  end:access_error

  import "DPI-C" function void set_gpr_ptr(input logic [`XLEN-1:0] a []);
  initial set_gpr_ptr(cpu_inst.regfile_inst.gpr);

  import "DPI-C" function void set_pc(input logic [`XLEN-1:0] b[]);
  initial set_pc(pc);


  wire  _unused_ok = & { 1'b0
                         , cpu_inst.decoder_inst.opcode_4_2__010
                         , cpu_inst.decoder_inst.opcode_4_2__111
                         , cpu_inst.decoder_inst.opcode_4_2__110
                         , cpu_inst.decoder_inst.opcode_6_5__10  
                         , cpu_inst.regfile_inst.gpr_wen
                         , cpu_inst.exu_inst.rs2_00000
                         , cpu_inst.exu_inst.alu_inst.sum
                         , cpu_inst.exu_inst.alu_inst.discuss
                         , cpu_inst.exu_inst.alu_inst.remainder
                       `ifdef __RV64__
                       `endif
                       };

  string img_file ;
  initial begin
    if($value$plusargs("img_txt=%s", img_file)) begin
      $readmemb(img_file, memory_inst.data) ;
      $display("\033[1;33mLoad image : %s \033[0m ", img_file);
    end
`ifdef __WAVE__
    $dumpfile("wave.vcd");
    $dumpvars();
    //$dumpvars(0, tb);
`endif
  end

endmodule

