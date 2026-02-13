// Simple LPM_DIVIDE module for Icarus Verilog
module lpm_divide (clock, clken, numer, denom, quotient, remain);
    parameter lpm_widthn = 32;
    parameter lpm_widthd = 32;
    parameter lpm_pipeline = 0;
    parameter lpm_nrepresentation = "UNSIGNED";
    parameter lpm_drepresentation = "UNSIGNED";
    parameter lpm_hint = "UNUSED";

    input               clock;
    input               clken;
    input  [lpm_widthn-1:0] numer;
    input  [lpm_widthd-1:0] denom;
    output [lpm_widthn-1:0] quotient;
    output [lpm_widthd-1:0] remain;

    reg [lpm_widthn-1:0] quotient_reg;
    reg [lpm_widthd-1:0] remain_reg;

    always @(*) begin
        if (denom != 0) begin
            if (lpm_nrepresentation == "SIGNED" && lpm_drepresentation == "SIGNED") begin
                quotient_reg = $signed(numer) / $signed(denom);
                remain_reg = $signed(numer) % $signed(denom);
            end else begin
                quotient_reg = numer / denom;
                remain_reg = numer % denom;
            end
        end else begin
            quotient_reg = {lpm_widthn{1'b1}}; // Max value when dividing by zero
            remain_reg = numer;
        end
    end

    assign quotient = quotient_reg;
    assign remain = remain_reg;

endmodule