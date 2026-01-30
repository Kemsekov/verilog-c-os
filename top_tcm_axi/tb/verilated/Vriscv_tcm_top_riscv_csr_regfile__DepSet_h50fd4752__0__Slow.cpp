// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_riscv_csr_regfile.h"

VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__0(Vriscv_tcm_top_riscv_csr_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_tcm_top_riscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__0\n"); );
    // Body
    vlSelf->__PVT__csr_mcycle_r = ((IData)(1U) + vlSelf->__PVT__csr_mcycle_q);
    vlSelf->__PVT__branch_r = 0U;
    vlSelf->__PVT__branch_target_r = 0U;
    if ((0x20U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_target_r = ((3U == (IData)(vlSelf->__PVT__irq_priv_q))
                                           ? vlSelf->__PVT__csr_mtvec_q
                                           : vlSelf->__PVT__csr_stvec_q);
    } else if (((0x30U <= (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)) 
                & (0x33U >= (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_target_r = ((3U == (3U 
                                                  & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))
                                           ? vlSelf->__PVT__csr_mepc_q
                                           : vlSelf->__PVT__csr_sepc_q);
    } else if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_target_r = vlSelf->__PVT__csr_mtvec_q;
    } else if ((0x34U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_target_r = ((IData)(4U) 
                                          + vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q);
    }
    vlSelf->__PVT__irq_pending_r = (vlSelf->__PVT__csr_mip_q 
                                    & vlSelf->__PVT__csr_mie_q);
    vlSelf->__PVT__irq_masked_r = ((8U & vlSelf->__PVT__csr_sr_q)
                                    ? vlSelf->__PVT__irq_pending_r
                                    : 0U);
    vlSelf->__PVT__rdata_r = ((vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                               >> 0x1fU) ? ((0x40000000U 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                             ? ((0x20000000U 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                 ? 0U
                                                 : 
                                                ((0x10000000U 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                  ? 0U
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                   ? 
                                                  ((0x4000000U 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                     ? 0U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                      ? 0U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                        ? 0U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                         ? 0U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                          ? vlSelf->__PVT__csr_mcycle_h_q
                                                          : 0U)))))))
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                     ? 0U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                      ? 0U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                        ? 0U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                         ? 0U
                                                         : vlSelf->__PVT__csr_mcycle_q)))))))))
                                             : 0U) : 
                              ((0x40000000U & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                ? ((0x20000000U & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                    ? ((0x10000000U 
                                        & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                        ? ((0x8000000U 
                                            & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                            ? ((0x4000000U 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                ? (
                                                   (0x2000000U 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                         ? 0U
                                                         : vlSelf->__PVT__csr_mtimecmp_q))))))
                                                : 0U)
                                            : 0U) : 0U)
                                    : 0U) : ((0x20000000U 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                              ? ((0x10000000U 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                  ? 
                                                 ((0x8000000U 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                   ? 0U
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                    ? 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                     ? 0U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                      ? 0U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                        ? 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                         ? 0U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                          ? 0U
                                                          : 
                                                         (0xaaaU 
                                                          & vlSelf->__PVT__csr_mip_q)))
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                         ? 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                          ? vlSelf->__PVT__csr_mtval_q
                                                          : 
                                                         (0x8000000fU 
                                                          & vlSelf->__PVT__csr_mcause_q))
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                          ? vlSelf->__PVT__csr_mepc_q
                                                          : vlSelf->__PVT__csr_mscratch_q))))))
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                     ? 0U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                      ? 0U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                        ? 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                         ? 0U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                          ? vlSelf->__PVT__csr_mtvec_q
                                                          : 
                                                         (0xaaaU 
                                                          & vlSelf->__PVT__csr_mie_q)))
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                         ? 0U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                          ? 0x40001100U
                                                          : vlSelf->__PVT__csr_sr_q))))))))
                                                  : 0U)
                                              : 0U)));
}

VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__1(Vriscv_tcm_top_riscv_csr_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_tcm_top_riscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__1\n"); );
    // Body
    vlSelf->__PVT__csr_mtvec_r = vlSelf->__PVT__csr_mtvec_q;
    vlSelf->__PVT__csr_mscratch_r = vlSelf->__PVT__csr_mscratch_q;
    vlSelf->__PVT__csr_mideleg_r = vlSelf->__PVT__csr_mideleg_q;
    vlSelf->__PVT__csr_stvec_r = vlSelf->__PVT__csr_stvec_q;
    vlSelf->__PVT__csr_mie_r = vlSelf->__PVT__csr_mie_q;
    vlSelf->__PVT__csr_satp_r = vlSelf->__PVT__csr_satp_q;
    vlSelf->__PVT__csr_sscratch_r = vlSelf->__PVT__csr_sscratch_q;
    vlSelf->__PVT__csr_mtimecmp_r = vlSelf->__PVT__csr_mtimecmp_q;
    vlSelf->__PVT__csr_medeleg_r = vlSelf->__PVT__csr_medeleg_q;
    vlSelf->__PVT__csr_stval_r = vlSelf->__PVT__csr_stval_q;
    vlSelf->__PVT__csr_mtime_ie_r = vlSelf->__PVT__csr_mtime_ie_q;
    if ((0x20U != (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                                vlSelf->__PVT__csr_mtvec_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelf->__PVT__csr_mie_r 
                                                                    = 
                                                                    (0xaaaU 
                                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                                vlSelf->__PVT__csr_mideleg_r 
                                                                    = 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelf->__PVT__csr_medeleg_r 
                                                                    = 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x40U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelf->__PVT__csr_mscratch_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x100U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                            vlSelf->__PVT__csr_mie_r 
                                                                = 
                                                                ((0xfffffdddU 
                                                                  & vlSelf->__PVT__csr_mie_r) 
                                                                 | (0x222U 
                                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                      >> 9U)))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                                vlSelf->__PVT__csr_stvec_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x40U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelf->__PVT__csr_sscratch_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x80U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelf->__PVT__csr_satp_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x400U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                        if ((0x200U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                if ((0x80U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                    if ((0x40U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelf->__PVT__csr_mtimecmp_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                                vlSelf->__PVT__csr_mtime_ie_r = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__csr_mepc_r = vlSelf->__PVT__csr_mepc_q;
    vlSelf->__PVT__csr_mcause_r = vlSelf->__PVT__csr_mcause_q;
    vlSelf->__PVT__csr_sepc_r = vlSelf->__PVT__csr_sepc_q;
    vlSelf->__PVT__csr_scause_r = vlSelf->__PVT__csr_scause_q;
    vlSelf->__PVT__csr_mtval_r = vlSelf->__PVT__csr_mtval_q;
    vlSelf->__PVT__csr_sr_r = vlSelf->__PVT__csr_sr_q;
    vlSelf->__PVT__csr_mpriv_r = vlSelf->__PVT__csr_mpriv_q;
    if ((0x20U == (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        if ((3U != (IData)(vlSelf->__PVT__irq_priv_q))) {
            vlSelf->__PVT__csr_stval_r = 0U;
            vlSelf->__PVT__csr_sepc_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q;
            if ((2U & vlSelf->__PVT__irq_masked_r)) {
                vlSelf->__PVT__csr_scause_r = 0x80000001U;
            } else if ((0x20U & vlSelf->__PVT__irq_masked_r)) {
                vlSelf->__PVT__csr_scause_r = 0x80000005U;
            } else if ((0x200U & vlSelf->__PVT__irq_masked_r)) {
                vlSelf->__PVT__csr_scause_r = 0x80000009U;
            }
        }
        if ((3U == (IData)(vlSelf->__PVT__irq_priv_q))) {
            vlSelf->__PVT__csr_mepc_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q;
            if ((8U & vlSelf->__PVT__irq_masked_r)) {
                vlSelf->__PVT__csr_mcause_r = 0x80000003U;
            } else if ((0x80U & vlSelf->__PVT__irq_masked_r)) {
                vlSelf->__PVT__csr_mcause_r = 0x80000007U;
            } else if ((0x800U & vlSelf->__PVT__irq_masked_r)) {
                vlSelf->__PVT__csr_mcause_r = 0x8000000bU;
            }
            vlSelf->__PVT__csr_mtval_r = 0U;
            vlSelf->__PVT__csr_sr_r = ((0xffffff7fU 
                                        & vlSelf->__PVT__csr_sr_r) 
                                       | (0x80U & (vlSelf->__PVT__csr_sr_r 
                                                   << 4U)));
            vlSelf->__PVT__csr_mpriv_r = 3U;
            vlSelf->__PVT__csr_sr_r = ((0xffffe7ffU 
                                        & vlSelf->__PVT__csr_sr_r) 
                                       | ((IData)(vlSelf->__PVT__csr_mpriv_q) 
                                          << 0xbU));
            vlSelf->__PVT__csr_sr_r = (0xfffffff7U 
                                       & vlSelf->__PVT__csr_sr_r);
        } else {
            vlSelf->__PVT__csr_sr_r = ((0xffffffdfU 
                                        & vlSelf->__PVT__csr_sr_r) 
                                       | (0x20U & (vlSelf->__PVT__csr_sr_r 
                                                   << 4U)));
            vlSelf->__PVT__csr_mpriv_r = 1U;
            vlSelf->__PVT__csr_sr_r = ((0xfffffeffU 
                                        & vlSelf->__PVT__csr_sr_r) 
                                       | ((1U == (IData)(vlSelf->__PVT__csr_mpriv_q)) 
                                          << 8U));
            vlSelf->__PVT__csr_sr_r = (0xfffffffdU 
                                       & vlSelf->__PVT__csr_sr_r);
        }
    } else {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                      >> 9U)))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                                vlSelf->__PVT__csr_stval_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelf->__PVT__csr_scause_r 
                                                                    = 
                                                                    (0x8000000fU 
                                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                                vlSelf->__PVT__csr_sepc_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
                vlSelf->__PVT__csr_mepc_r = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q;
                vlSelf->__PVT__csr_mcause_r = (0xfU 
                                               & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q));
                vlSelf->__PVT__csr_mtval_r = ((0x20U 
                                               & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                               ? 0U
                                               : ((0x10U 
                                                   & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                       ? vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q
                                                       : 0U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                       ? vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q
                                                       : vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                     ? vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                       ? 0U
                                                       : vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q)
                                                      : vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q)))
                                                   : 0U));
            } else if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                 >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                              >> 0xaU)))) {
                    if ((0x200U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                        if ((0x100U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                            vlSelf->__PVT__csr_mepc_r 
                                                                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                        }
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                            vlSelf->__PVT__csr_mcause_r 
                                                                = 
                                                                (0x8000000fU 
                                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                            vlSelf->__PVT__csr_mtval_r 
                                                                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((0x30U <= (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)) 
             & (0x33U >= (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
            if ((3U == (3U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
                vlSelf->__PVT__csr_mpriv_r = (3U & 
                                              (vlSelf->__PVT__csr_sr_r 
                                               >> 0xbU));
                vlSelf->__PVT__csr_sr_r = ((0xfffffff7U 
                                            & vlSelf->__PVT__csr_sr_r) 
                                           | (8U & 
                                              (vlSelf->__PVT__csr_sr_r 
                                               >> 4U)));
                vlSelf->__PVT__csr_sr_r = (0x80U | vlSelf->__PVT__csr_sr_r);
                vlSelf->__PVT__csr_sr_r = (0xffffe7ffU 
                                           & vlSelf->__PVT__csr_sr_r);
            } else {
                vlSelf->__PVT__csr_mpriv_r = ((0x100U 
                                               & vlSelf->__PVT__csr_sr_r)
                                               ? 1U
                                               : 0U);
                vlSelf->__PVT__csr_sr_r = ((0xfffffffdU 
                                            & vlSelf->__PVT__csr_sr_r) 
                                           | (2U & 
                                              (vlSelf->__PVT__csr_sr_r 
                                               >> 4U)));
                vlSelf->__PVT__csr_sr_r = (0x20U | vlSelf->__PVT__csr_sr_r);
                vlSelf->__PVT__csr_sr_r = (0xfffffeffU 
                                           & vlSelf->__PVT__csr_sr_r);
            }
        } else if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
            vlSelf->__PVT__csr_sr_r = ((0xffffff7fU 
                                        & vlSelf->__PVT__csr_sr_r) 
                                       | (0x80U & (vlSelf->__PVT__csr_sr_r 
                                                   << 4U)));
            vlSelf->__PVT__csr_mpriv_r = 3U;
            vlSelf->__PVT__csr_sr_r = ((0xffffe7ffU 
                                        & vlSelf->__PVT__csr_sr_r) 
                                       | ((IData)(vlSelf->__PVT__csr_mpriv_q) 
                                          << 0xbU));
            vlSelf->__PVT__csr_sr_r = (0xfffffff7U 
                                       & vlSelf->__PVT__csr_sr_r);
        } else if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                             >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                    if ((0x100U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                        vlSelf->__PVT__csr_sr_r 
                                                            = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x100U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                    vlSelf->__PVT__csr_sr_r 
                                                        = 
                                                        ((0xfffbfeccU 
                                                          & vlSelf->__PVT__csr_sr_r) 
                                                         | (0x40133U 
                                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__csr_mip_next_r = vlSelf->__PVT__csr_mip_next_q;
    vlSelf->__PVT__csr_mip_r = vlSelf->__PVT__csr_mip_q;
    if ((0x20U != (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelf->__PVT__csr_mip_r 
                                                                    = 
                                                                    (0xaaaU 
                                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x100U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                            vlSelf->__PVT__csr_mip_r 
                                                                = 
                                                                ((0xfffffdddU 
                                                                  & vlSelf->__PVT__csr_mip_r) 
                                                                 | (0x222U 
                                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (vlSymsp->TOP.__Vcellinp__v__intr_i & 
               (vlSelf->__PVT__csr_mideleg_q >> 0xbU)))) {
        vlSelf->__PVT__csr_mip_next_r = (0x200U | vlSelf->__PVT__csr_mip_next_r);
    }
    if ((1U & (vlSymsp->TOP.__Vcellinp__v__intr_i & 
               (~ (vlSelf->__PVT__csr_mideleg_q >> 0xbU))))) {
        vlSelf->__PVT__csr_mip_next_r = (0x800U | vlSelf->__PVT__csr_mip_next_r);
    }
    if ((vlSelf->__PVT__csr_mcycle_q == vlSelf->__PVT__csr_mtimecmp_q)) {
        vlSelf->__PVT__csr_mtime_ie_r = 0U;
        vlSelf->__PVT__csr_mip_next_r = ((0x80U & vlSelf->__PVT__csr_mideleg_q)
                                          ? ((0xffffffdfU 
                                              & vlSelf->__PVT__csr_mip_next_r) 
                                             | ((IData)(vlSelf->__PVT__csr_mtime_ie_q) 
                                                << 5U))
                                          : ((0xffffff7fU 
                                              & vlSelf->__PVT__csr_mip_next_r) 
                                             | ((IData)(vlSelf->__PVT__csr_mtime_ie_q) 
                                                << 7U)));
    }
    vlSelf->__PVT__csr_mip_r = (vlSelf->__PVT__csr_mip_r 
                                | vlSelf->__PVT__csr_mip_next_r);
}
