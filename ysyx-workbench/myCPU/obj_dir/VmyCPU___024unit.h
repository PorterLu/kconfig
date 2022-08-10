// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VmyCPU.h for the primary calling header

#ifndef VERILATED_VMYCPU___024UNIT_H_
#define VERILATED_VMYCPU___024UNIT_H_  // guard

#include "verilated.h"

class VmyCPU__Syms;
VL_MODULE(VmyCPU___024unit) {
  public:

    // INTERNAL VARIABLES
    VmyCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VmyCPU___024unit(VmyCPU__Syms* symsp, const char* name);
    ~VmyCPU___024unit();
    VL_UNCOPYABLE(VmyCPU___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
