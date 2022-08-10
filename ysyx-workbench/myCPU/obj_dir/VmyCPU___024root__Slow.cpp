// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU___024root.h"

void VmyCPU___024root___ctor_var_reset(VmyCPU___024root* vlSelf);

VmyCPU___024root::VmyCPU___024root(VmyCPU__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VmyCPU___024root___ctor_var_reset(this);
}

void VmyCPU___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VmyCPU___024root::~VmyCPU___024root() {
}
