// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmyCPU__Syms.h"


void VmyCPU___024root__trace_chg_sub_0(VmyCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VmyCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_chg_top_0\n"); );
    // Init
    VmyCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmyCPU___024root*>(voidSelf);
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VmyCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VmyCPU___024root__trace_chg_sub_0(VmyCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst),32);
        bufp->chgCData(oldp+1,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x67U 
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
        bufp->chgBit(oldp+2,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                              & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                 & ((0x6fU != (0x7fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                    & ((0x67U == (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                       | ((0x63U != 
                                           (0x707fU 
                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                          & ((0x1063U 
                                              != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                             & ((0x4063U 
                                                 != 
                                                 (0x707fU 
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
        bufp->chgBit(oldp+3,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                              & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                 & ((0x6fU != (0x7fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                    & ((0x67U != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                       & ((0x63U != 
                                           (0x707fU 
                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                          & ((0x1063U 
                                              != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                             & ((0x4063U 
                                                 != 
                                                 (0x707fU 
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
        bufp->chgCData(oldp+4,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
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
        bufp->chgCData(oldp+5,(vlSelf->myCPU__DOT__control_io_imm_sel),3);
        bufp->chgCData(oldp+6,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
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
        bufp->chgCData(oldp+7,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
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
                                                      : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_676)))))))),3);
        bufp->chgCData(oldp+8,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_748)))),3);
        bufp->chgCData(oldp+9,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
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
        bufp->chgBit(oldp+10,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               | ((0x17U == (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     | ((0x67U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        | ((0x63U != 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x1063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x4063U 
                                                  != 
                                                  (0x707fU 
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
        bufp->chgCData(oldp+11,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                  ? 0xbU : ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                             ? 0U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                              ? 0U : 
                                             ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                               ? 0U
                                               : ((0x63U 
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
        bufp->chgBit(oldp+12,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
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
                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947)))))))))));
        bufp->chgCData(oldp+13,(vlSelf->myCPU__DOT__control_io_csr_cmd),3);
        bufp->chgBit(oldp+14,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               & ((0x17U != (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  & ((0x6fU != (0x7fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     & ((0x67U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        & ((0x63U != 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x1063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x4063U 
                                                  != 
                                                  (0x707fU 
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
        bufp->chgBit(oldp+15,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               & ((0x17U != (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  & ((0x6fU == (0x7fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     | ((0x67U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        | ((0x63U != 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x1063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x4063U 
                                                  != 
                                                  (0x707fU 
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
        bufp->chgQData(oldp+16,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc),64);
        bufp->chgIData(oldp+18,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst),32);
        bufp->chgBit(oldp+19,(vlSelf->myCPU__DOT__datapath__DOT__started));
        bufp->chgCData(oldp+20,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                  ? 0xbU : ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                             ? 0U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                              ? 0U : 
                                             ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                               ? 0U
                                               : ((0x63U 
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
        bufp->chgCData(oldp+21,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                  ? 0U : ((0x17U == 
                                           (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                           ? 0U : (
                                                   (0x6fU 
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
        bufp->chgQData(oldp+22,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A),64);
        bufp->chgQData(oldp+24,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B),64);
        bufp->chgCData(oldp+26,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type),2);
        bufp->chgCData(oldp+27,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op),4);
        bufp->chgQData(oldp+28,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out),64);
        bufp->chgQData(oldp+30,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum),64);
        bufp->chgQData(oldp+32,(((6U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
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
                                          << 0x35U) 
                                         | vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm)
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
        bufp->chgQData(oldp+34,(vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1),64);
        bufp->chgQData(oldp+36,(vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2),64);
        bufp->chgCData(oldp+38,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type),3);
        bufp->chgBit(oldp+39,((((((((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
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
        bufp->chgBit(oldp+40,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wen));
        bufp->chgCData(oldp+41,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_dest),5);
        bufp->chgQData(oldp+42,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wdata),64);
        bufp->chgCData(oldp+44,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+45,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                          >> 0x14U))),5);
        bufp->chgQData(oldp+46,(((0U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0xfU)))
                                  ? 0ULL : ((0x1fU 
                                             == (0x1fU 
                                                 & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                    >> 0xfU)))
                                             ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_31
                                             : ((0x1eU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_30
                                                 : 
                                                ((0x1dU 
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
        bufp->chgQData(oldp+48,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_rdata_1),64);
        bufp->chgQData(oldp+50,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_1),64);
        bufp->chgQData(oldp+52,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_2),64);
        bufp->chgQData(oldp+54,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_3),64);
        bufp->chgQData(oldp+56,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_4),64);
        bufp->chgQData(oldp+58,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_5),64);
        bufp->chgQData(oldp+60,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_6),64);
        bufp->chgQData(oldp+62,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_7),64);
        bufp->chgQData(oldp+64,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_8),64);
        bufp->chgQData(oldp+66,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_9),64);
        bufp->chgQData(oldp+68,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_10),64);
        bufp->chgQData(oldp+70,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_11),64);
        bufp->chgQData(oldp+72,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_12),64);
        bufp->chgQData(oldp+74,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_13),64);
        bufp->chgQData(oldp+76,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_14),64);
        bufp->chgQData(oldp+78,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_15),64);
        bufp->chgQData(oldp+80,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_16),64);
        bufp->chgQData(oldp+82,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_17),64);
        bufp->chgQData(oldp+84,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_18),64);
        bufp->chgQData(oldp+86,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_19),64);
        bufp->chgQData(oldp+88,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_20),64);
        bufp->chgQData(oldp+90,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_21),64);
        bufp->chgQData(oldp+92,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_22),64);
        bufp->chgQData(oldp+94,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_23),64);
        bufp->chgQData(oldp+96,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_24),64);
        bufp->chgQData(oldp+98,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_25),64);
        bufp->chgQData(oldp+100,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_26),64);
        bufp->chgQData(oldp+102,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_27),64);
        bufp->chgQData(oldp+104,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_28),64);
        bufp->chgQData(oldp+106,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_29),64);
        bufp->chgQData(oldp+108,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_30),64);
        bufp->chgQData(oldp+110,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_31),64);
        VL_EXTEND_WQ(65,64, __Vtemp_hf0c0d54e__0, vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec);
        __Vtemp_h5e66f7d5__0[0U] = 4U;
        __Vtemp_h5e66f7d5__0[1U] = 0U;
        __Vtemp_h5e66f7d5__0[2U] = 0U;
        VL_ADD_W(3, __Vtemp_hd1bbea4b__0, __Vtemp_h5e66f7d5__0, vlSelf->myCPU__DOT__datapath__DOT__pc);
        bufp->chgQData(oldp+112,((((QData)((IData)(
                                                   ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap)
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
        bufp->chgQData(oldp+114,(vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__delay),64);
        VL_EXTEND_WQ(127,64, __Vtemp_h645e6126__0, vlSelf->myCPU__DOT__datapath__DOT__src2_data);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_h281ce75a__0, __Vtemp_h645e6126__0, 
                      (0x38U & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out) 
                                << 3U)));
        bufp->chgQData(oldp+116,((((QData)((IData)(
                                                   __Vtemp_h281ce75a__0[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               __Vtemp_h281ce75a__0[0U])))),64);
        bufp->chgCData(oldp+118,((0xffU & ((0xffU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask))
                                            ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask)
                                            : (0x7fffU 
                                               & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out))))))),8);
        bufp->chgQData(oldp+119,(vlSelf->myCPU__DOT__datapath__DOT__dmem__DOT__delay),64);
        bufp->chgBit(oldp+121,((((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                                 | (0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))) 
                                & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable))));
        bufp->chgBit(oldp+122,(((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type)) 
                                & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable))));
        bufp->chgCData(oldp+123,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask),4);
        bufp->chgCData(oldp+124,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op),3);
        bufp->chgSData(oldp+125,((vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+126,(((0xc00U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                              >> 0x14U))
                                   ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcycle_data
                                   : ((0xc02U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                  >> 0x14U))
                                       ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data
                                       : ((0x100U == 
                                           (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
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
                                                   ? 
                                                  ((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base 
                                                    << 2U) 
                                                   | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode)))
                                                   : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_96)))))),64);
        bufp->chgCData(oldp+128,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op),3);
        bufp->chgSData(oldp+129,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_addr),12);
        bufp->chgQData(oldp+130,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_data),64);
        bufp->chgBit(oldp+132,((0x13U != vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
        bufp->chgIData(oldp+133,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst),32);
        bufp->chgCData(oldp+134,(((0x37U == (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                   ? 0U : ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                            ? 0U : 
                                           ((0x6fU 
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
                                                    & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947)))))))))),2);
        bufp->chgBit(oldp+135,((0ULL != (3ULL & vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc))));
        bufp->chgBit(oldp+136,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_load_misalign));
        bufp->chgBit(oldp+137,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_store_misalign));
        bufp->chgBit(oldp+138,((0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
        bufp->chgBit(oldp+139,((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
        bufp->chgQData(oldp+140,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc),64);
        bufp->chgQData(oldp+142,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_excValue),64);
        bufp->chgQData(oldp+144,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec),64);
        bufp->chgBit(oldp+146,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap));
        bufp->chgBit(oldp+147,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable));
        bufp->chgBit(oldp+148,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable));
        bufp->chgBit(oldp+149,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable));
        bufp->chgQData(oldp+150,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_pc),64);
        bufp->chgIData(oldp+152,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst),32);
        bufp->chgQData(oldp+153,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_imm),64);
        bufp->chgQData(oldp+155,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_rs1),64);
        bufp->chgQData(oldp+157,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr),64);
        bufp->chgQData(oldp+159,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_rs2),64);
        bufp->chgQData(oldp+161,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr),64);
        bufp->chgQData(oldp+163,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_read_data),64);
        bufp->chgCData(oldp+165,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_op),3);
        bufp->chgSData(oldp+166,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_addr),12);
        bufp->chgQData(oldp+167,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_data),64);
        bufp->chgCData(oldp+169,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_dest),5);
        bufp->chgBit(oldp+170,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_A_sel));
        bufp->chgBit(oldp+171,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_B_sel));
        bufp->chgCData(oldp+172,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc_sel),2);
        bufp->chgCData(oldp+173,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type),3);
        bufp->chgCData(oldp+174,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type),3);
        bufp->chgCData(oldp+175,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wb_sel),2);
        bufp->chgBit(oldp+176,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wb_en));
        bufp->chgQData(oldp+177,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out),64);
        bufp->chgQData(oldp+179,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_read_data),64);
        bufp->chgCData(oldp+181,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_op),3);
        bufp->chgSData(oldp+182,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_addr),12);
        bufp->chgQData(oldp+183,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_data),64);
        bufp->chgCData(oldp+185,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type),3);
        bufp->chgCData(oldp+186,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_sel),2);
        bufp->chgBit(oldp+187,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en));
        bufp->chgCData(oldp+188,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest),5);
        bufp->chgQData(oldp+189,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_pc),64);
        bufp->chgIData(oldp+191,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_inst),32);
        bufp->chgBit(oldp+192,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable));
        bufp->chgQData(oldp+193,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_load_data),64);
        bufp->chgQData(oldp+195,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_alu_out),64);
        bufp->chgQData(oldp+197,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_read_data),64);
        bufp->chgCData(oldp+199,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel),2);
        bufp->chgBit(oldp+200,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_en));
        bufp->chgCData(oldp+201,(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush),4);
        bufp->chgBit(oldp+202,(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken));
        bufp->chgBit(oldp+203,(vlSelf->myCPU__DOT__datapath__DOT__jmp_occur));
        bufp->chgBit(oldp+204,(vlSelf->myCPU__DOT__datapath__DOT__flush_fd));
        bufp->chgBit(oldp+205,(vlSelf->myCPU__DOT__datapath__DOT__flush_de));
        bufp->chgBit(oldp+206,(vlSelf->myCPU__DOT__datapath__DOT__flush_em));
        bufp->chgBit(oldp+207,(vlSelf->myCPU__DOT__datapath__DOT__flush_mw));
        bufp->chgBit(oldp+208,((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush))));
        bufp->chgWData(oldp+209,(vlSelf->myCPU__DOT__datapath__DOT__pc),65);
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
                                         >> 0x1fU) 
                                        | ((IData)(
                                                   ((vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                                                     >> 1U) 
                                                    >> 0x20U)) 
                                           << 1U));
            __Vtemp_hf55afe87__0[2U] = (1U & ((IData)(
                                                      ((vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                                                        >> 1U) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        } else {
            __Vtemp_hf55afe87__0[0U] = __Vtemp_h06359a0a__0[0U];
            __Vtemp_hf55afe87__0[1U] = __Vtemp_h06359a0a__0[1U];
            __Vtemp_hf55afe87__0[2U] = (1U & __Vtemp_h06359a0a__0[2U]);
        }
        bufp->chgWData(oldp+212,(__Vtemp_hf55afe87__0),65);
        bufp->chgBit(oldp+215,(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst));
        bufp->chgIData(oldp+216,((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__started) 
                                     | (IData)(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst)) 
                                    | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken)) 
                                   | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap))
                                   ? 0x13U : ((4U & 
                                               vlSelf->myCPU__DOT__datapath__DOT__pc[0U])
                                               ? (IData)(
                                                         (vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__delay 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__delay)))),32);
        bufp->chgCData(oldp+217,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+218,((0x1fU & ((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__started) 
                                               | (IData)(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst)) 
                                              | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken)) 
                                             | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap))
                                             ? 0x13U
                                             : ((4U 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__pc[0U])
                                                 ? (IData)(
                                                           (vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__delay 
                                                            >> 0x20U))
                                                 : (IData)(vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__delay))) 
                                           >> 7U))),5);
        bufp->chgQData(oldp+219,(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard),64);
        bufp->chgQData(oldp+221,(((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                                   ? vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_5
                                   : ((6U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                                       ? (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard))
                                       : vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_33))),64);
        bufp->chgQData(oldp+223,((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable) 
                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en)) 
                                    & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                                       == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))) 
                                   & (0ULL != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr))
                                   ? vlSelf->myCPU__DOT__datapath__DOT___GEN_54
                                   : vlSelf->myCPU__DOT__datapath__DOT___GEN_56)),64);
        bufp->chgQData(oldp+225,(vlSelf->myCPU__DOT__datapath__DOT__src2_data),64);
        bufp->chgQData(oldp+227,(vlSelf->myCPU__DOT__datapath__DOT__A_data),64);
        bufp->chgQData(oldp+229,(vlSelf->myCPU__DOT__datapath__DOT__B_data),64);
        bufp->chgCData(oldp+231,(vlSelf->myCPU__DOT__datapath__DOT__st_mask),8);
        bufp->chgCData(oldp+232,(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt),6);
        bufp->chgQData(oldp+233,(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum),64);
        bufp->chgQData(oldp+235,((((QData)((IData)(
                                                   vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U])))),64);
        bufp->chgBit(oldp+237,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq));
        bufp->chgBit(oldp+238,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq)))));
        bufp->chgBit(oldp+239,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt));
        bufp->chgBit(oldp+240,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt)))));
        bufp->chgBit(oldp+241,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu));
        bufp->chgBit(oldp+242,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu)))));
        bufp->chgCData(oldp+243,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode),2);
        bufp->chgBit(oldp+244,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sum));
        bufp->chgCData(oldp+245,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+246,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp));
        bufp->chgBit(oldp+247,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie));
        bufp->chgBit(oldp+248,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie));
        bufp->chgBit(oldp+249,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie));
        bufp->chgBit(oldp+250,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie));
        bufp->chgQData(oldp+251,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data),64);
        bufp->chgQData(oldp+253,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data),64);
        bufp->chgBit(oldp+255,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_meie));
        bufp->chgBit(oldp+256,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_seie));
        bufp->chgBit(oldp+257,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_mtie));
        bufp->chgBit(oldp+258,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_stie));
        bufp->chgBit(oldp+259,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_msie));
        bufp->chgBit(oldp+260,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_ssie));
        bufp->chgQData(oldp+261,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base),62);
        bufp->chgCData(oldp+263,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode),2);
        bufp->chgQData(oldp+264,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mscratch_data),64);
        bufp->chgQData(oldp+266,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mepc_data),64);
        bufp->chgBit(oldp+268,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_int));
        bufp->chgQData(oldp+269,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_code),63);
        bufp->chgQData(oldp+271,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtval_data),64);
        bufp->chgBit(oldp+273,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_meip));
        bufp->chgBit(oldp+274,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_seip));
        bufp->chgBit(oldp+275,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_stip));
        bufp->chgBit(oldp+276,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_msip));
        bufp->chgBit(oldp+277,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_ssip));
        bufp->chgQData(oldp+278,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcycle_data),64);
        bufp->chgQData(oldp+280,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data),64);
        bufp->chgCData(oldp+282,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie) 
                                   << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie) 
                                              << 3U) 
                                             | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie) 
                                                << 1U)))),6);
        bufp->chgIData(oldp+283,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp) 
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
        bufp->chgBit(oldp+284,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+285,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                              >> 8U)))));
        bufp->chgBit(oldp+286,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                              >> 5U)))));
        bufp->chgBit(oldp+287,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                              >> 1U)))));
        bufp->chgCData(oldp+288,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_stie) 
                                   << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_msie) 
                                              << 3U) 
                                             | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_ssie) 
                                                << 1U)))),6);
        bufp->chgCData(oldp+289,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_stip) 
                                   << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_msip) 
                                              << 3U) 
                                             | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_ssip) 
                                                << 1U)))),6);
        bufp->chgQData(oldp+290,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base),62);
        bufp->chgCData(oldp+292,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode),2);
        bufp->chgQData(oldp+293,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sscratch_data),64);
        bufp->chgQData(oldp+295,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sepc_data),64);
        bufp->chgBit(oldp+297,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_int));
        bufp->chgQData(oldp+298,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_code),63);
        bufp->chgQData(oldp+300,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stval_data),64);
        bufp->chgSData(oldp+302,(((0x100U & ((IData)(
                                                     (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                      >> 8U)) 
                                             << 8U)) 
                                  | ((0x20U & ((IData)(
                                                       (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                        >> 5U)) 
                                               << 5U)) 
                                     | (2U & ((IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                       >> 1U)) 
                                              << 1U))))),13);
        bufp->chgBit(oldp+303,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+304,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                              >> 7U)))));
        bufp->chgBit(oldp+305,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                              >> 3U)))));
        bufp->chgCData(oldp+306,(((0x20U & ((IData)(
                                                    (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                     >> 5U)) 
                                            << 5U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                     >> 3U)) 
                                            << 3U)) 
                                     | (2U & ((IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                       >> 1U)) 
                                              << 1U))))),6);
        bufp->chgBit(oldp+307,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                              >> 1U)))));
        bufp->chgBit(oldp+308,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                              >> 5U)))));
        bufp->chgBit(oldp+309,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                              >> 9U)))));
        bufp->chgBit(oldp+310,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable));
        bufp->chgBit(oldp+311,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable));
        bufp->chgBit(oldp+312,((1U & (((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                        ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                        : ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                            ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                            : ((3U 
                                                == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                                ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                                    ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable)
                                                    : 
                                                   ((1U 
                                                     != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op)) 
                                                    | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable)))))) 
                                      | (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))))));
        bufp->chgBit(oldp+313,((1U & ((((3U & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                               >> 0x1cU)) 
                                        <= (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                                       & (((0x37U == 
                                            (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                            ? 0U : 
                                           ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                             ? 0U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                              ? 0U : 
                                             ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                               ? 0U
                                               : ((0x63U 
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
        bufp->chgBit(oldp+314,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__valid));
        bufp->chgBit(oldp+315,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeEn));
        bufp->chgQData(oldp+316,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData),64);
        bufp->chgQData(oldp+318,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS),64);
        bufp->chgQData(oldp+320,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM),64);
        bufp->chgBit(oldp+322,((((1U > (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                                 | ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                                    & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie))) 
                                & (0U != (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                          & vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data)))));
        bufp->chgBit(oldp+323,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasIntM));
        bufp->chgBit(oldp+324,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt));
        bufp->chgBit(oldp+325,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handIntS));
        bufp->chgBit(oldp+326,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc));
        bufp->chgQData(oldp+327,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause),63);
        bufp->chgBit(oldp+329,(((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc) 
                                & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data 
                                           >> (0x1fU 
                                               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)))))));
        bufp->chgBit(oldp+330,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS));
        bufp->chgQData(oldp+331,(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                 >> 9U)))
                                   ? 9ULL : ((1U & (IData)(
                                                           (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                            >> 1U)))
                                              ? 1ULL
                                              : 5ULL))),63);
        bufp->chgQData(oldp+333,(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                 >> 0xbU)))
                                   ? 0xbULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                           >> 3U)))
                                                ? 3ULL
                                                : (
                                                   (1U 
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
        bufp->chgQData(oldp+335,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause),64);
        bufp->chgQData(oldp+337,(((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode) 
                                    & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                                    ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base 
                                       + (QData)((IData)(
                                                         (0x3fffffffU 
                                                          & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                                    : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base) 
                                  << 2U)),64);
        bufp->chgQData(oldp+339,(((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode) 
                                    & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                                    ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base 
                                       + (QData)((IData)(
                                                         (0x3fffffffU 
                                                          & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                                    : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base) 
                                  << 2U)),64);
        bufp->chgCData(oldp+341,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+342,(((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS)
                                   ? 1U : 3U)),2);
        bufp->chgBit(oldp+343,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+344,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                              >> 8U)))));
        bufp->chgBit(oldp+345,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                              >> 5U)))));
        bufp->chgBit(oldp+346,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                              >> 1U)))));
        bufp->chgSData(oldp+347,(((0x100U & ((IData)(
                                                     (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                      >> 8U)) 
                                             << 8U)) 
                                  | ((0x20U & ((IData)(
                                                       (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                        >> 5U)) 
                                               << 5U)) 
                                     | (2U & ((IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                       >> 1U)) 
                                              << 1U))))),13);
        bufp->chgBit(oldp+348,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                              >> 9U)))));
        bufp->chgCData(oldp+349,(((0x20U & ((IData)(
                                                    (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                     >> 5U)) 
                                            << 5U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                     >> 3U)) 
                                            << 3U)) 
                                     | (2U & ((IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                       >> 1U)) 
                                              << 1U))))),6);
        bufp->chgQData(oldp+350,(vlSelf->myCPU__DOT__datapath__DOT__dmem__DOT__tmp_data),64);
        bufp->chgQData(oldp+352,(vlSelf->myCPU__DOT__datapath__DOT__imem__DOT__tmp_data),64);
        bufp->chgBit(oldp+354,((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                >> 0x1fU)));
        bufp->chgSData(oldp+355,((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+356,(vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Iimm),44);
        bufp->chgSData(oldp+358,(((0xfe0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                              >> 7U)))),12);
        bufp->chgQData(oldp+359,((((QData)((IData)(
                                                   ((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
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
        bufp->chgSData(oldp+361,(((0x1000U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 7U)))))),13);
        bufp->chgQData(oldp+362,((((QData)((IData)(
                                                   ((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
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
        bufp->chgIData(oldp+364,((0xfffff000U & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)),32);
        bufp->chgQData(oldp+365,((((QData)((IData)(
                                                   ((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0x1fU)
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))),64);
        bufp->chgIData(oldp+367,(((0x100000U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst) 
                                     | ((0x800U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                   >> 9U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                 >> 0x14U))))))),21);
        bufp->chgQData(oldp+368,(vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm),53);
        bufp->chgCData(oldp+370,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                           >> 0xfU))),6);
        bufp->chgQData(oldp+371,((QData)((IData)((0x1fU 
                                                  & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0xfU))))),38);
        bufp->chgQData(oldp+373,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_0),64);
    }
    bufp->chgBit(oldp+375,(vlSelf->clock));
    bufp->chgBit(oldp+376,(vlSelf->reset));
    bufp->chgQData(oldp+377,(vlSelf->io_pc_debug),64);
    bufp->chgIData(oldp+379,(vlSelf->io_inst),32);
    bufp->chgBit(oldp+380,(vlSelf->io_start));
}

void VmyCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_cleanup\n"); );
    // Init
    VmyCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmyCPU___024root*>(voidSelf);
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
