// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vriscv_tcm_top__Syms.h"


void Vriscv_tcm_top___024root__trace_chg_0_sub_0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vriscv_tcm_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_chg_0\n"); );
    // Init
    Vriscv_tcm_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_tcm_top___024root*>(voidSelf);
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv_tcm_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vriscv_tcm_top___024root__trace_chg_0_sub_0(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->__Vcellinp__v__clk_i));
        bufp->chgBit(oldp+1,(vlSelf->__Vcellinp__v__rst_i));
        bufp->chgBit(oldp+2,(vlSelf->__Vcellinp__v__rst_cpu_i));
        bufp->chgBit(oldp+3,(vlSelf->__Vcellinp__v__axi_i_awready_i));
        bufp->chgBit(oldp+4,(vlSelf->__Vcellinp__v__axi_i_wready_i));
        bufp->chgBit(oldp+5,(vlSelf->__Vcellinp__v__axi_i_bvalid_i));
        bufp->chgCData(oldp+6,(vlSelf->__Vcellinp__v__axi_i_bresp_i),2);
        bufp->chgBit(oldp+7,(vlSelf->__Vcellinp__v__axi_i_arready_i));
        bufp->chgBit(oldp+8,(vlSelf->__Vcellinp__v__axi_i_rvalid_i));
        bufp->chgIData(oldp+9,(vlSelf->__Vcellinp__v__axi_i_rdata_i),32);
        bufp->chgCData(oldp+10,(vlSelf->__Vcellinp__v__axi_i_rresp_i),2);
        bufp->chgBit(oldp+11,(vlSelf->__Vcellinp__v__axi_t_awvalid_i));
        bufp->chgIData(oldp+12,(vlSelf->__Vcellinp__v__axi_t_awaddr_i),32);
        bufp->chgCData(oldp+13,(vlSelf->__Vcellinp__v__axi_t_awid_i),4);
        bufp->chgCData(oldp+14,(vlSelf->__Vcellinp__v__axi_t_awlen_i),8);
        bufp->chgCData(oldp+15,(vlSelf->__Vcellinp__v__axi_t_awburst_i),2);
        bufp->chgBit(oldp+16,(vlSelf->__Vcellinp__v__axi_t_wvalid_i));
        bufp->chgIData(oldp+17,(vlSelf->__Vcellinp__v__axi_t_wdata_i),32);
        bufp->chgCData(oldp+18,(vlSelf->__Vcellinp__v__axi_t_wstrb_i),4);
        bufp->chgBit(oldp+19,(vlSelf->__Vcellinp__v__axi_t_wlast_i));
        bufp->chgBit(oldp+20,(vlSelf->__Vcellinp__v__axi_t_bready_i));
        bufp->chgBit(oldp+21,(vlSelf->__Vcellinp__v__axi_t_arvalid_i));
        bufp->chgIData(oldp+22,(vlSelf->__Vcellinp__v__axi_t_araddr_i),32);
        bufp->chgCData(oldp+23,(vlSelf->__Vcellinp__v__axi_t_arid_i),4);
        bufp->chgCData(oldp+24,(vlSelf->__Vcellinp__v__axi_t_arlen_i),8);
        bufp->chgCData(oldp+25,(vlSelf->__Vcellinp__v__axi_t_arburst_i),2);
        bufp->chgBit(oldp+26,(vlSelf->__Vcellinp__v__axi_t_rready_i));
        bufp->chgIData(oldp+27,(vlSelf->__Vcellinp__v__intr_i),32);
        bufp->chgBit(oldp+28,(((IData)(vlSelf->__Vcellinp__v__axi_i_bvalid_i)
                                ? (0U != (IData)(vlSelf->__Vcellinp__v__axi_i_bresp_i))
                                : (0U != (IData)(vlSelf->__Vcellinp__v__axi_i_rresp_i)))));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__v.__PVT__dport_axi_ack_w));
        bufp->chgCData(oldp+30,(((IData)(vlSelf->__Vcellinp__v__axi_t_awvalid_i)
                                  ? (IData)(vlSelf->__Vcellinp__v__axi_t_awlen_i)
                                  : ((IData)(vlSelf->__Vcellinp__v__axi_t_arvalid_i)
                                      ? (IData)(vlSelf->__Vcellinp__v__axi_t_arlen_i)
                                      : 0U))),8);
        bufp->chgBit(oldp+31,((1U & vlSelf->__Vcellinp__v__intr_i)));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+32,(vlSymsp->TOP__v.axi_i_awvalid_o));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__v.axi_i_wvalid_o));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__v.axi_i_arvalid_o));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__v__u_tcm.__PVT__axi_awready_o));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__v__u_tcm.__PVT__axi_wready_o));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__v__u_tcm.__PVT__axi_arready_o));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__v.__PVT__dport_ack_w));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__v.__PVT__dport_error_w));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__v.__PVT__u_axi__DOT__write_complete_w));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__v.__PVT__u_axi__DOT__read_complete_w));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__v.__PVT__u_axi__DOT__req_pop_w));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__v.__PVT__u_axi__DOT__req_is_write_w));
        bufp->chgCData(oldp+44,(vlSymsp->TOP__v__u_tcm.__PVT__ext_wr_w),4);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__v__u_tcm.__PVT__ext_rd_w));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_push_w));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__resp_accept_w));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__write_active_w));
        bufp->chgBit(oldp+49,(((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__write_active_w) 
                               & (IData)(vlSelf->__Vcellinp__v__axi_t_wvalid_i))));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__complete_ok_e2_w));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__complete_err_e2_w));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[6U]) 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgQData(oldp+52,(((0x2002033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))
                                  ? (QData)((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r))
                                  : ((0x2001033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))
                                      ? (((QData)((IData)(
                                                          (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r 
                                                           >> 0x1fU))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r)))
                                      : (QData)((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r))))),33);
        bufp->chgQData(oldp+54,(((0x2002033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))
                                  ? vlSymsp->TOP__v__u_core.u_mul__DOT____VdfgTmp_h5fcd7459__0
                                  : ((0x2001033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))
                                      ? vlSymsp->TOP__v__u_core.u_mul__DOT____VdfgTmp_h5fcd7459__0
                                      : (QData)((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r))))),33);
        bufp->chgBit(oldp+56,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x73U == vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+57,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x100073U == vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+58,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x200073U == (0xcfffffffU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+59,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x2073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+60,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x3073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+61,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x10500073U == (0xffff8fffU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+62,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0xfU == (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+63,(((IData)(((0U != (0xf8000U 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                        | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrw_w))) 
                               | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrwi_w))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+64,(vlSymsp->TOP__v.__PVT__dport_tcm_wr_w),4);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__v.__PVT__dport_tcm_rd_w));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__v__u_core.__PVT__mem_d_rd_o));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__v.__PVT__dport_axi_rd_w));
        bufp->chgCData(oldp+68,(vlSymsp->TOP__v__u_core.__PVT__mem_d_wr_o),4);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__v.__PVT__dport_axi_wr_w),4);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__v.__PVT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__v.__PVT__u_axi__DOT__res_push_w));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__v.__PVT__u_dmux__DOT__request_w));
        bufp->chgCData(oldp+73,(vlSymsp->TOP__v.__PVT__u_dmux__DOT__pending_r),5);
        bufp->chgSData(oldp+74,(vlSymsp->TOP__v__u_tcm.__PVT__muxed_addr_w),14);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__v__u_core__u_issue.__PVT__exec_hold_o));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__issue_lsu_e1_w));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellinp__u_lsu_request__push_i));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__v__u_core__u_issue.__PVT__squash_w));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_valid_w));
        bufp->chgCData(oldp+82,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe_rd_e2_w),5);
        bufp->chgBit(oldp+83,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe_valid_wb_w));
        bufp->chgCData(oldp+84,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe_rd_wb_w),5);
        bufp->chgBit(oldp+85,((0U != (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_r))));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_w));
        bufp->chgCData(oldp+87,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_r),6);
        bufp->chgWData(oldp+88,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str),80);
        bufp->chgWData(oldp+91,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra),80);
        bufp->chgWData(oldp+94,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb),80);
        bufp->chgWData(oldp+97,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd),80);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc),32);
        bufp->chgWData(oldp+102,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str),80);
        bufp->chgWData(oldp+105,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra),80);
        bufp->chgWData(oldp+108,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb),80);
        bufp->chgWData(oldp+111,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd),80);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_pc),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+116,(vlSymsp->TOP__v__u_core.__PVT__mem_i_rd_o));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__v__u_core__u_issue.__PVT__fetch_accept_o));
        bufp->chgIData(oldp+118,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r),32);
        bufp->chgBit(oldp+119,(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_issue_r));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_opcode_invalid_o));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__v__u_core__u_issue.__PVT__branch_request_o));
        bufp->chgIData(oldp+123,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r),32);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec_request_w));
        bufp->chgIData(oldp+125,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_target_r),32);
        bufp->chgBit(oldp+127,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_start_w));
        bufp->chgIData(oldp+128,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__alu_input_a_r),32);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__alu_input_b_r),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__result_r),32);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__less_than_signed__Vstatic__v),32);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__greater_than_signed__Vstatic__v),32);
        bufp->chgBit(oldp+133,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_r));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_taken_r));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_call_r));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_ret_r));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_jmp_r));
        bufp->chgSData(oldp+138,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r),16);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__u_alu__DOT__sub_res_w),32);
        bufp->chgBit(oldp+148,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__stall_w));
        bufp->chgIData(oldp+149,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
        bufp->chgBit(oldp+150,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
        bufp->chgIData(oldp+151,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_r),32);
        bufp->chgBit(oldp+152,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_rd_r));
        bufp->chgCData(oldp+153,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_wr_r),4);
        bufp->chgCData(oldp+154,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
        bufp->chgBit(oldp+155,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_byte_r));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_half_r));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_signed_r));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_accept_r));
        bufp->chgIData(oldp+159,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_e2_r),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__v__u_core__u_issue.__PVT__scoreboard_r),32);
        bufp->chgBit(oldp+161,(((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec_request_w) 
                                & (0U != (3U & vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_target_r)))));
        bufp->chgWData(oldp+162,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str),80);
        bufp->chgWData(oldp+165,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra),80);
        bufp->chgWData(oldp+168,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb),80);
        bufp->chgWData(oldp+171,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd),80);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc),32);
        bufp->chgBit(oldp+176,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrw_w));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrwi_w));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrsi_w));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrci_w));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__v__u_core__u_csr.__PVT__sfence_w));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_w));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__v__u_core__u_csr.__VdfgExtracted_h996e9194__0));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__v__u_core__u_csr.__VdfgExtracted_hcaf0a663__0));
        bufp->chgIData(oldp+184,(vlSymsp->TOP__v__u_core__u_csr.__PVT__data_r),32);
        bufp->chgBit(oldp+185,(vlSymsp->TOP__v__u_core__u_csr.__PVT__satp_update_w));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__v__u_core__u_csr.__PVT__eret_fault_w));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+187,(vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read0_q),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+219,((0xfffffffcU & vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w[0U])),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w[1U]),32);
        bufp->chgCData(oldp+221,((0xfU & vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w[2U])),4);
        bufp->chgBit(oldp+222,(vlSymsp->TOP__v__u_tcm.__PVT__axi_bvalid_o));
        bufp->chgCData(oldp+223,((0xfU & (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w))),4);
        bufp->chgBit(oldp+224,(vlSymsp->TOP__v__u_tcm.__PVT__axi_rvalid_o));
        bufp->chgIData(oldp+225,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram
                                 [vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__rd_ptr]),32);
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w) 
                                      >> 4U))));
        bufp->chgBit(oldp+227,(((2U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__count_q)) 
                                & (2U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__count_q)))));
        bufp->chgSData(oldp+228,(((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                                   ? (IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_tag_q)
                                   : vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__ram_q
                                  [vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q])),11);
        bufp->chgSData(oldp+229,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__ram_q
                                 [vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q]),11);
        bufp->chgBit(oldp+230,(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_ack_q));
        bufp->chgSData(oldp+231,(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_tag_q),11);
        bufp->chgBit(oldp+232,(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q));
        bufp->chgBit(oldp+233,((2U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__count_q))));
        bufp->chgBit(oldp+234,((2U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__count_q))));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__v.__PVT__u_axi__DOT__request_pending_q));
        bufp->chgBit(oldp+236,((0U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__count_q))));
        bufp->chgWData(oldp+237,(vlSymsp->TOP__v.__PVT__u_axi__DOT__req_w),69);
        bufp->chgBit(oldp+240,(vlSymsp->TOP__v.__PVT__u_axi__DOT__awvalid_inhibit_q));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__v.__PVT__u_axi__DOT__wvalid_inhibit_q));
        bufp->chgWData(oldp+242,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__ram_q[0]),69);
        bufp->chgWData(oldp+245,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__ram_q[1]),69);
        bufp->chgBit(oldp+248,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+250,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_req__DOT__count_q),2);
        bufp->chgBit(oldp+251,((0U != (IData)(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__count_q))));
        bufp->chgSData(oldp+252,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__ram_q[0]),11);
        bufp->chgSData(oldp+253,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__ram_q[1]),11);
        bufp->chgBit(oldp+254,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__wr_ptr_q));
        bufp->chgCData(oldp+256,(vlSymsp->TOP__v.__PVT__u_axi__DOT__u_resp__DOT__count_q),2);
        bufp->chgBit(oldp+257,(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q));
        bufp->chgCData(oldp+258,(vlSymsp->TOP__v.__PVT__u_dmux__DOT__pending_q),5);
        bufp->chgBit(oldp+259,((1U & (~ (IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)))));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__v__u_tcm.__PVT__ext_ack_q));
        bufp->chgIData(oldp+261,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+262,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_len_q),8);
        bufp->chgIData(oldp+263,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_addr_q),32);
        bufp->chgBit(oldp+264,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_rd_q));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_wr_q));
        bufp->chgCData(oldp+266,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_id_q),4);
        bufp->chgCData(oldp+267,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+268,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+269,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_prio_q));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+272,((4U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+273,((0U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+274,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w),6);
        bufp->chgBit(oldp+275,(((~ ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w) 
                                    >> 5U)) & (0U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+276,(((0U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__count)) 
                                & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_out_w) 
                                   >> 5U))));
        bufp->chgBit(oldp+277,((0U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+278,((((~ (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_rd_q)) 
                                 & (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_prio_q)) 
                                | (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+279,((1U & ((~ ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_wr_q) 
                                          | (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_prio_q))) 
                                      | (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+280,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+281,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+282,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+283,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+284,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+285,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+286,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+287,((4U != (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+288,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+290,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+291,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+292,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+293,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+294,(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__u_response__DOT__count),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+295,((0xfffffffcU & vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__pc_f_q)),32);
        bufp->chgBit(oldp+296,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
        bufp->chgBit(oldp+297,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q));
        bufp->chgIData(oldp+298,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
        bufp->chgBit(oldp+299,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
        bufp->chgIData(oldp+300,((0xfffffffcU & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)),32);
        bufp->chgBit(oldp+301,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
        bufp->chgBit(oldp+302,(((IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_q) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__icache_invalidate_q))));
        bufp->chgBit(oldp+303,((0x10000U > (0xfffffffcU 
                                            & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q))));
        bufp->chgCData(oldp+304,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__priv_f_q),2);
        bufp->chgBit(oldp+305,(vlSymsp->TOP__v__u_core__u_csr.__PVT__tlb_flush_q));
        bufp->chgIData(oldp+306,(vlSymsp->TOP__v__u_core.__PVT__fetch_pc_w),32);
        bufp->chgIData(oldp+307,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__pc_m_q),32);
        bufp->chgIData(oldp+308,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__wb_result_q),32);
        bufp->chgBit(oldp+309,(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_q));
        bufp->chgBit(oldp+310,((1U & (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                      >> 0x13U))));
        bufp->chgCData(oldp+311,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q),6);
        bufp->chgBit(oldp+312,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_ret_q));
        bufp->chgIData(oldp+313,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q),32);
        bufp->chgCData(oldp+314,(vlSymsp->TOP__v__u_core__u_csr.__PVT__exception_e1_q),6);
        bufp->chgIData(oldp+315,(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_target_q),32);
        bufp->chgBit(oldp+316,(vlSymsp->TOP__v__u_core.__PVT__fetch_fault_page_w));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_ntaken_q));
        bufp->chgIData(oldp+318,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__pc_x_q),32);
        bufp->chgBit(oldp+319,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_taken_q));
        bufp->chgBit(oldp+320,(vlSymsp->TOP__v__u_core.__PVT__fetch_dec_fault_fetch_w));
        bufp->chgCData(oldp+321,(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_csr_priv_o),2);
        bufp->chgBit(oldp+322,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_ntaken_q) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_taken_q))));
        bufp->chgCData(oldp+323,(((IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_q)
                                   ? (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_csr_priv_o)
                                   : (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__priv_x_q))),2);
        bufp->chgCData(oldp+324,((3U & ((0x20000U & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q)
                                         ? (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                            >> 0xbU)
                                         : (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)))),2);
        bufp->chgBit(oldp+325,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__valid_q));
        bufp->chgIData(oldp+326,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_q),32);
        bufp->chgIData(oldp+327,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csr_wdata_e1_q),32);
        bufp->chgBit(oldp+328,(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_q));
        bufp->chgIData(oldp+329,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q),32);
        bufp->chgBit(oldp+330,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_wb_q));
        bufp->chgBit(oldp+331,(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q));
        bufp->chgIData(oldp+332,(vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_result_e1_q),32);
        bufp->chgSData(oldp+333,((vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+334,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_jmp_q));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_valid_e1_q));
        bufp->chgIData(oldp+336,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e2_q),32);
        bufp->chgBit(oldp+337,((1U & (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                      >> 0x12U))));
        bufp->chgIData(oldp+338,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__result_q),32);
        bufp->chgIData(oldp+339,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q),32);
        bufp->chgBit(oldp+340,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_call_q));
        bufp->chgBit(oldp+341,(vlSymsp->TOP__v__u_core.u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i));
        bufp->chgIData(oldp+342,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q),32);
        bufp->chgQData(oldp+343,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__divisor_q),63);
        bufp->chgIData(oldp+345,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q),32);
        bufp->chgIData(oldp+346,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__q_mask_q),32);
        bufp->chgBit(oldp+347,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_inst_q));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_busy_q));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_complete_w));
        bufp->chgIData(oldp+351,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_inst_q)
                                   ? ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q)
                                       ? (- vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q)
                                       : vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q)
                                   : ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q)
                                       ? (- vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q)
                                       : vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q))),32);
        bufp->chgBit(oldp+352,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__active_q));
        bufp->chgBit(oldp+353,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_q));
        bufp->chgIData(oldp+354,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_pc_q),32);
        bufp->chgCData(oldp+355,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_priv_q),2);
        bufp->chgBit(oldp+356,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__stall_q));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__icache_fetch_q));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__icache_invalidate_q));
        bufp->chgIData(oldp+359,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__pc_f_q),32);
        bufp->chgIData(oldp+360,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__pc_d_q),32);
        bufp->chgBit(oldp+361,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_d_q) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_q))));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__branch_d_q));
        bufp->chgWData(oldp+363,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__skid_buffer_q),66);
        bufp->chgBit(oldp+366,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__skid_valid_q));
        bufp->chgIData(oldp+367,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
        bufp->chgBit(oldp+368,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_rd_q));
        bufp->chgCData(oldp+369,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
        bufp->chgBit(oldp+370,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q));
        bufp->chgBit(oldp+372,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_load_q));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xb_q));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xh_q));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_ls_q));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__pending_lsu_e2_q));
        bufp->chgBit(oldp+377,((1U & (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))));
        bufp->chgIData(oldp+378,((IData)((vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                          >> 4U))),32);
        bufp->chgBit(oldp+379,((1U & (IData)((vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                              >> 1U)))));
        bufp->chgBit(oldp+380,((1U & (IData)((vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                              >> 2U)))));
        bufp->chgBit(oldp+381,((1U & (IData)((vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                              >> 3U)))));
        bufp->chgBit(oldp+382,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                                & (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))));
        bufp->chgBit(oldp+383,(((~ (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o)) 
                                & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))));
        bufp->chgQData(oldp+384,((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)) 
                                   << 4U) | (QData)((IData)(
                                                            (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_ls_q) 
                                                              << 3U) 
                                                             | (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xh_q) 
                                                                 << 2U) 
                                                                | (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xb_q) 
                                                                    << 1U) 
                                                                   | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_load_q)))))))),36);
        bufp->chgQData(oldp+386,(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o),36);
        bufp->chgBit(oldp+388,((2U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
        bufp->chgBit(oldp+389,((0U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
        bufp->chgQData(oldp+390,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[0]),36);
        bufp->chgQData(oldp+392,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[1]),36);
        bufp->chgBit(oldp+394,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q));
        bufp->chgCData(oldp+396,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q),2);
        bufp->chgIData(oldp+397,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__i),32);
        bufp->chgIData(oldp+398,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e3_q),32);
        bufp->chgQData(oldp+399,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__operand_a_e1_q),33);
        bufp->chgQData(oldp+401,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__operand_b_e1_q),33);
        bufp->chgBit(oldp+403,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q));
        bufp->chgWData(oldp+404,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w),65);
        bufp->chgIData(oldp+407,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q)
                                   ? vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w[1U]
                                   : vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w[0U])),32);
        bufp->chgCData(oldp+408,(vlSymsp->TOP__v__u_core__u_issue.__PVT__priv_x_q),2);
        bufp->chgBit(oldp+409,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+410,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 2U))));
        bufp->chgBit(oldp+411,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 5U))));
        bufp->chgBit(oldp+412,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 6U))));
        bufp->chgCData(oldp+413,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe_rd_e1_w),5);
        bufp->chgIData(oldp+414,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_e1_q),32);
        bufp->chgIData(oldp+415,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_e1_q),32);
        bufp->chgIData(oldp+416,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_e1_q),32);
        bufp->chgIData(oldp+417,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_e1_q),32);
        bufp->chgBit(oldp+418,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+419,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                      >> 5U))));
        bufp->chgIData(oldp+420,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q),32);
        bufp->chgIData(oldp+421,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_wb_q),32);
        bufp->chgIData(oldp+422,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_wb_q),32);
        bufp->chgCData(oldp+423,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_fault_w),6);
        bufp->chgBit(oldp+424,(vlSymsp->TOP__v__u_core__u_issue.__PVT__div_pending_q));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_pending_q));
        bufp->chgCData(oldp+426,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+427,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+428,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q));
        bufp->chgSData(oldp+429,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q),10);
        bufp->chgIData(oldp+430,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_e1_q),32);
        bufp->chgCData(oldp+431,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e1_q),6);
        bufp->chgBit(oldp+432,((1U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))));
        bufp->chgBit(oldp+433,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 3U))));
        bufp->chgBit(oldp+434,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 4U))));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_q));
        bufp->chgSData(oldp+436,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q),10);
        bufp->chgBit(oldp+437,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_e2_q));
        bufp->chgIData(oldp+438,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_e2_q),32);
        bufp->chgIData(oldp+439,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_e2_q),32);
        bufp->chgIData(oldp+440,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_e2_q),32);
        bufp->chgIData(oldp+441,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_e2_q),32);
        bufp->chgIData(oldp+442,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_e2_q),32);
        bufp->chgIData(oldp+443,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_e2_q),32);
        bufp->chgIData(oldp+444,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_e2_q),32);
        bufp->chgCData(oldp+445,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_q),6);
        bufp->chgBit(oldp+446,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__load_store_e2_w));
        bufp->chgBit(oldp+447,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__squash_e1_e2_q));
        bufp->chgBit(oldp+448,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_wb_q));
        bufp->chgSData(oldp+449,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q),10);
        bufp->chgIData(oldp+450,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_wb_q),32);
        bufp->chgCData(oldp+451,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                           >> 7U))),5);
        bufp->chgSData(oldp+452,((0x3fffU & (vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                             >> 2U))),14);
        bufp->chgCData(oldp+453,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q),2);
        bufp->chgBit(oldp+454,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_r));
        bufp->chgIData(oldp+455,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_target_r),32);
        bufp->chgIData(oldp+456,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__irq_masked_r),32);
        bufp->chgIData(oldp+457,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q),32);
        bufp->chgBit(oldp+458,(vlSymsp->TOP__v__u_core__u_csr.__PVT__reset_q));
        bufp->chgSData(oldp+459,(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i),12);
        bufp->chgIData(oldp+460,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mepc_q),32);
        bufp->chgIData(oldp+461,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcause_q),32);
        bufp->chgIData(oldp+462,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_q),32);
        bufp->chgIData(oldp+463,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_q),32);
        bufp->chgIData(oldp+464,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_q),32);
        bufp->chgIData(oldp+465,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q),32);
        bufp->chgIData(oldp+466,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_h_q),32);
        bufp->chgIData(oldp+467,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_q),32);
        bufp->chgIData(oldp+468,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtval_q),32);
        bufp->chgIData(oldp+469,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_q),32);
        bufp->chgBit(oldp+470,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_q));
        bufp->chgIData(oldp+471,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_q),32);
        bufp->chgIData(oldp+472,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_q),32);
        bufp->chgIData(oldp+473,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sepc_q),32);
        bufp->chgIData(oldp+474,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stvec_q),32);
        bufp->chgIData(oldp+475,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_scause_q),32);
        bufp->chgIData(oldp+476,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stval_q),32);
        bufp->chgIData(oldp+477,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_q),32);
        bufp->chgIData(oldp+478,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__irq_pending_r),32);
        bufp->chgCData(oldp+479,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__irq_priv_q),2);
        bufp->chgBit(oldp+480,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q));
        bufp->chgIData(oldp+481,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mepc_r),32);
        bufp->chgIData(oldp+482,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcause_r),32);
        bufp->chgIData(oldp+483,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtval_r),32);
        bufp->chgIData(oldp+484,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_r),32);
        bufp->chgIData(oldp+485,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_r),32);
        bufp->chgIData(oldp+486,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_r),32);
        bufp->chgCData(oldp+487,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_r),2);
        bufp->chgIData(oldp+488,(((IData)(1U) + vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q)),32);
        bufp->chgIData(oldp+489,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_r),32);
        bufp->chgIData(oldp+490,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_r),32);
        bufp->chgBit(oldp+491,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_r));
        bufp->chgIData(oldp+492,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_r),32);
        bufp->chgIData(oldp+493,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_r),32);
        bufp->chgIData(oldp+494,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_q),32);
        bufp->chgIData(oldp+495,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sepc_r),32);
        bufp->chgIData(oldp+496,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stvec_r),32);
        bufp->chgIData(oldp+497,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_scause_r),32);
        bufp->chgIData(oldp+498,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stval_r),32);
        bufp->chgIData(oldp+499,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_r),32);
        bufp->chgIData(oldp+500,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_r),32);
        bufp->chgBit(oldp+501,((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+502,((0x1fU & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                           >> 7U))),5);
        bufp->chgCData(oldp+503,((0x1fU & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+504,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_mul_w));
        bufp->chgIData(oldp+505,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w),32);
        bufp->chgCData(oldp+506,((0x1fU & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                           >> 0xfU))),5);
        bufp->chgBit(oldp+507,(((3U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | ((0x1003U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x2003U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                      | ((0x4003U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                         | ((0x5003U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                            | ((0x6003U 
                                                == 
                                                (0x707fU 
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
        bufp->chgBit(oldp+508,(((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | ((0x67U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x63U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                      | ((0x1063U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                         | ((0x4063U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                            | ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                               | ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                                  | (0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))))))))));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_exec_w));
        bufp->chgIData(oldp+510,(vlSymsp->TOP__v__u_core.__PVT__fetch_dec_instr_w),32);
        bufp->chgBit(oldp+511,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_div_w));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_rd_valid_w));
        bufp->chgBit(oldp+513,((0x2004033U == (0xfe00707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+514,((0x2005033U == (0xfe00707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+515,((0x2006033U == (0xfe00707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+516,((0x2007033U == (0xfe00707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+517,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_operation_w) 
                                | ((0x2006033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                   | (0x2007033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))))));
        bufp->chgBit(oldp+518,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__signed_operation_w));
        bufp->chgBit(oldp+519,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_operation_w));
        bufp->chgIData(oldp+520,((0xfffff000U & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)),32);
        bufp->chgIData(oldp+521,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__imm12_r),32);
        bufp->chgIData(oldp+522,((((- (IData)((vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
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
        bufp->chgIData(oldp+523,((((- (IData)((vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
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
        bufp->chgCData(oldp+524,((0x1fU & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+525,(vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__alu_func_r),4);
        bufp->chgBit(oldp+526,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_inst_w));
        bufp->chgBit(oldp+527,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_signed_inst_w));
        bufp->chgBit(oldp+528,(((0x23U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | ((0x1023U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                   | (0x2023U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))))));
        bufp->chgBit(oldp+529,(((3U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | (0x4003U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+530,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__req_lh_w));
        bufp->chgBit(oldp+531,(((0x2003U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | (0x6003U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+532,((0x23U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+533,((0x1023U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+534,((0x2023U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+535,(((0x2023U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | ((0x2003U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                   | (0x6003U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))))));
        bufp->chgBit(oldp+536,(((0x1023U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__req_lh_w))));
        bufp->chgBit(oldp+537,((IData)((0x3a001073U 
                                        == (0xfff0707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+538,((IData)((0x3a101073U 
                                        == (0xfff0707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+539,((IData)((0x3a201073U 
                                        == (0xfff0707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+540,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_inst_w));
        bufp->chgIData(oldp+541,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__ra0_value_r),32);
        bufp->chgIData(oldp+542,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__rb0_value_r),32);
        bufp->chgCData(oldp+543,((3U & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+544,((3U & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+545,((3U == (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                       >> 0x1eU))));
        bufp->chgIData(oldp+546,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__rdata_r),32);
        bufp->chgSData(oldp+547,((vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                  >> 0x14U)),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+548,(vlSymsp->TOP__v.__PVT__dport_tcm_flush_w));
        bufp->chgBit(oldp+549,(vlSymsp->TOP__v.__PVT__dport_tcm_invalidate_w));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__v.__PVT__dport_tcm_writeback_w));
        bufp->chgBit(oldp+551,(vlSymsp->TOP__v.__PVT__dport_accept_w));
        bufp->chgBit(oldp+552,(vlSymsp->TOP__v.__PVT__u_dmux__DOT__hold_w));
        bufp->chgBit(oldp+553,(vlSymsp->TOP__v__u_core.__PVT__fetch_dec_valid_w));
        bufp->chgBit(oldp+554,(vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__icache_busy_w));
    }
    bufp->chgIData(oldp+555,(vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q),32);
    bufp->chgIData(oldp+556,(((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                               ? vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q
                               : vlSelf->__Vcellinp__v__axi_i_rdata_i)),32);
    bufp->chgBit(oldp+557,(((IData)(vlSymsp->TOP__v.u_dmux__DOT____VdfgTmp_h71f788cd__0) 
                            & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
    bufp->chgBit(oldp+558,(((IData)(vlSymsp->TOP__v.u_dmux__DOT____VdfgTmp_h71f788cd__0) 
                            & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q))));
    bufp->chgBit(oldp+559,(vlSymsp->TOP__v__u_tcm.__PVT__mem_i_valid_q));
    bufp->chgBit(oldp+560,(((IData)(vlSymsp->TOP__v.u_dmux__DOT____VdfgTmp_h71f788cd__0) 
                            & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
    bufp->chgBit(oldp+561,(((~ (IData)(vlSymsp->TOP__v.__PVT__dport_axi_ack_w)) 
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
    bufp->chgWData(oldp+562,(__Vtemp_2),69);
    bufp->chgIData(oldp+565,((((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_rd_q) 
                               | (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_wr_q))
                               ? vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_addr_q
                               : ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__write_active_w)
                                   ? vlSelf->__Vcellinp__v__axi_t_awaddr_i
                                   : vlSelf->__Vcellinp__v__axi_t_araddr_i))),32);
    bufp->chgIData(oldp+566,(((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                               ? vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q
                               : vlSelf->__Vcellinp__v__axi_t_wdata_i)),32);
    bufp->chgCData(oldp+567,(((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                               ? (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_wr_w)
                               : (IData)(vlSymsp->TOP__v__u_tcm.__PVT__ext_wr_w))),4);
    bufp->chgCData(oldp+568,((((IData)(vlSelf->__Vcellinp__v__axi_t_arvalid_i) 
                               & (IData)(vlSymsp->TOP__v__u_tcm.__PVT__axi_arready_o))
                               ? (0x20U | (((0U == (IData)(vlSelf->__Vcellinp__v__axi_t_arlen_i)) 
                                            << 4U) 
                                           | (IData)(vlSelf->__Vcellinp__v__axi_t_arid_i)))
                               : (((IData)(vlSelf->__Vcellinp__v__axi_t_awvalid_i) 
                                   & (IData)(vlSymsp->TOP__v__u_tcm.__PVT__axi_awready_o))
                                   ? (((0U == (IData)(vlSelf->__Vcellinp__v__axi_t_awlen_i)) 
                                       << 4U) | (IData)(vlSelf->__Vcellinp__v__axi_t_awid_i))
                                   : (((IData)(vlSymsp->TOP__v__u_tcm.__PVT__ext_rd_w) 
                                       << 5U) | (((0U 
                                                   == (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_len_q)) 
                                                  << 4U) 
                                                 | (IData)(vlSymsp->TOP__v__u_tcm.__PVT__u_conv__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+569,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_invalid_w));
    bufp->chgIData(oldp+570,(((IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_q)
                               ? vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_target_q
                               : vlSymsp->TOP__v__u_core.__PVT__u_exec__DOT__branch_target_r)),32);
    bufp->chgBit(oldp+571,((((~ (IData)(vlSymsp->TOP__v.__PVT__dport_accept_w)) 
                             & ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q) 
                                | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                   | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
                                      | ((IData)(vlSymsp->TOP__v__u_core.__PVT__mem_d_rd_o) 
                                         | (0U != (IData)(vlSymsp->TOP__v__u_core.__PVT__mem_d_wr_o))))))) 
                            | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w) 
                               | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q)))));
    bufp->chgBit(oldp+572,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_pending_q) 
                            | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_csr_w))));
    bufp->chgCData(oldp+573,((((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                               & (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))
                               ? 0x14U : (((~ (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o)) 
                                           & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))
                                           ? 0x16U : 
                                          (((IData)(vlSymsp->TOP__v.__PVT__dport_error_w) 
                                            & (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))
                                            ? 0x15U
                                            : (((~ (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o)) 
                                                & (IData)(vlSymsp->TOP__v.__PVT__dport_error_w))
                                                ? 0x17U
                                                : 0U))))),6);
    bufp->chgBit(oldp+574,(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_csr_w));
    bufp->chgBit(oldp+575,(((IData)(vlSymsp->TOP__v.__PVT__dport_error_w) 
                            & (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))));
    bufp->chgBit(oldp+576,(((~ (IData)(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellout__u_lsu_request__data_out_o)) 
                            & (IData)(vlSymsp->TOP__v.__PVT__dport_error_w))));
    bufp->chgBit(oldp+577,((1U & ((~ (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__exec_hold_o)) 
                                  & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                     >> 3U)))));
    bufp->chgBit(oldp+578,(((~ (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__exec_hold_o)) 
                            & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                               >> 9U))));
    bufp->chgBit(oldp+579,((((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                             & ((0x344U == (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                            >> 0x14U)) 
                                | (0x144U == (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                              >> 0x14U)))) 
                            | (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q))));
    bufp->chgIData(oldp+580,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_r),32);
    bufp->chgIData(oldp+581,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_r),32);
}

void Vriscv_tcm_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root__trace_cleanup\n"); );
    // Init
    Vriscv_tcm_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_tcm_top___024root*>(voidSelf);
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
