// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1sequence.h for the primary calling header

#include "verilated.h"

#include "Vf1sequence___024root.h"

VL_ATTR_COLD void Vf1sequence___024root___settle__TOP__0(Vf1sequence___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1sequence__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1sequence___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->f1sequence__DOT__current_state) 
               | (1U == vlSelf->f1sequence__DOT__current_state)) 
              | (2U == vlSelf->f1sequence__DOT__current_state)) 
             | (3U == vlSelf->f1sequence__DOT__current_state)) 
            | (4U == vlSelf->f1sequence__DOT__current_state)) 
           | (5U == vlSelf->f1sequence__DOT__current_state)) 
          | (6U == vlSelf->f1sequence__DOT__current_state)) 
         | (7U == vlSelf->f1sequence__DOT__current_state))) {
        if ((0U == vlSelf->f1sequence__DOT__current_state)) {
            vlSelf->out = 0U;
            if (vlSelf->in) {
                vlSelf->f1sequence__DOT__next_state = 1U;
            }
        } else if ((1U == vlSelf->f1sequence__DOT__current_state)) {
            vlSelf->out = 1U;
            if (vlSelf->in) {
                vlSelf->f1sequence__DOT__next_state = 2U;
            }
        } else if ((2U == vlSelf->f1sequence__DOT__current_state)) {
            vlSelf->out = 1U;
            if (vlSelf->in) {
                vlSelf->f1sequence__DOT__next_state = 3U;
            }
        } else if ((3U == vlSelf->f1sequence__DOT__current_state)) {
            vlSelf->out = 7U;
            if (vlSelf->in) {
                vlSelf->f1sequence__DOT__next_state = 4U;
            }
        } else if ((4U == vlSelf->f1sequence__DOT__current_state)) {
            vlSelf->out = 0xfU;
            if (vlSelf->in) {
                vlSelf->f1sequence__DOT__next_state = 5U;
            }
        } else if ((5U == vlSelf->f1sequence__DOT__current_state)) {
            vlSelf->out = 0x1fU;
            if (vlSelf->in) {
                vlSelf->f1sequence__DOT__next_state = 6U;
            }
        } else if ((6U == vlSelf->f1sequence__DOT__current_state)) {
            vlSelf->out = 0x3fU;
            if (vlSelf->in) {
                vlSelf->f1sequence__DOT__next_state = 7U;
            }
        } else {
            vlSelf->out = 0x7fU;
            if (vlSelf->in) {
                vlSelf->f1sequence__DOT__next_state = 8U;
            }
        }
    } else if ((8U == vlSelf->f1sequence__DOT__current_state)) {
        vlSelf->out = 0xffU;
        if (vlSelf->in) {
            vlSelf->f1sequence__DOT__next_state = 0U;
        }
    } else {
        vlSelf->out = 0U;
    }
}

VL_ATTR_COLD void Vf1sequence___024root___eval_initial(Vf1sequence___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1sequence__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1sequence___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vf1sequence___024root___eval_settle(Vf1sequence___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1sequence__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1sequence___024root___eval_settle\n"); );
    // Body
    Vf1sequence___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vf1sequence___024root___final(Vf1sequence___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1sequence__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1sequence___024root___final\n"); );
}

VL_ATTR_COLD void Vf1sequence___024root___ctor_var_reset(Vf1sequence___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1sequence__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1sequence___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->in = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->f1sequence__DOT__current_state = 0;
    vlSelf->f1sequence__DOT__next_state = 0;
}
