// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_tcm_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TCM_TOP_TCM_MEM_H_
#define VERILATED_VRISCV_TCM_TOP_TCM_MEM_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_tcm_top_tcm_mem_ram;


class Vriscv_tcm_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_tcm_top_tcm_mem final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_tcm_top_tcm_mem_ram* u_ram;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__mem_i_rd_i,0,0);
        VL_IN8(__PVT__mem_i_flush_i,0,0);
        VL_IN8(__PVT__mem_i_invalidate_i,0,0);
        VL_IN8(__PVT__mem_d_rd_i,0,0);
        VL_IN8(__PVT__mem_d_wr_i,3,0);
        VL_IN8(__PVT__mem_d_cacheable_i,0,0);
        VL_IN8(__PVT__mem_d_invalidate_i,0,0);
        VL_IN8(__PVT__mem_d_writeback_i,0,0);
        VL_IN8(__PVT__mem_d_flush_i,0,0);
        VL_IN8(__PVT__axi_awvalid_i,0,0);
        VL_IN8(__PVT__axi_awid_i,3,0);
        VL_IN8(__PVT__axi_awlen_i,7,0);
        VL_IN8(__PVT__axi_awburst_i,1,0);
        VL_IN8(__PVT__axi_wvalid_i,0,0);
        VL_IN8(__PVT__axi_wstrb_i,3,0);
        VL_IN8(__PVT__axi_wlast_i,0,0);
        VL_IN8(__PVT__axi_bready_i,0,0);
        VL_IN8(__PVT__axi_arvalid_i,0,0);
        VL_IN8(__PVT__axi_arid_i,3,0);
        VL_IN8(__PVT__axi_arlen_i,7,0);
        VL_IN8(__PVT__axi_arburst_i,1,0);
        VL_IN8(__PVT__axi_rready_i,0,0);
        VL_OUT8(__PVT__mem_i_accept_o,0,0);
        VL_OUT8(__PVT__mem_i_valid_o,0,0);
        VL_OUT8(__PVT__mem_i_error_o,0,0);
        VL_OUT8(__PVT__mem_d_accept_o,0,0);
        VL_OUT8(__PVT__mem_d_ack_o,0,0);
        VL_OUT8(__PVT__mem_d_error_o,0,0);
        VL_OUT8(__PVT__axi_awready_o,0,0);
        VL_OUT8(__PVT__axi_wready_o,0,0);
        VL_OUT8(__PVT__axi_bvalid_o,0,0);
        VL_OUT8(__PVT__axi_bresp_o,1,0);
        VL_OUT8(__PVT__axi_bid_o,3,0);
        VL_OUT8(__PVT__axi_arready_o,0,0);
        VL_OUT8(__PVT__axi_rvalid_o,0,0);
        VL_OUT8(__PVT__axi_rresp_o,1,0);
        VL_OUT8(__PVT__axi_rid_o,3,0);
        VL_OUT8(__PVT__axi_rlast_o,0,0);
        CData/*3:0*/ __PVT__ext_wr_w;
        CData/*0:0*/ __PVT__ext_rd_w;
        CData/*0:0*/ __PVT__mem_i_valid_q;
        CData/*0:0*/ __PVT__mem_d_accept_q;
        CData/*0:0*/ __PVT__mem_d_ack_q;
        CData/*0:0*/ __PVT__ext_ack_q;
        CData/*7:0*/ __PVT__u_conv__DOT__req_len_q;
        CData/*0:0*/ __PVT__u_conv__DOT__req_rd_q;
        CData/*0:0*/ __PVT__u_conv__DOT__req_wr_q;
        CData/*3:0*/ __PVT__u_conv__DOT__req_id_q;
        CData/*1:0*/ __PVT__u_conv__DOT__req_axburst_q;
        CData/*7:0*/ __PVT__u_conv__DOT__req_axlen_q;
        CData/*0:0*/ __PVT__u_conv__DOT__req_prio_q;
        CData/*0:0*/ __PVT__u_conv__DOT__req_hold_rd_q;
        CData/*0:0*/ __PVT__u_conv__DOT__req_hold_wr_q;
        CData/*0:0*/ __PVT__u_conv__DOT__req_fifo_accept_w;
        CData/*0:0*/ __PVT__u_conv__DOT__req_push_w;
        CData/*0:0*/ __PVT__u_conv__DOT__req_out_valid_w;
        CData/*5:0*/ __PVT__u_conv__DOT__req_out_w;
        CData/*0:0*/ __PVT__u_conv__DOT__resp_accept_w;
        CData/*0:0*/ __PVT__u_conv__DOT__resp_valid_w;
        CData/*0:0*/ __PVT__u_conv__DOT__write_active_w;
        CData/*0:0*/ u_conv__DOT____VdfgTmp_h0622edac__0;
        CData/*0:0*/ u_conv__DOT____VdfgTmp_hf985a723__0;
    };
    struct {
        CData/*1:0*/ __PVT__u_conv__DOT__u_requests__DOT__rd_ptr;
        CData/*1:0*/ __PVT__u_conv__DOT__u_requests__DOT__wr_ptr;
        CData/*2:0*/ __PVT__u_conv__DOT__u_requests__DOT__count;
        CData/*0:0*/ __PVT__u_conv__DOT__u_response__DOT__accept_o;
        CData/*1:0*/ __PVT__u_conv__DOT__u_response__DOT__rd_ptr;
        CData/*1:0*/ __PVT__u_conv__DOT__u_response__DOT__wr_ptr;
        CData/*2:0*/ __PVT__u_conv__DOT__u_response__DOT__count;
        VL_IN16(__PVT__mem_d_req_tag_i,10,0);
        VL_OUT16(__PVT__mem_d_resp_tag_o,10,0);
        SData/*13:0*/ __PVT__muxed_addr_w;
        SData/*10:0*/ __PVT__mem_d_tag_q;
        VL_IN(__PVT__mem_i_pc_i,31,0);
        VL_IN(__PVT__mem_d_addr_i,31,0);
        VL_IN(__PVT__mem_d_data_wr_i,31,0);
        VL_IN(__PVT__axi_awaddr_i,31,0);
        VL_IN(__PVT__axi_wdata_i,31,0);
        VL_IN(__PVT__axi_araddr_i,31,0);
        VL_OUT(__PVT__mem_i_inst_o,31,0);
        VL_OUT(__PVT__mem_d_data_rd_o,31,0);
        VL_OUT(__PVT__axi_rdata_o,31,0);
        IData/*31:0*/ __PVT__u_conv__DOT__calculate_addr_next__Vstatic__mask;
        IData/*31:0*/ __PVT__u_conv__DOT__req_addr_q;
        VlUnpacked<CData/*5:0*/, 4> __PVT__u_conv__DOT__u_requests__DOT__ram;
        VlUnpacked<IData/*31:0*/, 4> __PVT__u_conv__DOT__u_response__DOT__ram;
    };

    // INTERNAL VARIABLES
    Vriscv_tcm_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_tcm_top_tcm_mem(Vriscv_tcm_top__Syms* symsp, const char* v__name);
    ~Vriscv_tcm_top_tcm_mem();
    VL_UNCOPYABLE(Vriscv_tcm_top_tcm_mem);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t read(uint32_t addr);
    bool write(uint32_t addr, uint32_t data);
};


#endif  // guard
