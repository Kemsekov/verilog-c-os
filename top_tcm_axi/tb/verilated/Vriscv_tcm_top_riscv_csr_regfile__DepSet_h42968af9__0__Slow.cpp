// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top_riscv_csr_regfile.h"

VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr_regfile___ctor_var_reset(Vriscv_tcm_top_riscv_csr_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_tcm_top_riscv_csr_regfile___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ext_intr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_intr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_id_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__misa_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exception_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__exception_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exception_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_ren_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_raddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_branch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_target_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__priv_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__status_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__satp_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__interrupt_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mepc_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mcause_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_sr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mtvec_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mip_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mie_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mpriv_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_mcycle_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mcycle_h_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mscratch_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mtval_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mtimecmp_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mtime_ie_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_medeleg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mideleg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_sepc_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_stvec_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_scause_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_stval_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_satp_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_sscratch_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__irq_pending_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__irq_masked_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_interrupts_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_interrupts_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__irq_priv_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_mip_upd_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdata_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mepc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mcause_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mtval_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_sr_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mtvec_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mip_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mie_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mpriv_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_mcycle_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mtimecmp_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mtime_ie_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_medeleg_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mideleg_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mip_next_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_mip_next_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_sepc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_stvec_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_scause_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_stval_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_satp_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_sscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_target_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__csr_mcycle_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__csr_mcycle_h_q = VL_RAND_RESET_I(32);
}
