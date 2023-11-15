module f1tick (
    input logic clk,
    input logic rst,
    input logic en,
    input logic N,
    output logic tick,
    output logic [7:0] out
);

clktick clock(
    .N (N),
    .en(en),
    .rst(rst),
    .clk(clk),
    .tick(tick)
);

f1sequence formula(
    .rst(rst),
    .in(tick),
    .clk(clk),
    .out(out)
);

endmodule
