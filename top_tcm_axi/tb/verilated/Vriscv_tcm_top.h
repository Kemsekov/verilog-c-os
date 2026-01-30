// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRISCV_TCM_TOP_H_
#define VERILATED_VRISCV_TCM_TOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
#include "svdpi.h"

class Vriscv_tcm_top__Syms;
class Vriscv_tcm_top___024root;
class VerilatedVcdSc;
class Vriscv_tcm_top_riscv_tcm_top;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vriscv_tcm_top VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vriscv_tcm_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_core::sc_in<bool> &clk_i;
    sc_core::sc_in<bool> &rst_i;
    sc_core::sc_in<bool> &rst_cpu_i;
    sc_core::sc_in<bool> &axi_i_awready_i;
    sc_core::sc_in<bool> &axi_i_wready_i;
    sc_core::sc_in<bool> &axi_i_bvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > &axi_i_bresp_i;
    sc_core::sc_in<bool> &axi_i_arready_i;
    sc_core::sc_in<bool> &axi_i_rvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > &axi_i_rresp_i;
    sc_core::sc_in<bool> &axi_t_awvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > &axi_t_awid_i;
    sc_core::sc_in<sc_dt::sc_uint<8> > &axi_t_awlen_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > &axi_t_awburst_i;
    sc_core::sc_in<bool> &axi_t_wvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > &axi_t_wstrb_i;
    sc_core::sc_in<bool> &axi_t_wlast_i;
    sc_core::sc_in<bool> &axi_t_bready_i;
    sc_core::sc_in<bool> &axi_t_arvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > &axi_t_arid_i;
    sc_core::sc_in<sc_dt::sc_uint<8> > &axi_t_arlen_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > &axi_t_arburst_i;
    sc_core::sc_in<bool> &axi_t_rready_i;
    sc_core::sc_out<bool> &axi_i_awvalid_o;
    sc_core::sc_out<bool> &axi_i_wvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &axi_i_wstrb_o;
    sc_core::sc_out<bool> &axi_i_bready_o;
    sc_core::sc_out<bool> &axi_i_arvalid_o;
    sc_core::sc_out<bool> &axi_i_rready_o;
    sc_core::sc_out<bool> &axi_t_awready_o;
    sc_core::sc_out<bool> &axi_t_wready_o;
    sc_core::sc_out<bool> &axi_t_bvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > &axi_t_bresp_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &axi_t_bid_o;
    sc_core::sc_out<bool> &axi_t_arready_o;
    sc_core::sc_out<bool> &axi_t_rvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > &axi_t_rresp_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &axi_t_rid_o;
    sc_core::sc_out<bool> &axi_t_rlast_o;
    sc_core::sc_in<sc_dt::sc_uint<32> > &axi_i_rdata_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &axi_t_awaddr_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &axi_t_wdata_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &axi_t_araddr_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &intr_i;
    sc_core::sc_out<sc_dt::sc_uint<32> > &axi_i_awaddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &axi_i_wdata_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &axi_i_araddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &axi_t_rdata_o;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vriscv_tcm_top_riscv_tcm_top* const v;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vriscv_tcm_top___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vriscv_tcm_top);
    virtual ~Vriscv_tcm_top();
  private:
    VL_UNCOPYABLE(Vriscv_tcm_top);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// SC tracing; avoid overloaded virtual function lint warning
    void trace(sc_core::sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
