// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_tcm_top___024root___dump_triggers__stl(Vriscv_tcm_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_tcm_top___024root___eval_triggers__stl(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_tcm_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vriscv_tcm_top___024root___stl_sequent__TOP__0(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__clk_i, vlSelf->clk_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__rst_i, vlSelf->rst_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__rst_cpu_i, vlSelf->rst_cpu_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__v__axi_t_awid_i, vlSelf->axi_t_awid_i);
    VL_ASSIGN_ISU(8,vlSelf->__Vcellinp__v__axi_t_awlen_i, vlSelf->axi_t_awlen_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__v__axi_t_awburst_i, vlSelf->axi_t_awburst_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__v__axi_t_wdata_i, vlSelf->axi_t_wdata_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_wlast_i, vlSelf->axi_t_wlast_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__v__axi_t_arid_i, vlSelf->axi_t_arid_i);
    VL_ASSIGN_ISU(8,vlSelf->__Vcellinp__v__axi_t_arlen_i, vlSelf->axi_t_arlen_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__v__axi_t_arburst_i, vlSelf->axi_t_arburst_i);
    VL_ASSIGN_SUI(32,vlSelf->axi_t_rdata_o, vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram
                  [vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__rd_ptr]);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_i_arready_i, vlSelf->axi_i_arready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_bready_i, vlSelf->axi_t_bready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_rready_i, vlSelf->axi_t_rready_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__v__axi_t_awaddr_i, vlSelf->axi_t_awaddr_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_wvalid_i, vlSelf->axi_t_wvalid_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__v__axi_t_wstrb_i, vlSelf->axi_t_wstrb_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__v__axi_t_araddr_i, vlSelf->axi_t_araddr_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_i_awready_i, vlSelf->axi_i_awready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_i_wready_i, vlSelf->axi_i_wready_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__v__intr_i, vlSelf->intr_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_awvalid_i, vlSelf->axi_t_awvalid_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_arvalid_i, vlSelf->axi_t_arvalid_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__v__axi_i_rdata_i, vlSelf->axi_i_rdata_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__v__axi_i_bresp_i, vlSelf->axi_i_bresp_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__v__axi_i_rresp_i, vlSelf->axi_i_rresp_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_i_rvalid_i, vlSelf->axi_i_rvalid_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_i_bvalid_i, vlSelf->axi_i_bvalid_i);
}

VL_ATTR_COLD void Vriscv_tcm_top___024root___stl_sequent__TOP__1(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___stl_sequent__TOP__1\n"); );
    // Body
    VL_ASSIGN_SUI(32,vlSelf->axi_i_awaddr_o, (0xfffffffcU 
                                              & vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w[0U]));
    VL_ASSIGN_SUI(32,vlSelf->axi_i_wdata_o, vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w[1U]);
    VL_ASSIGN_SUI(4,vlSelf->axi_i_wstrb_o, (0xfU & 
                                            vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w[2U]));
    VL_ASSIGN_SUI(32,vlSelf->axi_i_araddr_o, (0xfffffffcU 
                                              & vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w[0U]));
    VL_ASSIGN_SII(1,vlSelf->axi_i_arvalid_o, vlSymsp->TOP__v.axi_i_arvalid_o);
    VL_ASSIGN_SII(1,vlSelf->axi_i_awvalid_o, vlSymsp->TOP__v.axi_i_awvalid_o);
    VL_ASSIGN_SII(1,vlSelf->axi_i_wvalid_o, vlSymsp->TOP__v.axi_i_wvalid_o);
    VL_ASSIGN_SUI(4,vlSelf->axi_t_bid_o, (0xfU & (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w)));
    VL_ASSIGN_SUI(4,vlSelf->axi_t_rid_o, (0xfU & (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w)));
    VL_ASSIGN_SII(1,vlSelf->axi_t_rlast_o, (1U & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w) 
                                                  >> 4U)));
    VL_ASSIGN_SII(1,vlSelf->axi_t_rvalid_o, vlSymsp->TOP__v__u_tcm.__PVT__axi_rvalid_o);
    VL_ASSIGN_SII(1,vlSelf->axi_t_arready_o, vlSymsp->TOP__v__u_tcm.__PVT__axi_arready_o);
    VL_ASSIGN_SII(1,vlSelf->axi_t_wready_o, vlSymsp->TOP__v__u_tcm.__PVT__axi_wready_o);
    VL_ASSIGN_SII(1,vlSelf->axi_t_awready_o, vlSymsp->TOP__v__u_tcm.__PVT__axi_awready_o);
    VL_ASSIGN_SII(1,vlSelf->axi_t_bvalid_o, vlSymsp->TOP__v__u_tcm.__PVT__axi_bvalid_o);
}

VL_ATTR_COLD void Vriscv_tcm_top_riscv_tcm_top___stl_sequent__TOP__v__0(Vriscv_tcm_top_riscv_tcm_top* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_tcm_mem___stl_sequent__TOP__v__u_tcm__0(Vriscv_tcm_top_tcm_mem* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__0(Vriscv_tcm_top_riscv_core__M0_MBffffffff* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__0(Vriscv_tcm_top_riscv_csr_regfile* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__0(Vriscv_tcm_top_riscv_csr__SB0* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_riscv_issue___stl_sequent__TOP__v__u_core__u_issue__0(Vriscv_tcm_top_riscv_issue* vlSelf);
void Vriscv_tcm_top_riscv_regfile___nba_comb__TOP__v__u_core__u_issue__u_regfile__0(Vriscv_tcm_top_riscv_regfile* vlSelf);
void Vriscv_tcm_top_riscv_tcm_top___ico_sequent__TOP__v__1(Vriscv_tcm_top_riscv_tcm_top* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__1(Vriscv_tcm_top_riscv_csr_regfile* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__1(Vriscv_tcm_top_riscv_core__M0_MBffffffff* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__1(Vriscv_tcm_top_riscv_csr__SB0* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_riscv_issue___stl_sequent__TOP__v__u_core__u_issue__1(Vriscv_tcm_top_riscv_issue* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__2(Vriscv_tcm_top_riscv_core__M0_MBffffffff* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__2(Vriscv_tcm_top_riscv_csr__SB0* vlSelf);
void Vriscv_tcm_top_riscv_issue___ico_sequent__TOP__v__u_core__u_issue__1(Vriscv_tcm_top_riscv_issue* vlSelf);

VL_ATTR_COLD void Vriscv_tcm_top___024root___eval_stl(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vriscv_tcm_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vriscv_tcm_top_riscv_tcm_top___stl_sequent__TOP__v__0((&vlSymsp->TOP__v));
        Vriscv_tcm_top_tcm_mem___stl_sequent__TOP__v__u_tcm__0((&vlSymsp->TOP__v__u_tcm));
        Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__0((&vlSymsp->TOP__v__u_core));
        Vriscv_tcm_top_riscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__v__u_core__u_csr__u_csrfile));
        Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__0((&vlSymsp->TOP__v__u_core__u_csr));
        Vriscv_tcm_top_riscv_issue___stl_sequent__TOP__v__u_core__u_issue__0((&vlSymsp->TOP__v__u_core__u_issue));
        Vriscv_tcm_top___024root___stl_sequent__TOP__1(vlSelf);
        Vriscv_tcm_top_riscv_regfile___nba_comb__TOP__v__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__v__u_core__u_issue__u_regfile));
        Vriscv_tcm_top_riscv_tcm_top___ico_sequent__TOP__v__1((&vlSymsp->TOP__v));
        Vriscv_tcm_top_riscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__1((&vlSymsp->TOP__v__u_core__u_csr__u_csrfile));
        Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__1((&vlSymsp->TOP__v__u_core));
        Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__1((&vlSymsp->TOP__v__u_core__u_csr));
        Vriscv_tcm_top_riscv_issue___stl_sequent__TOP__v__u_core__u_issue__1((&vlSymsp->TOP__v__u_core__u_issue));
        Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__2((&vlSymsp->TOP__v__u_core));
        Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__2((&vlSymsp->TOP__v__u_core__u_csr));
        Vriscv_tcm_top_riscv_issue___ico_sequent__TOP__v__u_core__u_issue__1((&vlSymsp->TOP__v__u_core__u_issue));
    }
}
