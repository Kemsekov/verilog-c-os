module seven_segment_digit_interface (
    // Input ports
    input x3,
    input x2,
    input x1,
    input x0,
    input dot,
    input en,

    // Output ports
    output reg a,
    output reg b,
    output reg c,
    output reg d,
    output reg e,
    output reg f,
    output reg g,
    output dp
);

    reg [4:0] bcat;

    always @(*) begin
        bcat = {en, x3, x2, x1, x0};

        case (bcat)
            5'b10000: {a, b, c, d, e, f, g} = 7'b0000001;
            5'b10001: {a, b, c, d, e, f, g} = 7'b1001111;
            5'b10010: {a, b, c, d, e, f, g} = 7'b0010010;
            5'b10011: {a, b, c, d, e, f, g} = 7'b0000110;
            5'b10100: {a, b, c, d, e, f, g} = 7'b1001100;
            5'b10101: {a, b, c, d, e, f, g} = 7'b0100100;
            5'b10110: {a, b, c, d, e, f, g} = 7'b0100000;
            5'b10111: {a, b, c, d, e, f, g} = 7'b0001111;
            5'b11000: {a, b, c, d, e, f, g} = 7'b0000000;
            5'b11001: {a, b, c, d, e, f, g} = 7'b0000100;
            5'b11010: {a, b, c, d, e, f, g} = 7'b0001000;
            5'b11011: {a, b, c, d, e, f, g} = 7'b1100000;
            5'b11100: {a, b, c, d, e, f, g} = 7'b0110001;
            5'b11101: {a, b, c, d, e, f, g} = 7'b1000010;
            5'b11110: {a, b, c, d, e, f, g} = 7'b0110000;
            5'b11111: {a, b, c, d, e, f, g} = 7'b0111000;
            default:  {a, b, c, d, e, f, g} = 7'b1111111;
        endcase
    end

    assign dp = ~(en & dot);

endmodule
