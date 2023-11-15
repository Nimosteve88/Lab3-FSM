// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1sequence.h for the primary calling header

#ifndef VERILATED_VF1SEQUENCE___024ROOT_H_
#define VERILATED_VF1SEQUENCE___024ROOT_H_  // guard

#include "verilated.h"

class Vf1sequence__Syms;

class Vf1sequence___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(in,0,0);
    VL_OUT8(out,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ f1sequence__DOT__current_state;
    IData/*31:0*/ f1sequence__DOT__next_state;

    // INTERNAL VARIABLES
    Vf1sequence__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1sequence___024root(Vf1sequence__Syms* symsp, const char* name);
    ~Vf1sequence___024root();
    VL_UNCOPYABLE(Vf1sequence___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
