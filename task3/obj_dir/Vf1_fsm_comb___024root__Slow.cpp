// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm_comb.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm_comb__Syms.h"
#include "Vf1_fsm_comb___024root.h"

void Vf1_fsm_comb___024root___ctor_var_reset(Vf1_fsm_comb___024root* vlSelf);

Vf1_fsm_comb___024root::Vf1_fsm_comb___024root(Vf1_fsm_comb__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vf1_fsm_comb___024root___ctor_var_reset(this);
}

void Vf1_fsm_comb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vf1_fsm_comb___024root::~Vf1_fsm_comb___024root() {
}
