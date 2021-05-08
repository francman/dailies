module switches_to_leds_top(
    input [0:3] SW,
    output [0:9] LEDR);

assign LEDR[0] = SW[0];
assign LEDR[1] = SW[1];
assign LEDR[2] = SW[2];
assign LEDR[3] = SW[3];

assign LEDR[4:9] = 8'h00;

endmodule //switches_to_leds