// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmyCPU__Syms.h"


VL_ATTR_COLD void VmyCPU___024root__trace_init_sub__TOP__0(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+376,"clock", false,-1);
    tracep->declBit(c+377,"reset", false,-1);
    tracep->declQuad(c+378,"io_pc_debug", false,-1, 63,0);
    tracep->declBus(c+380,"io_inst", false,-1, 31,0);
    tracep->declBit(c+381,"io_start", false,-1);
    tracep->pushNamePrefix("myCPU ");
    tracep->declBit(c+376,"clock", false,-1);
    tracep->declBit(c+377,"reset", false,-1);
    tracep->declQuad(c+378,"io_pc_debug", false,-1, 63,0);
    tracep->declBus(c+380,"io_inst", false,-1, 31,0);
    tracep->declBit(c+381,"io_start", false,-1);
    tracep->declBit(c+376,"datapath_clock", false,-1);
    tracep->declBit(c+377,"datapath_reset", false,-1);
    tracep->declBus(c+1,"datapath_io_ctrl_inst", false,-1, 31,0);
    tracep->declBus(c+2,"datapath_io_ctrl_pc_sel", false,-1, 1,0);
    tracep->declBit(c+3,"datapath_io_ctrl_A_sel", false,-1);
    tracep->declBit(c+4,"datapath_io_ctrl_B_sel", false,-1);
    tracep->declBus(c+5,"datapath_io_ctrl_wd_type", false,-1, 1,0);
    tracep->declBus(c+6,"datapath_io_ctrl_imm_sel", false,-1, 2,0);
    tracep->declBus(c+7,"datapath_io_ctrl_br_type", false,-1, 2,0);
    tracep->declBus(c+8,"datapath_io_ctrl_st_type", false,-1, 2,0);
    tracep->declBus(c+9,"datapath_io_ctrl_ld_type", false,-1, 2,0);
    tracep->declBus(c+10,"datapath_io_ctrl_wb_sel", false,-1, 1,0);
    tracep->declBit(c+11,"datapath_io_ctrl_wb_en", false,-1);
    tracep->declBus(c+12,"datapath_io_ctrl_alu_op", false,-1, 3,0);
    tracep->declBit(c+13,"datapath_io_ctrl_prv", false,-1);
    tracep->declBus(c+14,"datapath_io_ctrl_csr_cmd", false,-1, 2,0);
    tracep->declBit(c+15,"datapath_io_ctrl_is_illegal", false,-1);
    tracep->declBit(c+16,"datapath_io_ctrl_is_kill", false,-1);
    tracep->declQuad(c+17,"datapath_io_pc", false,-1, 63,0);
    tracep->declBus(c+19,"datapath_io_inst", false,-1, 31,0);
    tracep->declBit(c+20,"datapath_io_start", false,-1);
    tracep->declBus(c+1,"control_io_inst", false,-1, 31,0);
    tracep->declBus(c+2,"control_io_pc_sel", false,-1, 1,0);
    tracep->declBit(c+3,"control_io_A_sel", false,-1);
    tracep->declBit(c+4,"control_io_B_sel", false,-1);
    tracep->declBus(c+5,"control_io_wd_type", false,-1, 1,0);
    tracep->declBus(c+6,"control_io_imm_sel", false,-1, 2,0);
    tracep->declBus(c+7,"control_io_br_type", false,-1, 2,0);
    tracep->declBus(c+8,"control_io_st_type", false,-1, 2,0);
    tracep->declBus(c+9,"control_io_ld_type", false,-1, 2,0);
    tracep->declBus(c+10,"control_io_wb_sel", false,-1, 1,0);
    tracep->declBit(c+11,"control_io_wb_en", false,-1);
    tracep->declBus(c+12,"control_io_alu_op", false,-1, 3,0);
    tracep->declBit(c+13,"control_io_prv", false,-1);
    tracep->declBus(c+14,"control_io_csr_cmd", false,-1, 2,0);
    tracep->declBit(c+15,"control_io_is_illegal", false,-1);
    tracep->declBit(c+16,"control_io_is_kill", false,-1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+2,"io_pc_sel", false,-1, 1,0);
    tracep->declBit(c+3,"io_A_sel", false,-1);
    tracep->declBit(c+4,"io_B_sel", false,-1);
    tracep->declBus(c+5,"io_wd_type", false,-1, 1,0);
    tracep->declBus(c+6,"io_imm_sel", false,-1, 2,0);
    tracep->declBus(c+7,"io_br_type", false,-1, 2,0);
    tracep->declBus(c+8,"io_st_type", false,-1, 2,0);
    tracep->declBus(c+9,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+10,"io_wb_sel", false,-1, 1,0);
    tracep->declBit(c+11,"io_wb_en", false,-1);
    tracep->declBus(c+12,"io_alu_op", false,-1, 3,0);
    tracep->declBit(c+13,"io_prv", false,-1);
    tracep->declBus(c+14,"io_csr_cmd", false,-1, 2,0);
    tracep->declBit(c+15,"io_is_illegal", false,-1);
    tracep->declBit(c+16,"io_is_kill", false,-1);
    tracep->declBus(c+21,"ctrlSignals_5", false,-1, 4,0);
    tracep->declBus(c+22,"ctrlSignals_11", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datapath ");
    tracep->declBit(c+376,"clock", false,-1);
    tracep->declBit(c+377,"reset", false,-1);
    tracep->declBus(c+1,"io_ctrl_inst", false,-1, 31,0);
    tracep->declBus(c+2,"io_ctrl_pc_sel", false,-1, 1,0);
    tracep->declBit(c+3,"io_ctrl_A_sel", false,-1);
    tracep->declBit(c+4,"io_ctrl_B_sel", false,-1);
    tracep->declBus(c+5,"io_ctrl_wd_type", false,-1, 1,0);
    tracep->declBus(c+6,"io_ctrl_imm_sel", false,-1, 2,0);
    tracep->declBus(c+7,"io_ctrl_br_type", false,-1, 2,0);
    tracep->declBus(c+8,"io_ctrl_st_type", false,-1, 2,0);
    tracep->declBus(c+9,"io_ctrl_ld_type", false,-1, 2,0);
    tracep->declBus(c+10,"io_ctrl_wb_sel", false,-1, 1,0);
    tracep->declBit(c+11,"io_ctrl_wb_en", false,-1);
    tracep->declBus(c+12,"io_ctrl_alu_op", false,-1, 3,0);
    tracep->declBit(c+13,"io_ctrl_prv", false,-1);
    tracep->declBus(c+14,"io_ctrl_csr_cmd", false,-1, 2,0);
    tracep->declBit(c+15,"io_ctrl_is_illegal", false,-1);
    tracep->declBit(c+16,"io_ctrl_is_kill", false,-1);
    tracep->declQuad(c+17,"io_pc", false,-1, 63,0);
    tracep->declBus(c+19,"io_inst", false,-1, 31,0);
    tracep->declBit(c+20,"io_start", false,-1);
    tracep->declQuad(c+23,"alu_io_A", false,-1, 63,0);
    tracep->declQuad(c+25,"alu_io_B", false,-1, 63,0);
    tracep->declBus(c+27,"alu_io_width_type", false,-1, 1,0);
    tracep->declBus(c+28,"alu_io_alu_op", false,-1, 3,0);
    tracep->declQuad(c+29,"alu_io_out", false,-1, 63,0);
    tracep->declQuad(c+31,"alu_io_sum", false,-1, 63,0);
    tracep->declBus(c+1,"immGen_io_inst", false,-1, 31,0);
    tracep->declBus(c+6,"immGen_io_sel", false,-1, 2,0);
    tracep->declQuad(c+33,"immGen_io_out", false,-1, 63,0);
    tracep->declQuad(c+35,"brCond_io_rs1", false,-1, 63,0);
    tracep->declQuad(c+37,"brCond_io_rs2", false,-1, 63,0);
    tracep->declBus(c+39,"brCond_io_br_type", false,-1, 2,0);
    tracep->declBit(c+40,"brCond_io_taken", false,-1);
    tracep->declBit(c+376,"regFile_clock", false,-1);
    tracep->declBit(c+377,"regFile_reset", false,-1);
    tracep->declBit(c+41,"regFile_io_wen", false,-1);
    tracep->declBus(c+42,"regFile_io_waddr", false,-1, 4,0);
    tracep->declQuad(c+43,"regFile_io_wdata", false,-1, 63,0);
    tracep->declBus(c+45,"regFile_io_raddr_0", false,-1, 4,0);
    tracep->declBus(c+46,"regFile_io_raddr_1", false,-1, 4,0);
    tracep->declQuad(c+47,"regFile_io_rdata_0", false,-1, 63,0);
    tracep->declQuad(c+49,"regFile_io_rdata_1", false,-1, 63,0);
    tracep->declQuad(c+51,"regFile_io_rdata_4", false,-1, 63,0);
    tracep->declQuad(c+53,"regFile_io_rdata_5", false,-1, 63,0);
    tracep->declQuad(c+55,"regFile_io_rdata_6", false,-1, 63,0);
    tracep->declQuad(c+57,"regFile_io_rdata_7", false,-1, 63,0);
    tracep->declQuad(c+59,"regFile_io_rdata_8", false,-1, 63,0);
    tracep->declQuad(c+61,"regFile_io_rdata_9", false,-1, 63,0);
    tracep->declQuad(c+63,"regFile_io_rdata_10", false,-1, 63,0);
    tracep->declQuad(c+65,"regFile_io_rdata_11", false,-1, 63,0);
    tracep->declQuad(c+67,"regFile_io_rdata_12", false,-1, 63,0);
    tracep->declQuad(c+69,"regFile_io_rdata_13", false,-1, 63,0);
    tracep->declQuad(c+71,"regFile_io_rdata_14", false,-1, 63,0);
    tracep->declQuad(c+73,"regFile_io_rdata_15", false,-1, 63,0);
    tracep->declQuad(c+75,"regFile_io_rdata_16", false,-1, 63,0);
    tracep->declQuad(c+77,"regFile_io_rdata_17", false,-1, 63,0);
    tracep->declQuad(c+79,"regFile_io_rdata_18", false,-1, 63,0);
    tracep->declQuad(c+81,"regFile_io_rdata_19", false,-1, 63,0);
    tracep->declQuad(c+83,"regFile_io_rdata_20", false,-1, 63,0);
    tracep->declQuad(c+85,"regFile_io_rdata_21", false,-1, 63,0);
    tracep->declQuad(c+87,"regFile_io_rdata_22", false,-1, 63,0);
    tracep->declQuad(c+89,"regFile_io_rdata_23", false,-1, 63,0);
    tracep->declQuad(c+91,"regFile_io_rdata_24", false,-1, 63,0);
    tracep->declQuad(c+93,"regFile_io_rdata_25", false,-1, 63,0);
    tracep->declQuad(c+95,"regFile_io_rdata_26", false,-1, 63,0);
    tracep->declQuad(c+97,"regFile_io_rdata_27", false,-1, 63,0);
    tracep->declQuad(c+99,"regFile_io_rdata_28", false,-1, 63,0);
    tracep->declQuad(c+101,"regFile_io_rdata_29", false,-1, 63,0);
    tracep->declQuad(c+103,"regFile_io_rdata_30", false,-1, 63,0);
    tracep->declQuad(c+105,"regFile_io_rdata_31", false,-1, 63,0);
    tracep->declQuad(c+107,"regFile_io_rdata_32", false,-1, 63,0);
    tracep->declQuad(c+109,"regFile_io_rdata_33", false,-1, 63,0);
    tracep->declQuad(c+111,"regFile_io_rdata_34", false,-1, 63,0);
    tracep->declBit(c+376,"imem_clock", false,-1);
    tracep->declBit(c+377,"imem_reset", false,-1);
    tracep->declQuad(c+382,"imem_pc_addr", false,-1, 63,0);
    tracep->declQuad(c+384,"imem_pc_data", false,-1, 63,0);
    tracep->declQuad(c+113,"imem_addr", false,-1, 63,0);
    tracep->declQuad(c+382,"imem_wdata", false,-1, 63,0);
    tracep->declBus(c+386,"imem_mask", false,-1, 7,0);
    tracep->declQuad(c+115,"imem_rdata", false,-1, 63,0);
    tracep->declBit(c+387,"imem_enable", false,-1);
    tracep->declBit(c+388,"imem_wen", false,-1);
    tracep->declBit(c+376,"dmem_clock", false,-1);
    tracep->declBit(c+377,"dmem_reset", false,-1);
    tracep->declQuad(c+382,"dmem_pc_addr", false,-1, 63,0);
    tracep->declQuad(c+389,"dmem_pc_data", false,-1, 63,0);
    tracep->declQuad(c+29,"dmem_addr", false,-1, 63,0);
    tracep->declQuad(c+117,"dmem_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"dmem_mask", false,-1, 7,0);
    tracep->declQuad(c+120,"dmem_rdata", false,-1, 63,0);
    tracep->declBit(c+122,"dmem_enable", false,-1);
    tracep->declBit(c+123,"dmem_wen", false,-1);
    tracep->declBit(c+376,"csr_clock", false,-1);
    tracep->declBit(c+377,"csr_reset", false,-1);
    tracep->declBus(c+124,"csr_io_flush_mask", false,-1, 3,0);
    tracep->declBus(c+125,"csr_io_r_op", false,-1, 2,0);
    tracep->declBus(c+126,"csr_io_r_addr", false,-1, 11,0);
    tracep->declQuad(c+127,"csr_io_r_data", false,-1, 63,0);
    tracep->declBus(c+129,"csr_io_w_op", false,-1, 2,0);
    tracep->declBus(c+130,"csr_io_w_addr", false,-1, 11,0);
    tracep->declQuad(c+131,"csr_io_w_data", false,-1, 63,0);
    tracep->declBit(c+133,"csr_io_retired", false,-1);
    tracep->declBus(c+19,"csr_io_inst", false,-1, 31,0);
    tracep->declBus(c+134,"csr_io_illegal_inst", false,-1, 31,0);
    tracep->declBus(c+135,"csr_io_inst_mode", false,-1, 1,0);
    tracep->declBit(c+136,"csr_io_fetch_misalign", false,-1);
    tracep->declBit(c+137,"csr_io_load_misalign", false,-1);
    tracep->declBit(c+138,"csr_io_store_misalign", false,-1);
    tracep->declBit(c+139,"csr_io_isSret", false,-1);
    tracep->declBit(c+140,"csr_io_isMret", false,-1);
    tracep->declQuad(c+141,"csr_io_pc_fetch_misalign", false,-1, 63,0);
    tracep->declQuad(c+31,"csr_io_load_misalign_addr", false,-1, 63,0);
    tracep->declQuad(c+31,"csr_io_store_misalign_addr", false,-1, 63,0);
    tracep->declQuad(c+17,"csr_io_ebreak_addr", false,-1, 63,0);
    tracep->declQuad(c+17,"csr_io_excPC", false,-1, 63,0);
    tracep->declQuad(c+143,"csr_io_excValue", false,-1, 63,0);
    tracep->declQuad(c+145,"csr_io_trapVec", false,-1, 63,0);
    tracep->declBit(c+147,"csr_io_trap", false,-1);
    tracep->declBit(c+148,"csr_io_fd_enable", false,-1);
    tracep->declBit(c+149,"csr_io_de_enable", false,-1);
    tracep->declBit(c+150,"csr_io_mw_enable", false,-1);
    tracep->declBit(c+376,"gpr_ptr_clock", false,-1);
    tracep->declBit(c+377,"gpr_ptr_reset", false,-1);
    tracep->declQuad(c+382,"gpr_ptr_regfile_0", false,-1, 63,0);
    tracep->declQuad(c+51,"gpr_ptr_regfile_1", false,-1, 63,0);
    tracep->declQuad(c+53,"gpr_ptr_regfile_2", false,-1, 63,0);
    tracep->declQuad(c+55,"gpr_ptr_regfile_3", false,-1, 63,0);
    tracep->declQuad(c+57,"gpr_ptr_regfile_4", false,-1, 63,0);
    tracep->declQuad(c+59,"gpr_ptr_regfile_5", false,-1, 63,0);
    tracep->declQuad(c+61,"gpr_ptr_regfile_6", false,-1, 63,0);
    tracep->declQuad(c+63,"gpr_ptr_regfile_7", false,-1, 63,0);
    tracep->declQuad(c+65,"gpr_ptr_regfile_8", false,-1, 63,0);
    tracep->declQuad(c+67,"gpr_ptr_regfile_9", false,-1, 63,0);
    tracep->declQuad(c+69,"gpr_ptr_regfile_10", false,-1, 63,0);
    tracep->declQuad(c+71,"gpr_ptr_regfile_11", false,-1, 63,0);
    tracep->declQuad(c+73,"gpr_ptr_regfile_12", false,-1, 63,0);
    tracep->declQuad(c+75,"gpr_ptr_regfile_13", false,-1, 63,0);
    tracep->declQuad(c+77,"gpr_ptr_regfile_14", false,-1, 63,0);
    tracep->declQuad(c+79,"gpr_ptr_regfile_15", false,-1, 63,0);
    tracep->declQuad(c+81,"gpr_ptr_regfile_16", false,-1, 63,0);
    tracep->declQuad(c+83,"gpr_ptr_regfile_17", false,-1, 63,0);
    tracep->declQuad(c+85,"gpr_ptr_regfile_18", false,-1, 63,0);
    tracep->declQuad(c+87,"gpr_ptr_regfile_19", false,-1, 63,0);
    tracep->declQuad(c+89,"gpr_ptr_regfile_20", false,-1, 63,0);
    tracep->declQuad(c+91,"gpr_ptr_regfile_21", false,-1, 63,0);
    tracep->declQuad(c+93,"gpr_ptr_regfile_22", false,-1, 63,0);
    tracep->declQuad(c+95,"gpr_ptr_regfile_23", false,-1, 63,0);
    tracep->declQuad(c+97,"gpr_ptr_regfile_24", false,-1, 63,0);
    tracep->declQuad(c+99,"gpr_ptr_regfile_25", false,-1, 63,0);
    tracep->declQuad(c+101,"gpr_ptr_regfile_26", false,-1, 63,0);
    tracep->declQuad(c+103,"gpr_ptr_regfile_27", false,-1, 63,0);
    tracep->declQuad(c+105,"gpr_ptr_regfile_28", false,-1, 63,0);
    tracep->declQuad(c+107,"gpr_ptr_regfile_29", false,-1, 63,0);
    tracep->declQuad(c+109,"gpr_ptr_regfile_30", false,-1, 63,0);
    tracep->declQuad(c+111,"gpr_ptr_regfile_31", false,-1, 63,0);
    tracep->declBus(c+1,"fd_pipe_reg_inst", false,-1, 31,0);
    tracep->declQuad(c+151,"fd_pipe_reg_pc", false,-1, 63,0);
    tracep->declBit(c+148,"fd_pipe_reg_enable", false,-1);
    tracep->declBus(c+28,"de_pipe_reg_alu_op", false,-1, 3,0);
    tracep->declQuad(c+141,"de_pipe_reg_pc", false,-1, 63,0);
    tracep->declBus(c+153,"de_pipe_reg_inst", false,-1, 31,0);
    tracep->declQuad(c+154,"de_pipe_reg_imm", false,-1, 63,0);
    tracep->declQuad(c+156,"de_pipe_reg_rs1", false,-1, 63,0);
    tracep->declQuad(c+158,"de_pipe_reg_src1_addr", false,-1, 63,0);
    tracep->declQuad(c+160,"de_pipe_reg_rs2", false,-1, 63,0);
    tracep->declQuad(c+162,"de_pipe_reg_src2_addr", false,-1, 63,0);
    tracep->declQuad(c+164,"de_pipe_reg_csr_read_data", false,-1, 63,0);
    tracep->declBus(c+166,"de_pipe_reg_csr_write_op", false,-1, 2,0);
    tracep->declBus(c+167,"de_pipe_reg_csr_write_addr", false,-1, 11,0);
    tracep->declQuad(c+168,"de_pipe_reg_csr_write_data", false,-1, 63,0);
    tracep->declBus(c+170,"de_pipe_reg_dest", false,-1, 4,0);
    tracep->declBit(c+171,"de_pipe_reg_A_sel", false,-1);
    tracep->declBit(c+172,"de_pipe_reg_B_sel", false,-1);
    tracep->declBus(c+173,"de_pipe_reg_pc_sel", false,-1, 1,0);
    tracep->declBus(c+39,"de_pipe_reg_br_type", false,-1, 2,0);
    tracep->declBus(c+27,"de_pipe_reg_wd_type", false,-1, 1,0);
    tracep->declBus(c+174,"de_pipe_reg_st_type", false,-1, 2,0);
    tracep->declBus(c+175,"de_pipe_reg_ld_type", false,-1, 2,0);
    tracep->declBus(c+176,"de_pipe_reg_wb_sel", false,-1, 1,0);
    tracep->declBit(c+177,"de_pipe_reg_wb_en", false,-1);
    tracep->declBit(c+149,"de_pipe_reg_enable", false,-1);
    tracep->declQuad(c+178,"em_pipe_reg_alu_out", false,-1, 63,0);
    tracep->declQuad(c+180,"em_pipe_reg_csr_read_data", false,-1, 63,0);
    tracep->declBus(c+182,"em_pipe_reg_csr_write_op", false,-1, 2,0);
    tracep->declBus(c+183,"em_pipe_reg_csr_write_addr", false,-1, 11,0);
    tracep->declQuad(c+184,"em_pipe_reg_csr_write_data", false,-1, 63,0);
    tracep->declBus(c+186,"em_pipe_reg_ld_type", false,-1, 2,0);
    tracep->declBus(c+187,"em_pipe_reg_wb_sel", false,-1, 1,0);
    tracep->declBit(c+188,"em_pipe_reg_wb_en", false,-1);
    tracep->declBus(c+189,"em_pipe_reg_dest", false,-1, 4,0);
    tracep->declQuad(c+190,"em_pipe_reg_pc", false,-1, 63,0);
    tracep->declBus(c+192,"em_pipe_reg_inst", false,-1, 31,0);
    tracep->declBit(c+193,"em_pipe_reg_enable", false,-1);
    tracep->declQuad(c+194,"mw_pipe_reg_load_data", false,-1, 63,0);
    tracep->declQuad(c+196,"mw_pipe_reg_alu_out", false,-1, 63,0);
    tracep->declBus(c+42,"mw_pipe_reg_dest", false,-1, 4,0);
    tracep->declQuad(c+198,"mw_pipe_reg_csr_read_data", false,-1, 63,0);
    tracep->declBus(c+129,"mw_pipe_reg_csr_write_op", false,-1, 2,0);
    tracep->declBus(c+130,"mw_pipe_reg_csr_write_addr", false,-1, 11,0);
    tracep->declQuad(c+131,"mw_pipe_reg_csr_write_data", false,-1, 63,0);
    tracep->declBus(c+200,"mw_pipe_reg_wb_sel", false,-1, 1,0);
    tracep->declBit(c+201,"mw_pipe_reg_wb_en", false,-1);
    tracep->declQuad(c+17,"mw_pipe_reg_pc", false,-1, 63,0);
    tracep->declBus(c+19,"mw_pipe_reg_inst", false,-1, 31,0);
    tracep->declBit(c+150,"mw_pipe_reg_enable", false,-1);
    tracep->declBus(c+202,"csr_atomic_flush", false,-1, 3,0);
    tracep->declBit(c+203,"brCond_taken", false,-1);
    tracep->declBit(c+204,"jmp_occur", false,-1);
    tracep->declBit(c+205,"flush_fd", false,-1);
    tracep->declBit(c+206,"flush_de", false,-1);
    tracep->declBit(c+207,"flush_em", false,-1);
    tracep->declBit(c+208,"flush_mw", false,-1);
    tracep->declBit(c+20,"started", false,-1);
    tracep->declBit(c+209,"csr_atomic", false,-1);
    tracep->declArray(c+210,"pc", false,-1, 64,0);
    tracep->declQuad(c+29,"jump_addr", false,-1, 63,0);
    tracep->declArray(c+213,"next_pc", false,-1, 64,0);
    tracep->declBit(c+216,"is_kill_inst", false,-1);
    tracep->declBus(c+217,"inst", false,-1, 31,0);
    tracep->declBus(c+45,"src1_addr", false,-1, 4,0);
    tracep->declBus(c+46,"src2_addr", false,-1, 4,0);
    tracep->declBus(c+218,"dest_addr", false,-1, 4,0);
    tracep->declBus(c+219,"csr_write_addr", false,-1, 4,0);
    tracep->declQuad(c+220,"load_data_hazard", false,-1, 63,0);
    tracep->declQuad(c+222,"load_data_ext_hazard", false,-1, 63,0);
    tracep->declQuad(c+224,"src1_data", false,-1, 63,0);
    tracep->declQuad(c+226,"src2_data", false,-1, 63,0);
    tracep->declQuad(c+228,"A_data", false,-1, 63,0);
    tracep->declQuad(c+230,"B_data", false,-1, 63,0);
    tracep->declBus(c+232,"st_mask", false,-1, 7,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+23,"io_A", false,-1, 63,0);
    tracep->declQuad(c+25,"io_B", false,-1, 63,0);
    tracep->declBus(c+27,"io_width_type", false,-1, 1,0);
    tracep->declBus(c+28,"io_alu_op", false,-1, 3,0);
    tracep->declQuad(c+29,"io_out", false,-1, 63,0);
    tracep->declQuad(c+31,"io_sum", false,-1, 63,0);
    tracep->declBus(c+233,"shamt", false,-1, 5,0);
    tracep->declQuad(c+234,"sum", false,-1, 63,0);
    tracep->declQuad(c+236,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("brCond ");
    tracep->declQuad(c+35,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+37,"io_rs2", false,-1, 63,0);
    tracep->declBus(c+39,"io_br_type", false,-1, 2,0);
    tracep->declBit(c+40,"io_taken", false,-1);
    tracep->declBit(c+238,"eq", false,-1);
    tracep->declBit(c+239,"neq", false,-1);
    tracep->declBit(c+240,"lt", false,-1);
    tracep->declBit(c+241,"ge", false,-1);
    tracep->declBit(c+242,"ltu", false,-1);
    tracep->declBit(c+243,"geu", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+376,"clock", false,-1);
    tracep->declBit(c+377,"reset", false,-1);
    tracep->declBus(c+124,"io_flush_mask", false,-1, 3,0);
    tracep->declBus(c+125,"io_r_op", false,-1, 2,0);
    tracep->declBus(c+126,"io_r_addr", false,-1, 11,0);
    tracep->declQuad(c+127,"io_r_data", false,-1, 63,0);
    tracep->declBus(c+129,"io_w_op", false,-1, 2,0);
    tracep->declBus(c+130,"io_w_addr", false,-1, 11,0);
    tracep->declQuad(c+131,"io_w_data", false,-1, 63,0);
    tracep->declBit(c+133,"io_retired", false,-1);
    tracep->declBus(c+19,"io_inst", false,-1, 31,0);
    tracep->declBus(c+134,"io_illegal_inst", false,-1, 31,0);
    tracep->declBus(c+135,"io_inst_mode", false,-1, 1,0);
    tracep->declBit(c+136,"io_fetch_misalign", false,-1);
    tracep->declBit(c+137,"io_load_misalign", false,-1);
    tracep->declBit(c+138,"io_store_misalign", false,-1);
    tracep->declBit(c+139,"io_isSret", false,-1);
    tracep->declBit(c+140,"io_isMret", false,-1);
    tracep->declQuad(c+141,"io_pc_fetch_misalign", false,-1, 63,0);
    tracep->declQuad(c+31,"io_load_misalign_addr", false,-1, 63,0);
    tracep->declQuad(c+31,"io_store_misalign_addr", false,-1, 63,0);
    tracep->declQuad(c+17,"io_ebreak_addr", false,-1, 63,0);
    tracep->declQuad(c+17,"io_excPC", false,-1, 63,0);
    tracep->declQuad(c+143,"io_excValue", false,-1, 63,0);
    tracep->declQuad(c+145,"io_trapVec", false,-1, 63,0);
    tracep->declBit(c+147,"io_trap", false,-1);
    tracep->declBit(c+148,"io_fd_enable", false,-1);
    tracep->declBit(c+149,"io_de_enable", false,-1);
    tracep->declBit(c+150,"io_mw_enable", false,-1);
    tracep->declBus(c+244,"mode", false,-1, 1,0);
    tracep->declBit(c+245,"mstatus_sum", false,-1);
    tracep->declBus(c+246,"mstatus_mpp", false,-1, 1,0);
    tracep->declBit(c+247,"mstatus_spp", false,-1);
    tracep->declBit(c+248,"mstatus_mpie", false,-1);
    tracep->declBit(c+249,"mstatus_spie", false,-1);
    tracep->declBit(c+250,"mstatus_mie", false,-1);
    tracep->declBit(c+251,"mstatus_sie", false,-1);
    tracep->declQuad(c+252,"medeleg_data", false,-1, 63,0);
    tracep->declQuad(c+254,"mideleg_data", false,-1, 63,0);
    tracep->declBit(c+256,"mie_meie", false,-1);
    tracep->declBit(c+257,"mie_seie", false,-1);
    tracep->declBit(c+258,"mie_mtie", false,-1);
    tracep->declBit(c+259,"mie_stie", false,-1);
    tracep->declBit(c+260,"mie_msie", false,-1);
    tracep->declBit(c+261,"mie_ssie", false,-1);
    tracep->declQuad(c+262,"mtvec_base", false,-1, 61,0);
    tracep->declBus(c+264,"mtvec_mode", false,-1, 1,0);
    tracep->declQuad(c+265,"mscratch_data", false,-1, 63,0);
    tracep->declQuad(c+267,"mepc_data", false,-1, 63,0);
    tracep->declBit(c+269,"mcause_int", false,-1);
    tracep->declQuad(c+270,"mcause_code", false,-1, 62,0);
    tracep->declQuad(c+272,"mtval_data", false,-1, 63,0);
    tracep->declBit(c+274,"mip_meip", false,-1);
    tracep->declBit(c+275,"mip_seip", false,-1);
    tracep->declBit(c+276,"mip_stip", false,-1);
    tracep->declBit(c+277,"mip_msip", false,-1);
    tracep->declBit(c+278,"mip_ssip", false,-1);
    tracep->declQuad(c+279,"mcycle_data", false,-1, 63,0);
    tracep->declQuad(c+281,"minstret_data", false,-1, 63,0);
    tracep->declBus(c+283,"sstatus_lo_lo", false,-1, 5,0);
    tracep->declBus(c+284,"sstatus_lo", false,-1, 16,0);
    tracep->declBit(c+285,"sstatus_sum", false,-1);
    tracep->declBit(c+286,"sstatus_spp", false,-1);
    tracep->declBit(c+287,"sstatus_spie", false,-1);
    tracep->declBit(c+288,"sstatus_sie", false,-1);
    tracep->declBus(c+289,"sie_lo", false,-1, 5,0);
    tracep->declBus(c+290,"sip_lo", false,-1, 5,0);
    tracep->declQuad(c+291,"stvec_base", false,-1, 61,0);
    tracep->declBus(c+293,"stvec_mode", false,-1, 1,0);
    tracep->declQuad(c+294,"sscratch_data", false,-1, 63,0);
    tracep->declQuad(c+296,"sepc_data", false,-1, 63,0);
    tracep->declBit(c+298,"scause_int", false,-1);
    tracep->declQuad(c+299,"scause_code", false,-1, 62,0);
    tracep->declQuad(c+301,"stval_data", false,-1, 63,0);
    tracep->declBus(c+303,"lo", false,-1, 12,0);
    tracep->declBit(c+304,"tmp_meie", false,-1);
    tracep->declBit(c+305,"tmp_mtie", false,-1);
    tracep->declBit(c+306,"tmp_msie", false,-1);
    tracep->declBus(c+307,"lo_7", false,-1, 5,0);
    tracep->declBit(c+308,"sie_ssie", false,-1);
    tracep->declBit(c+309,"sie_stie", false,-1);
    tracep->declBit(c+310,"sie_seie", false,-1);
    tracep->declBit(c+311,"readable", false,-1);
    tracep->declBit(c+312,"writable", false,-1);
    tracep->declBit(c+313,"instValid", false,-1);
    tracep->declBit(c+314,"modeValid", false,-1);
    tracep->declBit(c+315,"valid", false,-1);
    tracep->declQuad(c+382,"csrData", false,-1, 63,0);
    tracep->declBit(c+316,"writeEn", false,-1);
    tracep->declQuad(c+317,"writeData", false,-1, 63,0);
    tracep->declQuad(c+319,"flagIntS", false,-1, 63,0);
    tracep->declQuad(c+321,"flagIntM", false,-1, 63,0);
    tracep->declBit(c+323,"hasIntS", false,-1);
    tracep->declBit(c+324,"hasIntM", false,-1);
    tracep->declBit(c+325,"hasInt", false,-1);
    tracep->declBit(c+326,"handIntS", false,-1);
    tracep->declBit(c+327,"hasExc", false,-1);
    tracep->declQuad(c+328,"excCause", false,-1, 62,0);
    tracep->declBit(c+330,"hasExcS", false,-1);
    tracep->declBit(c+331,"handExcS", false,-1);
    tracep->declQuad(c+332,"intCauseS", false,-1, 62,0);
    tracep->declQuad(c+334,"intCause", false,-1, 62,0);
    tracep->declQuad(c+336,"cause", false,-1, 63,0);
    tracep->declQuad(c+338,"trapVecS", false,-1, 63,0);
    tracep->declQuad(c+340,"trapVecM", false,-1, 63,0);
    tracep->declBus(c+342,"sretMode", false,-1, 1,0);
    tracep->declBus(c+343,"excMode", false,-1, 1,0);
    tracep->declBit(c+344,"tmp_1_sum", false,-1);
    tracep->declBit(c+345,"tmp_1_spp", false,-1);
    tracep->declBit(c+346,"tmp_1_spie", false,-1);
    tracep->declBit(c+347,"tmp_1_sie", false,-1);
    tracep->declBus(c+348,"lo_8", false,-1, 12,0);
    tracep->declBit(c+349,"tmp_2_seie", false,-1);
    tracep->declBus(c+350,"mideleg_data_lo", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmem ");
    tracep->declBit(c+376,"clock", false,-1);
    tracep->declBit(c+377,"reset", false,-1);
    tracep->declQuad(c+382,"pc_addr", false,-1, 63,0);
    tracep->declQuad(c+389,"pc_data", false,-1, 63,0);
    tracep->declQuad(c+29,"addr", false,-1, 63,0);
    tracep->declQuad(c+117,"wdata", false,-1, 63,0);
    tracep->declBus(c+119,"mask", false,-1, 7,0);
    tracep->declQuad(c+120,"rdata", false,-1, 63,0);
    tracep->declBit(c+122,"enable", false,-1);
    tracep->declBit(c+123,"wen", false,-1);
    tracep->declQuad(c+351,"tmp_data", false,-1, 63,0);
    tracep->declQuad(c+120,"delay", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr_ptr ");
    tracep->declBit(c+376,"clock", false,-1);
    tracep->declBit(c+377,"reset", false,-1);
    tracep->declQuad(c+382,"regfile_0", false,-1, 63,0);
    tracep->declQuad(c+51,"regfile_1", false,-1, 63,0);
    tracep->declQuad(c+53,"regfile_2", false,-1, 63,0);
    tracep->declQuad(c+55,"regfile_3", false,-1, 63,0);
    tracep->declQuad(c+57,"regfile_4", false,-1, 63,0);
    tracep->declQuad(c+59,"regfile_5", false,-1, 63,0);
    tracep->declQuad(c+61,"regfile_6", false,-1, 63,0);
    tracep->declQuad(c+63,"regfile_7", false,-1, 63,0);
    tracep->declQuad(c+65,"regfile_8", false,-1, 63,0);
    tracep->declQuad(c+67,"regfile_9", false,-1, 63,0);
    tracep->declQuad(c+69,"regfile_10", false,-1, 63,0);
    tracep->declQuad(c+71,"regfile_11", false,-1, 63,0);
    tracep->declQuad(c+73,"regfile_12", false,-1, 63,0);
    tracep->declQuad(c+75,"regfile_13", false,-1, 63,0);
    tracep->declQuad(c+77,"regfile_14", false,-1, 63,0);
    tracep->declQuad(c+79,"regfile_15", false,-1, 63,0);
    tracep->declQuad(c+81,"regfile_16", false,-1, 63,0);
    tracep->declQuad(c+83,"regfile_17", false,-1, 63,0);
    tracep->declQuad(c+85,"regfile_18", false,-1, 63,0);
    tracep->declQuad(c+87,"regfile_19", false,-1, 63,0);
    tracep->declQuad(c+89,"regfile_20", false,-1, 63,0);
    tracep->declQuad(c+91,"regfile_21", false,-1, 63,0);
    tracep->declQuad(c+93,"regfile_22", false,-1, 63,0);
    tracep->declQuad(c+95,"regfile_23", false,-1, 63,0);
    tracep->declQuad(c+97,"regfile_24", false,-1, 63,0);
    tracep->declQuad(c+99,"regfile_25", false,-1, 63,0);
    tracep->declQuad(c+101,"regfile_26", false,-1, 63,0);
    tracep->declQuad(c+103,"regfile_27", false,-1, 63,0);
    tracep->declQuad(c+105,"regfile_28", false,-1, 63,0);
    tracep->declQuad(c+107,"regfile_29", false,-1, 63,0);
    tracep->declQuad(c+109,"regfile_30", false,-1, 63,0);
    tracep->declQuad(c+111,"regfile_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+376,"clock", false,-1);
    tracep->declBit(c+377,"reset", false,-1);
    tracep->declQuad(c+382,"pc_addr", false,-1, 63,0);
    tracep->declQuad(c+384,"pc_data", false,-1, 63,0);
    tracep->declQuad(c+113,"addr", false,-1, 63,0);
    tracep->declQuad(c+382,"wdata", false,-1, 63,0);
    tracep->declBus(c+386,"mask", false,-1, 7,0);
    tracep->declQuad(c+115,"rdata", false,-1, 63,0);
    tracep->declBit(c+387,"enable", false,-1);
    tracep->declBit(c+388,"wen", false,-1);
    tracep->declQuad(c+353,"tmp_data", false,-1, 63,0);
    tracep->declQuad(c+115,"delay", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immGen ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+6,"io_sel", false,-1, 2,0);
    tracep->declQuad(c+33,"io_out", false,-1, 63,0);
    tracep->declBit(c+355,"sign", false,-1);
    tracep->declBus(c+356,"Iimm_lo", false,-1, 11,0);
    tracep->declQuad(c+357,"Iimm", false,-1, 43,0);
    tracep->declBus(c+359,"Simm_lo", false,-1, 11,0);
    tracep->declQuad(c+360,"Simm", false,-1, 43,0);
    tracep->declBus(c+362,"Bimm_lo_1", false,-1, 12,0);
    tracep->declQuad(c+363,"Bimm", false,-1, 44,0);
    tracep->declBus(c+365,"Uimm_lo", false,-1, 31,0);
    tracep->declQuad(c+366,"Uimm", false,-1, 63,0);
    tracep->declBus(c+368,"Jimm_lo_1", false,-1, 20,0);
    tracep->declQuad(c+369,"Jimm", false,-1, 52,0);
    tracep->declBus(c+371,"Zimm_lo", false,-1, 5,0);
    tracep->declQuad(c+372,"Zimm", false,-1, 37,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regFile ");
    tracep->declBit(c+376,"clock", false,-1);
    tracep->declBit(c+377,"reset", false,-1);
    tracep->declBit(c+41,"io_wen", false,-1);
    tracep->declBus(c+42,"io_waddr", false,-1, 4,0);
    tracep->declQuad(c+43,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+45,"io_raddr_0", false,-1, 4,0);
    tracep->declBus(c+46,"io_raddr_1", false,-1, 4,0);
    tracep->declQuad(c+47,"io_rdata_0", false,-1, 63,0);
    tracep->declQuad(c+49,"io_rdata_1", false,-1, 63,0);
    tracep->declQuad(c+51,"io_rdata_4", false,-1, 63,0);
    tracep->declQuad(c+53,"io_rdata_5", false,-1, 63,0);
    tracep->declQuad(c+55,"io_rdata_6", false,-1, 63,0);
    tracep->declQuad(c+57,"io_rdata_7", false,-1, 63,0);
    tracep->declQuad(c+59,"io_rdata_8", false,-1, 63,0);
    tracep->declQuad(c+61,"io_rdata_9", false,-1, 63,0);
    tracep->declQuad(c+63,"io_rdata_10", false,-1, 63,0);
    tracep->declQuad(c+65,"io_rdata_11", false,-1, 63,0);
    tracep->declQuad(c+67,"io_rdata_12", false,-1, 63,0);
    tracep->declQuad(c+69,"io_rdata_13", false,-1, 63,0);
    tracep->declQuad(c+71,"io_rdata_14", false,-1, 63,0);
    tracep->declQuad(c+73,"io_rdata_15", false,-1, 63,0);
    tracep->declQuad(c+75,"io_rdata_16", false,-1, 63,0);
    tracep->declQuad(c+77,"io_rdata_17", false,-1, 63,0);
    tracep->declQuad(c+79,"io_rdata_18", false,-1, 63,0);
    tracep->declQuad(c+81,"io_rdata_19", false,-1, 63,0);
    tracep->declQuad(c+83,"io_rdata_20", false,-1, 63,0);
    tracep->declQuad(c+85,"io_rdata_21", false,-1, 63,0);
    tracep->declQuad(c+87,"io_rdata_22", false,-1, 63,0);
    tracep->declQuad(c+89,"io_rdata_23", false,-1, 63,0);
    tracep->declQuad(c+91,"io_rdata_24", false,-1, 63,0);
    tracep->declQuad(c+93,"io_rdata_25", false,-1, 63,0);
    tracep->declQuad(c+95,"io_rdata_26", false,-1, 63,0);
    tracep->declQuad(c+97,"io_rdata_27", false,-1, 63,0);
    tracep->declQuad(c+99,"io_rdata_28", false,-1, 63,0);
    tracep->declQuad(c+101,"io_rdata_29", false,-1, 63,0);
    tracep->declQuad(c+103,"io_rdata_30", false,-1, 63,0);
    tracep->declQuad(c+105,"io_rdata_31", false,-1, 63,0);
    tracep->declQuad(c+107,"io_rdata_32", false,-1, 63,0);
    tracep->declQuad(c+109,"io_rdata_33", false,-1, 63,0);
    tracep->declQuad(c+111,"io_rdata_34", false,-1, 63,0);
    tracep->declQuad(c+374,"reg_0", false,-1, 63,0);
    tracep->declQuad(c+51,"reg_1", false,-1, 63,0);
    tracep->declQuad(c+53,"reg_2", false,-1, 63,0);
    tracep->declQuad(c+55,"reg_3", false,-1, 63,0);
    tracep->declQuad(c+57,"reg_4", false,-1, 63,0);
    tracep->declQuad(c+59,"reg_5", false,-1, 63,0);
    tracep->declQuad(c+61,"reg_6", false,-1, 63,0);
    tracep->declQuad(c+63,"reg_7", false,-1, 63,0);
    tracep->declQuad(c+65,"reg_8", false,-1, 63,0);
    tracep->declQuad(c+67,"reg_9", false,-1, 63,0);
    tracep->declQuad(c+69,"reg_10", false,-1, 63,0);
    tracep->declQuad(c+71,"reg_11", false,-1, 63,0);
    tracep->declQuad(c+73,"reg_12", false,-1, 63,0);
    tracep->declQuad(c+75,"reg_13", false,-1, 63,0);
    tracep->declQuad(c+77,"reg_14", false,-1, 63,0);
    tracep->declQuad(c+79,"reg_15", false,-1, 63,0);
    tracep->declQuad(c+81,"reg_16", false,-1, 63,0);
    tracep->declQuad(c+83,"reg_17", false,-1, 63,0);
    tracep->declQuad(c+85,"reg_18", false,-1, 63,0);
    tracep->declQuad(c+87,"reg_19", false,-1, 63,0);
    tracep->declQuad(c+89,"reg_20", false,-1, 63,0);
    tracep->declQuad(c+91,"reg_21", false,-1, 63,0);
    tracep->declQuad(c+93,"reg_22", false,-1, 63,0);
    tracep->declQuad(c+95,"reg_23", false,-1, 63,0);
    tracep->declQuad(c+97,"reg_24", false,-1, 63,0);
    tracep->declQuad(c+99,"reg_25", false,-1, 63,0);
    tracep->declQuad(c+101,"reg_26", false,-1, 63,0);
    tracep->declQuad(c+103,"reg_27", false,-1, 63,0);
    tracep->declQuad(c+105,"reg_28", false,-1, 63,0);
    tracep->declQuad(c+107,"reg_29", false,-1, 63,0);
    tracep->declQuad(c+109,"reg_30", false,-1, 63,0);
    tracep->declQuad(c+111,"reg_31", false,-1, 63,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VmyCPU___024root__trace_init_top(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_init_top\n"); );
    // Body
    VmyCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VmyCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VmyCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VmyCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VmyCPU___024root__trace_register(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VmyCPU___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&VmyCPU___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&VmyCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VmyCPU___024root__trace_full_sub_0(VmyCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VmyCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_full_top_0\n"); );
    // Init
    VmyCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmyCPU___024root*>(voidSelf);
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VmyCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VmyCPU___024root__trace_full_sub_0(VmyCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hf0c0d54e__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e66f7d5__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1bbea4b__0;
    VlWide<4>/*127:0*/ __Vtemp_h645e6126__0;
    VlWide<4>/*127:0*/ __Vtemp_h281ce75a__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0c0d54e__1;
    VlWide<3>/*95:0*/ __Vtemp_h5e66f7d5__1;
    VlWide<3>/*95:0*/ __Vtemp_h06359a0a__0;
    VlWide<3>/*95:0*/ __Vtemp_hf55afe87__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst),32);
    bufp->fullCData(oldp+2,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x17U == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 1U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199))))))))),2);
    bufp->fullBit(oldp+3,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                           & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                              & ((0x6fU != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                 & ((0x67U == (0x707fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                    | ((0x63U != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                       & ((0x1063U 
                                           != (0x707fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                          & ((0x4063U 
                                              != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                             & ((0x5063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                & ((0x6063U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                   & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_265))))))))))));
    bufp->fullBit(oldp+4,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                           & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                              & ((0x6fU != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                 & ((0x67U != (0x707fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                    & ((0x63U != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                       & ((0x1063U 
                                           != (0x707fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                          & ((0x4063U 
                                              != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                             & ((0x5063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                & ((0x6063U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                   & ((0x7063U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                      & ((3U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                         & ((0x1003U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                            & ((0x2003U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                               & ((0x4003U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                  & ((0x5003U 
                                                                      != 
                                                                      (0x707fU 
                                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                     & ((0x6003U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                        & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_326)))))))))))))))))));
    bufp->fullCData(oldp+5,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x17U == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 0U
                                                             : 
                                                            ((0x4003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                              ? 0U
                                                              : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_396)))))))))))))))),2);
    bufp->fullCData(oldp+6,(vlSelf->myCPU__DOT__control_io_imm_sel),3);
    bufp->fullCData(oldp+7,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x17U == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 4U
                                                          : 0U))))))))))),3);
    bufp->fullCData(oldp+8,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x17U == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_676)))))))),3);
    bufp->fullCData(oldp+9,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x17U == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_748)))),3);
    bufp->fullCData(oldp+10,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                               ? 0U : ((0x17U == (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                        ? 0U : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                 ? 2U
                                                 : 
                                                ((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                  ? 2U
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810)))))))))),2);
    bufp->fullBit(oldp+11,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                            | ((0x17U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  | ((0x67U == (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     | ((0x63U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        & ((0x1063U 
                                            != (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x4063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x5063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                 & ((0x6063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                    & ((0x7063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                       & ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                          | ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                             | ((0x2003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                | ((0x4003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                   | ((0x5003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                      | ((0x6003U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                         | ((0x3003U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                            | ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                               & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_868)))))))))))))))))))));
    bufp->fullCData(oldp+12,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                               ? 0xbU : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       (0xfU 
                                                        & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538))))))))))),4);
    bufp->fullBit(oldp+13,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                             ? 0U : ((0x17U == (0x7fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                      ? 0U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                               ? 0U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947)))))))))));
    bufp->fullCData(oldp+14,(vlSelf->myCPU__DOT__control_io_csr_cmd),3);
    bufp->fullBit(oldp+15,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                            & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               & ((0x6fU != (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  & ((0x67U != (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     & ((0x63U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        & ((0x1063U 
                                            != (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x4063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x5063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                 & ((0x6063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                    & ((0x7063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                       & ((3U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                          & ((0x1003U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                             & ((0x2003U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                & ((0x4003U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                   & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1076)))))))))))))))));
    bufp->fullBit(oldp+16,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                            & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               & ((0x6fU == (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  | ((0x67U == (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     | ((0x63U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        & ((0x1063U 
                                            != (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x4063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x5063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                 & ((0x6063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                    & ((0x7063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                       & ((3U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                          & ((0x1003U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                             & ((0x2003U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                & ((0x4003U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                   & ((0x5003U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1143))))))))))))))))));
    bufp->fullQData(oldp+17,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc),64);
    bufp->fullIData(oldp+19,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst),32);
    bufp->fullBit(oldp+20,(vlSelf->myCPU__DOT__datapath__DOT__started));
    bufp->fullCData(oldp+21,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                               ? 0xbU : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538)))))))))),5);
    bufp->fullCData(oldp+22,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                               ? 0U : ((0x17U == (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                        ? 0U : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                 ? 0U
                                                 : 
                                                ((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947))))))))),2);
    bufp->fullQData(oldp+23,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A),64);
    bufp->fullQData(oldp+25,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B),64);
    bufp->fullCData(oldp+27,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type),2);
    bufp->fullCData(oldp+28,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op),4);
    bufp->fullQData(oldp+29,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out),64);
    bufp->fullQData(oldp+31,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum),64);
    bufp->fullQData(oldp+33,(((6U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                               ? (((QData)((IData)(
                                                   (0x3ffffffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            ((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                                >> 0xfU)))) 
                                                                             >> 0x25U)))))))) 
                                   << 0x26U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                   >> 0xfU)))))
                               : ((4U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                   ? (((QData)((IData)(
                                                       (0x7ffU 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm 
                                                                                >> 0x34U)))))))) 
                                       << 0x35U) | vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm)
                                   : ((3U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                       ? (((QData)((IData)(
                                                           ((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))
                                       : (((QData)((IData)(
                                                           (0x7ffffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT___io_out_T_7 
                                                                                >> 0x2cU)))))))) 
                                           << 0x2dU) 
                                          | vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT___io_out_T_7))))),64);
    bufp->fullQData(oldp+35,(vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1),64);
    bufp->fullQData(oldp+37,(vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2),64);
    bufp->fullCData(oldp+39,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type),3);
    bufp->fullBit(oldp+40,((((((((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                 & (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq)) 
                                | ((6U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                   & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq)))) 
                               | ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                  & (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt))) 
                              | ((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                 & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt)))) 
                             | ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                & (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu))) 
                            | ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                               & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu))))));
    bufp->fullBit(oldp+41,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wen));
    bufp->fullCData(oldp+42,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_dest),5);
    bufp->fullQData(oldp+43,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wdata),64);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                       >> 0x14U))),5);
    bufp->fullQData(oldp+47,(((0U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                               >> 0xfU)))
                               ? 0ULL : ((0x1fU == 
                                          (0x1fU & 
                                           (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 0xfU)))
                                          ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_31
                                          : ((0x1eU 
                                              == (0x1fU 
                                                  & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0xfU)))
                                              ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_27
                                                    : vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT___GEN_90))))))),64);
    bufp->fullQData(oldp+49,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_rdata_1),64);
    bufp->fullQData(oldp+51,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_1),64);
    bufp->fullQData(oldp+53,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_2),64);
    bufp->fullQData(oldp+55,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_3),64);
    bufp->fullQData(oldp+57,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_4),64);
    bufp->fullQData(oldp+59,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_5),64);
    bufp->fullQData(oldp+61,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_6),64);
    bufp->fullQData(oldp+63,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_7),64);
    bufp->fullQData(oldp+65,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_8),64);
    bufp->fullQData(oldp+67,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_9),64);
    bufp->fullQData(oldp+69,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_10),64);
    bufp->fullQData(oldp+71,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_11),64);
    bufp->fullQData(oldp+73,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_12),64);
    bufp->fullQData(oldp+75,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_13),64);
    bufp->fullQData(oldp+77,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_14),64);
    bufp->fullQData(oldp+79,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_15),64);
    bufp->fullQData(oldp+81,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_16),64);
    bufp->fullQData(oldp+83,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_17),64);
    bufp->fullQData(oldp+85,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_18),64);
    bufp->fullQData(oldp+87,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_19),64);
    bufp->fullQData(oldp+89,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_20),64);
    bufp->fullQData(oldp+91,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_21),64);
    bufp->fullQData(oldp+93,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_22),64);
    bufp->fullQData(oldp+95,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_23),64);
    bufp->fullQData(oldp+97,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_24),64);
    bufp->fullQData(oldp+99,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_25),64);
    bufp->fullQData(oldp+101,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_26),64);
    bufp->fullQData(oldp+103,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_27),64);
    bufp->fullQData(oldp+105,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_28),64);
    bufp->fullQData(oldp+107,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_29),64);
    bufp->fullQData(oldp+109,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_30),64);
    bufp->fullQData(oldp+111,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_31),64);
    VL_EXTEND_WQ(65,64, __Vtemp_hf0c0d54e__0, vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec);
    __Vtemp_h5e66f7d5__0[0U] = 4U;
    __Vtemp_h5e66f7d5__0[1U] = 0U;
    __Vtemp_h5e66f7d5__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hd1bbea4b__0, __Vtemp_h5e66f7d5__0, vlSelf->myCPU__DOT__datapath__DOT__pc);
    bufp->fullQData(oldp+113,((((QData)((IData)(((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap)
                                                  ? 
                                                 __Vtemp_hf0c0d54e__0[1U]
                                                  : 
                                                 ((0U 
                                                   != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush))
                                                   ? 
                                                  vlSelf->myCPU__DOT__datapath__DOT__pc[1U]
                                                   : 
                                                  ((IData)(vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_4)
                                                    ? 
                                                   (((IData)(
                                                             (vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                                                              >> 1U)) 
                                                     >> 0x1fU) 
                                                    | ((IData)(
                                                               ((vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                                                                 >> 1U) 
                                                                >> 0x20U)) 
                                                       << 1U))
                                                    : 
                                                   __Vtemp_hd1bbea4b__0[1U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap)
                                                              ? 
                                                             __Vtemp_hf0c0d54e__0[0U]
                                                              : 
                                                             ((0U 
                                                               != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush))
                                                               ? 
                                                              vlSelf->myCPU__DOT__datapath__DOT__pc[0U]
                                                               : 
                                                              ((IData)(vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_4)
                                                                ? 
                                                               ((IData)(
                                                                        (vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                                                                         >> 1U)) 
                                                                << 1U)
                                                                : 
                                                               __Vtemp_hd1bbea4b__0[0U]))))))),64);
    bufp->fullQData(oldp+115,(vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__delay),64);
    VL_EXTEND_WQ(127,64, __Vtemp_h645e6126__0, vlSelf->myCPU__DOT__datapath__DOT__src2_data);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h281ce75a__0, __Vtemp_h645e6126__0, 
                  (0x38U & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out) 
                            << 3U)));
    bufp->fullQData(oldp+117,((((QData)((IData)(__Vtemp_h281ce75a__0[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp_h281ce75a__0[0U])))),64);
    bufp->fullCData(oldp+119,((0xffU & ((0xffU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask))
                                         ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask)
                                         : (0x7fffU 
                                            & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask) 
                                               << (7U 
                                                   & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out))))))),8);
    bufp->fullQData(oldp+120,(vlSelf->myCPU__DOT__datapath__DOT__dmem__DOT__delay),64);
    bufp->fullBit(oldp+122,((((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                              | (0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))) 
                             & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable))));
    bufp->fullBit(oldp+123,(((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type)) 
                             & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable))));
    bufp->fullCData(oldp+124,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask),4);
    bufp->fullCData(oldp+125,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op),3);
    bufp->fullSData(oldp+126,((vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+127,(((0xc00U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcycle_data
                                : ((0xc02U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data
                                    : ((0x100U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U))
                                        ? (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                        >> 0x12U))))) 
                                            << 0x12U) 
                                           | (QData)((IData)(
                                                             ((0x100U 
                                                               & ((IData)(
                                                                          (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                           >> 8U)) 
                                                                  << 8U)) 
                                                              | ((0x20U 
                                                                  & ((IData)(
                                                                             (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                              >> 5U)) 
                                                                     << 5U)) 
                                                                 | (2U 
                                                                    & ((IData)(
                                                                               (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                                >> 1U)) 
                                                                       << 1U)))))))
                                        : ((0x104U 
                                            == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                >> 0x14U))
                                            ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_1
                                            : ((0x105U 
                                                == 
                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                 >> 0x14U))
                                                ? (
                                                   (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base 
                                                    << 2U) 
                                                   | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode)))
                                                : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_96)))))),64);
    bufp->fullCData(oldp+129,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op),3);
    bufp->fullSData(oldp+130,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_addr),12);
    bufp->fullQData(oldp+131,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_data),64);
    bufp->fullBit(oldp+133,((0x13U != vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
    bufp->fullIData(oldp+134,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst),32);
    bufp->fullCData(oldp+135,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                ? 0U : ((0x17U == (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                         ? 0U : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947)))))))))),2);
    bufp->fullBit(oldp+136,((0ULL != (3ULL & vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc))));
    bufp->fullBit(oldp+137,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_load_misalign));
    bufp->fullBit(oldp+138,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_store_misalign));
    bufp->fullBit(oldp+139,((0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
    bufp->fullBit(oldp+140,((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
    bufp->fullQData(oldp+141,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc),64);
    bufp->fullQData(oldp+143,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_excValue),64);
    bufp->fullQData(oldp+145,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec),64);
    bufp->fullBit(oldp+147,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap));
    bufp->fullBit(oldp+148,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable));
    bufp->fullBit(oldp+149,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable));
    bufp->fullBit(oldp+150,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable));
    bufp->fullQData(oldp+151,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_pc),64);
    bufp->fullIData(oldp+153,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst),32);
    bufp->fullQData(oldp+154,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_imm),64);
    bufp->fullQData(oldp+156,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_rs1),64);
    bufp->fullQData(oldp+158,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr),64);
    bufp->fullQData(oldp+160,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_rs2),64);
    bufp->fullQData(oldp+162,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr),64);
    bufp->fullQData(oldp+164,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_read_data),64);
    bufp->fullCData(oldp+166,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_op),3);
    bufp->fullSData(oldp+167,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_addr),12);
    bufp->fullQData(oldp+168,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_data),64);
    bufp->fullCData(oldp+170,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_dest),5);
    bufp->fullBit(oldp+171,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_A_sel));
    bufp->fullBit(oldp+172,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_B_sel));
    bufp->fullCData(oldp+173,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc_sel),2);
    bufp->fullCData(oldp+174,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type),3);
    bufp->fullCData(oldp+175,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type),3);
    bufp->fullCData(oldp+176,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wb_sel),2);
    bufp->fullBit(oldp+177,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wb_en));
    bufp->fullQData(oldp+178,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out),64);
    bufp->fullQData(oldp+180,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_read_data),64);
    bufp->fullCData(oldp+182,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_op),3);
    bufp->fullSData(oldp+183,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_addr),12);
    bufp->fullQData(oldp+184,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_data),64);
    bufp->fullCData(oldp+186,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type),3);
    bufp->fullCData(oldp+187,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_sel),2);
    bufp->fullBit(oldp+188,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en));
    bufp->fullCData(oldp+189,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest),5);
    bufp->fullQData(oldp+190,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_pc),64);
    bufp->fullIData(oldp+192,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_inst),32);
    bufp->fullBit(oldp+193,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable));
    bufp->fullQData(oldp+194,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_load_data),64);
    bufp->fullQData(oldp+196,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_alu_out),64);
    bufp->fullQData(oldp+198,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_read_data),64);
    bufp->fullCData(oldp+200,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel),2);
    bufp->fullBit(oldp+201,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_en));
    bufp->fullCData(oldp+202,(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush),4);
    bufp->fullBit(oldp+203,(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken));
    bufp->fullBit(oldp+204,(vlSelf->myCPU__DOT__datapath__DOT__jmp_occur));
    bufp->fullBit(oldp+205,(vlSelf->myCPU__DOT__datapath__DOT__flush_fd));
    bufp->fullBit(oldp+206,(vlSelf->myCPU__DOT__datapath__DOT__flush_de));
    bufp->fullBit(oldp+207,(vlSelf->myCPU__DOT__datapath__DOT__flush_em));
    bufp->fullBit(oldp+208,(vlSelf->myCPU__DOT__datapath__DOT__flush_mw));
    bufp->fullBit(oldp+209,((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush))));
    bufp->fullWData(oldp+210,(vlSelf->myCPU__DOT__datapath__DOT__pc),65);
    VL_EXTEND_WQ(65,64, __Vtemp_hf0c0d54e__1, vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec);
    __Vtemp_h5e66f7d5__1[0U] = 4U;
    __Vtemp_h5e66f7d5__1[1U] = 0U;
    __Vtemp_h5e66f7d5__1[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h06359a0a__0, __Vtemp_h5e66f7d5__1, vlSelf->myCPU__DOT__datapath__DOT__pc);
    if (vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap) {
        __Vtemp_hf55afe87__0[0U] = __Vtemp_hf0c0d54e__1[0U];
        __Vtemp_hf55afe87__0[1U] = __Vtemp_hf0c0d54e__1[1U];
        __Vtemp_hf55afe87__0[2U] = (1U & __Vtemp_hf0c0d54e__1[2U]);
    } else if ((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush))) {
        __Vtemp_hf55afe87__0[0U] = vlSelf->myCPU__DOT__datapath__DOT__pc[0U];
        __Vtemp_hf55afe87__0[1U] = vlSelf->myCPU__DOT__datapath__DOT__pc[1U];
        __Vtemp_hf55afe87__0[2U] = (1U & vlSelf->myCPU__DOT__datapath__DOT__pc[2U]);
    } else if (vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_4) {
        __Vtemp_hf55afe87__0[0U] = ((IData)((vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                                             >> 1U)) 
                                    << 1U);
        __Vtemp_hf55afe87__0[1U] = (((IData)((vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                                              >> 1U)) 
                                     >> 0x1fU) | ((IData)(
                                                          ((vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                                                            >> 1U) 
                                                           >> 0x20U)) 
                                                  << 1U));
        __Vtemp_hf55afe87__0[2U] = (1U & ((IData)((
                                                   (vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                                                    >> 1U) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    } else {
        __Vtemp_hf55afe87__0[0U] = __Vtemp_h06359a0a__0[0U];
        __Vtemp_hf55afe87__0[1U] = __Vtemp_h06359a0a__0[1U];
        __Vtemp_hf55afe87__0[2U] = (1U & __Vtemp_h06359a0a__0[2U]);
    }
    bufp->fullWData(oldp+213,(__Vtemp_hf55afe87__0),65);
    bufp->fullBit(oldp+216,(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst));
    bufp->fullIData(oldp+217,((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__started) 
                                  | (IData)(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst)) 
                                 | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken)) 
                                | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap))
                                ? 0x13U : ((4U & vlSelf->myCPU__DOT__datapath__DOT__pc[0U])
                                            ? (IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__delay 
                                                       >> 0x20U))
                                            : (IData)(vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__delay)))),32);
    bufp->fullCData(oldp+218,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+219,((0x1fU & ((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__started) 
                                            | (IData)(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst)) 
                                           | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken)) 
                                          | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap))
                                          ? 0x13U : 
                                         ((4U & vlSelf->myCPU__DOT__datapath__DOT__pc[0U])
                                           ? (IData)(
                                                     (vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__delay 
                                                      >> 0x20U))
                                           : (IData)(vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__delay))) 
                                        >> 7U))),5);
    bufp->fullQData(oldp+220,(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard),64);
    bufp->fullQData(oldp+222,(((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                                ? vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_5
                                : ((6U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                                    ? (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard))
                                    : vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_33))),64);
    bufp->fullQData(oldp+224,((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable) 
                                  & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en)) 
                                 & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                                    == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))) 
                                & (0ULL != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr))
                                ? vlSelf->myCPU__DOT__datapath__DOT___GEN_54
                                : vlSelf->myCPU__DOT__datapath__DOT___GEN_56)),64);
    bufp->fullQData(oldp+226,(vlSelf->myCPU__DOT__datapath__DOT__src2_data),64);
    bufp->fullQData(oldp+228,(vlSelf->myCPU__DOT__datapath__DOT__A_data),64);
    bufp->fullQData(oldp+230,(vlSelf->myCPU__DOT__datapath__DOT__B_data),64);
    bufp->fullCData(oldp+232,(vlSelf->myCPU__DOT__datapath__DOT__st_mask),8);
    bufp->fullCData(oldp+233,(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt),6);
    bufp->fullQData(oldp+234,(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum),64);
    bufp->fullQData(oldp+236,((((QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U])))),64);
    bufp->fullBit(oldp+238,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq));
    bufp->fullBit(oldp+239,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq)))));
    bufp->fullBit(oldp+240,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt));
    bufp->fullBit(oldp+241,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt)))));
    bufp->fullBit(oldp+242,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu));
    bufp->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu)))));
    bufp->fullCData(oldp+244,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode),2);
    bufp->fullBit(oldp+245,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sum));
    bufp->fullCData(oldp+246,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+247,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp));
    bufp->fullBit(oldp+248,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie));
    bufp->fullBit(oldp+249,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie));
    bufp->fullBit(oldp+250,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+251,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie));
    bufp->fullQData(oldp+252,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data),64);
    bufp->fullQData(oldp+254,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data),64);
    bufp->fullBit(oldp+256,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_meie));
    bufp->fullBit(oldp+257,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_seie));
    bufp->fullBit(oldp+258,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_mtie));
    bufp->fullBit(oldp+259,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_stie));
    bufp->fullBit(oldp+260,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_msie));
    bufp->fullBit(oldp+261,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_ssie));
    bufp->fullQData(oldp+262,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base),62);
    bufp->fullCData(oldp+264,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode),2);
    bufp->fullQData(oldp+265,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mscratch_data),64);
    bufp->fullQData(oldp+267,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mepc_data),64);
    bufp->fullBit(oldp+269,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_int));
    bufp->fullQData(oldp+270,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_code),63);
    bufp->fullQData(oldp+272,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtval_data),64);
    bufp->fullBit(oldp+274,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_meip));
    bufp->fullBit(oldp+275,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_seip));
    bufp->fullBit(oldp+276,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_stip));
    bufp->fullBit(oldp+277,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_msip));
    bufp->fullBit(oldp+278,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_ssip));
    bufp->fullQData(oldp+279,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcycle_data),64);
    bufp->fullQData(oldp+281,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data),64);
    bufp->fullCData(oldp+283,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie) 
                                << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie) 
                                           << 3U) | 
                                          ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie) 
                                           << 1U)))),6);
    bufp->fullIData(oldp+284,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp) 
                                << 0xbU) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp) 
                                             << 8U) 
                                            | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie) 
                                                << 7U) 
                                               | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie) 
                                                      << 3U) 
                                                     | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie) 
                                                        << 1U))))))),17);
    bufp->fullBit(oldp+285,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+286,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                           >> 8U)))));
    bufp->fullBit(oldp+287,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                           >> 5U)))));
    bufp->fullBit(oldp+288,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                           >> 1U)))));
    bufp->fullCData(oldp+289,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_stie) 
                                << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_msie) 
                                           << 3U) | 
                                          ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_ssie) 
                                           << 1U)))),6);
    bufp->fullCData(oldp+290,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_stip) 
                                << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_msip) 
                                           << 3U) | 
                                          ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_ssip) 
                                           << 1U)))),6);
    bufp->fullQData(oldp+291,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base),62);
    bufp->fullCData(oldp+293,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode),2);
    bufp->fullQData(oldp+294,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sscratch_data),64);
    bufp->fullQData(oldp+296,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sepc_data),64);
    bufp->fullBit(oldp+298,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_int));
    bufp->fullQData(oldp+299,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_code),63);
    bufp->fullQData(oldp+301,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stval_data),64);
    bufp->fullSData(oldp+303,(((0x100U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0x20U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                   >> 5U)) 
                                          << 5U)) | 
                                (2U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                >> 1U)) 
                                       << 1U))))),13);
    bufp->fullBit(oldp+304,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+305,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                           >> 7U)))));
    bufp->fullBit(oldp+306,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                           >> 3U)))));
    bufp->fullCData(oldp+307,(((0x20U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                  >> 5U)) 
                                         << 5U)) | 
                               ((8U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                >> 3U)) 
                                       << 3U)) | (2U 
                                                  & ((IData)(
                                                             (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                              >> 1U)) 
                                                     << 1U))))),6);
    bufp->fullBit(oldp+308,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                           >> 1U)))));
    bufp->fullBit(oldp+309,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                           >> 5U)))));
    bufp->fullBit(oldp+310,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                           >> 9U)))));
    bufp->fullBit(oldp+311,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable));
    bufp->fullBit(oldp+312,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable));
    bufp->fullBit(oldp+313,((1U & (((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                     ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                     : ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                         ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                         : ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                             ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                             : ((2U 
                                                 == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                                 ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable)
                                                 : 
                                                ((1U 
                                                  != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op)) 
                                                 | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable)))))) 
                                   | (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))))));
    bufp->fullBit(oldp+314,((1U & ((((3U & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                            >> 0x1cU)) 
                                     <= (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                                    & (((0x37U == (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                         ? 0U : ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947))))))))) 
                                       <= (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode))) 
                                   | (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))))));
    bufp->fullBit(oldp+315,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__valid));
    bufp->fullBit(oldp+316,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeEn));
    bufp->fullQData(oldp+317,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData),64);
    bufp->fullQData(oldp+319,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS),64);
    bufp->fullQData(oldp+321,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM),64);
    bufp->fullBit(oldp+323,((((1U > (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                              | ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                                 & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie))) 
                             & (0U != (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                       & vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data)))));
    bufp->fullBit(oldp+324,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasIntM));
    bufp->fullBit(oldp+325,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt));
    bufp->fullBit(oldp+326,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handIntS));
    bufp->fullBit(oldp+327,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc));
    bufp->fullQData(oldp+328,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause),63);
    bufp->fullBit(oldp+330,(((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc) 
                             & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data 
                                        >> (0x1fU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)))))));
    bufp->fullBit(oldp+331,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS));
    bufp->fullQData(oldp+332,(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                              >> 9U)))
                                ? 9ULL : ((1U & (IData)(
                                                        (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                         >> 1U)))
                                           ? 1ULL : 5ULL))),63);
    bufp->fullQData(oldp+334,(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                              >> 0xbU)))
                                ? 0xbULL : ((1U & (IData)(
                                                          (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                           >> 3U)))
                                             ? 3ULL
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                            >> 7U)))
                                                 ? 7ULL
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                             >> 9U)))
                                                  ? 9ULL
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                              >> 1U)))
                                                   ? 1ULL
                                                   : 5ULL)))))),63);
    bufp->fullQData(oldp+336,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause),64);
    bufp->fullQData(oldp+338,(((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode) 
                                 & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                                 ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base 
                                    + (QData)((IData)(
                                                      (0x3fffffffU 
                                                       & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                                 : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base) 
                               << 2U)),64);
    bufp->fullQData(oldp+340,(((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode) 
                                 & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                                 ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base 
                                    + (QData)((IData)(
                                                      (0x3fffffffU 
                                                       & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                                 : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base) 
                               << 2U)),64);
    bufp->fullCData(oldp+342,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                             >> 8U)))),2);
    bufp->fullCData(oldp+343,(((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS)
                                ? 1U : 3U)),2);
    bufp->fullBit(oldp+344,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+345,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 8U)))));
    bufp->fullBit(oldp+346,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 5U)))));
    bufp->fullBit(oldp+347,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 1U)))));
    bufp->fullSData(oldp+348,(((0x100U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0x20U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                   >> 5U)) 
                                          << 5U)) | 
                                (2U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                >> 1U)) 
                                       << 1U))))),13);
    bufp->fullBit(oldp+349,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 9U)))));
    bufp->fullCData(oldp+350,(((0x20U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                  >> 5U)) 
                                         << 5U)) | 
                               ((8U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                >> 3U)) 
                                       << 3U)) | (2U 
                                                  & ((IData)(
                                                             (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                              >> 1U)) 
                                                     << 1U))))),6);
    bufp->fullQData(oldp+351,(vlSelf->myCPU__DOT__datapath__DOT__dmem__DOT__tmp_data),64);
    bufp->fullQData(oldp+353,(vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__tmp_data),64);
    bufp->fullBit(oldp+355,((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                             >> 0x1fU)));
    bufp->fullSData(oldp+356,((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+357,(vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Iimm),44);
    bufp->fullSData(oldp+359,(((0xfe0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                           >> 7U)))),12);
    bufp->fullQData(oldp+360,((((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                  >> 7U))))))),44);
    bufp->fullSData(oldp+362,(((0x1000U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                 >> 7U)))))),13);
    bufp->fullQData(oldp+363,((((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0xdU) | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                        >> 7U))))))))),45);
    bufp->fullIData(oldp+365,((0xfffff000U & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)),32);
    bufp->fullQData(oldp+366,((((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))),64);
    bufp->fullIData(oldp+368,(((0x100000U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst) 
                                  | ((0x800U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                >> 9U)) 
                                     | ((0x7e0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 0x14U))))))),21);
    bufp->fullQData(oldp+369,(vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm),53);
    bufp->fullCData(oldp+371,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                        >> 0xfU))),6);
    bufp->fullQData(oldp+372,((QData)((IData)((0x1fU 
                                               & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0xfU))))),38);
    bufp->fullQData(oldp+374,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_0),64);
    bufp->fullBit(oldp+376,(vlSelf->clock));
    bufp->fullBit(oldp+377,(vlSelf->reset));
    bufp->fullQData(oldp+378,(vlSelf->io_pc_debug),64);
    bufp->fullIData(oldp+380,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+381,(vlSelf->io_start));
    bufp->fullQData(oldp+382,(0ULL),64);
    bufp->fullQData(oldp+384,(vlSelf->myCPU__DOT__datapath__DOT__imem_pc_data),64);
    bufp->fullCData(oldp+386,(0U),8);
    bufp->fullBit(oldp+387,(1U));
    bufp->fullBit(oldp+388,(0U));
    bufp->fullQData(oldp+389,(vlSelf->myCPU__DOT__datapath__DOT__dmem_pc_data),64);
}
