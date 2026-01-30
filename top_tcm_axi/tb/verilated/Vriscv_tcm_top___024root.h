// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_tcm_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TCM_TOP___024ROOT_H_
#define VERILATED_VRISCV_TCM_TOP___024ROOT_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_tcm_top_riscv_tcm_top;


class Vriscv_tcm_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_tcm_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_tcm_top_riscv_tcm_top* v;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__v__rst_cpu_i;
    CData/*0:0*/ __Vcellinp__v__rst_i;
    CData/*0:0*/ __Vcellinp__v__clk_i;
    CData/*0:0*/ __Vcellinp__v__axi_t_rready_i;
    CData/*1:0*/ __Vcellinp__v__axi_t_arburst_i;
    CData/*7:0*/ __Vcellinp__v__axi_t_arlen_i;
    CData/*3:0*/ __Vcellinp__v__axi_t_arid_i;
    CData/*0:0*/ __Vcellinp__v__axi_t_arvalid_i;
    CData/*0:0*/ __Vcellinp__v__axi_t_bready_i;
    CData/*0:0*/ __Vcellinp__v__axi_t_wlast_i;
    CData/*3:0*/ __Vcellinp__v__axi_t_wstrb_i;
    CData/*0:0*/ __Vcellinp__v__axi_t_wvalid_i;
    CData/*1:0*/ __Vcellinp__v__axi_t_awburst_i;
    CData/*7:0*/ __Vcellinp__v__axi_t_awlen_i;
    CData/*3:0*/ __Vcellinp__v__axi_t_awid_i;
    CData/*0:0*/ __Vcellinp__v__axi_t_awvalid_i;
    CData/*1:0*/ __Vcellinp__v__axi_i_rresp_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_rvalid_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_arready_i;
    CData/*1:0*/ __Vcellinp__v__axi_i_bresp_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_bvalid_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_wready_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_awready_i;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__v__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__v__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__v__rst_cpu_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __Vcellinp__v__intr_i;
    IData/*31:0*/ __Vcellinp__v__axi_t_araddr_i;
    IData/*31:0*/ __Vcellinp__v__axi_t_wdata_i;
    IData/*31:0*/ __Vcellinp__v__axi_t_awaddr_i;
    IData/*31:0*/ __Vcellinp__v__axi_i_rdata_i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    sc_core::sc_in<bool> clk_i;
    sc_core::sc_in<bool> rst_i;
    sc_core::sc_in<bool> rst_cpu_i;
    sc_core::sc_in<bool> axi_i_awready_i;
    sc_core::sc_in<bool> axi_i_wready_i;
    sc_core::sc_in<bool> axi_i_bvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > axi_i_bresp_i;
    sc_core::sc_in<bool> axi_i_arready_i;
    sc_core::sc_in<bool> axi_i_rvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > axi_i_rresp_i;
    sc_core::sc_in<bool> axi_t_awvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > axi_t_awid_i;
    sc_core::sc_in<sc_dt::sc_uint<8> > axi_t_awlen_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > axi_t_awburst_i;
    sc_core::sc_in<bool> axi_t_wvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > axi_t_wstrb_i;
    sc_core::sc_in<bool> axi_t_wlast_i;
    sc_core::sc_in<bool> axi_t_bready_i;
    sc_core::sc_in<bool> axi_t_arvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > axi_t_arid_i;
    sc_core::sc_in<sc_dt::sc_uint<8> > axi_t_arlen_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > axi_t_arburst_i;
    sc_core::sc_in<bool> axi_t_rready_i;
    sc_core::sc_out<bool> axi_i_awvalid_o;
    sc_core::sc_out<bool> axi_i_wvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > axi_i_wstrb_o;
    sc_core::sc_out<bool> axi_i_bready_o;
    sc_core::sc_out<bool> axi_i_arvalid_o;
    sc_core::sc_out<bool> axi_i_rready_o;
    sc_core::sc_out<bool> axi_t_awready_o;
    sc_core::sc_out<bool> axi_t_wready_o;
    sc_core::sc_out<bool> axi_t_bvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > axi_t_bresp_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > axi_t_bid_o;
    sc_core::sc_out<bool> axi_t_arready_o;
    sc_core::sc_out<bool> axi_t_rvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > axi_t_rresp_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > axi_t_rid_o;
    sc_core::sc_out<bool> axi_t_rlast_o;
    sc_core::sc_in<sc_dt::sc_uint<32> > axi_i_rdata_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > axi_t_awaddr_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > axi_t_wdata_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > axi_t_araddr_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > intr_i;
    sc_core::sc_out<sc_dt::sc_uint<32> > axi_i_awaddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > axi_i_wdata_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > axi_i_araddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > axi_t_rdata_o;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vriscv_tcm_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_tcm_top___024root(Vriscv_tcm_top__Syms* symsp, const char* v__name);
    ~Vriscv_tcm_top___024root();
    VL_UNCOPYABLE(Vriscv_tcm_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
