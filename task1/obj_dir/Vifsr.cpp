// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vifsr.h"
#include "Vifsr__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vifsr::Vifsr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vifsr__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vifsr::Vifsr(const char* _vcname__)
    : Vifsr(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vifsr::~Vifsr() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vifsr___024root___eval_initial(Vifsr___024root* vlSelf);
void Vifsr___024root___eval_settle(Vifsr___024root* vlSelf);
void Vifsr___024root___eval(Vifsr___024root* vlSelf);
#ifdef VL_DEBUG
void Vifsr___024root___eval_debug_assertions(Vifsr___024root* vlSelf);
#endif  // VL_DEBUG
void Vifsr___024root___final(Vifsr___024root* vlSelf);

static void _eval_initial_loop(Vifsr__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vifsr___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vifsr___024root___eval_settle(&(vlSymsp->TOP));
        Vifsr___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vifsr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vifsr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vifsr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vifsr___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vifsr::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vifsr::final() {
    Vifsr___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vifsr::hierName() const { return vlSymsp->name(); }
const char* Vifsr::modelName() const { return "Vifsr"; }
unsigned Vifsr::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vifsr::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vifsr___024root__trace_init_top(Vifsr___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vifsr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vifsr___024root*>(voidSelf);
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vifsr___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vifsr___024root__trace_register(Vifsr___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vifsr::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vifsr___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
