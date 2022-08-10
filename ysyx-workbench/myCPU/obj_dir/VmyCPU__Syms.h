// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMYCPU__SYMS_H_
#define VERILATED_VMYCPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VmyCPU.h"

// INCLUDE MODULE CLASSES
#include "VmyCPU___024root.h"
#include "VmyCPU___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VmyCPU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VmyCPU* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VmyCPU___024root               TOP;
    VmyCPU___024unit               TOP____024unit;

    // CONSTRUCTORS
    VmyCPU__Syms(VerilatedContext* contextp, const char* namep, VmyCPU* modelp);
    ~VmyCPU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
