// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU___024root.h"

void VmyCPU___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(QData/*63:0*/ regfile_0, QData/*63:0*/ regfile_1, QData/*63:0*/ regfile_2, QData/*63:0*/ regfile_3, QData/*63:0*/ regfile_4, QData/*63:0*/ regfile_5, QData/*63:0*/ regfile_6, QData/*63:0*/ regfile_7, QData/*63:0*/ regfile_8, QData/*63:0*/ regfile_9, QData/*63:0*/ regfile_10, QData/*63:0*/ regfile_11, QData/*63:0*/ regfile_12, QData/*63:0*/ regfile_13, QData/*63:0*/ regfile_14, QData/*63:0*/ regfile_15, QData/*63:0*/ regfile_16, QData/*63:0*/ regfile_17, QData/*63:0*/ regfile_18, QData/*63:0*/ regfile_19, QData/*63:0*/ regfile_20, QData/*63:0*/ regfile_21, QData/*63:0*/ regfile_22, QData/*63:0*/ regfile_23, QData/*63:0*/ regfile_24, QData/*63:0*/ regfile_25, QData/*63:0*/ regfile_26, QData/*63:0*/ regfile_27, QData/*63:0*/ regfile_28, QData/*63:0*/ regfile_29, QData/*63:0*/ regfile_30, QData/*63:0*/ regfile_31);

VL_ATTR_COLD void VmyCPU___024root___settle__TOP__0(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___settle__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h9dc1a9be__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e66f7d5__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1bbea4b__0;
    VlWide<3>/*95:0*/ __Vtemp_h3da41009__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0b58f7d__0;
    VlWide<3>/*95:0*/ __Vtemp_h2eeaba80__0;
    VlWide<3>/*95:0*/ __Vtemp_hbde7148f__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0f9f0c3__0;
    VlWide<3>/*95:0*/ __Vtemp_hb3a50930__0;
    VlWide<3>/*95:0*/ __Vtemp_h33f76f69__0;
    VlWide<4>/*127:0*/ __Vtemp_h0d44f1b8__0;
    VlWide<4>/*127:0*/ __Vtemp_hf037b5c0__0;
    VlWide<4>/*127:0*/ __Vtemp_hbdee2cf2__0;
    VlWide<4>/*127:0*/ __Vtemp_h6d63f16d__0;
    VlWide<4>/*127:0*/ __Vtemp_h51384543__0;
    VlWide<4>/*127:0*/ __Vtemp_h5162a830__0;
    VlWide<4>/*127:0*/ __Vtemp_h514c3f2e__0;
    VlWide<4>/*127:0*/ __Vtemp_h375ca612__0;
    VlWide<4>/*127:0*/ __Vtemp_h3763b123__0;
    VlWide<4>/*127:0*/ __Vtemp_hf037b5c0__1;
    VlWide<4>/*127:0*/ __Vtemp_h212409a7__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f641964__0;
    VlWide<4>/*127:0*/ __Vtemp_h0ce33da7__0;
    VlWide<4>/*127:0*/ __Vtemp_h48201fc5__0;
    VlWide<4>/*127:0*/ __Vtemp_hf037b5c0__2;
    VlWide<4>/*127:0*/ __Vtemp_h7bdfc44d__0;
    VlWide<4>/*127:0*/ __Vtemp_h2bda0aa4__0;
    // Body
    vlSelf->io_pc_debug = vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc;
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sip_T 
        = (((QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_meip)) 
            << 0xbU) | (QData)((IData)((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_seip) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_stip) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_msip) 
                                                       << 3U) 
                                                      | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_ssip) 
                                                         << 1U)))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_4 
        = (((QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_seip)) 
            << 9U) | (QData)((IData)((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_stip) 
                                       << 5U) | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_ssip) 
                                                 << 1U)))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
        = (((QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_meie)) 
            << 0xbU) | (QData)((IData)((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_seie) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_mtie) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_stie) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_msie) 
                                                          << 3U) 
                                                         | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_ssie) 
                                                            << 1U))))))));
    vlSelf->myCPU__DOT__datapath__DOT__st_mask = ((1U 
                                                   == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))
                                                   ? 0xfU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))
                                                     ? 1U
                                                     : 0xffU)));
    VmyCPU___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(0ULL, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_1, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_2, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_3, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_4, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_5, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_6, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_7, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_8, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_9, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_10, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_11, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_12, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_13, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_14, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_15, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_16, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_17, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_18, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_19, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_20, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_21, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_22, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_23, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_24, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_25, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_26, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_27, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_28, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_29, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_30, vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_31);
    vlSelf->myCPU__DOT__datapath__DOT___de_pipe_reg_rs1_T_11 
        = ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel))
            ? (4ULL + vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc)
            : ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel))
                ? vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_read_data
                : vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_load_data));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
        = (((QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sum)) 
            << 0x12U) | (QData)((IData)((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp) 
                                             << 8U) 
                                            | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie) 
                                                << 7U) 
                                               | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie) 
                                                      << 3U) 
                                                     | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie) 
                                                        << 1U)))))))));
    vlSelf->io_inst = vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst;
    vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wen 
        = ((((((0U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel)) 
               | (2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel))) 
              | (1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel))) 
             | (3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel))) 
            & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_en)) 
           & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable));
    __Vtemp_h9dc1a9be__0[0U] = ((IData)((7ULL & vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out)) 
                                << 3U);
    __Vtemp_h9dc1a9be__0[1U] = (((IData)((7ULL & vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out)) 
                                 >> 0x1dU) | ((IData)(
                                                      ((7ULL 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out) 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h9dc1a9be__0[2U] = ((IData)(((7ULL & vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out) 
                                         >> 0x20U)) 
                                >> 0x1dU);
    vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard 
        = VL_SHIFTR_QQW(64,64,67, vlSelf->myCPU__DOT__datapath__DOT__dmem__DOT__delay, __Vtemp_h9dc1a9be__0);
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___mcycle_data_T_1 
        = (1ULL + vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcycle_data);
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_2 
        = ((0x13U != vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)
            ? (1ULL + vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data)
            : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data);
    vlSelf->myCPU__DOT__datapath__DOT___T_2 = ((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable) 
                                               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeEn 
        = (((((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op)) 
              | (3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op))) 
             | (5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op))) 
            | (4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op))) 
           & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable));
    vlSelf->myCPU__DOT__datapath__DOT__jmp_occur = 
        ((IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable) 
         & (1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc_sel)));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___writeData_T_8 
        = ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op))
            ? vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_data
            : ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op))
                ? vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_data
                : ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op))
                    ? vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_data
                    : 0ULL)));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable 
        = ((0xc00U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                       >> 0x14U)) | ((0xc02U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                 >> 0x14U)) 
                                     | ((0x100U == 
                                         (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                          >> 0x14U)) 
                                        | ((0x104U 
                                            == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                >> 0x14U)) 
                                           | ((0x105U 
                                               == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U)) 
                                              | ((0x106U 
                                                  == 
                                                  (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U)) 
                                                 | ((0x140U 
                                                     == 
                                                     (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                      >> 0x14U)) 
                                                    | ((0x141U 
                                                        == 
                                                        (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                         >> 0x14U)) 
                                                       | ((0x142U 
                                                           == 
                                                           (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                            >> 0x14U)) 
                                                          | ((0x143U 
                                                              == 
                                                              (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                               >> 0x14U)) 
                                                             | ((0x144U 
                                                                 == 
                                                                 (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                  >> 0x14U)) 
                                                                | ((0x180U 
                                                                    == 
                                                                    (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                     >> 0x14U)) 
                                                                   | ((0xf11U 
                                                                       == 
                                                                       (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                        >> 0x14U)) 
                                                                      | ((0xf12U 
                                                                          == 
                                                                          (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                           >> 0x14U)) 
                                                                         | ((0xf13U 
                                                                             == 
                                                                             (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                              >> 0x14U)) 
                                                                            | ((0xf14U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                               | ((0x300U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x301U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x302U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x303U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x304U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x305U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x306U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x340U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x341U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x342U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x343U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0x344U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | ((0xb00U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                                | (0xb02U 
                                                                                == 
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                                >> 0x14U)))))))))))))))))))))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_144 
        = ((0xf14U != (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                       >> 0x14U)) & ((0x300U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                 >> 0x14U)) 
                                     | ((0x301U != 
                                         (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                          >> 0x14U)) 
                                        & ((0x302U 
                                            == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                >> 0x14U)) 
                                           | ((0x303U 
                                               == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U)) 
                                              | ((0x304U 
                                                  == 
                                                  (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U)) 
                                                 | ((0x305U 
                                                     == 
                                                     (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                      >> 0x14U)) 
                                                    | ((0x306U 
                                                        == 
                                                        (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                         >> 0x14U)) 
                                                       | ((0x340U 
                                                           == 
                                                           (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                            >> 0x14U)) 
                                                          | ((0x341U 
                                                              == 
                                                              (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                               >> 0x14U)) 
                                                             | ((0x342U 
                                                                 == 
                                                                 (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                  >> 0x14U)) 
                                                                | ((0x343U 
                                                                    == 
                                                                    (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                     >> 0x14U)) 
                                                                   | ((0x344U 
                                                                       == 
                                                                       (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                        >> 0x14U)) 
                                                                      | ((0xb00U 
                                                                          == 
                                                                          (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                           >> 0x14U)) 
                                                                         | (0xb02U 
                                                                            == 
                                                                            (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                             >> 0x14U))))))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm 
        = (((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x15U) | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                             >> 9U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                                >> 0x14U)))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_676 
        = ((0x4063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
            ? 0U : ((0x5063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                     ? 0U : ((0x6063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x7063U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((3U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x1003U 
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
                                                      : 
                                                     ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x6003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 3U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 2U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x3023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 4U
                                                             : 0U)))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_748 
        = ((0x6fU == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
            ? 0U : ((0x67U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                     ? 0U : ((0x63U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x1063U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x4063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x5063U 
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
                                                       ? 3U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 4U
                                                           : 
                                                          ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 6U
                                                            : 
                                                           ((0x3003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 7U
                                                             : 0U)))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_243 
        = ((0x501bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           | ((0x40005013U == (0xfc00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              | ((0x4000501bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 | ((0x33U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    | ((0x3bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       | ((0x40000033U == (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          | ((0x4000003bU == (0xfe00707fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             | ((0x1033U == (0xfe00707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                | ((0x103bU == (0xfe00707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   | ((0x2033U == (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      | ((0x3033U == 
                                          (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         | ((0x4033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            | ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               | ((0x503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  | ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     | ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        | ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           | ((0x7033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                              | ((0x2000033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                 | ((0x200003bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                    | ((0x2004033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                       | ((0x2005033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                          | ((0x200403bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                             | ((0x200503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x200703bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | (0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))))))))))))))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_309 
        = ((0x4000501bU != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           & ((0x33U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              | ((0x3bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 | ((0x40000033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    | ((0x4000003bU == (0xfe00707fU 
                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       | ((0x1033U == (0xfe00707fU 
                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          | ((0x103bU == (0xfe00707fU 
                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             | ((0x2033U == (0xfe00707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                | ((0x3033U == (0xfe00707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   | ((0x4033U == (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      | ((0x5033U == 
                                          (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         | ((0x503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            | ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               | ((0x4000503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  | ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     | ((0x7033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        | ((0x2000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           | ((0x200003bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                              | ((0x2004033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                 | ((0x2005033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                    | ((0x200403bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                       | ((0x200503bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                          | ((0x2006033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                             | ((0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | (0x200703bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)))))))))))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_366 
        = ((0x503bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
            ? 1U : ((0x40005033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                     ? 0U : ((0x4000503bU == (0xfe00707fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 1U : ((0x6033U == (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x200003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x2004033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x2005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x200403bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x200503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x2006033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2007033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x200603bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x200703bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 1U
                                                             : 0U)))))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Iimm 
        = (((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                  >> 0x14U))));
    vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT___GEN_77 
        = ((0xdU == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                              >> 0xfU))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_13
            : ((0xcU == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                  >> 0xfU))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_12
                : ((0xbU == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                      >> 0xfU))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_11
                    : ((0xaU == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                          >> 0xfU)))
                        ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_10
                        : ((9U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 0xfU)))
                            ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_9
                            : ((8U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                >> 0xfU)))
                                ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 0xfU)))
                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0xfU)))
                                        ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                      >> 0xfU)))
                                            ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                    >> 0xfU)))
                                                ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_1
                                                      : vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_0)))))))))))));
    if ((0x2005033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x200403bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x200503bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x2006033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x2007033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x200603bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x200703bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x1073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 2U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x2073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 2U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x3073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 2U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x5073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 2U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x6073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 2U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x7073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 2U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    } else if ((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 3U;
    } else if ((0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 1U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902 = 0U;
    }
    if ((0x200403bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0xdU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x200503bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0xfU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x2006033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0xeU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x2007033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0x10U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x200603bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0xeU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x200703bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0x10U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x1073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0xaU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x2073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0xaU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x3073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0xaU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x5073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0x11U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 6U;
    } else if ((0x6073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0x11U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 6U;
    } else if ((0x7073U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0x11U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 6U;
    } else if ((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0x11U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0x11U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x73U == vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0x11U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else if ((0x100073U == vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0x11U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 0U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493 = 0xbU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425 = 3U;
    }
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1109 
        = ((0x2000033U != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           & ((0x200003bU != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              & ((0x2004033U != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 & ((0x2005033U != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    & ((0x200403bU != (0xfe00707fU 
                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       & ((0x200503bU != (0xfe00707fU 
                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          & ((0x2006033U != (0xfe00707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             & ((0x2007033U != (0xfe00707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                & ((0x200603bU != (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   & ((0x200703bU != 
                                       (0xfe00707fU 
                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      & ((0x1073U == 
                                          (0x707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         | ((0x2073U 
                                             == (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            | ((0x3073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               | ((0x5073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  | ((0x6073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     | ((0x7073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        | ((0x30200073U 
                                                            == vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst) 
                                                           | (0x10200073U 
                                                              == vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))))))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT___GEN_110 
        = ((0xdU == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                              >> 0x14U))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_13
            : ((0xcU == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                  >> 0x14U))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_12
                : ((0xbU == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                      >> 0x14U))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_11
                    : ((0xaU == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                          >> 0x14U)))
                        ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_10
                        : ((9U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 0x14U)))
                            ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_9
                            : ((8U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                >> 0x14U)))
                                ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 0x14U)))
                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0x14U)))
                                        ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                      >> 0x14U)))
                                            ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                    >> 0x14U)))
                                                ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_1
                                                      : vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_0)))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_821 
        = ((0x30200073U != vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst) 
           & ((0x10200073U != vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst) 
              & ((0x73U != vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst) 
                 & (0x100073U != vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_972 
        = ((0x200003bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
            ? 0U : ((0x2004033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                     ? 0U : ((0x2005033U == (0xfe00707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x200403bU == 
                                       (0xfe00707fU 
                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x200503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2007033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x200603bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200703bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 4U
                                                         : 
                                                        ((0x3073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x5073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 3U
                                                           : 
                                                          ((0x6073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 4U
                                                            : 
                                                           ((0x7073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 5U
                                                             : 0U)))))))))))))));
    vlSelf->io_start = vlSelf->myCPU__DOT__datapath__DOT__started;
    __Vtemp_h5e66f7d5__0[0U] = 4U;
    __Vtemp_h5e66f7d5__0[1U] = 0U;
    __Vtemp_h5e66f7d5__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hd1bbea4b__0, __Vtemp_h5e66f7d5__0, vlSelf->myCPU__DOT__datapath__DOT__pc);
    vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_1[0U] 
        = __Vtemp_hd1bbea4b__0[0U];
    vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_1[1U] 
        = __Vtemp_hd1bbea4b__0[1U];
    vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_1[2U] 
        = (1U & __Vtemp_hd1bbea4b__0[2U]);
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
        = (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sip_T 
           & vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T);
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
        = (((QData)((IData)((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                           >> 0xbU))))) 
            << 0xbU) | (QData)((IData)(((0x200U & ((IData)(
                                                           (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                            >> 9U)) 
                                                   << 9U)) 
                                        | ((0x80U & 
                                            ((IData)(
                                                     (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                      >> 7U)) 
                                             << 7U)) 
                                           | ((0x20U 
                                               & ((IData)(
                                                          (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                           >> 5U)) 
                                                  << 5U)) 
                                              | ((8U 
                                                  & ((IData)(
                                                             (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                              >> 3U)) 
                                                     << 3U)) 
                                                 | (2U 
                                                    & ((IData)(
                                                               (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                                >> 1U)) 
                                                       << 1U)))))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_83 
        = ((0x302U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                       >> 0x14U)) ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data
            : ((0x303U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                           >> 0x14U)) ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data
                : ((0x304U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                               >> 0x14U)) ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T
                    : ((0x305U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                   >> 0x14U)) ? ((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base 
                                                  << 2U) 
                                                 | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode)))
                        : ((0x306U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                       >> 0x14U)) ? 0ULL
                            : ((0x340U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mscratch_data
                                : ((0x341U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mepc_data
                                    : ((0x342U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U))
                                        ? (((QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_int)) 
                                            << 0x3fU) 
                                           | vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_code)
                                        : ((0x343U 
                                            == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                >> 0x14U))
                                            ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtval_data
                                            : ((0x344U 
                                                == 
                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                 >> 0x14U))
                                                ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sip_T
                                                : (
                                                   (0xb00U 
                                                    == 
                                                    (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcycle_data
                                                    : 
                                                   ((0xb02U 
                                                     == 
                                                     (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data
                                                     : 0ULL))))))))))));
    if ((0U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel))) {
        vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wdata 
            = vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_alu_out;
        vlSelf->myCPU__DOT__datapath__DOT___de_pipe_reg_rs1_T_12 
            = vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_alu_out;
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wdata 
            = vlSelf->myCPU__DOT__datapath__DOT___de_pipe_reg_rs1_T_11;
        vlSelf->myCPU__DOT__datapath__DOT___de_pipe_reg_rs1_T_12 
            = vlSelf->myCPU__DOT__datapath__DOT___de_pipe_reg_rs1_T_11;
    }
    vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_5 
        = (((QData)((IData)(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard)));
    vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_33 
        = ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
            ? ((((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard 
                                >> 0xfU))) ? 0xffffffffffffULL
                  : 0ULL) << 0x10U) | (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard)))))
            : ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                ? (QData)((IData)((0xffffU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard))))
                : ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                    ? ((((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard 
                                        >> 7U))) ? 0xffffffffffffffULL
                          : 0ULL) << 8U) | (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard)))))
                    : ((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                        ? (QData)((IData)((0xffU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard))))
                        : vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
        = ((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op))
            ? 0ULL : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___writeData_T_8);
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable 
        = ((0xc00U != (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                       >> 0x14U)) & ((0xc02U != (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                 >> 0x14U)) 
                                     & ((0x100U == 
                                         (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                          >> 0x14U)) 
                                        | ((0x104U 
                                            == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                >> 0x14U)) 
                                           | ((0x105U 
                                               == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U)) 
                                              | ((0x106U 
                                                  == 
                                                  (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U)) 
                                                 | ((0x140U 
                                                     == 
                                                     (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                      >> 0x14U)) 
                                                    | ((0x141U 
                                                        == 
                                                        (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                         >> 0x14U)) 
                                                       | ((0x142U 
                                                           == 
                                                           (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                            >> 0x14U)) 
                                                          | ((0x143U 
                                                              == 
                                                              (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                               >> 0x14U)) 
                                                             | ((0x144U 
                                                                 == 
                                                                 (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                  >> 0x14U)) 
                                                                | ((0x180U 
                                                                    == 
                                                                    (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                     >> 0x14U)) 
                                                                   | ((0xf11U 
                                                                       != 
                                                                       (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                        >> 0x14U)) 
                                                                      & ((0xf12U 
                                                                          != 
                                                                          (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                           >> 0x14U)) 
                                                                         & ((0xf13U 
                                                                             != 
                                                                             (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                                              >> 0x14U)) 
                                                                            & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_144))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_265 
        = ((0x7063U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           & ((3U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              | ((0x1003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 | ((0x2003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    | ((0x4003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       | ((0x5003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          | ((0x6003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             | ((0x3003U == (0x707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                | ((0x23U == (0x707fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   | ((0x1023U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      | ((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         | ((0x3023U 
                                             == (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            | ((0x13U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               | ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  | ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     | ((0x3013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        | ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           | ((0x6013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                              | ((0x7013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                 | ((0x1013U 
                                                                     == 
                                                                     (0xfc00707fU 
                                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                    | ((0x101bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                       | ((0x5013U 
                                                                           == 
                                                                           (0xfc00707fU 
                                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                          | (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_243)))))))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_326 
        = ((0x3003U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           & ((0x23U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              & ((0x1023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 & ((0x2023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    & ((0x3023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       & ((0x13U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          & ((0x1bU != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             & ((0x2013U != (0x707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                & ((0x3013U != (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   & ((0x4013U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      & ((0x6013U != 
                                          (0x707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         & ((0x7013U 
                                             != (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            & ((0x1013U 
                                                != 
                                                (0xfc00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               & ((0x101bU 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  & ((0x5013U 
                                                      != 
                                                      (0xfc00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     & ((0x501bU 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        & ((0x40005013U 
                                                            != 
                                                            (0xfc00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_309))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_381 
        = ((0x101bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
            ? 1U : ((0x5013U == (0xfc00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                     ? 0U : ((0x501bU == (0xfe00707fU 
                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 1U : ((0x40005013U 
                                       == (0xfc00707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x4000501bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 1U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x3033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x5033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_366))))))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT___GEN_90 
        = ((0x1aU == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                               >> 0xfU))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_26
            : ((0x19U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                   >> 0xfU))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_25
                : ((0x18U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                       >> 0xfU))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_24
                    : ((0x17U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                           >> 0xfU)))
                        ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_23
                        : ((0x16U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                               >> 0xfU)))
                            ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_22
                            : ((0x15U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                   >> 0xfU)))
                                ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                 >> 0xfU)))
                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0xfU)))
                                        ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                >> 0xfU)))
                                            ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                    >> 0xfU)))
                                                ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_14
                                                      : vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT___GEN_77)))))))))))));
    if ((0x4000003bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x103bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x503bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x4000503bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x2000033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x200003bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else if ((0x2004033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 = 0U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_154;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_902;
    }
    if ((0x1033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 6U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x103bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 6U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 5U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 7U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 4U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 8U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x503bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 8U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 9U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x4000503bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 9U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 2U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x2000033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 0xcU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x200003bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 0xcU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x2004033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 0xdU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else if ((0x2005033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 = 0xfU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 = 0U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_493;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_765;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_425;
    }
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1126 
        = ((0x40005013U != (0xfc00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           & ((0x4000501bU != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              & ((0x33U != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 & ((0x3bU != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    & ((0x40000033U != (0xfe00707fU 
                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       & ((0x4000003bU != (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          & ((0x1033U != (0xfe00707fU 
                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             & ((0x103bU != (0xfe00707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                & ((0x2033U != (0xfe00707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   & ((0x3033U != (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      & ((0x4033U != 
                                          (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         & ((0x5033U 
                                             != (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            & ((0x503bU 
                                                != 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               & ((0x40005033U 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  & ((0x4000503bU 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     & ((0x6033U 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        & ((0x7033U 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1109))))))))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT___GEN_123 
        = ((0x1aU == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                               >> 0x14U))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_26
            : ((0x19U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                   >> 0x14U))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_25
                : ((0x18U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                       >> 0x14U))) ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_24
                    : ((0x17U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                           >> 0x14U)))
                        ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_23
                        : ((0x16U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                               >> 0x14U)))
                            ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_22
                            : ((0x15U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                   >> 0x14U)))
                                ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                 >> 0x14U)))
                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0x14U)))
                                        ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                >> 0x14U)))
                                            ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                    >> 0x14U)))
                                                ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_14
                                                      : vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT___GEN_110)))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_851 
        = ((0x3bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           | ((0x40000033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              | ((0x4000003bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 | ((0x1033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    | ((0x103bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       | ((0x2033U == (0xfe00707fU 
                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          | ((0x3033U == (0xfe00707fU 
                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             | ((0x4033U == (0xfe00707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                | ((0x5033U == (0xfe00707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   | ((0x503bU == (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      | ((0x40005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         | ((0x4000503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            | ((0x6033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               | ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  | ((0x2000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     | ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        | ((0x2004033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           | ((0x2005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                              | ((0x200403bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                 | ((0x200503bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                    | ((0x2006033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                       | ((0x2007033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                          | ((0x200603bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                             | ((0x200703bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x6073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | ((0x7073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                | (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_821)))))))))))))))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1042 
        = ((0x7033U != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           & ((0x2000033U != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              & ((0x200003bU != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 & ((0x2004033U != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    & ((0x2005033U != (0xfe00707fU 
                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       & ((0x200403bU != (0xfe00707fU 
                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          & ((0x200503bU != (0xfe00707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             & ((0x2006033U != (0xfe00707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                & ((0x2007033U != (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   & ((0x200603bU != 
                                       (0xfe00707fU 
                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      & ((0x200703bU 
                                          != (0xfe00707fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         & ((0x1073U 
                                             != (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            & ((0x2073U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               & ((0x3073U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  & ((0x5073U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     & ((0x6073U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        & ((0x7073U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_821))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_987 
        = ((0x3bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
            ? 0U : ((0x40000033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                     ? 0U : ((0x4000003bU == (0xfe00707fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x1033U == (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x103bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x3033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x7033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_972))))))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_1 
        = (((QData)((IData)((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                           >> 9U))))) 
            << 9U) | (QData)((IData)(((0x20U & ((IData)(
                                                        (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                                         >> 5U)) 
                                                << 5U)) 
                                      | (2U & ((IData)(
                                                       (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                                        >> 1U)) 
                                               << 1U))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_96 
        = ((0x106U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                       >> 0x14U)) ? 0ULL : ((0x140U 
                                             == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                 >> 0x14U))
                                             ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sscratch_data
                                             : ((0x141U 
                                                 == 
                                                 (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                  >> 0x14U))
                                                 ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sepc_data
                                                 : 
                                                ((0x142U 
                                                  == 
                                                  (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U))
                                                  ? 
                                                 (((QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_int)) 
                                                   << 0x3fU) 
                                                  | vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_code)
                                                  : 
                                                 ((0x143U 
                                                   == 
                                                   (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stval_data
                                                   : 
                                                  ((0x144U 
                                                    == 
                                                    (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_4
                                                    : 
                                                   ((0x180U 
                                                     == 
                                                     (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                      >> 0x14U))
                                                     ? 0ULL
                                                     : 
                                                    ((0xf11U 
                                                      == 
                                                      (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                       >> 0x14U))
                                                      ? 0ULL
                                                      : 
                                                     ((0xf12U 
                                                       == 
                                                       (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                        >> 0x14U))
                                                       ? 0ULL
                                                       : 
                                                      ((0xf13U 
                                                        == 
                                                        (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                         >> 0x14U))
                                                        ? 0ULL
                                                        : 
                                                       ((0xf14U 
                                                         == 
                                                         (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                          >> 0x14U))
                                                         ? 0ULL
                                                         : 
                                                        ((0x300U 
                                                          == 
                                                          (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                           >> 0x14U))
                                                          ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T
                                                          : 
                                                         ((0x301U 
                                                           == 
                                                           (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                            >> 0x14U))
                                                           ? 0x1100ULL
                                                           : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_83)))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT___GEN_56 = ((
                                                   (((IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable) 
                                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_en)) 
                                                    & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                                                       == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_dest)))) 
                                                   & (0ULL 
                                                      != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr))
                                                   ? 
                                                  ((vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                                                    == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_dest)))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT___de_pipe_reg_rs1_T_12
                                                    : 0ULL)
                                                   : vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_rs1);
    vlSelf->myCPU__DOT__datapath__DOT___GEN_60 = ((
                                                   (((IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable) 
                                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_en)) 
                                                    & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr 
                                                       == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_dest)))) 
                                                   & (0ULL 
                                                      != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr))
                                                   ? 
                                                  ((vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr 
                                                    == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_dest)))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT___de_pipe_reg_rs1_T_12
                                                    : 0ULL)
                                                   : vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_rs2);
    vlSelf->myCPU__DOT__datapath__DOT___src1_data_T_7 
        = ((0U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_sel))
            ? vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out
            : ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_sel))
                ? (4ULL + vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_pc)
                : ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_sel))
                    ? vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_read_data
                    : ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                        ? vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_5
                        : ((6U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                            ? (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard))
                            : vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_33)))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_167 
        = (((QData)((IData)((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 0x12U))))) 
            << 0x12U) | (QData)((IData)(((0x100U & 
                                          ((IData)(
                                                   (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                    >> 8U)) 
                                           << 8U)) 
                                         | ((0x20U 
                                             & ((IData)(
                                                        (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                         >> 5U)) 
                                                << 5U)) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                         >> 1U)) 
                                                << 1U)))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_169 
        = (((QData)((IData)((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 9U))))) 
            << 9U) | (QData)((IData)(((0x20U & ((IData)(
                                                        (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                         >> 5U)) 
                                                << 5U)) 
                                      | (2U & ((IData)(
                                                       (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                        >> 1U)) 
                                               << 1U))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T 
        = ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable) 
           & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_396 
        = ((0x5003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
            ? 0U : ((0x6003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                     ? 0U : ((0x3003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x23U == (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x1023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x2013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x3013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x4013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x1013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_381))))))))))))))));
    if ((0x1bU == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x2013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x3013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x4013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x6013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x7013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x101bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x5013U == (0xfc00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x501bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x4000501bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x33U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x3bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 = 0U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_169;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_917;
    }
    if ((0x2013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 5U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x3013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 7U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x4013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 4U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x6013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x7013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 2U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 6U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x101bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 6U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 8U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x501bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 8U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 9U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x4000501bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 9U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 1U;
    } else if ((0x33U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 0U;
    } else if ((0x3bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 0U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 0U;
    } else if ((0x4000003bU == (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 = 0U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_508;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_780;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_440;
    }
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1143 
        = ((0x6003U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           & ((0x3003U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              & ((0x23U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 & ((0x1023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    & ((0x2023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       & ((0x3023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          & ((0x13U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             & ((0x1bU != (0x707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                & ((0x2013U != (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   & ((0x3013U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      & ((0x4013U != 
                                          (0x707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         & ((0x6013U 
                                             != (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            & ((0x7013U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               & ((0x1013U 
                                                   != 
                                                   (0xfc00707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  & ((0x101bU 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     & ((0x5013U 
                                                         != 
                                                         (0xfc00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        & ((0x501bU 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1126))))))))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT__regFile_io_rdata_1 
        = ((0U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                            >> 0x14U))) ? 0ULL : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_31
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_27
                                                       : vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT___GEN_123))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_868 
        = ((0x1023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           & ((0x2023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              & ((0x3023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 & ((0x13U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    | ((0x1bU == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       | ((0x2013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          | ((0x3013U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             | ((0x4013U == (0x707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                | ((0x6013U == (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   | ((0x7013U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      | ((0x1013U == 
                                          (0xfc00707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         | ((0x101bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            | ((0x5013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               | ((0x501bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  | ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     | ((0x4000501bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        | ((0x33U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           | (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_851))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1059 
        = ((0x501bU != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           & ((0x40005013U != (0xfc00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              & ((0x4000501bU != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 & ((0x33U != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    & ((0x3bU != (0xfe00707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       & ((0x40000033U != (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          & ((0x4000003bU != (0xfe00707fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             & ((0x1033U != (0xfe00707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                & ((0x103bU != (0xfe00707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   & ((0x2033U != (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      & ((0x3033U != 
                                          (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         & ((0x4033U 
                                             != (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            & ((0x5033U 
                                                != 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               & ((0x503bU 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  & ((0x40005033U 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     & ((0x4000503bU 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        & ((0x6033U 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1042))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1002 
        = ((0x3023U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
            ? 0U : ((0x13U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                     ? 0U : ((0x1bU == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x2013U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x3013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x101bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x40005013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x33U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_987))))))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
        = (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_4 
           & vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_1);
    vlSelf->myCPU__DOT__datapath__DOT___GEN_54 = ((vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                                                   == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))
                                                   ? vlSelf->myCPU__DOT__datapath__DOT___src1_data_T_7
                                                   : 0ULL);
    vlSelf->myCPU__DOT__datapath__DOT___GEN_58 = ((vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr 
                                                   == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))
                                                   ? vlSelf->myCPU__DOT__datapath__DOT___src1_data_T_7
                                                   : 0ULL);
    if ((0x5063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x6063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x7063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((3U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x1003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x2003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x4003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x5003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x6003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x3003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x23U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x1023U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x2023U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x3023U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else if ((0x13U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 = 0U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_184;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_932;
    }
    if ((0x6063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 5U;
    } else if ((0x7063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 5U;
    } else if ((3U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 1U;
    } else if ((0x1003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 1U;
    } else if ((0x2003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 1U;
    } else if ((0x4003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 1U;
    } else if ((0x5003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 1U;
    } else if ((0x6003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 1U;
    } else if ((0x3003U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 1U;
    } else if ((0x23U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 2U;
    } else if ((0x1023U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 2U;
    } else if ((0x2023U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 2U;
    } else if ((0x3023U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 2U;
    } else if ((0x13U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 1U;
    } else if ((0x1bU == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 = 1U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_523;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_795;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_455;
    }
    vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst 
        = (((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
            & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
               & ((0x6fU == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                  | ((0x67U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                     | ((0x63U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                        & ((0x1063U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                           & ((0x4063U != (0x707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                              & ((0x5063U != (0x707fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                 & ((0x6063U != (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                    & ((0x7063U != 
                                        (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                       & ((3U != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                          & ((0x1003U 
                                              != (0x707fU 
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
                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1143)))))))))))))))) 
           & (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1076 
        = ((0x5003U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
           & ((0x6003U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
              & ((0x3003U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                 & ((0x23U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                    & ((0x1023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                       & ((0x2023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                          & ((0x3023U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                             & ((0x13U != (0x707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                & ((0x1bU != (0x707fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                   & ((0x2013U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                      & ((0x3013U != 
                                          (0x707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                         & ((0x4013U 
                                             != (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                            & ((0x6013U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                  & ((0x1013U 
                                                      != 
                                                      (0xfc00707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                     & ((0x101bU 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                        & ((0x5013U 
                                                            != 
                                                            (0xfc00707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                           & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1059))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1017 
        = ((0x1063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
            ? 0U : ((0x4063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                     ? 0U : ((0x5063U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x6063U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (3U 
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
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x3003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x23U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1002))))))))))))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasIntM 
        = (((1U >= (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
            | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie)) 
           & (0U != (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                     & (~ vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data))));
    vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1 
        = (((((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable) 
              & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en)) 
             & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))) 
            & (0ULL != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr))
            ? vlSelf->myCPU__DOT__datapath__DOT___GEN_54
            : vlSelf->myCPU__DOT__datapath__DOT___GEN_56);
    vlSelf->myCPU__DOT__datapath__DOT__A_data = ((IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_A_sel)
                                                  ? 
                                                 (((((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable) 
                                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en)) 
                                                    & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                                                       == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))) 
                                                   & (0ULL 
                                                      != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr))
                                                   ? vlSelf->myCPU__DOT__datapath__DOT___GEN_54
                                                   : vlSelf->myCPU__DOT__datapath__DOT___GEN_56)
                                                  : vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc);
    if ((((IData)(vlSelf->myCPU__DOT__datapath__DOT___T_2) 
          & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr 
             == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))) 
         & (0ULL != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr))) {
        vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2 
            = vlSelf->myCPU__DOT__datapath__DOT___GEN_58;
        vlSelf->myCPU__DOT__datapath__DOT__src2_data 
            = vlSelf->myCPU__DOT__datapath__DOT___GEN_58;
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2 
            = vlSelf->myCPU__DOT__datapath__DOT___GEN_60;
        vlSelf->myCPU__DOT__datapath__DOT__src2_data 
            = vlSelf->myCPU__DOT__datapath__DOT___GEN_60;
    }
    if ((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control_io_imm_sel = 3U;
        vlSelf->myCPU__DOT__control_io_csr_cmd = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control_io_imm_sel = 3U;
        vlSelf->myCPU__DOT__control_io_csr_cmd = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control_io_imm_sel = 4U;
        vlSelf->myCPU__DOT__control_io_csr_cmd = 0U;
    } else if ((0x67U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control_io_imm_sel = 1U;
        vlSelf->myCPU__DOT__control_io_csr_cmd = 0U;
    } else if ((0x63U == (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))) {
        vlSelf->myCPU__DOT__control_io_imm_sel = 5U;
        vlSelf->myCPU__DOT__control_io_csr_cmd = 0U;
    } else {
        vlSelf->myCPU__DOT__control_io_imm_sel = ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 5U
                                                   : 
                                                  ((0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 5U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 5U
                                                     : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_470))));
        vlSelf->myCPU__DOT__control_io_csr_cmd = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1017;
    }
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst 
        = (((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
            & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
               & ((0x6fU != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                  & ((0x67U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                     & ((0x63U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                        & ((0x1063U != (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                           & ((0x4063U != (0x707fU 
                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                              & ((0x5063U != (0x707fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                 & ((0x6063U != (0x707fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                    & ((0x7063U != 
                                        (0x707fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                       & ((3U != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                          & ((0x1003U 
                                              != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                             & ((0x2003U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                & ((0x4003U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                   & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1076)))))))))))))))
            ? vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst
            : 0U);
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt 
        = ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasIntM) 
           | (((1U > (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
               | ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                  & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie))) 
              & (0U != (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                        & vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data))));
    vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq 
        = (vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1 
           == vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2);
    vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt 
        = VL_LTS_IQQ(64, vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1, vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2);
    vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu 
        = (vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1 
           < vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2);
    vlSelf->myCPU__DOT__datapath__DOT__B_data = ((IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_B_sel)
                                                  ? vlSelf->myCPU__DOT__datapath__DOT__src2_data
                                                  : vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_imm);
    vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT___io_out_T_5 
        = ((2U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
            ? (((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                  >> 0x1fU) ? 0xffffffffU
                                  : 0U))) << 0xcU) 
               | (QData)((IData)(((0xfe0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                              >> 7U))))))
            : ((1U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                ? vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Iimm
                : (0xffffffffffeULL & vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Iimm)));
    vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush 
        = (((IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable) 
            & (0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op)))
            ? 0xfU : (((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable) 
                       & (0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_op)))
                       ? 7U : (((IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable) 
                                & (0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_op)))
                                ? 3U : ((IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable) 
                                        & (0U != (IData)(vlSelf->myCPU__DOT__control_io_csr_cmd))))));
    vlSelf->myCPU__DOT__datapath__DOT___csr_op_T_2 
        = (IData)(((1U == (IData)(vlSelf->myCPU__DOT__control_io_csr_cmd)) 
                   & (0U == (0xf80U & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))));
    vlSelf->myCPU__DOT__datapath__DOT___csr_op_T_15 
        = ((IData)(((3U == (IData)(vlSelf->myCPU__DOT__control_io_csr_cmd)) 
                    & (0U == (0xf80U & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))
            ? 1U : ((3U == (IData)(vlSelf->myCPU__DOT__control_io_csr_cmd))
                     ? 5U : ((IData)(((2U == (IData)(vlSelf->myCPU__DOT__control_io_csr_cmd)) 
                                      & (0U == (0xf80U 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))
                              ? 1U : ((2U == (IData)(vlSelf->myCPU__DOT__control_io_csr_cmd))
                                       ? 4U : 0U))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handIntS 
        = ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt) 
           & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasIntM)));
    vlSelf->myCPU__DOT__datapath__DOT__brCond_taken 
        = ((((((((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
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
               & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu)))) 
           & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable));
    vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT___io_out_T_7 
        = ((5U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
            ? (((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                  >> 0x1fU) ? 0xffffffffU
                                  : 0U))) << 0xdU) 
               | (QData)((IData)(((0x1000U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 7U))))))))
            : (((QData)((IData)((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT___io_out_T_5 
                                               >> 0x2bU))))) 
                << 0x2cU) | vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT___io_out_T_5));
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op 
        = ((IData)(vlSelf->myCPU__DOT__datapath__DOT___csr_op_T_2)
            ? 2U : ((1U == (IData)(vlSelf->myCPU__DOT__control_io_csr_cmd))
                     ? 3U : (IData)(vlSelf->myCPU__DOT__datapath__DOT___csr_op_T_15)));
    vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_4 
        = (((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc_sel)) 
            & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable)) 
           | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken));
    if ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
            = (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__A_data));
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_B 
            = (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__B_data));
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
            = vlSelf->myCPU__DOT__datapath__DOT__A_data;
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_B 
            = vlSelf->myCPU__DOT__datapath__DOT__B_data;
    }
    vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum 
        = (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
           + ((1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))
               ? (- vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)
               : vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__valid 
        = (1U & ((((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                    ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                    : ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                        ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                        : ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                            ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                            : ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable)
                                : ((1U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op)) 
                                   | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable)))))) 
                  | (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))) 
                 & (((((3U & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                              >> 0x1cU)) <= (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                      & (((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                           ? 0U : ((0x17U == (0x7fU 
                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                    ? 0U : ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                             ? 0U : 
                                            ((0x67U 
                                              == (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                              ? 0U : 
                                             ((0x63U 
                                               == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                               ? 0U
                                               : ((0x1063U 
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
                     | (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))) 
                    | (0U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op)))));
    VL_EXTEND_WQ(65,33, __Vtemp_h3da41009__0, (0x1ffffffffULL 
                                               & VL_DIVS_QQQ(33, 
                                                             (0x1ffffffffULL 
                                                              & VL_EXTENDS_QI(33,32, (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A))), 
                                                             (0x1ffffffffULL 
                                                              & VL_EXTENDS_QI(33,32, (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B))))));
    VL_EXTENDS_WQ(65,64, __Vtemp_hf0b58f7d__0, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A);
    __Vtemp_h2eeaba80__0[0U] = __Vtemp_hf0b58f7d__0[0U];
    __Vtemp_h2eeaba80__0[1U] = __Vtemp_hf0b58f7d__0[1U];
    __Vtemp_h2eeaba80__0[2U] = (1U & __Vtemp_hf0b58f7d__0[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp_hbde7148f__0, vlSelf->myCPU__DOT__datapath__DOT__alu_io_B);
    __Vtemp_hf0f9f0c3__0[0U] = __Vtemp_hbde7148f__0[0U];
    __Vtemp_hf0f9f0c3__0[1U] = __Vtemp_hbde7148f__0[1U];
    __Vtemp_hf0f9f0c3__0[2U] = (1U & __Vtemp_hbde7148f__0[2U]);
    VL_DIVS_WWW(65, __Vtemp_hb3a50930__0, __Vtemp_h2eeaba80__0, __Vtemp_hf0f9f0c3__0);
    if ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt 
            = (0x3fU & (0x1fU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)));
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum 
            = (((QData)((IData)(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum)));
        __Vtemp_h33f76f69__0[0U] = __Vtemp_h3da41009__0[0U];
        __Vtemp_h33f76f69__0[1U] = __Vtemp_h3da41009__0[1U];
        __Vtemp_h33f76f69__0[2U] = (1U & __Vtemp_h3da41009__0[2U]);
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt 
            = (0x3fU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum 
            = vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum;
        __Vtemp_h33f76f69__0[0U] = __Vtemp_hb3a50930__0[0U];
        __Vtemp_h33f76f69__0[1U] = __Vtemp_hb3a50930__0[1U];
        __Vtemp_h33f76f69__0[2U] = (1U & __Vtemp_hb3a50930__0[2U]);
    }
    VL_EXTEND_WW(128,65, __Vtemp_h0d44f1b8__0, __Vtemp_h33f76f69__0);
    VL_EXTEND_WQ(128,64, __Vtemp_hf037b5c0__0, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A);
    VL_EXTEND_WQ(128,64, __Vtemp_hbdee2cf2__0, vlSelf->myCPU__DOT__datapath__DOT__alu_io_B);
    VL_MUL_W(4, __Vtemp_h6d63f16d__0, __Vtemp_hf037b5c0__0, __Vtemp_hbdee2cf2__0);
    VL_EXTEND_WQ(127,64, __Vtemp_h51384543__0, (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                ^ vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    VL_EXTEND_WQ(127,64, __Vtemp_h5162a830__0, (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                | vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    VL_EXTEND_WQ(127,64, __Vtemp_h514c3f2e__0, (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                & vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    VL_EXTEND_WI(127,1, __Vtemp_h375ca612__0, (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                               < vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    VL_EXTEND_WI(127,1, __Vtemp_h3763b123__0, VL_LTS_IQQ(64, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A, vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    VL_EXTEND_WQ(127,64, __Vtemp_hf037b5c0__1, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h212409a7__0, __Vtemp_hf037b5c0__1, (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt));
    VL_EXTEND_WQ(127,64, __Vtemp_h1f641964__0, ((8U 
                                                 == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))
                                                 ? 
                                                (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                 >> (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt))
                                                 : 
                                                ((9U 
                                                  == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))
                                                  ? 
                                                 VL_SHIFTRS_QQI(64,64,6, 
                                                                ((1U 
                                                                  == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A)))
                                                                  : vlSelf->myCPU__DOT__datapath__DOT__alu_io_A), (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))
                                                   ? 
                                                  (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                   - vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))
                                                    ? 
                                                   (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                    + vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)
                                                    : vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)))));
    if ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h51384543__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h51384543__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h51384543__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h51384543__0[3U]);
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h5162a830__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h5162a830__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h5162a830__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h5162a830__0[3U]);
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h514c3f2e__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h514c3f2e__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h514c3f2e__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h514c3f2e__0[3U]);
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h375ca612__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h375ca612__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h375ca612__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h375ca612__0[3U]);
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h3763b123__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h3763b123__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h3763b123__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h3763b123__0[3U]);
    } else if ((6U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h212409a7__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h212409a7__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h212409a7__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h212409a7__0[3U]);
    } else {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h1f641964__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h1f641964__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h1f641964__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h1f641964__0[3U]);
    }
    VL_EXTEND_WW(128,127, __Vtemp_h48201fc5__0, __Vtemp_h0ce33da7__0);
    if ((0xdU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[0U] 
            = __Vtemp_h0d44f1b8__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[1U] 
            = __Vtemp_h0d44f1b8__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[2U] 
            = __Vtemp_h0d44f1b8__0[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[3U] 
            = __Vtemp_h0d44f1b8__0[3U];
    } else if ((0xcU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[0U] 
            = __Vtemp_h6d63f16d__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[1U] 
            = __Vtemp_h6d63f16d__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[2U] 
            = __Vtemp_h6d63f16d__0[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[3U] 
            = __Vtemp_h6d63f16d__0[3U];
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[0U] 
            = __Vtemp_h48201fc5__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[1U] 
            = __Vtemp_h48201fc5__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[2U] 
            = __Vtemp_h48201fc5__0[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[3U] 
            = __Vtemp_h48201fc5__0[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_hf037b5c0__2, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A);
    VL_EXTEND_WQ(128,64, __Vtemp_h7bdfc44d__0, ((1U 
                                                 == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))
                                                 ? (QData)((IData)(
                                                                   VL_MODDIVS_III(32, (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A), (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B))))
                                                 : 
                                                VL_MODDIVS_QQQ(64, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A, vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)));
    VL_EXTEND_WQ(128,64, __Vtemp_h2bda0aa4__0, ((1U 
                                                 == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))
                                                 ? (QData)((IData)(
                                                                   VL_DIV_III(32, (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A), (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B))))
                                                 : 
                                                VL_DIV_QQQ(64, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A, vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)));
    if ((0xaU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U] 
            = __Vtemp_hf037b5c0__2[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U] 
            = __Vtemp_hf037b5c0__2[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[2U] 
            = __Vtemp_hf037b5c0__2[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[3U] 
            = __Vtemp_hf037b5c0__2[3U];
    } else if ((0xeU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U] 
            = __Vtemp_h7bdfc44d__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U] 
            = __Vtemp_h7bdfc44d__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[2U] 
            = __Vtemp_h7bdfc44d__0[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[3U] 
            = __Vtemp_h7bdfc44d__0[3U];
    } else if ((0xfU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U] 
            = __Vtemp_h2bda0aa4__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U] 
            = __Vtemp_h2bda0aa4__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[2U] 
            = __Vtemp_h2bda0aa4__0[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[3U] 
            = __Vtemp_h2bda0aa4__0[3U];
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U] 
            = vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U] 
            = vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[2U] 
            = vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[3U] 
            = vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[3U];
    }
    vlSelf->myCPU__DOT__datapath__DOT__alu_io_out = 
        ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))
          ? (((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U] 
                                >> 0x1fU) ? 0xffffffffU
                                : 0U))) << 0x20U) | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U])))
          : (((QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U])) 
              << 0x20U) | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U]))));
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_load_misalign 
        = ((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
           & ((~ ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                  | (5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)))) 
              & (((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                  | (4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)))
                  ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out)
                  : (((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                      | (0x6003U == (0x707fU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type))))
                      ? (0U != (3U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out)))
                      : ((7U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                         & (0U != (7U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out))))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_store_misalign 
        = ((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type)) 
           & ((3U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type)) 
              & ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))
                  ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out)
                  : ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))
                      ? (0U != (3U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out)))
                      : ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type)) 
                         & (0U != (7U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out))))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc 
        = (1U & ((~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt)) 
                 & ((((~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__valid)) 
                      | (((0U != vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst) 
                          | (0ULL != (3ULL & vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc))) 
                         & (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))) 
                     | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_load_misalign) 
                         | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_store_misalign)) 
                        & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable))) 
                    | (((0x73U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst) 
                        | (0x100073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)) 
                       & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable)))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause 
        = ((0x73U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)
            ? 8ULL : ((0x100073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)
                       ? 3ULL : ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_load_misalign)
                                  ? 4ULL : ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_store_misalign)
                                             ? 6ULL
                                             : ((1U 
                                                 & ((~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__valid)) 
                                                    | (0U 
                                                       != vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst)))
                                                 ? 2ULL
                                                 : (QData)((IData)(
                                                                   (0ULL 
                                                                    != 
                                                                    (3ULL 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc)))))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap 
        = (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc) 
            | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt)) 
           | (((0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst) 
               | (0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)) 
              & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable)));
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_excValue 
        = ((4ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
            ? vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum
            : ((6ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                ? vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum
                : ((3ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                    ? vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc
                    : ((0ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                        ? vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc
                        : (QData)((IData)(((2ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                                            ? vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst
                                            : 0U)))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask 
        = (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt) 
            | (((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst) 
                | (0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)) 
               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable)))
            ? 0xfU : ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc)
                       ? (((8ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause) 
                           | (3ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause))
                           ? 0xfU : (((4ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause) 
                                      | (6ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause))
                                      ? 7U : ((2ULL 
                                               == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                                               ? 3U
                                               : ((0ULL 
                                                   == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                                                   ? 3U
                                                   : 0U))))
                       : 0U));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause 
        = ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt)
            ? (0x8000000000000000ULL | ((1U & (IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                       >> 0xbU)))
                                         ? 0xbULL : 
                                        ((1U & (IData)(
                                                       (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                        >> 3U)))
                                          ? 3ULL : 
                                         ((1U & (IData)(
                                                        (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                         >> 7U)))
                                           ? 7ULL : 
                                          ((1U & (IData)(
                                                         (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                          >> 9U)))
                                            ? 9ULL : 
                                           ((1U & (IData)(
                                                          (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                           >> 1U)))
                                             ? 1ULL
                                             : 5ULL))))))
            : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause);
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS 
        = ((~ ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode) 
               >> 1U)) & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc) 
                          & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data 
                                     >> (0x1fU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause))))));
    vlSelf->myCPU__DOT__datapath__DOT__flush_em = (1U 
                                                   & (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask) 
                                                       | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush)) 
                                                      >> 2U));
    vlSelf->myCPU__DOT__datapath__DOT__flush_mw = (1U 
                                                   & (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask) 
                                                       | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush)) 
                                                      >> 3U));
    vlSelf->myCPU__DOT__datapath__DOT__flush_fd = (1U 
                                                   & ((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask) 
                                                        | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken)) 
                                                       | (IData)(vlSelf->myCPU__DOT__datapath__DOT__jmp_occur)) 
                                                      | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush)));
    vlSelf->myCPU__DOT__datapath__DOT__flush_de = (1U 
                                                   & (((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask) 
                                                         >> 1U) 
                                                        | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken)) 
                                                       | (IData)(vlSelf->myCPU__DOT__datapath__DOT__jmp_occur)) 
                                                      | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush) 
                                                         >> 1U)));
    if (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handIntS) 
         | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS))) {
        vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec 
            = ((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode) 
                 & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                 ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base 
                    + (QData)((IData)((0x3fffffffU 
                                       & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                 : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base) 
               << 2U);
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T = 1U;
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec 
            = ((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode) 
                 & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                 ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base 
                    + (QData)((IData)((0x3fffffffU 
                                       & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                 : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base) 
               << 2U);
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T = 0U;
    }
    if ((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)) {
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_74 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_66 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_68 = 0U;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_69 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sepc_data;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_70 
            = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_int));
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_71 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_code;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_72 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stval_data;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_75 
            = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp));
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_76 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mepc_data;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_77 
            = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_int));
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_78 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_code;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_79 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtval_data;
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_74 
            = ((~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T)) 
               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie));
        if (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T) {
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_66 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_68 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_69 
                = (0xfffffffffffffffcULL & vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc);
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_70 
                = (1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause 
                                 >> 0x3fU)));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_71 
                = (QData)((IData)((0xfU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause))));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_72 
                = vlSelf->myCPU__DOT__datapath__DOT__csr_io_excValue;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_75 
                = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_76 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mepc_data;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_77 
                = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_int));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_78 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_code;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_79 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtval_data;
        } else {
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_66 = 0U;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_68 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_69 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sepc_data;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_70 
                = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_int));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_71 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_code;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_72 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stval_data;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_75 
                = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_76 
                = (0xfffffffffffffffcULL & vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc);
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_77 
                = (1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause 
                                 >> 0x3fU)));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_78 
                = (QData)((IData)((0xfU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause))));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_79 
                = vlSelf->myCPU__DOT__datapath__DOT__csr_io_excValue;
        }
    }
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_67 
        = ((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst) 
           | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T)
               ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie)
               : (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie)));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_81 
        = ((0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst) 
           | ((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)
               ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie)
               : ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T)
                   ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie)
                   : (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie))));
}
