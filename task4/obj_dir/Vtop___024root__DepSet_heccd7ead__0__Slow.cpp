// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__f1_fsm_en = 0U;
    vlSelf->top__DOT__myDelay__DOT__count = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->top__DOT__myLights__DOT__current_state) 
               | (1U == vlSelf->top__DOT__myLights__DOT__current_state)) 
              | (2U == vlSelf->top__DOT__myLights__DOT__current_state)) 
             | (3U == vlSelf->top__DOT__myLights__DOT__current_state)) 
            | (4U == vlSelf->top__DOT__myLights__DOT__current_state)) 
           | (5U == vlSelf->top__DOT__myLights__DOT__current_state)) 
          | (6U == vlSelf->top__DOT__myLights__DOT__current_state)) 
         | (7U == vlSelf->top__DOT__myLights__DOT__current_state))) {
        if ((0U == vlSelf->top__DOT__myLights__DOT__current_state)) {
            vlSelf->data_out = 0U;
            if (vlSelf->trigger) {
                vlSelf->top__DOT__myLights__DOT__next_state = 1U;
            }
            vlSelf->top__DOT__cmd_delay = 0U;
            vlSelf->top__DOT__cmd_seq = 1U;
        } else if ((1U == vlSelf->top__DOT__myLights__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->top__DOT__myLights__DOT__next_state = 2U;
        } else if ((2U == vlSelf->top__DOT__myLights__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->top__DOT__myLights__DOT__next_state = 3U;
        } else if ((3U == vlSelf->top__DOT__myLights__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->top__DOT__myLights__DOT__next_state = 4U;
        } else if ((4U == vlSelf->top__DOT__myLights__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->top__DOT__myLights__DOT__next_state = 5U;
        } else if ((5U == vlSelf->top__DOT__myLights__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->top__DOT__myLights__DOT__next_state = 6U;
        } else if ((6U == vlSelf->top__DOT__myLights__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->top__DOT__myLights__DOT__next_state = 7U;
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->top__DOT__myLights__DOT__next_state = 8U;
        }
    } else {
        if ((8U == vlSelf->top__DOT__myLights__DOT__current_state)) {
            vlSelf->data_out = 0xffU;
            vlSelf->top__DOT__cmd_delay = 1U;
            vlSelf->top__DOT__cmd_seq = 0U;
        } else {
            vlSelf->data_out = 0U;
        }
        vlSelf->top__DOT__myLights__DOT__next_state = 0U;
    }
    vlSelf->top__DOT__myDelay__DOT__next_state = ((0U 
                                                   == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__cmd_delay)
                                                    ? 1U
                                                    : vlSelf->top__DOT__myDelay__DOT__current_state)
                                                   : 
                                                  ((1U 
                                                    == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__myDelay__DOT__count))
                                                     ? 2U
                                                     : vlSelf->top__DOT__myDelay__DOT__current_state)
                                                    : 
                                                   ((2U 
                                                     == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__cmd_delay)
                                                      ? 3U
                                                      : 0U)
                                                     : 
                                                    ((3U 
                                                      == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__cmd_delay)
                                                       ? vlSelf->top__DOT__myDelay__DOT__current_state
                                                       : 0U)
                                                      : 0U))));
    vlSelf->top__DOT__f1_fsm_en = ((IData)(vlSelf->top__DOT__cmd_seq)
                                    ? (IData)(vlSelf->top__DOT__tick)
                                    : ((0U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                                       & ((1U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                                          & (2U == vlSelf->top__DOT__myDelay__DOT__current_state))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->ticklength = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__f1_fsm_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__randGen__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__myDelay__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__myDelay__DOT__current_state = 0;
    vlSelf->top__DOT__myDelay__DOT__next_state = 0;
    vlSelf->top__DOT__myTicker__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__myLights__DOT__current_state = 0;
    vlSelf->top__DOT__myLights__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
