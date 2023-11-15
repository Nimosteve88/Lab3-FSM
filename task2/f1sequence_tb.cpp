#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1sequence.h"

#include "vbuddy.cpp"     // include vbuddy code

#define MAX_SIM_CYC 1000000
int main(int argc, char **argv, char **env) {
  int simcyc;
  int tick;  

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vf1sequence* top = new Vf1sequence;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("f1sequence.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T2: F1Sequence");
  //vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 0;
  //top->in = vbdFlag();
  //top->data_in = // Random number //;

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    top->rst = (simcyc < 2);
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }
    
    //top->data_in = vbdValue();
    top->in = vbdFlag();
    // plot ROM output and print cycle count
    //vbdHex(1, top->data_out & 0xF);
    vbdBar(top->out); //data out has been masked
    vbdCycle(simcyc);

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);                // ... exit if finish OR 'q' pressed
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
