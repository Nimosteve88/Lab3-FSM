#!/bin/sh

#cleanup

rm -rf obj_dir
rm -f  f1tick.vcd

verilator -Wall --cc --trace ./f1tick.sv --exe ./f1tick_tb.cpp

make -j -C obj_dir/ -f Vf1tick.mk Vf1tick

obj_dir/Vf1tick