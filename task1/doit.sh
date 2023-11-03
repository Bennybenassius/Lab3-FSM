rm -rf obj_dir
rm -f top.vcd

verilator -Wall --cc --trace lfsr.sv --exe lfsr_tb.cpp

make -j -C obj_dir/ -f Vlfsr.mk Vlfsr

obj_dir/Vlfsr