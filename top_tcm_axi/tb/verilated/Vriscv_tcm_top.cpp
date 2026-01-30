// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_tcm_top__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vriscv_tcm_top::Vriscv_tcm_top(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vriscv_tcm_top__Syms(contextp(), name(), this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , rst_cpu_i{vlSymsp->TOP.rst_cpu_i}
    , axi_i_awready_i{vlSymsp->TOP.axi_i_awready_i}
    , axi_i_wready_i{vlSymsp->TOP.axi_i_wready_i}
    , axi_i_bvalid_i{vlSymsp->TOP.axi_i_bvalid_i}
    , axi_i_bresp_i{vlSymsp->TOP.axi_i_bresp_i}
    , axi_i_arready_i{vlSymsp->TOP.axi_i_arready_i}
    , axi_i_rvalid_i{vlSymsp->TOP.axi_i_rvalid_i}
    , axi_i_rresp_i{vlSymsp->TOP.axi_i_rresp_i}
    , axi_t_awvalid_i{vlSymsp->TOP.axi_t_awvalid_i}
    , axi_t_awid_i{vlSymsp->TOP.axi_t_awid_i}
    , axi_t_awlen_i{vlSymsp->TOP.axi_t_awlen_i}
    , axi_t_awburst_i{vlSymsp->TOP.axi_t_awburst_i}
    , axi_t_wvalid_i{vlSymsp->TOP.axi_t_wvalid_i}
    , axi_t_wstrb_i{vlSymsp->TOP.axi_t_wstrb_i}
    , axi_t_wlast_i{vlSymsp->TOP.axi_t_wlast_i}
    , axi_t_bready_i{vlSymsp->TOP.axi_t_bready_i}
    , axi_t_arvalid_i{vlSymsp->TOP.axi_t_arvalid_i}
    , axi_t_arid_i{vlSymsp->TOP.axi_t_arid_i}
    , axi_t_arlen_i{vlSymsp->TOP.axi_t_arlen_i}
    , axi_t_arburst_i{vlSymsp->TOP.axi_t_arburst_i}
    , axi_t_rready_i{vlSymsp->TOP.axi_t_rready_i}
    , axi_i_awvalid_o{vlSymsp->TOP.axi_i_awvalid_o}
    , axi_i_wvalid_o{vlSymsp->TOP.axi_i_wvalid_o}
    , axi_i_wstrb_o{vlSymsp->TOP.axi_i_wstrb_o}
    , axi_i_bready_o{vlSymsp->TOP.axi_i_bready_o}
    , axi_i_arvalid_o{vlSymsp->TOP.axi_i_arvalid_o}
    , axi_i_rready_o{vlSymsp->TOP.axi_i_rready_o}
    , axi_t_awready_o{vlSymsp->TOP.axi_t_awready_o}
    , axi_t_wready_o{vlSymsp->TOP.axi_t_wready_o}
    , axi_t_bvalid_o{vlSymsp->TOP.axi_t_bvalid_o}
    , axi_t_bresp_o{vlSymsp->TOP.axi_t_bresp_o}
    , axi_t_bid_o{vlSymsp->TOP.axi_t_bid_o}
    , axi_t_arready_o{vlSymsp->TOP.axi_t_arready_o}
    , axi_t_rvalid_o{vlSymsp->TOP.axi_t_rvalid_o}
    , axi_t_rresp_o{vlSymsp->TOP.axi_t_rresp_o}
    , axi_t_rid_o{vlSymsp->TOP.axi_t_rid_o}
    , axi_t_rlast_o{vlSymsp->TOP.axi_t_rlast_o}
    , axi_i_rdata_i{vlSymsp->TOP.axi_i_rdata_i}
    , axi_t_awaddr_i{vlSymsp->TOP.axi_t_awaddr_i}
    , axi_t_wdata_i{vlSymsp->TOP.axi_t_wdata_i}
    , axi_t_araddr_i{vlSymsp->TOP.axi_t_araddr_i}
    , intr_i{vlSymsp->TOP.intr_i}
    , axi_i_awaddr_o{vlSymsp->TOP.axi_i_awaddr_o}
    , axi_i_wdata_o{vlSymsp->TOP.axi_i_wdata_o}
    , axi_i_araddr_o{vlSymsp->TOP.axi_i_araddr_o}
    , axi_t_rdata_o{vlSymsp->TOP.axi_t_rdata_o}
    , v{vlSymsp->TOP.v}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk_i;
    sensitive << rst_i;
    sensitive << rst_cpu_i;
    sensitive << axi_i_awready_i;
    sensitive << axi_i_wready_i;
    sensitive << axi_i_bvalid_i;
    sensitive << axi_i_bresp_i;
    sensitive << axi_i_arready_i;
    sensitive << axi_i_rvalid_i;
    sensitive << axi_i_rresp_i;
    sensitive << axi_t_awvalid_i;
    sensitive << axi_t_awid_i;
    sensitive << axi_t_awlen_i;
    sensitive << axi_t_awburst_i;
    sensitive << axi_t_wvalid_i;
    sensitive << axi_t_wstrb_i;
    sensitive << axi_t_wlast_i;
    sensitive << axi_t_bready_i;
    sensitive << axi_t_arvalid_i;
    sensitive << axi_t_arid_i;
    sensitive << axi_t_arlen_i;
    sensitive << axi_t_arburst_i;
    sensitive << axi_t_rready_i;
    sensitive << axi_i_rdata_i;
    sensitive << axi_t_awaddr_i;
    sensitive << axi_t_wdata_i;
    sensitive << axi_t_araddr_i;
    sensitive << intr_i;

}

//============================================================
// Destructor

Vriscv_tcm_top::~Vriscv_tcm_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vriscv_tcm_top___024root___eval_debug_assertions(Vriscv_tcm_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_tcm_top___024root___eval_static(Vriscv_tcm_top___024root* vlSelf);
void Vriscv_tcm_top___024root___eval_initial(Vriscv_tcm_top___024root* vlSelf);
void Vriscv_tcm_top___024root___eval_settle(Vriscv_tcm_top___024root* vlSelf);
void Vriscv_tcm_top___024root___eval(Vriscv_tcm_top___024root* vlSelf);

void Vriscv_tcm_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_tcm_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_tcm_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vriscv_tcm_top___024root___eval_static(&(vlSymsp->TOP));
        Vriscv_tcm_top___024root___eval_initial(&(vlSymsp->TOP));
        Vriscv_tcm_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vriscv_tcm_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vriscv_tcm_top::eventsPending() { return false; }

uint64_t Vriscv_tcm_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vriscv_tcm_top___024root___eval_final(Vriscv_tcm_top___024root* vlSelf);

VL_ATTR_COLD void Vriscv_tcm_top::final() {
    Vriscv_tcm_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vriscv_tcm_top::hierName() const { return vlSymsp->name(); }
const char* Vriscv_tcm_top::modelName() const { return "Vriscv_tcm_top"; }
unsigned Vriscv_tcm_top::threads() const { return 1; }
void Vriscv_tcm_top::prepareClone() const { contextp()->prepareClone(); }
void Vriscv_tcm_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vriscv_tcm_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vriscv_tcm_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vriscv_tcm_top___024root__trace_init_top(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_tcm_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_tcm_top___024root*>(voidSelf);
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_tcm_top___024root__trace_decl_types(tracep);
    Vriscv_tcm_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_tcm_top___024root__trace_register(Vriscv_tcm_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_tcm_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vriscv_tcm_top::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vriscv_tcm_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vriscv_tcm_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
