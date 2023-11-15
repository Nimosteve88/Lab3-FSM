// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1tick__Syms.h"


VL_ATTR_COLD void Vf1tick___024root__trace_init_sub__TOP__0(Vf1tick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1tick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1tick___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBit(c+7,"N", false,-1);
    tracep->declBit(c+8,"tick", false,-1);
    tracep->declBus(c+9,"out", false,-1, 7,0);
    tracep->pushNamePrefix("f1tick ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBit(c+7,"N", false,-1);
    tracep->declBit(c+8,"tick", false,-1);
    tracep->declBus(c+9,"out", false,-1, 7,0);
    tracep->pushNamePrefix("clock ");
    tracep->declBus(c+11,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+10,"N", false,-1, 15,0);
    tracep->declBit(c+8,"tick", false,-1);
    tracep->declBus(c+1,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("formula ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+8,"in", false,-1);
    tracep->declBus(c+9,"out", false,-1, 7,0);
    tracep->declBus(c+2,"current_state", false,-1, 31,0);
    tracep->declBus(c+3,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1tick___024root__trace_init_top(Vf1tick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1tick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1tick___024root__trace_init_top\n"); );
    // Body
    Vf1tick___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1tick___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1tick___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1tick___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1tick___024root__trace_register(Vf1tick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1tick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1tick___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1tick___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1tick___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1tick___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1tick___024root__trace_full_sub_0(Vf1tick___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1tick___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1tick___024root__trace_full_top_0\n"); );
    // Init
    Vf1tick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1tick___024root*>(voidSelf);
    Vf1tick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1tick___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1tick___024root__trace_full_sub_0(Vf1tick___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1tick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1tick___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->f1tick__DOT__clock__DOT__count),16);
    bufp->fullIData(oldp+2,(vlSelf->f1tick__DOT__formula__DOT__current_state),32);
    bufp->fullIData(oldp+3,(vlSelf->f1tick__DOT__formula__DOT__next_state),32);
    bufp->fullBit(oldp+4,(vlSelf->clk));
    bufp->fullBit(oldp+5,(vlSelf->rst));
    bufp->fullBit(oldp+6,(vlSelf->en));
    bufp->fullBit(oldp+7,(vlSelf->N));
    bufp->fullBit(oldp+8,(vlSelf->tick));
    bufp->fullCData(oldp+9,(vlSelf->out),8);
    bufp->fullSData(oldp+10,(vlSelf->N),16);
    bufp->fullIData(oldp+11,(0x10U),32);
}
