// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1sequence__Syms.h"


VL_ATTR_COLD void Vf1sequence___024root__trace_init_sub__TOP__0(Vf1sequence___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1sequence__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1sequence___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"in", false,-1);
    tracep->declBus(c+4,"out", false,-1, 7,0);
    tracep->pushNamePrefix("f1sequence ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"in", false,-1);
    tracep->declBus(c+4,"out", false,-1, 7,0);
    tracep->declBus(c+5,"current_state", false,-1, 31,0);
    tracep->declBus(c+6,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vf1sequence___024root__trace_init_top(Vf1sequence___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1sequence__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1sequence___024root__trace_init_top\n"); );
    // Body
    Vf1sequence___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1sequence___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1sequence___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1sequence___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1sequence___024root__trace_register(Vf1sequence___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1sequence__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1sequence___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1sequence___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1sequence___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1sequence___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1sequence___024root__trace_full_sub_0(Vf1sequence___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1sequence___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1sequence___024root__trace_full_top_0\n"); );
    // Init
    Vf1sequence___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1sequence___024root*>(voidSelf);
    Vf1sequence__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1sequence___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1sequence___024root__trace_full_sub_0(Vf1sequence___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1sequence__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1sequence___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->in));
    bufp->fullCData(oldp+4,(vlSelf->out),8);
    bufp->fullIData(oldp+5,(vlSelf->f1sequence__DOT__current_state),32);
    bufp->fullIData(oldp+6,(vlSelf->f1sequence__DOT__next_state),32);
}
