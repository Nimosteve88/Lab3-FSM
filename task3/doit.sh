#!/bin/sh

#cleanup

rm -rf obj_dir
rm -f  clktick.vcd

verilator -Wall --cc --trace ./clktick.sv --exe ./clktick_tb.cpp

make -j -C obj_dir/ -f Vclktick.mk Vclktick

obj_dir/Vclktick