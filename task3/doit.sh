rm -rf obj_dir
rm -f Vf1_fsm_comb.vcd

verilator -Wall --cc --trace f1_fsm_comb.sv --exe f1_fsm_comb_tb.cpp

make -j -C obj_dir/ -f Vf1_fsm_comb.mk Vf1_fsm_comb

obj_dir/Vf1_fsm_comb