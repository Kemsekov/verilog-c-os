// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top___024root.h"

void Vriscv_tcm_top___024root___ctor_var_reset(Vriscv_tcm_top___024root* vlSelf);

Vriscv_tcm_top___024root::Vriscv_tcm_top___024root(Vriscv_tcm_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , clk_i("clk_i")
    , rst_i("rst_i")
    , rst_cpu_i("rst_cpu_i")
    , axi_i_awready_i("axi_i_awready_i")
    , axi_i_wready_i("axi_i_wready_i")
    , axi_i_bvalid_i("axi_i_bvalid_i")
    , axi_i_bresp_i("axi_i_bresp_i")
    , axi_i_arready_i("axi_i_arready_i")
    , axi_i_rvalid_i("axi_i_rvalid_i")
    , axi_i_rresp_i("axi_i_rresp_i")
    , axi_t_awvalid_i("axi_t_awvalid_i")
    , axi_t_awid_i("axi_t_awid_i")
    , axi_t_awlen_i("axi_t_awlen_i")
    , axi_t_awburst_i("axi_t_awburst_i")
    , axi_t_wvalid_i("axi_t_wvalid_i")
    , axi_t_wstrb_i("axi_t_wstrb_i")
    , axi_t_wlast_i("axi_t_wlast_i")
    , axi_t_bready_i("axi_t_bready_i")
    , axi_t_arvalid_i("axi_t_arvalid_i")
    , axi_t_arid_i("axi_t_arid_i")
    , axi_t_arlen_i("axi_t_arlen_i")
    , axi_t_arburst_i("axi_t_arburst_i")
    , axi_t_rready_i("axi_t_rready_i")
    , axi_i_awvalid_o("axi_i_awvalid_o")
    , axi_i_wvalid_o("axi_i_wvalid_o")
    , axi_i_wstrb_o("axi_i_wstrb_o")
    , axi_i_bready_o("axi_i_bready_o")
    , axi_i_arvalid_o("axi_i_arvalid_o")
    , axi_i_rready_o("axi_i_rready_o")
    , axi_t_awready_o("axi_t_awready_o")
    , axi_t_wready_o("axi_t_wready_o")
    , axi_t_bvalid_o("axi_t_bvalid_o")
    , axi_t_bresp_o("axi_t_bresp_o")
    , axi_t_bid_o("axi_t_bid_o")
    , axi_t_arready_o("axi_t_arready_o")
    , axi_t_rvalid_o("axi_t_rvalid_o")
    , axi_t_rresp_o("axi_t_rresp_o")
    , axi_t_rid_o("axi_t_rid_o")
    , axi_t_rlast_o("axi_t_rlast_o")
    , axi_i_rdata_i("axi_i_rdata_i")
    , axi_t_awaddr_i("axi_t_awaddr_i")
    , axi_t_wdata_i("axi_t_wdata_i")
    , axi_t_araddr_i("axi_t_araddr_i")
    , intr_i("intr_i")
    , axi_i_awaddr_o("axi_i_awaddr_o")
    , axi_i_wdata_o("axi_i_wdata_o")
    , axi_i_araddr_o("axi_i_araddr_o")
    , axi_t_rdata_o("axi_t_rdata_o")
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_tcm_top___024root___ctor_var_reset(this);
}

void Vriscv_tcm_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vriscv_tcm_top___024root::~Vriscv_tcm_top___024root() {
}
