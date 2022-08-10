// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU___024unit.h"

void VmyCPU___024unit___ctor_var_reset(VmyCPU___024unit* vlSelf);

VmyCPU___024unit::VmyCPU___024unit(VmyCPU__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VmyCPU___024unit___ctor_var_reset(this);
}

void VmyCPU___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VmyCPU___024unit::~VmyCPU___024unit() {
}
