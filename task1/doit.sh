#!/bin/sh

#cleanup

rm -rf obj_dir
rm -f ifsr.vcd

verilator -Wall --cc --trace ./ifsr.sv --exe ./ifsr_tb.cpp

make -j -C obj_dir/ -f Vifsr.mk Vifsr

obj_dir/Vifsr
