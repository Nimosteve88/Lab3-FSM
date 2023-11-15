// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vifsr.h for the primary calling header

#include "verilated.h"

#include "Vifsr__Syms.h"
#include "Vifsr___024root.h"

void Vifsr___024root___ctor_var_reset(Vifsr___024root* vlSelf);

Vifsr___024root::Vifsr___024root(Vifsr__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vifsr___024root___ctor_var_reset(this);
}

void Vifsr___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vifsr___024root::~Vifsr___024root() {
}
