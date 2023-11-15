module f1sequence(
    input logic clk,
    input logic rst,
    input logic in,
    output logic [7:0] out
);

    typedef enum {S0,S1,S2,S3,S4,S5,S6,S7,S8  } f1sequence;
    f1sequence current_state, next_state;

    always_ff @(posedge clk) 
        if(rst)     current_state <= S0;
        else        current_state <= next_state;    
    

    always_comb 
        case (current_state)
            S0: if (in == 1'b1) next_state = S1;
            S1: if (in == 1'b1) next_state = S2;
            S2: if (in == 1'b1) next_state = S3;
            S3: if (in == 1'b1) next_state = S4;
            S4: if (in == 1'b1) next_state = S5;
            S5: if (in == 1'b1) next_state = S6;
            S6: if (in == 1'b1) next_state = S7;
            S7: if (in == 1'b1) next_state = S8;
            S8: if (in == 1'b1) next_state = S0;

        endcase
    always_comb
        case (current_state)
            S0: out = 8'b0;
            S1: out = 8'b1;
            S2: out = 8'b1;
            S3: out = 8'b111;
            S4: out = 8'b1111;
            S5: out = 8'b11111;
            S6: out = 8'b111111;
            S7: out = 8'b1111111;
            S8: out = 8'b11111111;
            default: out = 8'b0;
        endcase
    
endmodule
