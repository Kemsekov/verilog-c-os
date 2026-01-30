// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_riscv_core__M0_MBffffffff.h"

VL_ATTR_COLD void Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__0(Vriscv_tcm_top_riscv_core__M0_MBffffffff* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelf->__PVT__mem_d_invalidate_o = vlSelf->__PVT__u_lsu__DOT__mem_invalidate_q;
    vlSelf->__PVT__mem_d_writeback_o = vlSelf->__PVT__u_lsu__DOT__mem_writeback_q;
    vlSelf->__PVT__mem_d_flush_o = vlSelf->__PVT__u_lsu__DOT__mem_flush_q;
    vlSelf->__PVT__u_fetch__DOT__icache_pc_w = vlSelf->__PVT__u_fetch__DOT__pc_f_q;
    vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o 
        = (2U != (IData)(vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o 
        = (0U != (IData)(vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q));
    __Vtemp_2[0U] = (IData)(vlSelf->__PVT__u_mul__DOT__operand_a_e1_q);
    __Vtemp_2[1U] = (((- (IData)((1U & (IData)((vlSelf->__PVT__u_mul__DOT__operand_a_e1_q 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelf->__PVT__u_mul__DOT__operand_a_e1_q 
                                        >> 0x20U)));
    __Vtemp_2[2U] = ((- (IData)((1U & (IData)((vlSelf->__PVT__u_mul__DOT__operand_a_e1_q 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    __Vtemp_3[0U] = (IData)(vlSelf->__PVT__u_mul__DOT__operand_b_e1_q);
    __Vtemp_3[1U] = (((- (IData)((1U & (IData)((vlSelf->__PVT__u_mul__DOT__operand_b_e1_q 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelf->__PVT__u_mul__DOT__operand_b_e1_q 
                                        >> 0x20U)));
    __Vtemp_3[2U] = ((- (IData)((1U & (IData)((vlSelf->__PVT__u_mul__DOT__operand_b_e1_q 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelf->__PVT__u_mul__DOT__mult_result_w[0U] = 
        __Vtemp_4[0U];
    vlSelf->__PVT__u_mul__DOT__mult_result_w[1U] = 
        __Vtemp_4[1U];
    vlSelf->__PVT__u_mul__DOT__mult_result_w[2U] = 
        (1U & __Vtemp_4[2U]);
    vlSelf->__PVT__u_div__DOT__div_complete_w = ((~ (IData)(
                                                            (0U 
                                                             != vlSelf->__PVT__u_div__DOT__q_mask_q))) 
                                                 & (IData)(vlSelf->__PVT__u_div__DOT__div_busy_q));
    vlSelf->__PVT__u_fetch__DOT__icache_busy_w = ((~ (IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_i_valid_q)) 
                                                  & (IData)(vlSelf->__PVT__u_fetch__DOT__icache_fetch_q));
    if (vlSelf->__PVT__u_fetch__DOT__skid_valid_q) {
        vlSelf->__PVT__fetch_pc_w = vlSelf->__PVT__u_fetch__DOT__skid_buffer_q[1U];
        vlSelf->__PVT__fetch_dec_instr_w = vlSelf->__PVT__u_fetch__DOT__skid_buffer_q[0U];
    } else {
        vlSelf->__PVT__fetch_pc_w = (0xfffffffcU & vlSelf->__PVT__u_fetch__DOT__pc_d_q);
        vlSelf->__PVT__fetch_dec_instr_w = vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read0_q;
    }
    vlSelf->u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
        = vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
        [vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q];
    vlSelf->__PVT__fetch_dec_valid_w = ((~ ((IData)(vlSelf->__PVT__u_fetch__DOT__branch_d_q) 
                                            | (IData)(vlSelf->__PVT__u_fetch__DOT__branch_q))) 
                                        & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_i_valid_q) 
                                           | (IData)(vlSelf->__PVT__u_fetch__DOT__skid_valid_q)));
    vlSelf->__PVT__fetch_fault_page_w = ((IData)(vlSelf->__PVT__u_fetch__DOT__skid_valid_q) 
                                         && (1U & (
                                                   vlSelf->__PVT__u_fetch__DOT__skid_buffer_q[2U] 
                                                   >> 1U)));
    vlSelf->__PVT__fetch_dec_fault_fetch_w = ((IData)(vlSelf->__PVT__u_fetch__DOT__skid_valid_q) 
                                              && (1U 
                                                  & vlSelf->__PVT__u_fetch__DOT__skid_buffer_q[2U]));
    vlSelf->__PVT__u_lsu__DOT__complete_err_e2_w = 
        ((IData)(vlSymsp->TOP__v.__PVT__dport_ack_w) 
         & (IData)(vlSymsp->TOP__v.__PVT__dport_error_w));
    vlSelf->__PVT__u_lsu__DOT__complete_ok_e2_w = (
                                                   (~ (IData)(vlSymsp->TOP__v.__PVT__dport_error_w)) 
                                                   & (IData)(vlSymsp->TOP__v.__PVT__dport_ack_w));
    vlSelf->__PVT__writeback_mem_valid_w = ((IData)(vlSymsp->TOP__v.__PVT__dport_ack_w) 
                                            | (IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_e2_q));
    vlSelf->__PVT__u_lsu__DOT__wb_result_r = 0U;
    vlSelf->__PVT__u_lsu__DOT__addr_lsb_r = (3U & (IData)(
                                                          (vlSelf->u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                                           >> 4U)));
    vlSelf->__PVT__u_lsu__DOT__load_byte_r = (1U & (IData)(
                                                           (vlSelf->u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                                            >> 1U)));
    vlSelf->__PVT__u_lsu__DOT__load_half_r = (1U & (IData)(
                                                           (vlSelf->u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                                            >> 2U)));
    vlSelf->__PVT__u_lsu__DOT__load_signed_r = (1U 
                                                & (IData)(
                                                          (vlSelf->u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                                           >> 3U)));
    if ((((IData)(vlSymsp->TOP__v.__PVT__dport_ack_w) 
          & (IData)(vlSymsp->TOP__v.__PVT__dport_error_w)) 
         | (IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_e2_q))) {
        vlSelf->__PVT__u_lsu__DOT__wb_result_r = (IData)(
                                                         (vlSelf->u_lsu__DOT____Vcellout__u_lsu_request__data_out_o 
                                                          >> 4U));
    } else if (((IData)(vlSymsp->TOP__v.__PVT__dport_ack_w) 
                & (IData)(vlSelf->u_lsu__DOT____Vcellout__u_lsu_request__data_out_o))) {
        if (vlSelf->__PVT__u_lsu__DOT__load_byte_r) {
            vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelf->__PVT__u_lsu__DOT__addr_lsb_r))
                    ? ((1U & (IData)(vlSelf->__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                             ? vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q
                             : vlSymsp->TOP.__Vcellinp__v__axi_i_rdata_i) 
                           >> 0x18U) : (0xffU & (((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                                                   ? vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q
                                                   : vlSymsp->TOP.__Vcellinp__v__axi_i_rdata_i) 
                                                 >> 0x10U)))
                    : ((1U & (IData)(vlSelf->__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0xffU & (((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                                      ? vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q
                                      : vlSymsp->TOP.__Vcellinp__v__axi_i_rdata_i) 
                                    >> 8U)) : (0xffU 
                                               & ((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                                                   ? vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q
                                                   : vlSymsp->TOP.__Vcellinp__v__axi_i_rdata_i))));
            if (((IData)(vlSelf->__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffffff00U | (0xffU & vlSelf->__PVT__u_lsu__DOT__wb_result_r));
            }
        } else if (vlSelf->__PVT__u_lsu__DOT__load_half_r) {
            vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelf->__PVT__u_lsu__DOT__addr_lsb_r))
                    ? (((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                         ? vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q
                         : vlSymsp->TOP.__Vcellinp__v__axi_i_rdata_i) 
                       >> 0x10U) : (0xffffU & ((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                                                ? vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q
                                                : vlSymsp->TOP.__Vcellinp__v__axi_i_rdata_i)));
            if (((IData)(vlSelf->__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                    >> 0xfU))) {
                vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffff0000U | (0xffffU & vlSelf->__PVT__u_lsu__DOT__wb_result_r));
            }
        } else {
            vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                = ((IData)(vlSymsp->TOP__v.__PVT__u_dmux__DOT__tcm_access_q)
                    ? vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q
                    : vlSymsp->TOP.__Vcellinp__v__axi_i_rdata_i);
        }
    }
    vlSelf->u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i 
        = ((IData)(vlSelf->__PVT__fetch_dec_fault_fetch_w) 
           | (IData)(vlSelf->__PVT__fetch_fault_page_w));
    vlSelf->__PVT__u_lsu__DOT__delay_lsu_e2_w = ((~ (IData)(vlSelf->__PVT__u_lsu__DOT__complete_ok_e2_w)) 
                                                 & (IData)(vlSelf->__PVT__u_lsu__DOT__pending_lsu_e2_q));
    vlSelf->__PVT__fetch_instr_w = ((IData)(vlSelf->u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i)
                                     ? 0U : vlSelf->__PVT__fetch_dec_instr_w);
    vlSelf->__PVT__mem_d_rd_o = ((~ (IData)(vlSelf->__PVT__u_lsu__DOT__delay_lsu_e2_w)) 
                                 & (IData)(vlSelf->__PVT__u_lsu__DOT__mem_rd_q));
    vlSelf->__PVT__mem_d_wr_o = ((~ (- (IData)((IData)(vlSelf->__PVT__u_lsu__DOT__delay_lsu_e2_w)))) 
                                 & (IData)(vlSelf->__PVT__u_lsu__DOT__mem_wr_q));
    vlSelf->__PVT__u_div__DOT__signed_operation_w = 
        ((0x2004033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w)) 
         | (0x2006033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w)));
    vlSelf->__PVT__u_mul__DOT__mult_inst_w = ((0x2000033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->__PVT__fetch_instr_w)) 
                                              | ((0x2001033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->__PVT__fetch_instr_w)) 
                                                 | ((0x2002033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->__PVT__fetch_instr_w)) 
                                                    | (0x2003033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->__PVT__fetch_instr_w)))));
    vlSelf->__PVT__u_div__DOT__div_operation_w = ((0x2004033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->__PVT__fetch_instr_w)) 
                                                  | (0x2005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->__PVT__fetch_instr_w)));
    vlSelf->__PVT__u_lsu__DOT__req_lh_w = ((0x1003U 
                                            == (0x707fU 
                                                & vlSelf->__PVT__fetch_instr_w)) 
                                           | (0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->__PVT__fetch_instr_w)));
    vlSelf->__PVT__u_lsu__DOT__load_signed_inst_w = 
        ((3U == (0x707fU & vlSelf->__PVT__fetch_instr_w)) 
         | ((0x1003U == (0x707fU & vlSelf->__PVT__fetch_instr_w)) 
            | (0x2003U == (0x707fU & vlSelf->__PVT__fetch_instr_w))));
    vlSelf->__PVT__u_exec__DOT__alu_func_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 4U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 8U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 3U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 2U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 6U;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 9U;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 0xbU;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 0xaU;
    } else if ((0x13U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 4U;
    } else if ((0x7013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 7U;
    } else if ((0x2013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 0xbU;
    } else if ((0x3013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 0xaU;
    } else if ((0x6013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 8U;
    } else if ((0x4013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 9U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 2U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_func_r = 3U;
    } else if ((0x37U != (0x7fU & vlSelf->__PVT__fetch_instr_w))) {
        if ((0x17U == (0x7fU & vlSelf->__PVT__fetch_instr_w))) {
            vlSelf->__PVT__u_exec__DOT__alu_func_r = 4U;
        } else if (((0x6fU == (0x7fU & vlSelf->__PVT__fetch_instr_w)) 
                    | (0x67U == (0x707fU & vlSelf->__PVT__fetch_instr_w)))) {
            vlSelf->__PVT__u_exec__DOT__alu_func_r = 4U;
        }
    }
    vlSelf->__PVT__u_exec__DOT__imm12_r = (((- (IData)(
                                                       (vlSelf->__PVT__fetch_instr_w 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->__PVT__fetch_instr_w 
                                              >> 0x14U));
    vlSelf->__PVT__fetch_instr_mul_w = ((0x2000033U 
                                         == (0xfe00707fU 
                                             & vlSelf->__PVT__fetch_instr_w)) 
                                        | ((0x2001033U 
                                            == (0xfe00707fU 
                                                & vlSelf->__PVT__fetch_instr_w)) 
                                           | ((0x2002033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->__PVT__fetch_instr_w)) 
                                              | (0x2003033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->__PVT__fetch_instr_w)))));
    vlSelf->__PVT__fetch_instr_rd_valid_w = ((0x67U 
                                              == (0x707fU 
                                                  & vlSelf->__PVT__fetch_instr_w)) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->__PVT__fetch_instr_w)) 
                                                | ((0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__fetch_instr_w)) 
                                                   | ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->__PVT__fetch_instr_w)) 
                                                      | ((0x13U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->__PVT__fetch_instr_w)) 
                                                         | ((0x1013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->__PVT__fetch_instr_w)) 
                                                            | ((0x2013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->__PVT__fetch_instr_w)) 
                                                               | ((0x3013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->__PVT__fetch_instr_w)) 
                                                                  | ((0x4013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->__PVT__fetch_instr_w)) 
                                                                     | ((0x5013U 
                                                                         == 
                                                                         (0xfc00707fU 
                                                                          & vlSelf->__PVT__fetch_instr_w)) 
                                                                        | ((0x40005013U 
                                                                            == 
                                                                            (0xfc00707fU 
                                                                             & vlSelf->__PVT__fetch_instr_w)) 
                                                                           | ((0x6013U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                              | ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x6073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | (0x7073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__fetch_instr_exec_w = ((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->__PVT__fetch_instr_w)) 
                                         | ((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->__PVT__fetch_instr_w)) 
                                            | ((0x2013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__PVT__fetch_instr_w)) 
                                               | ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->__PVT__fetch_instr_w)) 
                                                  | ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->__PVT__fetch_instr_w)) 
                                                     | ((0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->__PVT__fetch_instr_w)) 
                                                        | ((0x1013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->__PVT__fetch_instr_w)) 
                                                           | ((0x5013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                              | ((0x40005013U 
                                                                  == 
                                                                  (0xfc00707fU 
                                                                   & vlSelf->__PVT__fetch_instr_w)) 
                                                                 | ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->__PVT__fetch_instr_w)) 
                                                                    | ((0x17U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->__PVT__fetch_instr_w)) 
                                                                       | ((0x33U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->__PVT__fetch_instr_w)) 
                                                                          | ((0x40000033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->__PVT__fetch_instr_w)) 
                                                                             | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | (0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w))))))))))))))))))))));
    vlSelf->__PVT__fetch_instr_div_w = ((0x2004033U 
                                         == (0xfe00707fU 
                                             & vlSelf->__PVT__fetch_instr_w)) 
                                        | ((0x2005033U 
                                            == (0xfe00707fU 
                                                & vlSelf->__PVT__fetch_instr_w)) 
                                           | ((0x2006033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->__PVT__fetch_instr_w)) 
                                              | (0x2007033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->__PVT__fetch_instr_w)))));
    vlSelf->__PVT__u_lsu__DOT__issue_lsu_e1_w = (((IData)(vlSelf->__PVT__mem_d_rd_o) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->__PVT__mem_d_wr_o)) 
                                                     | ((IData)(vlSelf->__PVT__u_lsu__DOT__mem_writeback_q) 
                                                        | ((IData)(vlSelf->__PVT__u_lsu__DOT__mem_flush_q) 
                                                           | (IData)(vlSelf->__PVT__u_lsu__DOT__mem_invalidate_q))))) 
                                                 & (IData)(vlSymsp->TOP__v.__PVT__dport_accept_w));
    vlSelf->__PVT__u_lsu__DOT__load_inst_w = ((IData)(vlSelf->__PVT__u_lsu__DOT__load_signed_inst_w) 
                                              | ((0x4003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->__PVT__fetch_instr_w)) 
                                                 | ((0x5003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->__PVT__fetch_instr_w)) 
                                                    | (0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->__PVT__fetch_instr_w)))));
    vlSelf->__PVT__fetch_instr_invalid_w = ((~ ((IData)(vlSelf->__PVT__fetch_instr_exec_w) 
                                                | ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__fetch_instr_w)) 
                                                   | ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->__PVT__fetch_instr_w)) 
                                                      | ((0x63U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->__PVT__fetch_instr_w)) 
                                                         | ((0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->__PVT__fetch_instr_w)) 
                                                            | ((0x4063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->__PVT__fetch_instr_w)) 
                                                               | ((0x5063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->__PVT__fetch_instr_w)) 
                                                                  | ((0x6063U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->__PVT__fetch_instr_w)) 
                                                                     | ((0x7063U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->__PVT__fetch_instr_w)) 
                                                                        | ((3U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->__PVT__fetch_instr_w)) 
                                                                           | ((0x1003U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                              | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x73U 
                                                                                == vlSelf->__PVT__fetch_instr_w) 
                                                                                | ((0x100073U 
                                                                                == vlSelf->__PVT__fetch_instr_w) 
                                                                                | ((0x200073U 
                                                                                == 
                                                                                (0xcfffffffU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x6073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x7073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x10500073U 
                                                                                == 
                                                                                (0xffff8fffU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x100fU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__fetch_instr_w)) 
                                                                                | (IData)(vlSelf->__PVT__fetch_instr_div_w))))))))))))))))))))))))))))))))))))) 
                                            & (IData)(vlSelf->__PVT__fetch_dec_valid_w));
    vlSelf->u_lsu__DOT____Vcellinp__u_lsu_request__push_i 
        = ((IData)(vlSelf->__PVT__u_lsu__DOT__issue_lsu_e1_w) 
           | ((~ (IData)(vlSelf->__PVT__u_lsu__DOT__delay_lsu_e2_w)) 
              & (IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_e1_q)));
    vlSelf->__PVT__fetch_instr_csr_w = ((0x73U == vlSelf->__PVT__fetch_instr_w) 
                                        | ((0x100073U 
                                            == vlSelf->__PVT__fetch_instr_w) 
                                           | ((0x200073U 
                                               == (0xcfffffffU 
                                                   & vlSelf->__PVT__fetch_instr_w)) 
                                              | ((0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->__PVT__fetch_instr_w)) 
                                                 | ((0x2073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->__PVT__fetch_instr_w)) 
                                                    | ((0x3073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->__PVT__fetch_instr_w)) 
                                                       | ((0x5073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->__PVT__fetch_instr_w)) 
                                                          | ((0x6073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->__PVT__fetch_instr_w)) 
                                                             | ((0x7073U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->__PVT__fetch_instr_w)) 
                                                                | ((0x10500073U 
                                                                    == 
                                                                    (0xffff8fffU 
                                                                     & vlSelf->__PVT__fetch_instr_w)) 
                                                                   | ((0xfU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->__PVT__fetch_instr_w)) 
                                                                      | ((0x100fU 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->__PVT__fetch_instr_w)) 
                                                                         | ((0x12000073U 
                                                                             == 
                                                                             (0xfe007fffU 
                                                                              & vlSelf->__PVT__fetch_instr_w)) 
                                                                            | ((IData)(vlSelf->__PVT__fetch_instr_invalid_w) 
                                                                               | (IData)(vlSelf->u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i)))))))))))))));
}

VL_ATTR_COLD void Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__1(Vriscv_tcm_top_riscv_core__M0_MBffffffff* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__1\n"); );
    // Body
    vlSelf->__PVT__u_div__DOT__div_start_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_issue_r) 
                                              & ((IData)(vlSelf->__PVT__u_div__DOT__div_operation_w) 
                                                 | ((0x2006033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->__PVT__fetch_instr_w)) 
                                                    | (0x2007033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->__PVT__fetch_instr_w)))));
    vlSelf->__PVT__u_fetch__DOT__stall_w = (1U & ((~ (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__fetch_accept_o)) 
                                                  | (IData)(vlSelf->__PVT__u_fetch__DOT__icache_busy_w)));
    vlSelf->__PVT__mem_i_rd_o = ((IData)(vlSelf->__PVT__u_fetch__DOT__active_q) 
                                 & ((~ (IData)(vlSelf->__PVT__u_fetch__DOT__icache_busy_w)) 
                                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__fetch_accept_o)));
}

VL_ATTR_COLD void Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__2(Vriscv_tcm_top_riscv_core__M0_MBffffffff* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_riscv_core__M0_MBffffffff___stl_sequent__TOP__v__u_core__2\n"); );
    // Body
    vlSelf->__PVT__u_exec__DOT__alu_input_b_r = 0U;
    vlSelf->u_mul__DOT____VdfgTmp_h5fcd7459__0 = (((QData)((IData)(
                                                                   (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r 
                                                                    >> 0x1fU))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r)));
    vlSelf->__PVT__u_exec__DOT__branch_r = 0U;
    vlSelf->__PVT__u_exec__DOT__branch_taken_r = 0U;
    vlSelf->__PVT__u_exec__DOT__branch_call_r = 0U;
    vlSelf->__PVT__u_exec__DOT__branch_ret_r = 0U;
    vlSelf->__PVT__u_exec__DOT__branch_jmp_r = 0U;
    vlSelf->__PVT__u_exec__DOT__branch_target_r = (vlSelf->__PVT__fetch_pc_w 
                                                   + 
                                                   (((- (IData)(
                                                                (vlSelf->__PVT__fetch_instr_w 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | ((0x1000U 
                                                        & (vlSelf->__PVT__fetch_instr_w 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->__PVT__fetch_instr_w 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->__PVT__fetch_instr_w 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->__PVT__fetch_instr_w 
                                                                   >> 7U)))))));
    if ((0x33U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x13U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSelf->__PVT__u_exec__DOT__imm12_r;
    } else if ((0x7013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSelf->__PVT__u_exec__DOT__imm12_r;
    } else if ((0x2013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSelf->__PVT__u_exec__DOT__imm12_r;
    } else if ((0x3013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSelf->__PVT__u_exec__DOT__imm12_r;
    } else if ((0x6013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSelf->__PVT__u_exec__DOT__imm12_r;
    } else if ((0x4013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = vlSelf->__PVT__u_exec__DOT__imm12_r;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = 
            (0x1fU & (vlSelf->__PVT__fetch_instr_w 
                      >> 0x14U));
    } else if ((0x5013U == (0xfc00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = 
            (0x1fU & (vlSelf->__PVT__fetch_instr_w 
                      >> 0x14U));
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_b_r = 
            (0x1fU & (vlSelf->__PVT__fetch_instr_w 
                      >> 0x14U));
    } else if ((0x37U != (0x7fU & vlSelf->__PVT__fetch_instr_w))) {
        if ((0x17U == (0x7fU & vlSelf->__PVT__fetch_instr_w))) {
            vlSelf->__PVT__u_exec__DOT__alu_input_b_r 
                = (0xfffff000U & vlSelf->__PVT__fetch_instr_w);
        } else if (((0x6fU == (0x7fU & vlSelf->__PVT__fetch_instr_w)) 
                    | (0x67U == (0x707fU & vlSelf->__PVT__fetch_instr_w)))) {
            vlSelf->__PVT__u_exec__DOT__alu_input_b_r = 4U;
        }
    }
    if ((0x6fU == (0x7fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__branch_r = 1U;
        vlSelf->__PVT__u_exec__DOT__branch_taken_r = 1U;
        vlSelf->__PVT__u_exec__DOT__branch_target_r 
            = (vlSelf->__PVT__fetch_pc_w + (((- (IData)(
                                                        (vlSelf->__PVT__fetch_instr_w 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | ((0xff000U 
                                                & vlSelf->__PVT__fetch_instr_w) 
                                               | ((0x800U 
                                                   & (vlSelf->__PVT__fetch_instr_w 
                                                      >> 9U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->__PVT__fetch_instr_w 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->__PVT__fetch_instr_w 
                                                           >> 0x14U)))))));
        vlSelf->__PVT__u_exec__DOT__branch_call_r = 
            (1U == (0x1fU & (vlSelf->__PVT__fetch_instr_w 
                             >> 7U)));
        vlSelf->__PVT__u_exec__DOT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__branch_ret_r = (IData)(
                                                           ((0x8000U 
                                                             == 
                                                             (0xf8000U 
                                                              & vlSelf->__PVT__fetch_instr_w)) 
                                                            & (0U 
                                                               == 
                                                               (0xfffU 
                                                                & vlSelf->__PVT__u_exec__DOT__imm12_r))));
        vlSelf->__PVT__u_exec__DOT__branch_r = 1U;
        vlSelf->__PVT__u_exec__DOT__branch_taken_r = 1U;
        vlSelf->__PVT__u_exec__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r 
               + vlSelf->__PVT__u_exec__DOT__imm12_r);
        vlSelf->__PVT__u_exec__DOT__branch_call_r = 
            ((~ (IData)(vlSelf->__PVT__u_exec__DOT__branch_ret_r)) 
             & (0x80U == (0xf80U & vlSelf->__PVT__fetch_instr_w)));
        vlSelf->__PVT__u_exec__DOT__branch_target_r 
            = (0xfffffffeU & vlSelf->__PVT__u_exec__DOT__branch_target_r);
        vlSelf->__PVT__u_exec__DOT__branch_jmp_r = 
            (1U & (~ ((IData)(vlSelf->__PVT__u_exec__DOT__branch_call_r) 
                      | (IData)(vlSelf->__PVT__u_exec__DOT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__branch_r = 1U;
        vlSelf->__PVT__u_exec__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r 
               == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r);
    } else if ((0x1063U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__branch_r = 1U;
        vlSelf->__PVT__u_exec__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r 
               != vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r);
    } else if ((0x4063U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__branch_r = 1U;
        vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__y 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
        vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__x 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
        vlSelf->__PVT__u_exec__DOT__less_than_signed__Vstatic__v 
            = (vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__x 
               - vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__y);
        vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__Vfuncout 
            = (1U & (((vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__x 
                       >> 0x1fU) != (vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__y 
                                     >> 0x1fU)) ? (vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__x 
                                                   >> 0x1fU)
                      : (vlSelf->__PVT__u_exec__DOT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelf->__PVT__u_exec__DOT__branch_taken_r 
            = vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__branch_r = 1U;
        vlSelf->__PVT__u_exec__DOT__branch_taken_r 
            = (([&]() {
                    vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__y 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
                    vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__x 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
                    vlSelf->__PVT__u_exec__DOT__greater_than_signed__Vstatic__v 
                        = (vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__y 
                           - vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__x);
                    vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__Vfuncout 
                        = (1U & (((vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__x 
                                   >> 0x1fU) != (vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__y 
                                                 >> 0x1fU))
                                  ? (vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__y 
                                     >> 0x1fU) : (vlSelf->__PVT__u_exec__DOT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__Vfuncout)) 
               | (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r 
                  == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r));
    } else if ((0x6063U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__branch_r = 1U;
        vlSelf->__PVT__u_exec__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r 
               < vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r);
    } else if ((0x7063U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__branch_r = 1U;
        vlSelf->__PVT__u_exec__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r 
               >= vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r);
    }
    vlSelf->__PVT__u_exec__DOT__alu_input_a_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x13U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x7013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x2013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x3013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x6013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x4013U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x5013U == (0xfc00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x37U == (0x7fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = 
            (0xfffff000U & vlSelf->__PVT__fetch_instr_w);
    } else if ((0x17U == (0x7fU & vlSelf->__PVT__fetch_instr_w))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSelf->__PVT__fetch_pc_w;
    } else if (((0x6fU == (0x7fU & vlSelf->__PVT__fetch_instr_w)) 
                | (0x67U == (0x707fU & vlSelf->__PVT__fetch_instr_w)))) {
        vlSelf->__PVT__u_exec__DOT__alu_input_a_r = vlSelf->__PVT__fetch_pc_w;
    }
    vlSelf->__PVT__u_lsu__DOT__mem_data_r = 0U;
    vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r = 0U;
    vlSelf->__PVT__u_lsu__DOT__mem_wr_r = 0U;
    vlSelf->__PVT__u_lsu__DOT__mem_addr_r = (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                                              & (0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->__PVT__fetch_instr_w)))
                                              ? vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r
                                              : (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                                                  & (IData)(vlSelf->__PVT__u_lsu__DOT__load_inst_w))
                                                  ? 
                                                 (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r 
                                                  + 
                                                  (((- (IData)(
                                                               (vlSelf->__PVT__fetch_instr_w 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->__PVT__fetch_instr_w 
                                                      >> 0x14U)))
                                                  : 
                                                 (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r 
                                                  + 
                                                  (((- (IData)(
                                                               (vlSelf->__PVT__fetch_instr_w 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->__PVT__fetch_instr_w 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->__PVT__fetch_instr_w 
                                                            >> 7U)))))));
    if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
         & ((0x2023U == (0x707fU & vlSelf->__PVT__fetch_instr_w)) 
            | ((0x2003U == (0x707fU & vlSelf->__PVT__fetch_instr_w)) 
               | (0x6003U == (0x707fU & vlSelf->__PVT__fetch_instr_w)))))) {
        vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r 
            = (0U != (3U & vlSelf->__PVT__u_lsu__DOT__mem_addr_r));
    } else if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                & ((0x1023U == (0x707fU & vlSelf->__PVT__fetch_instr_w)) 
                   | (IData)(vlSelf->__PVT__u_lsu__DOT__req_lh_w)))) {
        vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r 
            = (1U & vlSelf->__PVT__u_lsu__DOT__mem_addr_r);
    }
    vlSelf->__PVT__u_lsu__DOT__mem_rd_r = (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                                            & (IData)(vlSelf->__PVT__u_lsu__DOT__load_inst_w)) 
                                           & (~ (IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r)));
    if ((((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
          & (0x2023U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) 
         & (~ (IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r)))) {
        vlSelf->__PVT__u_lsu__DOT__mem_data_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r;
        vlSelf->__PVT__u_lsu__DOT__mem_wr_r = 0xfU;
    } else if ((((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                 & (0x1023U == (0x707fU & vlSelf->__PVT__fetch_instr_w))) 
                & (~ (IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r)))) {
        if ((2U == (3U & vlSelf->__PVT__u_lsu__DOT__mem_addr_r))) {
            vlSelf->__PVT__u_lsu__DOT__mem_data_r = 
                (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r 
                 << 0x10U);
            vlSelf->__PVT__u_lsu__DOT__mem_wr_r = 0xcU;
        } else {
            vlSelf->__PVT__u_lsu__DOT__mem_data_r = 
                (0xffffU & vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r);
            vlSelf->__PVT__u_lsu__DOT__mem_wr_r = 3U;
        }
    } else if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                & (0x23U == (0x707fU & vlSelf->__PVT__fetch_instr_w)))) {
        if ((2U & vlSelf->__PVT__u_lsu__DOT__mem_addr_r)) {
            if ((1U & vlSelf->__PVT__u_lsu__DOT__mem_addr_r)) {
                vlSelf->__PVT__u_lsu__DOT__mem_data_r 
                    = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r 
                       << 0x18U);
                vlSelf->__PVT__u_lsu__DOT__mem_wr_r = 8U;
            } else {
                vlSelf->__PVT__u_lsu__DOT__mem_data_r 
                    = (0xff0000U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r 
                                    << 0x10U));
                vlSelf->__PVT__u_lsu__DOT__mem_wr_r = 4U;
            }
        } else if ((1U & vlSelf->__PVT__u_lsu__DOT__mem_addr_r)) {
            vlSelf->__PVT__u_lsu__DOT__mem_data_r = 
                (0xff00U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r 
                            << 8U));
            vlSelf->__PVT__u_lsu__DOT__mem_wr_r = 2U;
        } else {
            vlSelf->__PVT__u_lsu__DOT__mem_data_r = 
                (0xffU & vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_rb_value_r);
            vlSelf->__PVT__u_lsu__DOT__mem_wr_r = 1U;
        }
    } else {
        vlSelf->__PVT__u_lsu__DOT__mem_wr_r = 0U;
    }
    vlSelf->__PVT__branch_d_exec_request_w = ((IData)(vlSelf->__PVT__u_exec__DOT__branch_r) 
                                              & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_issue_r) 
                                                 & (IData)(vlSelf->__PVT__u_exec__DOT__branch_taken_r)));
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__sub_res_w 
        = (vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
           - vlSelf->__PVT__u_exec__DOT__alu_input_b_r);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r = 0U;
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r = 0U;
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r = 0U;
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r = 0U;
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r = 0U;
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r = 0U;
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r = 0U;
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r = 0U;
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r = 0U;
    if ((8U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))) {
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__result_r 
            = ((4U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))
                ? vlSelf->__PVT__u_exec__DOT__alu_input_a_r
                : ((2U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))
                    ? ((1U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))
                        ? (((vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
                             >> 0x1fU) != (vlSelf->__PVT__u_exec__DOT__alu_input_b_r 
                                           >> 0x1fU))
                            ? ((vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
                                >> 0x1fU) ? 1U : 0U)
                            : ((vlSelf->__PVT__u_exec__DOT__u_alu__DOT__sub_res_w 
                                >> 0x1fU) ? 1U : 0U))
                        : ((vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
                            < vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                            ? 1U : 0U)) : ((1U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))
                                            ? (vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
                                               ^ vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                                            : (vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
                                               | vlSelf->__PVT__u_exec__DOT__alu_input_b_r))));
    } else if ((4U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))) {
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__result_r 
            = ((2U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))
                ? ((1U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))
                    ? (vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
                       & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                    : vlSelf->__PVT__u_exec__DOT__u_alu__DOT__sub_res_w)
                : ((1U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))
                    ? vlSelf->__PVT__u_exec__DOT__alu_input_a_r
                    : (vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
                       + vlSelf->__PVT__u_exec__DOT__alu_input_b_r)));
    } else if ((2U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))) {
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r 
            = (((vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
                 >> 0x1fU) & (3U == (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r)))
                ? 0xffffU : 0U);
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r 
            = ((1U & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                ? ((0x80000000U & ((IData)(vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
                                                 >> 1U))
                : vlSelf->__PVT__u_exec__DOT__alu_input_a_r);
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r 
            = ((2U & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                ? ((0xc0000000U & ((IData)(vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r 
                                                 >> 2U))
                : vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r);
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r 
            = ((4U & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                ? ((0xf0000000U & ((IData)(vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r 
                                                 >> 4U))
                : vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r);
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r 
            = ((8U & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                ? ((0xff000000U & ((IData)(vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r 
                                                 >> 8U))
                : vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r);
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                ? (((IData)(vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r) 
                    << 0x10U) | (vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r 
                                 >> 0x10U)) : vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r);
    } else if ((1U & (IData)(vlSelf->__PVT__u_exec__DOT__alu_func_r))) {
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r 
            = ((1U & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                ? (vlSelf->__PVT__u_exec__DOT__alu_input_a_r 
                   << 1U) : vlSelf->__PVT__u_exec__DOT__alu_input_a_r);
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r 
            = ((2U & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                ? (vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r 
                   << 2U) : vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r);
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r 
            = ((4U & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                ? (vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r 
                   << 4U) : vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r);
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r 
            = ((8U & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                ? (vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r 
                   << 8U) : vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r);
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelf->__PVT__u_exec__DOT__alu_input_b_r)
                ? (vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r 
                   << 0x10U) : vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r);
    } else {
        vlSelf->__PVT__u_exec__DOT__u_alu__DOT__result_r 
            = vlSelf->__PVT__u_exec__DOT__alu_input_a_r;
    }
}
