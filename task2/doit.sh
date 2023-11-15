#!/bin/sh

#cleanup

rm -rf obj_dir
rm -f  f1sequence.vcd

verilator -Wall --cc --trace ./f1sequence.sv --exe ./f1sequence_tb.cpp

make -j -C obj_dir/ -f Vf1sequence.mk Vf1sequence

obj_dir/Vf1sequence
