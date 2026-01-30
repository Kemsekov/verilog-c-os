// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_tcm_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TCM_TOP_RISCV_CSR_REGFILE_H_
#define VERILATED_VRISCV_TCM_TOP_RISCV_CSR_REGFILE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vriscv_tcm_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_tcm_top_riscv_csr_regfile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__ext_intr_i,0,0);
        VL_IN8(__PVT__timer_intr_i,0,0);
        VL_IN8(__PVT__exception_i,5,0);
        VL_IN8(__PVT__csr_ren_i,0,0);
        VL_OUT8(__PVT__csr_branch_o,0,0);
        VL_OUT8(__PVT__priv_o,1,0);
        CData/*1:0*/ __PVT__csr_mpriv_q;
        CData/*0:0*/ __PVT__csr_mtime_ie_q;
        CData/*0:0*/ __PVT__m_enabled_r;
        CData/*0:0*/ __PVT__s_enabled_r;
        CData/*1:0*/ __PVT__irq_priv_q;
        CData/*0:0*/ __PVT__csr_mip_upd_q;
        CData/*1:0*/ __PVT__csr_mpriv_r;
        CData/*0:0*/ __PVT__csr_mtime_ie_r;
        CData/*0:0*/ __PVT__branch_r;
        VL_IN16(__PVT__csr_raddr_i,11,0);
        VL_IN16(__PVT__csr_waddr_i,11,0);
        VL_IN(__PVT__cpu_id_i,31,0);
        VL_IN(__PVT__misa_i,31,0);
        VL_IN(__PVT__exception_pc_i,31,0);
        VL_IN(__PVT__exception_addr_i,31,0);
        VL_OUT(__PVT__csr_rdata_o,31,0);
        VL_IN(__PVT__csr_wdata_i,31,0);
        VL_OUT(__PVT__csr_target_o,31,0);
        VL_OUT(__PVT__status_o,31,0);
        VL_OUT(__PVT__satp_o,31,0);
        VL_OUT(__PVT__interrupt_o,31,0);
        IData/*31:0*/ __PVT__csr_mepc_q;
        IData/*31:0*/ __PVT__csr_mcause_q;
        IData/*31:0*/ __PVT__csr_sr_q;
        IData/*31:0*/ __PVT__csr_mtvec_q;
        IData/*31:0*/ __PVT__csr_mip_q;
        IData/*31:0*/ __PVT__csr_mie_q;
        IData/*31:0*/ __PVT__csr_mcycle_q;
        IData/*31:0*/ __PVT__csr_mcycle_h_q;
        IData/*31:0*/ __PVT__csr_mscratch_q;
        IData/*31:0*/ __PVT__csr_mtval_q;
        IData/*31:0*/ __PVT__csr_mtimecmp_q;
        IData/*31:0*/ __PVT__csr_medeleg_q;
        IData/*31:0*/ __PVT__csr_mideleg_q;
        IData/*31:0*/ __PVT__csr_sepc_q;
        IData/*31:0*/ __PVT__csr_stvec_q;
        IData/*31:0*/ __PVT__csr_scause_q;
        IData/*31:0*/ __PVT__csr_stval_q;
        IData/*31:0*/ __PVT__csr_satp_q;
        IData/*31:0*/ __PVT__csr_sscratch_q;
        IData/*31:0*/ __PVT__irq_pending_r;
        IData/*31:0*/ __PVT__irq_masked_r;
        IData/*31:0*/ __PVT__m_interrupts_r;
        IData/*31:0*/ __PVT__s_interrupts_r;
        IData/*31:0*/ __PVT__rdata_r;
        IData/*31:0*/ __PVT__csr_mepc_r;
        IData/*31:0*/ __PVT__csr_mcause_r;
        IData/*31:0*/ __PVT__csr_mtval_r;
        IData/*31:0*/ __PVT__csr_sr_r;
        IData/*31:0*/ __PVT__csr_mtvec_r;
        IData/*31:0*/ __PVT__csr_mip_r;
        IData/*31:0*/ __PVT__csr_mie_r;
        IData/*31:0*/ __PVT__csr_mcycle_r;
        IData/*31:0*/ __PVT__csr_mscratch_r;
        IData/*31:0*/ __PVT__csr_mtimecmp_r;
        IData/*31:0*/ __PVT__csr_medeleg_r;
    };
    struct {
        IData/*31:0*/ __PVT__csr_mideleg_r;
        IData/*31:0*/ __PVT__csr_mip_next_q;
        IData/*31:0*/ __PVT__csr_mip_next_r;
        IData/*31:0*/ __PVT__csr_sepc_r;
        IData/*31:0*/ __PVT__csr_stvec_r;
        IData/*31:0*/ __PVT__csr_scause_r;
        IData/*31:0*/ __PVT__csr_stval_r;
        IData/*31:0*/ __PVT__csr_satp_r;
        IData/*31:0*/ __PVT__csr_sscratch_r;
        IData/*31:0*/ __PVT__branch_target_r;
        IData/*31:0*/ __Vdly__csr_mcycle_q;
        IData/*31:0*/ __Vdly__csr_mcycle_h_q;
    };

    // INTERNAL VARIABLES
    Vriscv_tcm_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_tcm_top_riscv_csr_regfile(Vriscv_tcm_top__Syms* symsp, const char* v__name);
    ~Vriscv_tcm_top_riscv_csr_regfile();
    VL_UNCOPYABLE(Vriscv_tcm_top_riscv_csr_regfile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t get_mcycle();
};


#endif  // guard
