// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top_riscv_csr__SB0.h"

VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr__SB0___ctor_var_reset(Vriscv_tcm_top_riscv_csr__SB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_csr__SB0___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_opcode_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_invalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_rd_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_rb_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_rb_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_writeback_write_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_writeback_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_writeback_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_writeback_exception_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__csr_writeback_exception_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_writeback_exception_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_id_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__reset_vector_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__interrupt_inhibit_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_result_e1_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_result_e1_write_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_result_e1_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_result_e1_exception_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__branch_csr_request_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_csr_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_csr_priv_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__take_interrupt_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifence_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mmu_priv_d_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mmu_sum_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mmu_mxr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mmu_flush_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mmu_satp_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrrw_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrrwi_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrrsi_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrrci_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sfence_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifence_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__satp_update_w = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__u_csrfile__csr_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__rd_valid_e1_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_result_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_wdata_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exception_e1_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__eret_fault_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__take_interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tlb_flush_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifence_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_target_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__reset_q = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h996e9194__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_hcaf0a663__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__take_interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset_q = VL_RAND_RESET_I(1);
}
