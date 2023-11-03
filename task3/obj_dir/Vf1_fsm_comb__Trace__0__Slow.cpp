// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_fsm_comb__Syms.h"


VL_ATTR_COLD void Vf1_fsm_comb___024root__trace_init_sub__TOP__0(Vf1_fsm_comb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_comb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_comb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_fms_comb ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->declBit(c+6,"tick", false,-1);
    tracep->pushNamePrefix("myF1_fsm ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->declBus(c+7,"current_state", false,-1, 31,0);
    tracep->declBus(c+8,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myTicker ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBit(c+6,"tick", false,-1);
    tracep->declBus(c+9,"count", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_fsm_comb___024root__trace_init_top(Vf1_fsm_comb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_comb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_comb___024root__trace_init_top\n"); );
    // Body
    Vf1_fsm_comb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_fsm_comb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm_comb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm_comb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_fsm_comb___024root__trace_register(Vf1_fsm_comb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_comb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_comb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_fsm_comb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_fsm_comb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_fsm_comb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_fsm_comb___024root__trace_full_sub_0(Vf1_fsm_comb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_fsm_comb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_comb___024root__trace_full_top_0\n"); );
    // Init
    Vf1_fsm_comb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_fsm_comb___024root*>(voidSelf);
    Vf1_fsm_comb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_fsm_comb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_fsm_comb___024root__trace_full_sub_0(Vf1_fsm_comb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_comb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_comb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullSData(oldp+4,(vlSelf->N),16);
    bufp->fullCData(oldp+5,(vlSelf->out),8);
    bufp->fullBit(oldp+6,(vlSelf->f1_fms_comb__DOT__tick));
    bufp->fullIData(oldp+7,(vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state),32);
    bufp->fullIData(oldp+8,((((((((((0U == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state) 
                                    | (1U == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)) 
                                   | (2U == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)) 
                                  | (3U == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)) 
                                 | (4U == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)) 
                                | (5U == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)) 
                               | (6U == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)) 
                              | (7U == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state))
                              ? ((0U == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)
                                  ? 1U : ((1U == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)
                                           ? 2U : (
                                                   (2U 
                                                    == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)
                                                       ? 6U
                                                       : 
                                                      ((6U 
                                                        == vlSelf->f1_fms_comb__DOT__myF1_fsm__DOT__current_state)
                                                        ? 7U
                                                        : 8U)))))))
                              : 0U)),32);
    bufp->fullSData(oldp+9,(vlSelf->f1_fms_comb__DOT__myTicker__DOT__count),16);
    bufp->fullIData(oldp+10,(0x10U),32);
}
