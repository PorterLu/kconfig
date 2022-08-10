// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU___024unit.h"

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void VmyCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmyCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char mask);

VL_INLINE_OPT void VmyCPU___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmyCPU___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char mask__Vcvt;
    for (size_t mask__Vidx = 0; mask__Vidx < 1; ++mask__Vidx) mask__Vcvt = mask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, mask__Vcvt);
}

extern "C" void pc_read(long long raddr, long long* rdata);

VL_INLINE_OPT void VmyCPU___024unit____Vdpiimwrap_pc_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmyCPU___024unit____Vdpiimwrap_pc_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pc_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void halt();

VL_INLINE_OPT void VmyCPU___024unit____Vdpiimwrap_halt_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmyCPU___024unit____Vdpiimwrap_halt_TOP____024unit\n"); );
    // Body
    halt();
}

extern "C" void set_gpr_ptr(long long regfile_0, long long regfile_1, long long regfile_2, long long regfile_3, long long regfile_4, long long regfile_5, long long regfile_6, long long regfile_7, long long regfile_8, long long regfile_9, long long regfile_10, long long regfile_11, long long regfile_12, long long regfile_13, long long regfile_14, long long regfile_15, long long regfile_16, long long regfile_17, long long regfile_18, long long regfile_19, long long regfile_20, long long regfile_21, long long regfile_22, long long regfile_23, long long regfile_24, long long regfile_25, long long regfile_26, long long regfile_27, long long regfile_28, long long regfile_29, long long regfile_30, long long regfile_31);

VL_INLINE_OPT void VmyCPU___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(QData/*63:0*/ regfile_0, QData/*63:0*/ regfile_1, QData/*63:0*/ regfile_2, QData/*63:0*/ regfile_3, QData/*63:0*/ regfile_4, QData/*63:0*/ regfile_5, QData/*63:0*/ regfile_6, QData/*63:0*/ regfile_7, QData/*63:0*/ regfile_8, QData/*63:0*/ regfile_9, QData/*63:0*/ regfile_10, QData/*63:0*/ regfile_11, QData/*63:0*/ regfile_12, QData/*63:0*/ regfile_13, QData/*63:0*/ regfile_14, QData/*63:0*/ regfile_15, QData/*63:0*/ regfile_16, QData/*63:0*/ regfile_17, QData/*63:0*/ regfile_18, QData/*63:0*/ regfile_19, QData/*63:0*/ regfile_20, QData/*63:0*/ regfile_21, QData/*63:0*/ regfile_22, QData/*63:0*/ regfile_23, QData/*63:0*/ regfile_24, QData/*63:0*/ regfile_25, QData/*63:0*/ regfile_26, QData/*63:0*/ regfile_27, QData/*63:0*/ regfile_28, QData/*63:0*/ regfile_29, QData/*63:0*/ regfile_30, QData/*63:0*/ regfile_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmyCPU___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit\n"); );
    // Body
    long long regfile_0__Vcvt;
    for (size_t regfile_0__Vidx = 0; regfile_0__Vidx < 1; ++regfile_0__Vidx) regfile_0__Vcvt = regfile_0;
    long long regfile_1__Vcvt;
    for (size_t regfile_1__Vidx = 0; regfile_1__Vidx < 1; ++regfile_1__Vidx) regfile_1__Vcvt = regfile_1;
    long long regfile_2__Vcvt;
    for (size_t regfile_2__Vidx = 0; regfile_2__Vidx < 1; ++regfile_2__Vidx) regfile_2__Vcvt = regfile_2;
    long long regfile_3__Vcvt;
    for (size_t regfile_3__Vidx = 0; regfile_3__Vidx < 1; ++regfile_3__Vidx) regfile_3__Vcvt = regfile_3;
    long long regfile_4__Vcvt;
    for (size_t regfile_4__Vidx = 0; regfile_4__Vidx < 1; ++regfile_4__Vidx) regfile_4__Vcvt = regfile_4;
    long long regfile_5__Vcvt;
    for (size_t regfile_5__Vidx = 0; regfile_5__Vidx < 1; ++regfile_5__Vidx) regfile_5__Vcvt = regfile_5;
    long long regfile_6__Vcvt;
    for (size_t regfile_6__Vidx = 0; regfile_6__Vidx < 1; ++regfile_6__Vidx) regfile_6__Vcvt = regfile_6;
    long long regfile_7__Vcvt;
    for (size_t regfile_7__Vidx = 0; regfile_7__Vidx < 1; ++regfile_7__Vidx) regfile_7__Vcvt = regfile_7;
    long long regfile_8__Vcvt;
    for (size_t regfile_8__Vidx = 0; regfile_8__Vidx < 1; ++regfile_8__Vidx) regfile_8__Vcvt = regfile_8;
    long long regfile_9__Vcvt;
    for (size_t regfile_9__Vidx = 0; regfile_9__Vidx < 1; ++regfile_9__Vidx) regfile_9__Vcvt = regfile_9;
    long long regfile_10__Vcvt;
    for (size_t regfile_10__Vidx = 0; regfile_10__Vidx < 1; ++regfile_10__Vidx) regfile_10__Vcvt = regfile_10;
    long long regfile_11__Vcvt;
    for (size_t regfile_11__Vidx = 0; regfile_11__Vidx < 1; ++regfile_11__Vidx) regfile_11__Vcvt = regfile_11;
    long long regfile_12__Vcvt;
    for (size_t regfile_12__Vidx = 0; regfile_12__Vidx < 1; ++regfile_12__Vidx) regfile_12__Vcvt = regfile_12;
    long long regfile_13__Vcvt;
    for (size_t regfile_13__Vidx = 0; regfile_13__Vidx < 1; ++regfile_13__Vidx) regfile_13__Vcvt = regfile_13;
    long long regfile_14__Vcvt;
    for (size_t regfile_14__Vidx = 0; regfile_14__Vidx < 1; ++regfile_14__Vidx) regfile_14__Vcvt = regfile_14;
    long long regfile_15__Vcvt;
    for (size_t regfile_15__Vidx = 0; regfile_15__Vidx < 1; ++regfile_15__Vidx) regfile_15__Vcvt = regfile_15;
    long long regfile_16__Vcvt;
    for (size_t regfile_16__Vidx = 0; regfile_16__Vidx < 1; ++regfile_16__Vidx) regfile_16__Vcvt = regfile_16;
    long long regfile_17__Vcvt;
    for (size_t regfile_17__Vidx = 0; regfile_17__Vidx < 1; ++regfile_17__Vidx) regfile_17__Vcvt = regfile_17;
    long long regfile_18__Vcvt;
    for (size_t regfile_18__Vidx = 0; regfile_18__Vidx < 1; ++regfile_18__Vidx) regfile_18__Vcvt = regfile_18;
    long long regfile_19__Vcvt;
    for (size_t regfile_19__Vidx = 0; regfile_19__Vidx < 1; ++regfile_19__Vidx) regfile_19__Vcvt = regfile_19;
    long long regfile_20__Vcvt;
    for (size_t regfile_20__Vidx = 0; regfile_20__Vidx < 1; ++regfile_20__Vidx) regfile_20__Vcvt = regfile_20;
    long long regfile_21__Vcvt;
    for (size_t regfile_21__Vidx = 0; regfile_21__Vidx < 1; ++regfile_21__Vidx) regfile_21__Vcvt = regfile_21;
    long long regfile_22__Vcvt;
    for (size_t regfile_22__Vidx = 0; regfile_22__Vidx < 1; ++regfile_22__Vidx) regfile_22__Vcvt = regfile_22;
    long long regfile_23__Vcvt;
    for (size_t regfile_23__Vidx = 0; regfile_23__Vidx < 1; ++regfile_23__Vidx) regfile_23__Vcvt = regfile_23;
    long long regfile_24__Vcvt;
    for (size_t regfile_24__Vidx = 0; regfile_24__Vidx < 1; ++regfile_24__Vidx) regfile_24__Vcvt = regfile_24;
    long long regfile_25__Vcvt;
    for (size_t regfile_25__Vidx = 0; regfile_25__Vidx < 1; ++regfile_25__Vidx) regfile_25__Vcvt = regfile_25;
    long long regfile_26__Vcvt;
    for (size_t regfile_26__Vidx = 0; regfile_26__Vidx < 1; ++regfile_26__Vidx) regfile_26__Vcvt = regfile_26;
    long long regfile_27__Vcvt;
    for (size_t regfile_27__Vidx = 0; regfile_27__Vidx < 1; ++regfile_27__Vidx) regfile_27__Vcvt = regfile_27;
    long long regfile_28__Vcvt;
    for (size_t regfile_28__Vidx = 0; regfile_28__Vidx < 1; ++regfile_28__Vidx) regfile_28__Vcvt = regfile_28;
    long long regfile_29__Vcvt;
    for (size_t regfile_29__Vidx = 0; regfile_29__Vidx < 1; ++regfile_29__Vidx) regfile_29__Vcvt = regfile_29;
    long long regfile_30__Vcvt;
    for (size_t regfile_30__Vidx = 0; regfile_30__Vidx < 1; ++regfile_30__Vidx) regfile_30__Vcvt = regfile_30;
    long long regfile_31__Vcvt;
    for (size_t regfile_31__Vidx = 0; regfile_31__Vidx < 1; ++regfile_31__Vidx) regfile_31__Vcvt = regfile_31;
    set_gpr_ptr(regfile_0__Vcvt, regfile_1__Vcvt, regfile_2__Vcvt, regfile_3__Vcvt, regfile_4__Vcvt, regfile_5__Vcvt, regfile_6__Vcvt, regfile_7__Vcvt, regfile_8__Vcvt, regfile_9__Vcvt, regfile_10__Vcvt, regfile_11__Vcvt, regfile_12__Vcvt, regfile_13__Vcvt, regfile_14__Vcvt, regfile_15__Vcvt, regfile_16__Vcvt, regfile_17__Vcvt, regfile_18__Vcvt, regfile_19__Vcvt, regfile_20__Vcvt, regfile_21__Vcvt, regfile_22__Vcvt, regfile_23__Vcvt, regfile_24__Vcvt, regfile_25__Vcvt, regfile_26__Vcvt, regfile_27__Vcvt, regfile_28__Vcvt, regfile_29__Vcvt, regfile_30__Vcvt, regfile_31__Vcvt);
}
