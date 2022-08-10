// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMYCPU__DPI_H_
#define VERILATED_VMYCPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/porterlu/ysyx-workbench/myCPU/vsrc/ebreak.v:1:30
    extern void halt();
    // DPI import at /home/porterlu/ysyx-workbench/myCPU/vsrc/Mem.v:3:30
    extern void pc_read(long long raddr, long long* rdata);
    // DPI import at /home/porterlu/ysyx-workbench/myCPU/vsrc/Mem.v:1:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at /home/porterlu/ysyx-workbench/myCPU/vsrc/Mem.v:2:30
    extern void pmem_write(long long waddr, long long wdata, char mask);
    // DPI import at /home/porterlu/ysyx-workbench/myCPU/vsrc/gpr_ptr.v:1:30
    extern void set_gpr_ptr(long long regfile_0, long long regfile_1, long long regfile_2, long long regfile_3, long long regfile_4, long long regfile_5, long long regfile_6, long long regfile_7, long long regfile_8, long long regfile_9, long long regfile_10, long long regfile_11, long long regfile_12, long long regfile_13, long long regfile_14, long long regfile_15, long long regfile_16, long long regfile_17, long long regfile_18, long long regfile_19, long long regfile_20, long long regfile_21, long long regfile_22, long long regfile_23, long long regfile_24, long long regfile_25, long long regfile_26, long long regfile_27, long long regfile_28, long long regfile_29, long long regfile_30, long long regfile_31);

#ifdef __cplusplus
}
#endif

#endif  // guard
