#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vf1_fsm* top = new Vf1_fsm;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    //init trace dump
    Verilated::traceEverOn(true);
    top->trace (tfp,99);
    tfp->open("lfsr.vcd");

    //init vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("Lab 3: F1 FSM");

    //init simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = vbdFlag();
    vbdSetMode(1);


    for (i=0; i<10000; i++) {

        //dump variables into VCD file and toggle clock
        for(clk=0; clk<2; clk++) {
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }

        //Send values out to vbuddy
        vbdBar(top->out & 0xFF);   //neopixel strip
        vbdCycle(i);
        //end vbuddy

        top->rst = (i<2);
        top->en = vbdFlag();

        if (Verilated::gotFinish()) exit(0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}