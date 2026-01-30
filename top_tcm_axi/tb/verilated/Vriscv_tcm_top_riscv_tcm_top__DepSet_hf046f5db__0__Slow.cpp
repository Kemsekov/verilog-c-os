// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top_riscv_tcm_top.h"

VL_ATTR_COLD void Vriscv_tcm_top_riscv_tcm_top___ctor_var_reset(Vriscv_tcm_top_riscv_tcm_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_tcm_top_riscv_tcm_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->rst_cpu_i = VL_RAND_RESET_I(1);
    vlSelf->axi_i_awready_i = VL_RAND_RESET_I(1);
    vlSelf->axi_i_wready_i = VL_RAND_RESET_I(1);
    vlSelf->axi_i_bvalid_i = VL_RAND_RESET_I(1);
    vlSelf->axi_i_bresp_i = VL_RAND_RESET_I(2);
    vlSelf->axi_i_arready_i = VL_RAND_RESET_I(1);
    vlSelf->axi_i_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->axi_i_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->axi_i_rresp_i = VL_RAND_RESET_I(2);
    vlSelf->axi_t_awvalid_i = VL_RAND_RESET_I(1);
    vlSelf->axi_t_awaddr_i = VL_RAND_RESET_I(32);
    vlSelf->axi_t_awid_i = VL_RAND_RESET_I(4);
    vlSelf->axi_t_awlen_i = VL_RAND_RESET_I(8);
    vlSelf->axi_t_awburst_i = VL_RAND_RESET_I(2);
    vlSelf->axi_t_wvalid_i = VL_RAND_RESET_I(1);
    vlSelf->axi_t_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->axi_t_wstrb_i = VL_RAND_RESET_I(4);
    vlSelf->axi_t_wlast_i = VL_RAND_RESET_I(1);
    vlSelf->axi_t_bready_i = VL_RAND_RESET_I(1);
    vlSelf->axi_t_arvalid_i = VL_RAND_RESET_I(1);
    vlSelf->axi_t_araddr_i = VL_RAND_RESET_I(32);
    vlSelf->axi_t_arid_i = VL_RAND_RESET_I(4);
    vlSelf->axi_t_arlen_i = VL_RAND_RESET_I(8);
    vlSelf->axi_t_arburst_i = VL_RAND_RESET_I(2);
    vlSelf->axi_t_rready_i = VL_RAND_RESET_I(1);
    vlSelf->intr_i = VL_RAND_RESET_I(32);
    vlSelf->axi_i_awvalid_o = VL_RAND_RESET_I(1);
    vlSelf->axi_i_awaddr_o = VL_RAND_RESET_I(32);
    vlSelf->axi_i_wvalid_o = VL_RAND_RESET_I(1);
    vlSelf->axi_i_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->axi_i_wstrb_o = VL_RAND_RESET_I(4);
    vlSelf->axi_i_bready_o = VL_RAND_RESET_I(1);
    vlSelf->axi_i_arvalid_o = VL_RAND_RESET_I(1);
    vlSelf->axi_i_araddr_o = VL_RAND_RESET_I(32);
    vlSelf->axi_i_rready_o = VL_RAND_RESET_I(1);
    vlSelf->axi_t_awready_o = VL_RAND_RESET_I(1);
    vlSelf->axi_t_wready_o = VL_RAND_RESET_I(1);
    vlSelf->axi_t_bvalid_o = VL_RAND_RESET_I(1);
    vlSelf->axi_t_bresp_o = VL_RAND_RESET_I(2);
    vlSelf->axi_t_bid_o = VL_RAND_RESET_I(4);
    vlSelf->axi_t_arready_o = VL_RAND_RESET_I(1);
    vlSelf->axi_t_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->axi_t_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->axi_t_rresp_o = VL_RAND_RESET_I(2);
    vlSelf->axi_t_rid_o = VL_RAND_RESET_I(4);
    vlSelf->axi_t_rlast_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_tcm_wr_w = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dport_tcm_flush_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_tcm_invalidate_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_ack_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_tcm_rd_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_axi_ack_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_axi_rd_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_error_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_tcm_writeback_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_axi_wr_w = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dport_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dmux__DOT__hold_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dmux__DOT__tcm_access_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dmux__DOT__pending_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_dmux__DOT__request_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dmux__DOT__pending_r = VL_RAND_RESET_I(5);
    vlSelf->u_dmux__DOT____VdfgTmp_h61d91652__0 = 0;
    vlSelf->u_dmux__DOT____VdfgTmp_h71f788cd__0 = 0;
    vlSelf->__PVT__u_axi__DOT__res_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__req_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__write_complete_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__read_complete_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__request_pending_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__req_pop_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__req_valid_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(69, vlSelf->__PVT__u_axi__DOT__req_w);
    vlSelf->__PVT__u_axi__DOT__req_push_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__res_push_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__req_is_write_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__awvalid_inhibit_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__wvalid_inhibit_q = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(69, vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q[__Vi0]);
    }
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_axi__DOT__u_resp__DOT__valid_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_axi__DOT__u_resp__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_resp__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q = VL_RAND_RESET_I(2);
}
