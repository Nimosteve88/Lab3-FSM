// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vifsr.h for the primary calling header

#include "verilated.h"

#include "Vifsr___024root.h"

VL_ATTR_COLD void Vifsr___024root___settle__TOP__0(Vifsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->data_out = vlSelf->ifsr__DOT__sreg;
}

VL_ATTR_COLD void Vifsr___024root___eval_initial(Vifsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vifsr___024root___eval_settle(Vifsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root___eval_settle\n"); );
    // Body
    Vifsr___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vifsr___024root___final(Vifsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root___final\n"); );
}

VL_ATTR_COLD void Vifsr___024root___ctor_var_reset(Vifsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vifsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifsr___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(4);
    vlSelf->ifsr__DOT__sreg = VL_RAND_RESET_I(4);
}
