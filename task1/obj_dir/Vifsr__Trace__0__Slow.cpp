// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vifsr__Syms.h"


VL_ATTR_COLD void Vifsr___024root__trace_init_sub__TOP__0(Vifsr___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"data_out", false,-1, 3,0);
    tracep->pushNamePrefix("ifsr ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"data_out", false,-1, 3,0);
    tracep->declBus(c+5,"sreg", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vifsr___024root__trace_init_top(Vifsr___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root__trace_init_top\n"); );
    // Body
    Vifsr___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vifsr___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vifsr___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vifsr___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vifsr___024root__trace_register(Vifsr___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vifsr___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vifsr___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vifsr___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vifsr___024root__trace_full_sub_0(Vifsr___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vifsr___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root__trace_full_top_0\n"); );
    // Init
    Vifsr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vifsr___024root*>(voidSelf);
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vifsr___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vifsr___024root__trace_full_sub_0(Vifsr___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullCData(oldp+4,(vlSelf->data_out),4);
    bufp->fullCData(oldp+5,(vlSelf->ifsr__DOT__sreg),4);
}
