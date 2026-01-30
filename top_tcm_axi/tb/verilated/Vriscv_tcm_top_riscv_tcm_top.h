// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_tcm_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TCM_TOP_RISCV_TCM_TOP_H_
#define VERILATED_VRISCV_TCM_TOP_RISCV_TCM_TOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_tcm_top_riscv_core__M0_MBffffffff;
class Vriscv_tcm_top_tcm_mem;


class Vriscv_tcm_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_tcm_top_riscv_tcm_top final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_tcm_top_riscv_core__M0_MBffffffff* u_core;
    Vriscv_tcm_top_tcm_mem* u_tcm;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_i,0,0);
        VL_IN8(rst_cpu_i,0,0);
        VL_IN8(axi_i_awready_i,0,0);
        VL_IN8(axi_i_wready_i,0,0);
        VL_IN8(axi_i_bvalid_i,0,0);
        VL_IN8(axi_i_bresp_i,1,0);
        VL_IN8(axi_i_arready_i,0,0);
        VL_IN8(axi_i_rvalid_i,0,0);
        VL_IN8(axi_i_rresp_i,1,0);
        VL_IN8(axi_t_awvalid_i,0,0);
        VL_IN8(axi_t_awid_i,3,0);
        VL_IN8(axi_t_awlen_i,7,0);
        VL_IN8(axi_t_awburst_i,1,0);
        VL_IN8(axi_t_wvalid_i,0,0);
        VL_IN8(axi_t_wstrb_i,3,0);
        VL_IN8(axi_t_wlast_i,0,0);
        VL_IN8(axi_t_bready_i,0,0);
        VL_IN8(axi_t_arvalid_i,0,0);
        VL_IN8(axi_t_arid_i,3,0);
        VL_IN8(axi_t_arlen_i,7,0);
        VL_IN8(axi_t_arburst_i,1,0);
        VL_IN8(axi_t_rready_i,0,0);
        VL_OUT8(axi_i_awvalid_o,0,0);
        VL_OUT8(axi_i_wvalid_o,0,0);
        VL_OUT8(axi_i_wstrb_o,3,0);
        VL_OUT8(axi_i_bready_o,0,0);
        VL_OUT8(axi_i_arvalid_o,0,0);
        VL_OUT8(axi_i_rready_o,0,0);
        VL_OUT8(axi_t_awready_o,0,0);
        VL_OUT8(axi_t_wready_o,0,0);
        VL_OUT8(axi_t_bvalid_o,0,0);
        VL_OUT8(axi_t_bresp_o,1,0);
        VL_OUT8(axi_t_bid_o,3,0);
        VL_OUT8(axi_t_arready_o,0,0);
        VL_OUT8(axi_t_rvalid_o,0,0);
        VL_OUT8(axi_t_rresp_o,1,0);
        VL_OUT8(axi_t_rid_o,3,0);
        VL_OUT8(axi_t_rlast_o,0,0);
        CData/*3:0*/ __PVT__dport_tcm_wr_w;
        CData/*0:0*/ __PVT__dport_tcm_flush_w;
        CData/*0:0*/ __PVT__dport_tcm_invalidate_w;
        CData/*0:0*/ __PVT__dport_ack_w;
        CData/*0:0*/ __PVT__dport_tcm_rd_w;
        CData/*0:0*/ __PVT__dport_axi_ack_w;
        CData/*0:0*/ __PVT__dport_axi_rd_w;
        CData/*0:0*/ __PVT__dport_error_w;
        CData/*0:0*/ __PVT__dport_tcm_writeback_w;
        CData/*3:0*/ __PVT__dport_axi_wr_w;
        CData/*0:0*/ __PVT__dport_accept_w;
        CData/*0:0*/ __PVT__u_dmux__DOT__hold_w;
        CData/*0:0*/ __PVT__u_dmux__DOT__tcm_access_q;
        CData/*4:0*/ __PVT__u_dmux__DOT__pending_q;
        CData/*0:0*/ __PVT__u_dmux__DOT__request_w;
        CData/*4:0*/ __PVT__u_dmux__DOT__pending_r;
        CData/*0:0*/ u_dmux__DOT____VdfgTmp_h61d91652__0;
        CData/*0:0*/ u_dmux__DOT____VdfgTmp_h71f788cd__0;
        CData/*0:0*/ __PVT__u_axi__DOT__res_accept_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_accept_w;
        CData/*0:0*/ __PVT__u_axi__DOT__write_complete_w;
        CData/*0:0*/ __PVT__u_axi__DOT__read_complete_w;
        CData/*0:0*/ __PVT__u_axi__DOT__request_pending_q;
        CData/*0:0*/ __PVT__u_axi__DOT__req_pop_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_valid_w;
    };
    struct {
        CData/*0:0*/ __PVT__u_axi__DOT__req_push_w;
        CData/*0:0*/ __PVT__u_axi__DOT__res_push_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_is_write_w;
        CData/*0:0*/ __PVT__u_axi__DOT__awvalid_inhibit_q;
        CData/*0:0*/ __PVT__u_axi__DOT__wvalid_inhibit_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_req__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_req__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_axi__DOT__u_req__DOT__count_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_resp__DOT__valid_o;
        CData/*0:0*/ __PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_resp__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_axi__DOT__u_resp__DOT__count_q;
        VL_IN(axi_i_rdata_i,31,0);
        VL_IN(axi_t_awaddr_i,31,0);
        VL_IN(axi_t_wdata_i,31,0);
        VL_IN(axi_t_araddr_i,31,0);
        VL_IN(intr_i,31,0);
        VL_OUT(axi_i_awaddr_o,31,0);
        VL_OUT(axi_i_wdata_o,31,0);
        VL_OUT(axi_i_araddr_o,31,0);
        VL_OUT(axi_t_rdata_o,31,0);
        VlWide<3>/*68:0*/ __PVT__u_axi__DOT__req_w;
        VlUnpacked<VlWide<3>/*68:0*/, 2> __PVT__u_axi__DOT__u_req__DOT__ram_q;
        VlUnpacked<SData/*10:0*/, 2> __PVT__u_axi__DOT__u_resp__DOT__ram_q;
    };

    // INTERNAL VARIABLES
    Vriscv_tcm_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_tcm_top_riscv_tcm_top(Vriscv_tcm_top__Syms* symsp, const char* v__name);
    ~Vriscv_tcm_top_riscv_tcm_top();
    VL_UNCOPYABLE(Vriscv_tcm_top_riscv_tcm_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
