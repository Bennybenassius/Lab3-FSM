module top #(
    parameter WIDTH = 16
)(
    input   logic               clk,
    input   logic               rst,
    input   logic               trigger,
    input   logic [WIDTH-1:0]   ticklength,
    output  logic [7:0]         data_out
);

logic [6:0]     randNum;
logic           cmd_seq;
logic           cmd_delay;
logic           time_out;
logic           tick;
logic           f1_fsm_en = 0;

lfsr randGen (
    .clk(clk),
    .rst(rst),
    .en(1'b1),
    .data_out(randNum)
);

delay myDelay (
    .clk(clk),
    .rst(rst),
    .trigger(cmd_delay),
    .n(randNum),
    .time_out(time_out)
);

clktick myTicker (
    .clk(clk),
    .rst(rst),
    .en(cmd_seq),
    .N(ticklength),
    .tick(tick)
);

//Implementing the MUX
assign f1_fsm_en = cmd_seq ? tick : time_out;

f1_fsm myLights (
    .clk(clk),
    .rst(rst),
    .en(f1_fsm_en),
    .trigger(trigger),
    .cmd_seq(cmd_seq),
    .cmd_delay(cmd_delay),
    .out(data_out)
);

endmodule
