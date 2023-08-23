`include "default.v"

module alu(
  input   wire  [`XLEN-1:0]   op_data1    ,
  input   wire  [`XLEN-1:0]   op_data2    ,

  input   wire                op_add      ,
  input   wire                op_sub      ,
  input   wire                op_and      ,
  input   wire                op_or       ,
  input   wire                op_xor      ,
  input   wire                op_sll      ,
  input   wire                op_srl      ,
  input   wire                op_sra      ,
  input   wire                op_lt       ,
  input   wire                op_ltu      ,
  input   wire                op_ge       ,
  input   wire                op_geu      ,
  input   wire                op_eq       ,
  input   wire                op_ne       ,

  input   wire                op_mul      ,
  input   wire                op_mulh     ,
  input   wire                op_mulhsu   ,
  input   wire                op_mulhu    ,
  input   wire                op_div      ,
  input   wire                op_divu     ,
  input   wire                op_rem      ,
  input   wire                op_remu     ,


  output  wire  [`XLEN-1:0]   op_rslt      

);


//************************* adder **********************************//
wire  [`XLEN+3:0]   adder_in1;
wire  [`XLEN+3:0]   adder_in2;
wire                cin      ;

wire  [`XLEN+3:0] sum = adder_in1 + adder_in2 + {{(`XLEN+3){1'b0}},cin} ;

// signed extend the opdata1
wire    opdata1_sext = op_add | op_sub | op_lt | op_ge ;
assign  adder_in1 = { {4{opdata1_sext&op_data1[`XLEN-1]}}, op_data1 };


// fetch the complement of opdata2
wire    opdata2_sext_noinv = op_add;
wire    opdata2_sext_inv   = op_sub | op_lt | op_ge ;
wire    opdata2_uext_inv   = op_ltu | op_geu ;

wire  [`XLEN-1:0]   adder_in2_xlen = ( {`XLEN{opdata2_sext_noinv                 }} &  op_data2 ) |  
                                     ( {`XLEN{opdata2_sext_inv | opdata2_uext_inv}} & ~op_data2 ) ;

wire  [3:0]  adder_in2_extbits =  ( {4{opdata2_sext_noinv &  op_data2[`XLEN-1]}}  ) |
                                  ( {4{opdata2_sext_inv   & ~op_data2[`XLEN-1]}}  ) |
                                  ( {4{opdata2_uext_inv   &    1'b1           }}  ) ;

assign  adder_in2 = { adder_in2_extbits, adder_in2_xlen } ;


//  cin=1'b1 if subtraction is needed, otherwise cin=0 
assign  cin = op_sub | op_ltu | op_lt | op_geu | op_ge ;


//  deal with the result of comparisions
wire  [`XLEN-1:0]   ltx_rslt = { {(`XLEN-1){1'b0}},  sum[`XLEN+3] } ;
wire  [`XLEN-1:0]   gex_rslt = { {(`XLEN-1){1'b0}}, ~sum[`XLEN+3] } ;



//**************************** and  or  xor ***************************//
wire  [`XLEN-1:0]  or_rslt  = op_data1 | op_data2;
wire  [`XLEN-1:0]  and_rslt = op_data1 & op_data2;
wire  [`XLEN-1:0]  xor_rslt = op_data1 ^ op_data2;

wire  ne = |xor_rslt ;
wire  [`XLEN-1:0]  ne_rslt  =  { {(`XLEN-1){1'b0}},  ne } ;
wire  [`XLEN-1:0]  eq_rslt  =  { {(`XLEN-1){1'b0}}, !ne } ;


//**************************** shift logic ***************************//
wire  [`XLEN-1:0]   be_sr_data = op_data1 ;

wire  [`XLEN-1:0]  be_sl_data;
genvar i;
generate
  for(i=0; i<`XLEN; i=i+1) begin
    assign be_sl_data[i] = op_data1[`XLEN-i-1];
  end
endgenerate

wire  [`XLEN-1:0]  srl_in1 =  ( {`XLEN{op_sll       }} & be_sl_data ) |
                              ( {`XLEN{op_srl|op_sra}} & be_sr_data ) ;

wire  [$clog2(`XLEN)-1:0] srl_in2 = op_data2[$clog2(`XLEN)-1:0]  ;
wire  [`XLEN-1:0]  srl_rslt = srl_in1 >> srl_in2 ;

wire  [`XLEN-1:0]  sra_mask = (~(`XLEN'b0)) >> op_data2[$clog2(`XLEN)-1:0];

wire  [`XLEN-1:0]  sra_rslt = (srl_rslt & sra_mask) | ( {`XLEN{op_data1[`XLEN-1]}} & ~sra_mask ) ;
wire  [`XLEN-1:0]  sll_rslt ;
generate
  for(i=0; i<`XLEN; i=i+1) begin
    assign sll_rslt[i] = srl_rslt[`XLEN-i-1];
  end
endgenerate


//**************************** multipiler ***************************//
wire  [`XLEN*2-1:0]   multipiler_in1;
wire  [`XLEN*2-1:0]   multipiler_in2;
wire  [`XLEN*2-1:0]   product = multipiler_in1 * multipiler_in2 ;

assign  multipiler_in1[`XLEN-1:0] = op_data1;
assign  multipiler_in2[`XLEN-1:0] = op_data2;

assign  multipiler_in1[`XLEN*2-1:`XLEN]  =   {`XLEN{ (op_mul|op_mulh|op_mulhsu) & op_data1[`XLEN-1] }}  ;
assign  multipiler_in2[`XLEN*2-1:`XLEN]  =   {`XLEN{ (op_mul|op_mulh          ) & op_data2[`XLEN-1] }}  ;

wire  [`XLEN-1:0]      mul_rslt = product[`XLEN-1:0];
wire  [`XLEN-1:0]   mulhxx_rslt = product[`XLEN*2-1:`XLEN];


//**************************** divider *****************************//
wire  [`XLEN:0]  divider_in1;
wire  [`XLEN:0]  divider_in2;
wire  [`XLEN:0]  discuss   = divider_in1 / divider_in2;
wire  [`XLEN:0]  remainder = divider_in1 % divider_in2;

assign  divider_in1 = { ((op_div|op_rem)&op_data1[`XLEN-1]) , op_data1 };
assign  divider_in2 = { ((op_div|op_rem)&op_data2[`XLEN-1]) , op_data2 };

wire  [`XLEN-1:0]   divx_rslt =   discuss[`XLEN-1:0]  ;
wire  [`XLEN-1:0]   remx_rslt = remainder[`XLEN-1:0]  ;


//**************************** result *****************************//
assign  op_rslt  =  ( {`XLEN{op_add|op_sub}}  &  sum[`XLEN-1:0] )  
                 |  ( {`XLEN{op_and       }}  &  and_rslt )
                 |  ( {`XLEN{op_or        }}  &   or_rslt )
                 |  ( {`XLEN{op_xor       }}  &  xor_rslt )
                 |  ( {`XLEN{op_sll       }}  &  sll_rslt )
                 |  ( {`XLEN{op_srl       }}  &  srl_rslt )
                 |  ( {`XLEN{op_sra       }}  &  sra_rslt )
                 |  ( {`XLEN{op_ltu|op_lt }}  &  ltx_rslt )
                 |  ( {`XLEN{op_geu|op_ge }}  &  gex_rslt )
                 |  ( {`XLEN{op_eq        }}  &   eq_rslt )
                 |  ( {`XLEN{op_ne        }}  &   ne_rslt )
                 |  ( {`XLEN{op_mul       }}  &  mul_rslt )
                 |  ( {`XLEN{op_mulh|op_mulhsu|op_mulhu}}  &  mulhxx_rslt )
                 |  ( {`XLEN{op_div|op_divu}} & divx_rslt )
                 |  ( {`XLEN{op_rem|op_remu}} & remx_rslt )
                 ;



endmodule

