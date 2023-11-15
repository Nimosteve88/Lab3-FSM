// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1tick.h for the primary calling header

#include "verilated.h"

#include "Vf1tick___024root.h"

VL_INLINE_OPT void Vf1tick___024root___sequent__TOP__0(Vf1tick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1tick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1tick___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__f1tick__DOT__clock__DOT__count;
    // Body
    __Vdly__f1tick__DOT__clock__DOT__count = vlSelf->f1tick__DOT__clock__DOT__count;
    if (vlSelf->rst) {
        vlSelf->tick = 0U;
        __Vdly__f1tick__DOT__clock__DOT__count = vlSelf->N;
        vlSelf->f1tick__DOT__formula__DOT__current_state = 0U;
    } else {
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->f1tick__DOT__clock__DOT__count))) {
                vlSelf->tick = 1U;
                __Vdly__f1tick__DOT__clock__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__f1tick__DOT__clock__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->f1tick__DOT__clock__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->tick = 0U;
            }
        }
        vlSelf->f1tick__DOT__formula__DOT__current_state 
            = vlSelf->f1tick__DOT__formula__DOT__next_state;
    }
    vlSelf->f1tick__DOT__clock__DOT__count = __Vdly__f1tick__DOT__clock__DOT__count;
    if (((((((((0U == vlSelf->f1tick__DOT__formula__DOT__current_state) 
               | (1U == vlSelf->f1tick__DOT__formula__DOT__current_state)) 
              | (2U == vlSelf->f1tick__DOT__formula__DOT__current_state)) 
             | (3U == vlSelf->f1tick__DOT__formula__DOT__current_state)) 
            | (4U == vlSelf->f1tick__DOT__formula__DOT__current_state)) 
           | (5U == vlSelf->f1tick__DOT__formula__DOT__current_state)) 
          | (6U == vlSelf->f1tick__DOT__formula__DOT__current_state)) 
         | (7U == vlSelf->f1tick__DOT__formula__DOT__current_state))) {
        if ((0U == vlSelf->f1tick__DOT__formula__DOT__current_state)) {
            vlSelf->out = 0U;
            if (vlSelf->tick) {
                vlSelf->f1tick__DOT__formula__DOT__next_state = 1U;
            }
        } else if ((1U == vlSelf->f1tick__DOT__formula__DOT__current_state)) {
            vlSelf->out = 1U;
            if (vlSelf->tick) {
                vlSelf->f1tick__DOT__formula__DOT__next_state = 2U;
            }
        } else if ((2U == vlSelf->f1tick__DOT__formula__DOT__current_state)) {
            vlSelf->out = 1U;
            if (vlSelf->tick) {
                vlSelf->f1tick__DOT__formula__DOT__next_state = 3U;
            }
        } else if ((3U == vlSelf->f1tick__DOT__formula__DOT__current_state)) {
            vlSelf->out = 7U;
            if (vlSelf->tick) {
                vlSelf->f1tick__DOT__formula__DOT__next_state = 4U;
            }
        } else if ((4U == vlSelf->f1tick__DOT__formula__DOT__current_state)) {
            vlSelf->out = 0xfU;
            if (vlSelf->tick) {
                vlSelf->f1tick__DOT__formula__DOT__next_state = 5U;
            }
        } else if ((5U == vlSelf->f1tick__DOT__formula__DOT__current_state)) {
            vlSelf->out = 0x1fU;
            if (vlSelf->tick) {
                vlSelf->f1tick__DOT__formula__DOT__next_state = 6U;
            }
        } else if ((6U == vlSelf->f1tick__DOT__formula__DOT__current_state)) {
            vlSelf->out = 0x3fU;
            if (vlSelf->tick) {
                vlSelf->f1tick__DOT__formula__DOT__next_state = 7U;
            }
        } else {
            vlSelf->out = 0x7fU;
            if (vlSelf->tick) {
                vlSelf->f1tick__DOT__formula__DOT__next_state = 8U;
            }
        }
    } else if ((8U == vlSelf->f1tick__DOT__formula__DOT__current_state)) {
        vlSelf->out = 0xffU;
        if (vlSelf->tick) {
            vlSelf->f1tick__DOT__formula__DOT__next_state = 0U;
        }
    } else {
        vlSelf->out = 0U;
    }
}

void Vf1tick___024root___eval(Vf1tick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1tick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1tick___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1tick___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vf1tick___024root___eval_debug_assertions(Vf1tick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1tick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1tick___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->N & 0xfeU))) {
        Verilated::overWidthError("N");}
}
#endif  // VL_DEBUG
