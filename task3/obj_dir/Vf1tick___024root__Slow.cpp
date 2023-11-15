// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1tick.h for the primary calling header

#include "verilated.h"

#include "Vf1tick__Syms.h"
#include "Vf1tick___024root.h"

void Vf1tick___024root___ctor_var_reset(Vf1tick___024root* vlSelf);

Vf1tick___024root::Vf1tick___024root(Vf1tick__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vf1tick___024root___ctor_var_reset(this);
}

void Vf1tick___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vf1tick___024root::~Vf1tick___024root() {
}
