// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vifsr.h for the primary calling header

#ifndef VERILATED_VIFSR___024ROOT_H_
#define VERILATED_VIFSR___024ROOT_H_  // guard

#include "verilated.h"

class Vifsr__Syms;

class Vifsr___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,3,0);
    CData/*3:0*/ ifsr__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vifsr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vifsr___024root(Vifsr__Syms* symsp, const char* name);
    ~Vifsr___024root();
    VL_UNCOPYABLE(Vifsr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
