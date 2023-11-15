// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vifsr.h for the primary calling header

#include "verilated.h"

#include "Vifsr___024root.h"

VL_INLINE_OPT void Vifsr___024root___sequent__TOP__0(Vifsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__ifsr__DOT__sreg;
    // Body
    __Vdly__ifsr__DOT__sreg = vlSelf->ifsr__DOT__sreg;
    if (vlSelf->rst) {
        __Vdly__ifsr__DOT__sreg = 1U;
    } else if (vlSelf->en) {
        __Vdly__ifsr__DOT__sreg = ((0xeU & ((IData)(vlSelf->ifsr__DOT__sreg) 
                                            << 1U)) 
                                   | (1U & VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->ifsr__DOT__sreg)))));
    }
    vlSelf->ifsr__DOT__sreg = __Vdly__ifsr__DOT__sreg;
    vlSelf->data_out = vlSelf->ifsr__DOT__sreg;
}

void Vifsr___024root___eval(Vifsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vifsr___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vifsr___024root___eval_debug_assertions(Vifsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
