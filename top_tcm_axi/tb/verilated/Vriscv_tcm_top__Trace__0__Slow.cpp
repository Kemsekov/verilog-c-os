// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vriscv_tcm_top__Syms.h"


VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("v", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_tcm__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+583,0,"BOOT_VECTOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"CORE_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"TCM_MEM_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_cpu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"axi_i_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"axi_i_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"axi_i_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"axi_i_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8,0,"axi_i_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"axi_i_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"axi_i_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"axi_i_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+12,0,"axi_t_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"axi_t_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"axi_t_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"axi_t_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"axi_t_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17,0,"axi_t_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"axi_t_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"axi_t_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+20,0,"axi_t_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"axi_t_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"axi_t_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"axi_t_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"axi_t_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"axi_t_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"axi_t_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"axi_t_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"axi_i_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"axi_i_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"axi_i_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"axi_i_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"axi_i_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+586,0,"axi_i_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"axi_i_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"axi_i_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+586,0,"axi_i_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"axi_t_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"axi_t_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"axi_t_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+587,0,"axi_t_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"axi_t_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+38,0,"axi_t_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"axi_t_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"axi_t_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+587,0,"axi_t_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"axi_t_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+227,0,"axi_t_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"ifetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"dport_tcm_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"dport_tcm_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"dport_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"dport_tcm_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+117,0,"ifetch_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"dport_axi_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"dport_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"dport_tcm_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"dport_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+230,0,"dport_axi_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+586,0,"ifetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"dport_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+550,0,"dport_tcm_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"dport_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"dport_axi_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+299,0,"dport_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+300,0,"dport_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"dport_tcm_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+301,0,"dport_tcm_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"dport_axi_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"dport_tcm_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"dport_tcm_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"dport_tcm_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+302,0,"dport_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+584,0,"cpu_id_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"dport_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"dport_axi_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"dport_axi_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"dport_axi_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+558,0,"dport_axi_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+583,0,"boot_vector_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"dport_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"ifetch_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"dport_tcm_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+303,0,"ifetch_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"dport_axi_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"dport_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"dport_tcm_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"ifetch_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"dport_axi_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"dport_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+560,0,"ifetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"dport_axi_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"dport_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+188,0,"ifetch_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"dport_axi_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"dport_tcm_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"dport_axi_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+561,0,"dport_axi_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"dport_tcm_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+552,0,"dport_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_tcm", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_tcm__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_axi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+297,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+558,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"mem_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"axi_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"axi_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"axi_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"axi_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8,0,"axi_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"axi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"axi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"axi_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+228,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+33,0,"axi_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"axi_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"axi_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"axi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"axi_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+586,0,"axi_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"axi_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"axi_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+586,0,"axi_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"res_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"req_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"write_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"read_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"request_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"req_pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"req_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+238,0,"req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 68,0);
    tracep->declBit(c+71,0,"req_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"res_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"request_in_progress_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"req_is_read_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"req_is_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"awvalid_inhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"wvalid_inhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_req", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+590,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+563,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 68,0);
    tracep->declBit(c+71,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+238,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 68,0);
    tracep->declBit(c+235,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+591,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+243+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 68,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+249,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+250,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+251,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_resp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+593,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+72,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+234,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+591,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+253+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+255,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+256,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+257,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_dmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+584,0,"TCM_MEM_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+297,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+300,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"mem_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+556,0,"mem_tcm_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+233,0,"mem_tcm_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"mem_tcm_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"mem_tcm_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"mem_tcm_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+10,0,"mem_ext_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+228,0,"mem_ext_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mem_ext_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mem_ext_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"mem_ext_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+557,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+552,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+301,0,"mem_tcm_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"mem_tcm_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"mem_tcm_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"mem_tcm_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+297,0,"mem_tcm_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"mem_tcm_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+550,0,"mem_tcm_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"mem_tcm_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"mem_tcm_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"mem_ext_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"mem_ext_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"mem_ext_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"mem_ext_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+297,0,"mem_ext_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"mem_ext_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+558,0,"mem_ext_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"mem_ext_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"mem_ext_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"hold_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"tcm_access_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"tcm_access_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+73,0,"request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_tcm__u_ram__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_tcm__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_tcm__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"mem_i_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"mem_i_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"mem_i_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"mem_i_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"mem_d_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"mem_d_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"mem_d_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"mem_d_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+297,0,"mem_d_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"mem_d_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+550,0,"mem_d_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"mem_d_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"mem_d_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"axi_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"axi_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"axi_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"axi_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"axi_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17,0,"axi_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"axi_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"axi_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+20,0,"axi_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"axi_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"axi_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"axi_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"axi_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"axi_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"axi_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"axi_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"mem_i_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"mem_i_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"mem_i_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"mem_i_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"mem_d_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+233,0,"mem_d_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"mem_d_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"mem_d_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"mem_d_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+36,0,"axi_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"axi_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"axi_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+587,0,"axi_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"axi_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+38,0,"axi_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"axi_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"axi_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+587,0,"axi_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"axi_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+227,0,"axi_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"ext_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"ext_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+556,0,"ext_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"ext_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+46,0,"ext_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"ext_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+566,0,"ext_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"ext_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"muxed_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+567,0,"muxed_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+568,0,"muxed_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+556,0,"data_r_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_tcm__u_ram__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+560,0,"mem_i_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"mem_d_accept_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"mem_d_tag_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+231,0,"mem_d_ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"ext_ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_conv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"axi_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"axi_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"axi_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"axi_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"axi_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17,0,"axi_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"axi_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"axi_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+20,0,"axi_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"axi_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"axi_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"axi_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"axi_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"axi_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"axi_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"axi_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"ram_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"ram_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"ram_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+556,0,"ram_read_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"axi_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"axi_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"axi_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+587,0,"axi_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"axi_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+38,0,"axi_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"axi_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"axi_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+587,0,"axi_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"axi_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+227,0,"axi_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"ram_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+46,0,"ram_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"ram_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+566,0,"ram_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"ram_write_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"calculate_addr_next__Vstatic__mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"req_len_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+264,0,"req_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+265,0,"req_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"req_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+267,0,"req_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+268,0,"req_axburst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+269,0,"req_axlen_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+270,0,"req_prio_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"req_hold_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"req_hold_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"req_fifo_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"req_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"req_in_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+274,0,"req_out_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"req_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+48,0,"resp_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"resp_is_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"resp_is_read_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"resp_is_last_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"resp_id_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+278,0,"resp_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"write_prio_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"read_prio_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"write_active_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"read_active_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+566,0,"addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_requests", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+594,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+47,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+273,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+281+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+285,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+286,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+287,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_response", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+597,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+556,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+261,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+288,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+289+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+293,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+294,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+295,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_csr__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_issue__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+592,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"SUPPORT_SUPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"SUPPORT_REGFILE_XILINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"EXTRA_DECODE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"mem_d_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+552,0,"mem_d_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"mem_d_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"mem_d_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"mem_d_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+586,0,"mem_i_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"mem_i_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"mem_i_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"mem_i_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+583,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"mem_d_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"mem_d_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"mem_d_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"mem_d_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+297,0,"mem_d_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"mem_d_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+300,0,"mem_d_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"mem_d_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"mem_d_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"mem_i_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"mem_i_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"mem_i_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"mem_i_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+302,0,"mmu_lsu_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"fetch_in_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+503,0,"mul_opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+306,0,"mmu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"lsu_opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,0,"fetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"csr_opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+308,0,"branch_exec_source_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"csr_opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"writeback_div_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"csr_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"branch_csr_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"mmu_ifetch_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"mmu_lsu_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"mul_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"mmu_mxr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+587,0,"branch_d_exec_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+560,0,"mmu_ifetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"csr_opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"csr_writeback_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+505,0,"fetch_instr_mul_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"branch_exec_is_ret_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+314,0,"csr_writeback_exception_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"mmu_lsu_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+589,0,"fetch_in_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"branch_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"csr_opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"writeback_mem_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+315,0,"csr_result_e1_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+316,0,"branch_csr_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"mmu_lsu_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+317,0,"fetch_fault_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"mmu_lsu_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+588,0,"mmu_lsu_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+124,0,"opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+123,0,"squash_decode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"fetch_dec_fault_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"mul_opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"exec_hold_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"fetch_instr_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+571,0,"branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"mul_opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"csr_opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+572,0,"lsu_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"branch_exec_is_not_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"branch_exec_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"mul_opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"branch_d_exec_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"mul_opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+320,0,"branch_exec_is_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"fetch_dec_fault_fetch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"fetch_dec_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"fetch_fault_fetch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"lsu_opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"mmu_lsu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"mul_hold_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"mmu_ifetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"mmu_lsu_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"fetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"mmu_ifetch_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"mul_opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"branch_csr_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+323,0,"branch_exec_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"lsu_opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"div_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+324,0,"branch_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+67,0,"mmu_lsu_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"fetch_dec_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+573,0,"interrupt_inhibit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"mmu_ifetch_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+574,0,"writeback_mem_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+508,0,"fetch_instr_lsu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"mmu_priv_d_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+507,0,"opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"csr_opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"writeback_mem_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+326,0,"writeback_div_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"mul_opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+589,0,"opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"fetch_instr_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"mmu_ifetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"mmu_ifetch_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"mmu_ifetch_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"lsu_opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+506,0,"lsu_opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"mmu_load_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"mmu_satp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"csr_result_e1_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+300,0,"mmu_lsu_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"fetch_dec_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+507,0,"csr_opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+329,0,"ifence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"fetch_instr_exec_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+330,0,"csr_writeback_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+331,0,"csr_writeback_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"take_interrupt_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+333,0,"csr_result_e1_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"branch_d_exec_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+554,0,"fetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"csr_writeback_waddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+335,0,"branch_exec_is_jmp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"mmu_lsu_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"fetch_instr_csr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"lsu_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+511,0,"fetch_dec_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+336,0,"csr_result_e1_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"csr_opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+512,0,"fetch_instr_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"fetch_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"mul_opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"fetch_instr_rd_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"mmu_lsu_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"exec_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"writeback_mul_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+298,0,"mmu_lsu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"lsu_opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+552,0,"mmu_lsu_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"lsu_opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+338,0,"mmu_sum_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"writeback_exec_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"lsu_opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+340,0,"csr_writeback_exception_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"mmu_store_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"branch_exec_is_call_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_csr__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_issue", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_issue__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+592,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"EXTRA_DECODE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"fetch_in_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+511,0,"fetch_in_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"fetch_in_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"fetch_in_fault_fetch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"fetch_in_fault_page_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"fetch_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"squash_decode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"fetch_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"fetch_out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"fetch_out_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"fetch_out_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"fetch_out_fault_fetch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"fetch_out_fault_page_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"fetch_out_instr_exec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"fetch_out_instr_lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"fetch_out_instr_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"fetch_out_instr_mul_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"fetch_out_instr_div_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"fetch_out_instr_csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"fetch_out_instr_rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"fetch_out_instr_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"enable_muldiv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+506,0,"fetch_in_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_dec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+554,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"fetch_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"enable_muldiv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+570,0,"invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"exec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"mul_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"div_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_div", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+326,0,"writeback_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+326,0,"valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"wb_result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+514,0,"inst_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"inst_divu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"inst_rem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"inst_remu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"div_rem_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"signed_operation_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"div_operation_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"dividend_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+344,0,"divisor_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->declBus(c+346,0,"quotient_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"q_mask_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"div_inst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"div_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"invert_res_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"div_start_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"div_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+352,0,"div_result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_exec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"branch_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"branch_is_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"branch_is_not_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"branch_source_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+341,0,"branch_is_call_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"branch_is_ret_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"branch_is_jmp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"branch_d_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"branch_d_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+587,0,"branch_d_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+339,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+521,0,"imm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+522,0,"imm12_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"bimm_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+524,0,"jimm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"shamt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+526,0,"alu_func_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"alu_input_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"alu_input_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"alu_p_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"less_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"greater_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"branch_taken_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"branch_call_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"branch_ret_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"branch_jmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"branch_taken_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"branch_ntaken_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"pc_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"pc_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+341,0,"branch_call_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"branch_ret_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"branch_jmp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+526,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"alu_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"alu_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"alu_p_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"shift_right_fill_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,16);
    tracep->declBus(c+140,0,"shift_right_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"shift_right_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"shift_right_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"shift_right_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"shift_left_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"shift_left_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"shift_left_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"shift_left_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"sub_res_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+584,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"fetch_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"icache_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"icache_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"icache_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"icache_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"icache_page_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"fetch_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"branch_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+571,0,"branch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"branch_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+554,0,"fetch_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+511,0,"fetch_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"fetch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"fetch_fault_fetch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"fetch_fault_page_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"icache_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"icache_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"icache_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"icache_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"icache_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+123,0,"squash_decode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"active_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"icache_busy_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"branch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"branch_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+356,0,"branch_priv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+354,0,"branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+356,0,"branch_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+357,0,"stall_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"icache_fetch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"icache_invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"pc_f_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+361,0,"pc_d_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"icache_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"icache_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+362,0,"fetch_resp_drop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"priv_f_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+363,0,"branch_d_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+364,0,"skid_buffer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBit(c+367,0,"skid_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+584,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+557,0,"mem_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+552,0,"mem_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"mem_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"mem_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"mem_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+589,0,"mem_load_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"mem_store_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"mem_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"mem_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"mem_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+297,0,"mem_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"mem_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+300,0,"mem_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"mem_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"mem_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"writeback_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"writeback_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+572,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"mem_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"mem_data_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+369,0,"mem_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"mem_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+297,0,"mem_cacheable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"mem_invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"mem_writeback_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"mem_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"mem_unaligned_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"mem_unaligned_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"mem_load_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"mem_xb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"mem_xh_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"mem_ls_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"pending_lsu_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"issue_lsu_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"complete_ok_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"complete_err_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"delay_lsu_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"load_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"load_signed_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"store_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"req_lb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"req_lh_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"req_lw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"req_sb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"req_sh_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"req_sw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"req_sw_lw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"req_sh_lh_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"mem_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"mem_unaligned_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"mem_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"mem_rd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"mem_wr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+538,0,"dcache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"dcache_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"dcache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"resp_load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+379,0,"resp_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+380,0,"resp_byte_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"resp_half_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"resp_signed_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"addr_lsb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+156,0,"load_byte_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"load_half_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"load_signed_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"wb_result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+383,0,"fault_load_align_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"fault_store_align_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"fault_load_bus_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"fault_store_bus_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"fault_load_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"fault_store_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_lsu_request", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+599,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+385,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+80,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+387,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+389,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+591,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+391+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+395,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+396,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+397,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+398,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_mmu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+584,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"priv_d_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+338,0,"sum_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"mxr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"satp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"fetch_in_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"fetch_in_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"fetch_in_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"fetch_in_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"fetch_in_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+586,0,"fetch_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"fetch_out_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"fetch_out_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"fetch_out_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"lsu_in_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"lsu_in_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"lsu_in_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"lsu_in_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+297,0,"lsu_in_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"lsu_in_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+300,0,"lsu_in_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"lsu_in_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"lsu_in_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"lsu_out_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+552,0,"lsu_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"lsu_out_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"lsu_out_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"lsu_out_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+586,0,"fetch_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"fetch_in_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"fetch_in_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"fetch_in_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"fetch_out_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"fetch_out_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"fetch_out_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"fetch_out_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"fetch_in_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"lsu_in_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+552,0,"lsu_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"lsu_in_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"lsu_in_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"lsu_in_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+301,0,"lsu_out_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"lsu_out_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"lsu_out_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"lsu_out_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+297,0,"lsu_out_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"lsu_out_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+300,0,"lsu_out_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"lsu_out_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"lsu_out_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"lsu_in_load_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"lsu_in_store_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+591,0,"STATE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"STATE_LEVEL_FIRST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"STATE_LEVEL_SECOND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+596,0,"STATE_UPDATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"MULT_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"result_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+399,0,"result_e3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+400,0,"operand_a_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+402,0,"operand_b_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+404,0,"mulhi_sel_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+405,0,"mult_result_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declQuad(c+53,0,"operand_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+55,0,"operand_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+408,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+541,0,"mult_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_regfile__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_issue__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_issue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+592,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"SUPPORT_DUAL_ISSUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"SUPPORT_REGFILE_XILINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"fetch_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"fetch_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"fetch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"fetch_fault_fetch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"fetch_fault_page_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"fetch_instr_exec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"fetch_instr_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"fetch_instr_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"fetch_instr_mul_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"fetch_instr_div_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"fetch_instr_csr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"fetch_instr_rd_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"fetch_instr_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"branch_exec_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"branch_exec_is_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"branch_exec_is_not_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"branch_exec_source_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+341,0,"branch_exec_is_call_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"branch_exec_is_ret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"branch_exec_is_jmp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"branch_exec_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"branch_d_exec_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"branch_d_exec_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+587,0,"branch_d_exec_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+310,0,"branch_csr_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"branch_csr_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"branch_csr_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+339,0,"writeback_exec_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"writeback_mem_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"writeback_mem_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"writeback_mem_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+337,0,"writeback_mul_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+326,0,"writeback_div_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"writeback_div_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"csr_result_e1_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+336,0,"csr_result_e1_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"csr_result_e1_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"csr_result_e1_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+572,0,"lsu_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"take_interrupt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"fetch_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"branch_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+571,0,"branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"branch_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+121,0,"exec_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"lsu_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"csr_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"mul_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"div_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"lsu_opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"lsu_opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"lsu_opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"lsu_opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"lsu_opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"lsu_opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"lsu_opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"lsu_opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"mul_opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"mul_opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"mul_opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"mul_opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"mul_opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"mul_opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"mul_opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"mul_opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"csr_opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"csr_opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"csr_opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"csr_opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"csr_opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"csr_opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"csr_opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"csr_opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+331,0,"csr_writeback_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"csr_writeback_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+330,0,"csr_writeback_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"csr_writeback_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+340,0,"csr_writeback_exception_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"csr_writeback_exception_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"exec_hold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"mul_hold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"interrupt_inhibit_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"enable_muldiv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"enable_mul_bypass_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+409,0,"priv_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+82,0,"opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+507,0,"issue_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"issue_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+503,0,"issue_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+513,0,"issue_sb_alloc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"issue_exec_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"issue_lsu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"issue_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"issue_mul_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"issue_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"issue_csr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"issue_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"pipe_squash_e1_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"opcode_issue_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"opcode_accept_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"pipe_stall_raw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"pipe_load_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"pipe_store_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"pipe_mul_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"pipe_branch_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"pipe_rd_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+415,0,"pipe_pc_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"pipe_opcode_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"pipe_operand_ra_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+418,0,"pipe_operand_rb_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+419,0,"pipe_load_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"pipe_mul_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"pipe_rd_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+160,0,"pipe_result_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"pipe_valid_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"pipe_csr_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"pipe_rd_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+314,0,"pipe_result_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"pipe_pc_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"pipe_opc_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"pipe_ra_val_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"pipe_rb_val_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"pipe_exception_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+424,0,"issue_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+425,0,"div_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"csr_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"scoreboard_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+542,0,"issue_ra_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"issue_rb_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+600,0,"issue_b_ra_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+601,0,"issue_b_rb_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_regfile__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+124,0,"issue_ra_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"issue_rb_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"v_pipe_rs1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+428,0,"v_pipe_rs2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("u_pipe_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+592,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"issue_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"issue_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"issue_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"issue_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"issue_csr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"issue_div_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"issue_mul_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"issue_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"issue_rd_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"issue_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+424,0,"issue_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+332,0,"take_interrupt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"issue_branch_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"issue_branch_target_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"issue_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"issue_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"issue_operand_ra_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"issue_operand_rb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"alu_result_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"csr_result_value_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+336,0,"csr_result_write_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"csr_result_wdata_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"csr_result_exception_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+410,0,"load_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"store_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"mul_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"branch_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"rd_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+415,0,"pc_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"opcode_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"operand_ra_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+418,0,"operand_rb_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"mem_complete_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"mem_result_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"mem_exception_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+337,0,"mul_result_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+419,0,"load_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"mul_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"rd_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+160,0,"result_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+326,0,"div_complete_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"div_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"valid_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"csr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"rd_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+314,0,"result_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"pc_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"opcode_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"operand_ra_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"operand_rb_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"exception_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+331,0,"csr_write_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"csr_waddr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+330,0,"csr_wdata_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"squash_e1_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"squash_e1_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"squash_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"squash_e1_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"branch_misaligned_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"valid_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+430,0,"ctrl_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+415,0,"pc_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"npc_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"opcode_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"operand_ra_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+418,0,"operand_rb_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"exception_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+433,0,"alu_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"csr_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"div_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"valid_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"ctrl_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+438,0,"csr_wr_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+439,0,"csr_wdata_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+440,0,"result_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"pc_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"npc_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"opcode_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"operand_ra_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+445,0,"operand_rb_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+446,0,"exception_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+160,0,"result_e2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"valid_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"load_store_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"exception_e2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+448,0,"squash_e1_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"valid_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+450,0,"ctrl_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+331,0,"csr_wr_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"csr_wdata_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"result_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"pc_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"npc_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"opcode_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"operand_ra_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"operand_rb_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"exception_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+579,0,"complete_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_trace_d", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+163,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+166,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+169,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+172,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+175,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+503,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_trace_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+84,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+89,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+92,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+95,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+98,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+101,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+428,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+452,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_pipe_dec0_verif", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+84,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+103,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+106,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+109,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+112,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+115,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+428,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+452,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_tcm__u_ram__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_tcm__u_ram__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+453,0,"addr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+598,0,"data0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"wr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"clk1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"addr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+567,0,"data1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+568,0,"wr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+188,0,"data0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"data1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"ram_read0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"ram_read1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_csr__u_csrfile__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_csr__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_csr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+592,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"SUPPORT_SUPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+331,0,"csr_writeback_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"csr_writeback_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+330,0,"csr_writeback_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"csr_writeback_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+340,0,"csr_writeback_exception_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"csr_writeback_exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+583,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+573,0,"interrupt_inhibit_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+333,0,"csr_result_e1_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+336,0,"csr_result_e1_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"csr_result_e1_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"csr_result_e1_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+310,0,"branch_csr_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"branch_csr_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"branch_csr_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+332,0,"take_interrupt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"ifence_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"mmu_priv_d_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+338,0,"mmu_sum_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"mmu_mxr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"mmu_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"mmu_satp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"ecall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ebreak_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"eret_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+544,0,"eret_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+177,0,"csrrw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"csrrs_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"csrrc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"csrrwi_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"csrrsi_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"csrrci_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"wfi_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"fence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"sfence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"ifence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"current_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+545,0,"csr_priv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+546,0,"csr_readonly_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"csr_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"set_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"clr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"csr_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+186,0,"satp_update_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"timer_irq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+603,0,"misa_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+547,0,"csr_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,0,"csr_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+456,0,"csr_target_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"interrupt_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+458,0,"status_reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"satp_reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_csrfile", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_csr__u_csrfile__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+336,0,"rd_valid_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+333,0,"rd_result_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"csr_wdata_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"exception_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+187,0,"eret_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"take_interrupt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"tlb_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"ifence_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"branch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"branch_target_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+459,0,"reset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_csr__u_csrfile__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_csr__u_csrfile__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+592,0,"SUPPORT_MTIMECMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"SUPPORT_SUPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"ext_intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"timer_intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+598,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"misa_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+340,0,"exception_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"csr_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+548,0,"csr_raddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+547,0,"csr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"csr_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+330,0,"csr_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,0,"csr_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+456,0,"csr_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+454,0,"priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+458,0,"status_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"satp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"interrupt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"csr_mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"csr_mcause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+458,0,"csr_sr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"csr_mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"csr_mip_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"csr_mie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+454,0,"csr_mpriv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+466,0,"csr_mcycle_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+467,0,"csr_mcycle_h_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"csr_mscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"csr_mtval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"csr_mtimecmp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+471,0,"csr_mtime_ie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+472,0,"csr_medeleg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+473,0,"csr_mideleg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+474,0,"csr_sepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+475,0,"csr_stvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+476,0,"csr_scause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+477,0,"csr_stval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"csr_satp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+478,0,"csr_sscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+479,0,"irq_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"irq_masked_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"irq_priv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+605,0,"m_enabled_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+606,0,"m_interrupts_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+607,0,"s_enabled_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+608,0,"s_interrupts_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+480,0,"irq_priv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+481,0,"csr_mip_upd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"buffer_mip_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+547,0,"rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+482,0,"csr_mepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+483,0,"csr_mcause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"csr_mtval_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+485,0,"csr_sr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+486,0,"csr_mtvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+581,0,"csr_mip_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+487,0,"csr_mie_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+488,0,"csr_mpriv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+489,0,"csr_mcycle_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+490,0,"csr_mscratch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+491,0,"csr_mtimecmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+492,0,"csr_mtime_ie_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+493,0,"csr_medeleg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+494,0,"csr_mideleg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"csr_mip_next_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"csr_mip_next_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"csr_sepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+497,0,"csr_stvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"csr_scause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+499,0,"csr_stval_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+500,0,"csr_satp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"csr_sscratch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+502,0,"is_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"exception_s_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+456,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_regfile__0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_regfile__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+584,0,"SUPPORT_REGFILE_XILINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"rd0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+314,0,"rd0_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"ra0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+504,0,"rb0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+542,0,"ra0_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"rb0_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("REGFILE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+189,0,"reg_r1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"reg_r2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"reg_r3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"reg_r4_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"reg_r5_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"reg_r6_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"reg_r7_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"reg_r8_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"reg_r9_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"reg_r10_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"reg_r11_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"reg_r12_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"reg_r13_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"reg_r14_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"reg_r15_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"reg_r16_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"reg_r17_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"reg_r18_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"reg_r19_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"reg_r20_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"reg_r21_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"reg_r22_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"reg_r23_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"reg_r24_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"reg_r25_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"reg_r26_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"reg_r27_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"reg_r28_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"reg_r29_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"reg_r30_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"reg_r31_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"x0_zero_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"x1_ra_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"x2_sp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"x3_gp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"x4_tp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"x5_t0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"x6_t1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"x7_t2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"x8_s0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"x9_s1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"x10_a0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"x11_a1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"x12_a2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"x13_a3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"x14_a4_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"x15_a5_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"x16_a6_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"x17_a7_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"x18_s2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"x19_s3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"x20_s4_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"x21_s5_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"x22_s6_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"x23_s7_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"x24_s8_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"x25_s9_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"x26_s10_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"x27_s11_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"x28_t3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"x29_t4_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"x30_t5_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"x31_t6_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+542,0,"ra0_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"rb0_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_init_top(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_init_top\n"); );
    // Body
    Vriscv_tcm_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_tcm_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_tcm_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_register(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vriscv_tcm_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vriscv_tcm_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vriscv_tcm_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vriscv_tcm_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_const_0_sub_0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_const_0\n"); );
    // Init
    Vriscv_tcm_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_tcm_top___024root*>(voidSelf);
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_tcm_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_const_0_sub_0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+583,(0x2000U),32);
    bufp->fullIData(oldp+584,(0U),32);
    bufp->fullIData(oldp+585,(0xffffffffU),32);
    bufp->fullBit(oldp+586,(1U));
    bufp->fullCData(oldp+587,(0U),2);
    bufp->fullSData(oldp+588,(0U),11);
    bufp->fullBit(oldp+589,(0U));
    bufp->fullIData(oldp+590,(0x45U),32);
    bufp->fullIData(oldp+591,(2U),32);
    bufp->fullIData(oldp+592,(1U),32);
    bufp->fullIData(oldp+593,(0xbU),32);
    bufp->fullIData(oldp+594,(6U),32);
    bufp->fullIData(oldp+595,(4U),32);
    bufp->fullIData(oldp+596,(3U),32);
    bufp->fullIData(oldp+597,(0x20U),32);
    bufp->fullIData(oldp+598,(0U),32);
    bufp->fullIData(oldp+599,(0x24U),32);
    bufp->fullIData(oldp+600,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_w),32);
    bufp->fullIData(oldp+601,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_w),32);
    bufp->fullCData(oldp+602,(0U),4);
    bufp->fullIData(oldp+603,(0x40001100U),32);
    bufp->fullCData(oldp+604,(3U),2);
    bufp->fullBit(oldp+605,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__m_enabled_r));
    bufp->fullIData(oldp+606,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__m_interrupts_r),32);
    bufp->fullBit(oldp+607,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__s_enabled_r));
    bufp->fullIData(oldp+608,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__s_interrupts_r),32);
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_full_0_sub_0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_full_0\n"); );
    // Init
    Vriscv_tcm_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_tcm_top___024root*>(voidSelf);
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_tcm_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_full_0_sub_0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->__Vcellinp__v__clk_i));
    bufp->fullBit(oldp+2,(vlSelf->__Vcellinp__v__rst_i));
    bufp->fullBit(oldp+3,(vlSelf->__Vcellinp__v__rst_cpu_i));
    bufp->fullBit(oldp+4,(vlSelf->__Vcellinp__v__axi_i_awready_i));
    bufp->fullBit(oldp+5,(vlSelf->__Vcellinp__v__axi_i_wready_i));
    bufp->fullBit(oldp+6,(vlSelf->__Vcellinp__v__axi_i_bvalid_i));
    bufp->fullCData(oldp+7,(vlSelf->__Vcellinp__v__axi_i_bresp_i),2);
    bufp->fullBit(oldp+8,(vlSelf->__Vcellinp__v__axi_i_arready_i));
    bufp->fullBit(oldp+9,(vlSelf->__Vcellinp__v__axi_i_rvalid_i));
    bufp->fullIData(oldp+10,(vlSelf->__Vcellinp__v__axi_i_rdata_i),32);
    bufp->fullCData(oldp+11,(vlSelf->__Vcellinp__v__axi_i_rresp_i),2);
    bufp->fullBit(oldp+12,(vlSelf->__Vcellinp__v__axi_t_awvalid_i));
    bufp->fullIData(oldp+13,(vlSelf->__Vcellinp__v__axi_t_awaddr_i),32);
    bufp->fullCData(oldp+14,(vlSelf->__Vcellinp__v__axi_t_awid_i),4);
    bufp->fullCData(oldp+15,(vlSelf->__Vcellinp__v__axi_t_awlen_i),8);
    bufp->fullCData(oldp+16,(vlSelf->__Vcellinp__v__axi_t_awburst_i),2);
    bufp->fullBit(oldp+17,(vlSelf->__Vcellinp__v__axi_t_wvalid_i));
    bufp->fullIData(oldp+18,(vlSelf->__Vcellinp__v__axi_t_wdata_i),32);
    bufp->fullCData(oldp+19,(vlSelf->__Vcellinp__v__axi_t_wstrb_i),4);
    bufp->fullBit(oldp+20,(vlSelf->__Vcellinp__v__axi_t_wlast_i));
    bufp->fullBit(oldp+21,(vlSelf->__Vcellinp__v__axi_t_bready_i));
    bufp->fullBit(oldp+22,(vlSelf->__Vcellinp__v__axi_t_arvalid_i));
    bufp->fullIData(oldp+23,(vlSelf->__Vcellinp__v__axi_t_araddr_i),32);
    bufp->fullCData(oldp+24,(vlSelf->__Vcellinp__v__axi_t_arid_i),4);
    bufp->fullCData(oldp+25,(vlSelf->__Vcellinp__v__axi_t_arlen_i),8);
    bufp->fullCData(oldp+26,(vlSelf->__Vcellinp__v__axi_t_arburst_i),2);
    bufp->fullBit(oldp+27,(vlSelf->__Vcellinp__v__axi_t_rready_i));
    bufp->fullIData(oldp+28,(vlSelf->__Vcellinp__v__intr_i),32);
    bufp->fullBit(oldp+29,(((IData)(vlSelf->__Vcellinp__v__axi_i_bvalid_i)
                             ? (0U != (IData)(vlSelf->__Vcellinp__v__axi_i_bresp_i))
                             : (0U != (IData)(vlSelf->__Vcellinp__v__axi_i_rresp_i)))));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__v.__PVT__dport_axi_ack_w));
    bufp->fullCData(oldp+31,(((IData)(vlSelf->__Vcellinp__v__axi_t_awvalid_i)
                               ? (IData)(vlSelf->__Vcellinp__v__axi_t_awlen_i)
                               : ((IData)(vlSelf->__Vcellinp__v__axi_t_arvalid_i)
                                   ? (IData)(vlSelf->__Vcellinp__v__axi_t_arlen_i)
                                   : 0U))),8);
    bufp->fullBit(oldp+32,((1U & vlSelf->__Vcellinp__v__intr_i)));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__v.axi_i_awvalid_o));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__v.axi_i_wvalid_o));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__v.axi_i_arvalid_o));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__v__u_tcm.__PVT__axi_awready_o));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__v__u_tcm.__PVT__axi_wready_o));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__v__u_tcm.__PVT__axi_arready_o));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__v.__PVT__dport_ack_w));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__v.__PVT__dport_error_w));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__v.__PVT__u_axi__DOT__write_complete_w));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__v.__PVT__u_axi__DOT__read_complete_w));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__v.__PVT__u_axi__DOT__req_pop_w));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__v.__PVT__u_axi__DOT__req_is_write_w));
    bufp->fullCData(oldp+45,(vlSymsp->TOP__v__u_tcm.__PVT__ext_wr_w),4);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__v__u_tcm.__PVT__ext_rd_w));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_push_w));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__resp_accept_w));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__write_active_w));
    bufp->fullBit(oldp+50,(((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__write_active_w) 
                            & (IData)(vlSelf->__Vcellinp__v__axi_t_wvalid_i))));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__complete_ok_e2_w));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__complete_err_e2_w));
    bufp->fullQData(oldp+53,(((0x2002033U == (0xfe00707fU 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))
                               ? (QData)((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r))
                               : ((0x2001033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))
                                   ? (((QData)((IData)(
                                                       (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r 
                                                        >> 0x1fU))) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r)))
                                   : (QData)((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r))))),33);
    bufp->fullQData(oldp+55,(((0x2002033U == (0xfe00707fU 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))
                               ? vlSymsp->TOP__v__u_core.u_mul__DOT____VdfgTmp_h5fcd7459__0
                               : ((0x2001033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))
                                   ? vlSymsp->TOP__v__u_core.u_mul__DOT____VdfgTmp_h5fcd7459__0
                                   : (QData)((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r))))),33);
    bufp->fullBit(oldp+57,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                            & (0x73U == vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+58,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                            & (0x100073U == vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+59,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                            & (0x200073U == (0xcfffffffU 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+60,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                            & (0x2073U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+61,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                            & (0x3073U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+62,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                            & (0x10500073U == (0xffff8fffU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+63,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                            & (0xfU == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+64,(((IData)(((0U != (0xf8000U 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                     | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrw_w))) 
                            | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrwi_w))));
    bufp->fullCData(oldp+65,(vlSymsp->TOP__v.__PVT__dport_tcm_wr_w),4);
    bufp->fullBit(oldp+66,(vlSymsp->TOP__v.__PVT__dport_tcm_rd_w));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__v__u_core.__PVT__mem_d_rd_o));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__v.__PVT__dport_axi_rd_w));
    bufp->fullCData(oldp+69,(vlSymsp->TOP__v__u_core.__PVT__mem_d_wr_o),4);
    bufp->fullCData(oldp+70,(vlSymsp->TOP__v.__PVT__dport_axi_wr_w),4);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__v.__PVT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__v.__PVT__u_axi__DOT__res_push_w));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__v.__PVT__u_dmux__DOT__request_w));
    bufp->fullCData(oldp+74,(vlSymsp->TOP__v.__PVT__u_dmux__DOT__pending_r),5);
    bufp->fullSData(oldp+75,(vlSymsp->TOP__v__u_tcm.__PVT__muxed_addr_w),14);
    bufp->fullBit(oldp+76,(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__v__u_core__u_issue.__PVT__exec_hold_o));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__issue_lsu_e1_w));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellinp__u_lsu_request__push_i));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__v__u_core__u_issue.__PVT__squash_w));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_valid_w));
    bufp->fullCData(oldp+83,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe_rd_e2_w),5);
    bufp->fullBit(oldp+84,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe_valid_wb_w));
    bufp->fullCData(oldp+85,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe_rd_wb_w),5);
    bufp->fullBit(oldp+86,((0U != (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_r))));
    bufp->fullBit(oldp+87,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_w));
    bufp->fullCData(oldp+88,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_r),6);
    bufp->fullWData(oldp+89,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str),80);
    bufp->fullWData(oldp+92,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra),80);
    bufp->fullWData(oldp+95,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb),80);
    bufp->fullWData(oldp+98,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd),80);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc),32);
    bufp->fullWData(oldp+103,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str),80);
    bufp->fullWData(oldp+106,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra),80);
    bufp->fullWData(oldp+109,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb),80);
    bufp->fullWData(oldp+112,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd),80);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_pc),32);
    bufp->fullBit(oldp+117,(vlSymsp->TOP__v__u_core.__PVT__mem_i_rd_o));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__v__u_core__u_issue.__PVT__fetch_accept_o));
    bufp->fullIData(oldp+119,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r),32);
    bufp->fullBit(oldp+120,(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_issue_r));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_opcode_invalid_o));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__v__u_core__u_issue.__PVT__branch_request_o));
    bufp->fullIData(oldp+124,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r),32);
    bufp->fullBit(oldp+125,(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec_request_w));
    bufp->fullIData(oldp+126,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_target_r),32);
    bufp->fullBit(oldp+128,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_start_w));
    bufp->fullIData(oldp+129,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__alu_input_a_r),32);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__alu_input_b_r),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__result_r),32);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__less_than_signed__Vstatic__v),32);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__greater_than_signed__Vstatic__v),32);
    bufp->fullBit(oldp+134,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_r));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_taken_r));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_call_r));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_ret_r));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_jmp_r));
    bufp->fullSData(oldp+139,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r),16);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__sub_res_w),32);
    bufp->fullBit(oldp+149,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__stall_w));
    bufp->fullIData(oldp+150,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
    bufp->fullBit(oldp+151,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
    bufp->fullIData(oldp+152,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_r),32);
    bufp->fullBit(oldp+153,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_rd_r));
    bufp->fullCData(oldp+154,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_wr_r),4);
    bufp->fullCData(oldp+155,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
    bufp->fullBit(oldp+156,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_byte_r));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_half_r));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_signed_r));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_accept_r));
    bufp->fullIData(oldp+160,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_e2_r),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__v__u_core__u_issue.__PVT__scoreboard_r),32);
    bufp->fullBit(oldp+162,(((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec_request_w) 
                             & (0U != (3U & vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_target_r)))));
    bufp->fullWData(oldp+163,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str),80);
    bufp->fullWData(oldp+166,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra),80);
    bufp->fullWData(oldp+169,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb),80);
    bufp->fullWData(oldp+172,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd),80);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc),32);
    bufp->fullBit(oldp+177,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrw_w));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrwi_w));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrsi_w));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrci_w));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__v__u_core__u_csr.__PVT__sfence_w));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_w));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__v__u_core__u_csr.__VdfgExtracted_h996e9194__0));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__v__u_core__u_csr.__VdfgExtracted_hcaf0a663__0));
    bufp->fullIData(oldp+185,(vlSymsp->TOP__v__u_core__u_csr.__PVT__data_r),32);
    bufp->fullBit(oldp+186,(vlSymsp->TOP__v__u_core__u_csr.__PVT__satp_update_w));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__v__u_core__u_csr.__PVT__eret_fault_w));
    bufp->fullIData(oldp+188,(vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read0_q),32);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q),32);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q),32);
    bufp->fullIData(oldp+220,((0xfffffffcU & vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w[0U])),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w[1U]),32);
    bufp->fullCData(oldp+222,((0xfU & vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w[2U])),4);
    bufp->fullBit(oldp+223,(vlSymsp->TOP__v__u_tcm.__PVT__axi_bvalid_o));
    bufp->fullCData(oldp+224,((0xfU & (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w))),4);
    bufp->fullBit(oldp+225,(vlSymsp->TOP__v__u_tcm.__PVT__axi_rvalid_o));
    bufp->fullIData(oldp+226,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram
                              [vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+227,((1U & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+228,(((2U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__count_q)) 
                             & (2U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__count_q)))));
    bufp->fullSData(oldp+229,(((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                                ? (IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_tag_q)
                                : vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__ram_q
                               [vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q])),11);
    bufp->fullSData(oldp+230,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__ram_q
                              [vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q]),11);
    bufp->fullBit(oldp+231,(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_ack_q));
    bufp->fullSData(oldp+232,(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_tag_q),11);
    bufp->fullBit(oldp+233,(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q));
    bufp->fullBit(oldp+234,((2U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__count_q))));
    bufp->fullBit(oldp+235,((2U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__count_q))));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__v.__PVT__u_axi__DOT__request_pending_q));
    bufp->fullBit(oldp+237,((0U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__count_q))));
    bufp->fullWData(oldp+238,(vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w),69);
    bufp->fullBit(oldp+241,(vlSymsp->TOP__v.__PVT__u_axi__DOT__awvalid_inhibit_q));
    bufp->fullBit(oldp+242,(vlSymsp->TOP__v.__PVT__u_axi__DOT__wvalid_inhibit_q));
    bufp->fullWData(oldp+243,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__ram_q[0]),69);
    bufp->fullWData(oldp+246,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__ram_q[1]),69);
    bufp->fullBit(oldp+249,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+251,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__count_q),2);
    bufp->fullBit(oldp+252,((0U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__count_q))));
    bufp->fullSData(oldp+253,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__ram_q[0]),11);
    bufp->fullSData(oldp+254,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__ram_q[1]),11);
    bufp->fullBit(oldp+255,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q));
    bufp->fullBit(oldp+256,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__wr_ptr_q));
    bufp->fullCData(oldp+257,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__count_q),2);
    bufp->fullBit(oldp+258,(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q));
    bufp->fullCData(oldp+259,(vlSymsp->TOP__v.__PVT__u_dmux__DOT__pending_q),5);
    bufp->fullBit(oldp+260,((1U & (~ (IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)))));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__v__u_tcm.__PVT__ext_ack_q));
    bufp->fullIData(oldp+262,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+263,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_len_q),8);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_addr_q),32);
    bufp->fullBit(oldp+265,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_rd_q));
    bufp->fullBit(oldp+266,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_wr_q));
    bufp->fullCData(oldp+267,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_id_q),4);
    bufp->fullCData(oldp+268,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+269,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+270,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_prio_q));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+273,((4U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+274,((0U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+275,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w),6);
    bufp->fullBit(oldp+276,(((~ ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+277,(((0U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+278,((0U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+279,((((~ (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_rd_q)) 
                              & (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_prio_q)) 
                             | (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+280,((1U & ((~ ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_wr_q) 
                                       | (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_prio_q))) 
                                   | (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+281,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+282,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+283,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+284,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+285,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+286,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+287,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+288,((4U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+289,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+290,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+291,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+292,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+293,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+294,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+295,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__count),3);
    bufp->fullIData(oldp+296,((0xfffffffcU & vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__pc_f_q)),32);
    bufp->fullBit(oldp+297,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    bufp->fullBit(oldp+298,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q));
    bufp->fullIData(oldp+299,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
    bufp->fullBit(oldp+300,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
    bufp->fullIData(oldp+301,((0xfffffffcU & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)),32);
    bufp->fullBit(oldp+302,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
    bufp->fullBit(oldp+303,(((IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_q) 
                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__icache_invalidate_q))));
    bufp->fullBit(oldp+304,((0x10000U > (0xfffffffcU 
                                         & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q))));
    bufp->fullCData(oldp+305,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__priv_f_q),2);
    bufp->fullBit(oldp+306,(vlSymsp->TOP__v__u_core__u_csr.__PVT__tlb_flush_q));
    bufp->fullIData(oldp+307,(vlSymsp->TOP__v__u_core.__PVT__fetch_pc_w),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__pc_m_q),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__wb_result_q),32);
    bufp->fullBit(oldp+310,(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_q));
    bufp->fullBit(oldp+311,((1U & (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                   >> 0x13U))));
    bufp->fullCData(oldp+312,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q),6);
    bufp->fullBit(oldp+313,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_ret_q));
    bufp->fullIData(oldp+314,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q),32);
    bufp->fullCData(oldp+315,(vlSymsp->TOP__v__u_core__u_csr.__PVT__exception_e1_q),6);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_target_q),32);
    bufp->fullBit(oldp+317,(vlSymsp->TOP__v__u_core.__PVT__fetch_fault_page_w));
    bufp->fullBit(oldp+318,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_ntaken_q));
    bufp->fullIData(oldp+319,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__pc_x_q),32);
    bufp->fullBit(oldp+320,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_taken_q));
    bufp->fullBit(oldp+321,(vlSymsp->TOP__v__u_core.__PVT__fetch_dec_fault_fetch_w));
    bufp->fullCData(oldp+322,(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_csr_priv_o),2);
    bufp->fullBit(oldp+323,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_ntaken_q) 
                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_taken_q))));
    bufp->fullCData(oldp+324,(((IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_q)
                                ? (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_csr_priv_o)
                                : (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__priv_x_q))),2);
    bufp->fullCData(oldp+325,((3U & ((0x20000U & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q)
                                      ? (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                         >> 0xbU) : (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)))),2);
    bufp->fullBit(oldp+326,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__valid_q));
    bufp->fullIData(oldp+327,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_q),32);
    bufp->fullIData(oldp+328,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csr_wdata_e1_q),32);
    bufp->fullBit(oldp+329,(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_q));
    bufp->fullIData(oldp+330,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q),32);
    bufp->fullBit(oldp+331,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_wb_q));
    bufp->fullBit(oldp+332,(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q));
    bufp->fullIData(oldp+333,(vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_result_e1_q),32);
    bufp->fullSData(oldp+334,((vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+335,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_jmp_q));
    bufp->fullBit(oldp+336,(vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_valid_e1_q));
    bufp->fullIData(oldp+337,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e2_q),32);
    bufp->fullBit(oldp+338,((1U & (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                   >> 0x12U))));
    bufp->fullIData(oldp+339,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__result_q),32);
    bufp->fullIData(oldp+340,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q),32);
    bufp->fullBit(oldp+341,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_call_q));
    bufp->fullBit(oldp+342,(vlSymsp->TOP__v__u_core.u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i));
    bufp->fullIData(oldp+343,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q),32);
    bufp->fullQData(oldp+344,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__divisor_q),63);
    bufp->fullIData(oldp+346,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q),32);
    bufp->fullIData(oldp+347,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__q_mask_q),32);
    bufp->fullBit(oldp+348,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_inst_q));
    bufp->fullBit(oldp+349,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_busy_q));
    bufp->fullBit(oldp+350,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q));
    bufp->fullBit(oldp+351,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_complete_w));
    bufp->fullIData(oldp+352,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_inst_q)
                                ? ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q)
                                    ? (- vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q)
                                    : vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q)
                                : ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q)
                                    ? (- vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q)
                                    : vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q))),32);
    bufp->fullBit(oldp+353,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__active_q));
    bufp->fullBit(oldp+354,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_q));
    bufp->fullIData(oldp+355,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_pc_q),32);
    bufp->fullCData(oldp+356,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_priv_q),2);
    bufp->fullBit(oldp+357,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__stall_q));
    bufp->fullBit(oldp+358,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__icache_fetch_q));
    bufp->fullBit(oldp+359,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__icache_invalidate_q));
    bufp->fullIData(oldp+360,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__pc_f_q),32);
    bufp->fullIData(oldp+361,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__pc_d_q),32);
    bufp->fullBit(oldp+362,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_d_q) 
                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_q))));
    bufp->fullBit(oldp+363,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_d_q));
    bufp->fullWData(oldp+364,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__skid_buffer_q),66);
    bufp->fullBit(oldp+367,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__skid_valid_q));
    bufp->fullIData(oldp+368,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
    bufp->fullBit(oldp+369,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_rd_q));
    bufp->fullCData(oldp+370,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
    bufp->fullBit(oldp+371,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q));
    bufp->fullBit(oldp+372,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q));
    bufp->fullBit(oldp+373,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_load_q));
    bufp->fullBit(oldp+374,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xb_q));
    bufp->fullBit(oldp+375,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xh_q));
    bufp->fullBit(oldp+376,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_ls_q));
    bufp->fullBit(oldp+377,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__pending_lsu_e2_q));
    bufp->fullBit(oldp+378,((1U & (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))));
    bufp->fullIData(oldp+379,((IData)((vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                       >> 4U))),32);
    bufp->fullBit(oldp+380,((1U & (IData)((vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                           >> 1U)))));
    bufp->fullBit(oldp+381,((1U & (IData)((vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                           >> 2U)))));
    bufp->fullBit(oldp+382,((1U & (IData)((vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                           >> 3U)))));
    bufp->fullBit(oldp+383,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                             & (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))));
    bufp->fullBit(oldp+384,(((~ (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o)) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))));
    bufp->fullQData(oldp+385,((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)) 
                                << 4U) | (QData)((IData)(
                                                         (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_ls_q) 
                                                           << 3U) 
                                                          | (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xh_q) 
                                                              << 2U) 
                                                             | (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xb_q) 
                                                                 << 1U) 
                                                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_load_q)))))))),36);
    bufp->fullQData(oldp+387,(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o),36);
    bufp->fullBit(oldp+389,((2U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
    bufp->fullBit(oldp+390,((0U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
    bufp->fullQData(oldp+391,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[0]),36);
    bufp->fullQData(oldp+393,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[1]),36);
    bufp->fullBit(oldp+395,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q));
    bufp->fullBit(oldp+396,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q));
    bufp->fullCData(oldp+397,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q),2);
    bufp->fullIData(oldp+398,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__i),32);
    bufp->fullIData(oldp+399,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e3_q),32);
    bufp->fullQData(oldp+400,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__operand_a_e1_q),33);
    bufp->fullQData(oldp+402,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__operand_b_e1_q),33);
    bufp->fullBit(oldp+404,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q));
    bufp->fullWData(oldp+405,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w),65);
    bufp->fullIData(oldp+408,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q)
                                ? vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w[1U]
                                : vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w[0U])),32);
    bufp->fullCData(oldp+409,(vlSymsp->TOP__v__u_core__u_issue.__PVT__priv_x_q),2);
    bufp->fullBit(oldp+410,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+411,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+412,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 5U))));
    bufp->fullBit(oldp+413,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 6U))));
    bufp->fullCData(oldp+414,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe_rd_e1_w),5);
    bufp->fullIData(oldp+415,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_e1_q),32);
    bufp->fullIData(oldp+416,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_e1_q),32);
    bufp->fullIData(oldp+417,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_e1_q),32);
    bufp->fullIData(oldp+418,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_e1_q),32);
    bufp->fullBit(oldp+419,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+420,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                   >> 5U))));
    bufp->fullIData(oldp+421,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q),32);
    bufp->fullIData(oldp+422,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_wb_q),32);
    bufp->fullIData(oldp+423,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_wb_q),32);
    bufp->fullCData(oldp+424,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_fault_w),6);
    bufp->fullBit(oldp+425,(vlSymsp->TOP__v__u_core__u_issue.__PVT__div_pending_q));
    bufp->fullBit(oldp+426,(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_pending_q));
    bufp->fullCData(oldp+427,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+428,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+429,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q));
    bufp->fullSData(oldp+430,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q),10);
    bufp->fullIData(oldp+431,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_e1_q),32);
    bufp->fullCData(oldp+432,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e1_q),6);
    bufp->fullBit(oldp+433,((1U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))));
    bufp->fullBit(oldp+434,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+435,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 4U))));
    bufp->fullBit(oldp+436,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_q));
    bufp->fullSData(oldp+437,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q),10);
    bufp->fullBit(oldp+438,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_e2_q));
    bufp->fullIData(oldp+439,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_e2_q),32);
    bufp->fullIData(oldp+440,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_e2_q),32);
    bufp->fullIData(oldp+441,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_e2_q),32);
    bufp->fullIData(oldp+442,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_e2_q),32);
    bufp->fullIData(oldp+443,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_e2_q),32);
    bufp->fullIData(oldp+444,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_e2_q),32);
    bufp->fullIData(oldp+445,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_e2_q),32);
    bufp->fullCData(oldp+446,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_q),6);
    bufp->fullBit(oldp+447,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__load_store_e2_w));
    bufp->fullBit(oldp+448,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__squash_e1_e2_q));
    bufp->fullBit(oldp+449,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_wb_q));
    bufp->fullSData(oldp+450,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q),10);
    bufp->fullIData(oldp+451,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_wb_q),32);
    bufp->fullCData(oldp+452,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                        >> 7U))),5);
    bufp->fullSData(oldp+453,((0x3fffU & (vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                          >> 2U))),14);
    bufp->fullCData(oldp+454,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q),2);
    bufp->fullBit(oldp+455,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_r));
    bufp->fullIData(oldp+456,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_target_r),32);
    bufp->fullIData(oldp+457,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__irq_masked_r),32);
    bufp->fullIData(oldp+458,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q),32);
    bufp->fullBit(oldp+459,(vlSymsp->TOP__v__u_core__u_csr.__PVT__reset_q));
    bufp->fullSData(oldp+460,(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i),12);
    bufp->fullIData(oldp+461,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mepc_q),32);
    bufp->fullIData(oldp+462,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcause_q),32);
    bufp->fullIData(oldp+463,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_q),32);
    bufp->fullIData(oldp+464,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_q),32);
    bufp->fullIData(oldp+465,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_q),32);
    bufp->fullIData(oldp+466,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q),32);
    bufp->fullIData(oldp+467,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_h_q),32);
    bufp->fullIData(oldp+468,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_q),32);
    bufp->fullIData(oldp+469,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtval_q),32);
    bufp->fullIData(oldp+470,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_q),32);
    bufp->fullBit(oldp+471,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_q));
    bufp->fullIData(oldp+472,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_q),32);
    bufp->fullIData(oldp+473,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_q),32);
    bufp->fullIData(oldp+474,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sepc_q),32);
    bufp->fullIData(oldp+475,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stvec_q),32);
    bufp->fullIData(oldp+476,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_scause_q),32);
    bufp->fullIData(oldp+477,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stval_q),32);
    bufp->fullIData(oldp+478,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_q),32);
    bufp->fullIData(oldp+479,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__irq_pending_r),32);
    bufp->fullCData(oldp+480,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__irq_priv_q),2);
    bufp->fullBit(oldp+481,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q));
    bufp->fullIData(oldp+482,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mepc_r),32);
    bufp->fullIData(oldp+483,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcause_r),32);
    bufp->fullIData(oldp+484,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtval_r),32);
    bufp->fullIData(oldp+485,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_r),32);
    bufp->fullIData(oldp+486,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_r),32);
    bufp->fullIData(oldp+487,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_r),32);
    bufp->fullCData(oldp+488,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_r),2);
    bufp->fullIData(oldp+489,(((IData)(1U) + vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q)),32);
    bufp->fullIData(oldp+490,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_r),32);
    bufp->fullIData(oldp+491,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_r),32);
    bufp->fullBit(oldp+492,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_r));
    bufp->fullIData(oldp+493,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_r),32);
    bufp->fullIData(oldp+494,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_r),32);
    bufp->fullIData(oldp+495,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_q),32);
    bufp->fullIData(oldp+496,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sepc_r),32);
    bufp->fullIData(oldp+497,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stvec_r),32);
    bufp->fullIData(oldp+498,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_scause_r),32);
    bufp->fullIData(oldp+499,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stval_r),32);
    bufp->fullIData(oldp+500,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_r),32);
    bufp->fullIData(oldp+501,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_r),32);
    bufp->fullBit(oldp+502,((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))));
    bufp->fullCData(oldp+503,((0x1fU & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                        >> 7U))),5);
    bufp->fullCData(oldp+504,((0x1fU & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+505,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_mul_w));
    bufp->fullIData(oldp+506,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w),32);
    bufp->fullCData(oldp+507,((0x1fU & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+508,(((3U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                             | ((0x1003U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | ((0x2003U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x4003U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                      | ((0x5003U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                         | ((0x6003U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                            | ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                               | ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                                  | (0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))))))))))));
    bufp->fullBit(oldp+509,(((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                             | ((0x67U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | ((0x63U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x1063U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                      | ((0x4063U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                         | ((0x5063U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                            | ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                               | (0x7063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))))))))));
    bufp->fullBit(oldp+510,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_exec_w));
    bufp->fullIData(oldp+511,(vlSymsp->TOP__v__u_core.__PVT__fetch_dec_instr_w),32);
    bufp->fullBit(oldp+512,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_div_w));
    bufp->fullBit(oldp+513,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_rd_valid_w));
    bufp->fullBit(oldp+514,((0x2004033U == (0xfe00707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+515,((0x2005033U == (0xfe00707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+516,((0x2006033U == (0xfe00707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+517,((0x2007033U == (0xfe00707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+518,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_operation_w) 
                             | ((0x2006033U == (0xfe00707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | (0x2007033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))))));
    bufp->fullBit(oldp+519,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__signed_operation_w));
    bufp->fullBit(oldp+520,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_operation_w));
    bufp->fullIData(oldp+521,((0xfffff000U & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)),32);
    bufp->fullIData(oldp+522,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__imm12_r),32);
    bufp->fullIData(oldp+523,((((- (IData)((vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+524,((((- (IData)((vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w) 
                                             | ((0x800U 
                                                 & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                                    >> 9U)) 
                                                | ((0x7e0U 
                                                    & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                                         >> 0x14U))))))),32);
    bufp->fullCData(oldp+525,((0x1fU & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+526,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__alu_func_r),4);
    bufp->fullBit(oldp+527,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_inst_w));
    bufp->fullBit(oldp+528,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_signed_inst_w));
    bufp->fullBit(oldp+529,(((0x23U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                             | ((0x1023U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | (0x2023U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))))));
    bufp->fullBit(oldp+530,(((3U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                             | (0x4003U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+531,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__req_lh_w));
    bufp->fullBit(oldp+532,(((0x2003U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                             | (0x6003U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+533,((0x23U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+534,((0x1023U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+535,((0x2023U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+536,(((0x2023U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                             | ((0x2003U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | (0x6003U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))))));
    bufp->fullBit(oldp+537,(((0x1023U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__req_lh_w))));
    bufp->fullBit(oldp+538,((IData)((0x3a001073U == 
                                     (0xfff0707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+539,((IData)((0x3a101073U == 
                                     (0xfff0707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+540,((IData)((0x3a201073U == 
                                     (0xfff0707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+541,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_inst_w));
    bufp->fullIData(oldp+542,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__ra0_value_r),32);
    bufp->fullIData(oldp+543,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__rb0_value_r),32);
    bufp->fullCData(oldp+544,((3U & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                     >> 0x1cU))),2);
    bufp->fullCData(oldp+545,((3U & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                     >> 0x1cU))),2);
    bufp->fullBit(oldp+546,((3U == (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                    >> 0x1eU))));
    bufp->fullIData(oldp+547,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__rdata_r),32);
    bufp->fullSData(oldp+548,((vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+549,(vlSymsp->TOP__v.__PVT__dport_tcm_flush_w));
    bufp->fullBit(oldp+550,(vlSymsp->TOP__v.__PVT__dport_tcm_invalidate_w));
    bufp->fullBit(oldp+551,(vlSymsp->TOP__v.__PVT__dport_tcm_writeback_w));
    bufp->fullBit(oldp+552,(vlSymsp->TOP__v.__PVT__dport_accept_w));
    bufp->fullBit(oldp+553,(vlSymsp->TOP__v.__PVT__u_dmux__DOT__hold_w));
    bufp->fullBit(oldp+554,(vlSymsp->TOP__v__u_core.__PVT__fetch_dec_valid_w));
    bufp->fullBit(oldp+555,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__icache_busy_w));
    bufp->fullIData(oldp+556,(vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q),32);
    bufp->fullIData(oldp+557,(((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                                ? vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q
                                : vlSelf->__Vcellinp__v__axi_i_rdata_i)),32);
    bufp->fullBit(oldp+558,(((IData)(vlSymsp->TOP__v.u_dmux__DOT____VdfgTmp_h71f788cd__0) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
    bufp->fullBit(oldp+559,(((IData)(vlSymsp->TOP__v.u_dmux__DOT____VdfgTmp_h71f788cd__0) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q))));
    bufp->fullBit(oldp+560,(vlSymsp->TOP__v__u_tcm.__PVT__mem_i_valid_q));
    bufp->fullBit(oldp+561,(((IData)(vlSymsp->TOP__v.u_dmux__DOT____VdfgTmp_h71f788cd__0) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
    bufp->fullBit(oldp+562,(((~ (IData)(vlSymsp->TOP__v.__PVT__dport_axi_ack_w)) 
                             & (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__request_pending_q))));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                              << 0x20U) | (QData)((IData)(
                                                          (0xfffffffcU 
                                                           & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                               << 0x20U) | (QData)((IData)(
                                                           (0xfffffffcU 
                                                            & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)))) 
                             >> 0x20U));
    __Vtemp_2[2U] = (((IData)(vlSymsp->TOP__v.__PVT__dport_axi_rd_w) 
                      << 4U) | (IData)(vlSymsp->TOP__v.__PVT__dport_axi_wr_w));
    bufp->fullWData(oldp+563,(__Vtemp_2),69);
    bufp->fullIData(oldp+566,((((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_rd_q) 
                                | (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_wr_q))
                                ? vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_addr_q
                                : ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__write_active_w)
                                    ? vlSelf->__Vcellinp__v__axi_t_awaddr_i
                                    : vlSelf->__Vcellinp__v__axi_t_araddr_i))),32);
    bufp->fullIData(oldp+567,(((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                                ? vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q
                                : vlSelf->__Vcellinp__v__axi_t_wdata_i)),32);
    bufp->fullCData(oldp+568,(((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                                ? (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_wr_w)
                                : (IData)(vlSymsp->TOP__v__u_tcm.__PVT__ext_wr_w))),4);
    bufp->fullCData(oldp+569,((((IData)(vlSelf->__Vcellinp__v__axi_t_arvalid_i) 
                                & (IData)(vlSymsp->TOP__v__u_tcm.__PVT__axi_arready_o))
                                ? (0x20U | (((0U == (IData)(vlSelf->__Vcellinp__v__axi_t_arlen_i)) 
                                             << 4U) 
                                            | (IData)(vlSelf->__Vcellinp__v__axi_t_arid_i)))
                                : (((IData)(vlSelf->__Vcellinp__v__axi_t_awvalid_i) 
                                    & (IData)(vlSymsp->TOP__v__u_tcm.__PVT__axi_awready_o))
                                    ? (((0U == (IData)(vlSelf->__Vcellinp__v__axi_t_awlen_i)) 
                                        << 4U) | (IData)(vlSelf->__Vcellinp__v__axi_t_awid_i))
                                    : (((IData)(vlSymsp->TOP__v__u_tcm.__PVT__ext_rd_w) 
                                        << 5U) | ((
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+570,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_invalid_w));
    bufp->fullIData(oldp+571,(((IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_q)
                                ? vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_target_q
                                : vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_target_r)),32);
    bufp->fullBit(oldp+572,((((~ (IData)(vlSymsp->TOP__v.__PVT__dport_accept_w)) 
                              & ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q) 
                                 | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                    | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
                                       | ((IData)(vlSymsp->TOP__v__u_core.__PVT__mem_d_rd_o) 
                                          | (0U != (IData)(vlSymsp->TOP__v__u_core.__PVT__mem_d_wr_o))))))) 
                             | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q)))));
    bufp->fullBit(oldp+573,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_pending_q) 
                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_csr_w))));
    bufp->fullCData(oldp+574,((((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                                & (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))
                                ? 0x14U : (((~ (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o)) 
                                            & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))
                                            ? 0x16U
                                            : (((IData)(vlSymsp->TOP__v.__PVT__dport_error_w) 
                                                & (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))
                                                ? 0x15U
                                                : (
                                                   ((~ (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o)) 
                                                    & (IData)(vlSymsp->TOP__v.__PVT__dport_error_w))
                                                    ? 0x17U
                                                    : 0U))))),6);
    bufp->fullBit(oldp+575,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_csr_w));
    bufp->fullBit(oldp+576,(((IData)(vlSymsp->TOP__v.__PVT__dport_error_w) 
                             & (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))));
    bufp->fullBit(oldp+577,(((~ (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o)) 
                             & (IData)(vlSymsp->TOP__v.__PVT__dport_error_w))));
    bufp->fullBit(oldp+578,((1U & ((~ (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__exec_hold_o)) 
                                   & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                      >> 3U)))));
    bufp->fullBit(oldp+579,(((~ (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__exec_hold_o)) 
                             & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                >> 9U))));
    bufp->fullBit(oldp+580,((((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                              & ((0x344U == (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                             >> 0x14U)) 
                                 | (0x144U == (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                               >> 0x14U)))) 
                             | (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q))));
    bufp->fullIData(oldp+581,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_r),32);
    bufp->fullIData(oldp+582,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_r),32);
}
