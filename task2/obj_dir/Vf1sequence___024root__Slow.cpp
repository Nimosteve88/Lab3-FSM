// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1sequence.h for the primary calling header

#include "verilated.h"

#include "Vf1sequence__Syms.h"
#include "Vf1sequence___024root.h"

void Vf1sequence___024root___ctor_var_reset(Vf1sequence___024root* vlSelf);

Vf1sequence___024root::Vf1sequence___024root(Vf1sequence__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vf1sequence___024root___ctor_var_reset(this);
}

void Vf1sequence___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vf1sequence___024root::~Vf1sequence___024root() {
}
