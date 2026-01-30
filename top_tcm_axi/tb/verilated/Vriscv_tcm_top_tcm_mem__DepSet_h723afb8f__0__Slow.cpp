// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top_tcm_mem.h"

VL_ATTR_COLD void Vriscv_tcm_top_tcm_mem___ctor_var_reset(Vriscv_tcm_top_tcm_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_tcm_mem___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_rd_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_flush_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_invalidate_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_d_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_d_data_wr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_d_rd_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_wr_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_d_cacheable_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_req_tag_i = VL_RAND_RESET_I(11);
    vlSelf->__PVT__mem_d_invalidate_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_writeback_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_flush_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_awvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_awaddr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_awid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_awlen_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_awburst_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_wvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_wstrb_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_wlast_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_bready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_arvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_araddr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_arid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_arlen_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_arburst_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_rready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_error_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_d_data_rd_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_d_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_ack_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_error_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_resp_tag_o = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi_awready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_wready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_bvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_bresp_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_bid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_arready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_rresp_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_rid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_rlast_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ext_wr_w = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ext_rd_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muxed_addr_w = VL_RAND_RESET_I(14);
    vlSelf->__PVT__mem_i_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_accept_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_tag_q = VL_RAND_RESET_I(11);
    vlSelf->__PVT__mem_d_ack_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ext_ack_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__calculate_addr_next__Vstatic__mask = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_conv__DOT__req_len_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_conv__DOT__req_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_conv__DOT__req_rd_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__req_wr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__req_id_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_conv__DOT__req_axburst_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_conv__DOT__req_axlen_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_conv__DOT__req_prio_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__req_hold_rd_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__req_hold_wr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__req_fifo_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__req_push_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__req_out_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__req_out_w = VL_RAND_RESET_I(6);
    vlSelf->__PVT__u_conv__DOT__resp_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__resp_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_conv__DOT__write_active_w = VL_RAND_RESET_I(1);
    vlSelf->u_conv__DOT____VdfgTmp_h0622edac__0 = 0;
    vlSelf->u_conv__DOT____VdfgTmp_hf985a723__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_conv__DOT__u_requests__DOT__ram[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__u_conv__DOT__u_requests__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_conv__DOT__u_requests__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_conv__DOT__u_response__DOT__accept_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_conv__DOT__u_response__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_conv__DOT__u_response__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_conv__DOT__u_response__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_conv__DOT__u_response__DOT__count = VL_RAND_RESET_I(3);
}
