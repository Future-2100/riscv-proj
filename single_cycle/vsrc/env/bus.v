`include "default.v"

module bus (
  // cpu  data access interface
  input   wire          acs_en    ,
  input   wire          acs_wr    ,
  input   wire  [7:0]   acs_bytes ,
  input   wire  [63:0]  acs_addr  ,
  input   wire  [63:0]  acs_wdata ,
  output  wire  [63:0]  acs_rdata ,
  output  wire          acs_error ,

  // memory data access interface
  output   wire          mmy_cen   ,
  output   wire          mmy_wr    ,
  output   wire  [7:0]   mmy_strb  ,
  output   wire  [26:0]  mmy_addr  ,
  output   wire  [63:0]  mmy_wdata ,
  input    wire  [63:0]  mmy_rdata ,
  input    wire          mmy_error ,

  // uart data access interface
  output   wire          uart_cen   ,
  output   wire          uart_wr    ,
  output   wire  [7:0]   uart_wdata ,
  input    wire          uart_error ,

  //  timer data access interface
  output   wire          timer_cen   ,
  output   wire          timer_wr    ,
  input    wire  [63:0]  timer_rdata ,
  input    wire          timer_error 
);

  wire  en = ( acs_addr[63:32]==32'b0 ) && acs_en ;

  assign  mmy_cen    = en && (acs_addr[31:27] == 5'b1000_0);
  assign  mmy_wr     = acs_wr    ;
  assign  mmy_strb   = acs_bytes ;
  assign  mmy_addr   = acs_addr[26:0] ;
  assign  mmy_wdata  = acs_wdata ;

  assign  uart_cen   = en && (acs_addr[31:27] == 5'b1010_0);
  assign  uart_wr    = acs_wr ;
  assign  uart_wdata = acs_wdata[7:0]  ;

  assign  timer_cen = en && (acs_addr[31:27] == 5'b1011_0);
  assign  timer_wr  = acs_wr ;

  assign  acs_rdata = ( {64{mmy_cen  }} &   mmy_rdata ) |
                      ( {64{timer_cen}} & timer_rdata ) ;

  assign  acs_error =  ( mmy_cen  &   mmy_error) |
                       ( uart_cen &  uart_error) |
                       (timer_cen & timer_error) ;

endmodule

