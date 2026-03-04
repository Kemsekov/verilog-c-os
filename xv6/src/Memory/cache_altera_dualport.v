module cache_altera_dualport #(
    parameter DATA_WIDTH = 8,  // Width of each memory word
    parameter ADDR_WIDTH = 14   // Depth of memory (2^ADDR_WIDTH locations)
) (
    // Port A: Read/Write
    input wire i_clk,
    input wire [DATA_WIDTH-1:0] i_data,
    input wire [ADDR_WIDTH-1:0] i_address,
    input wire i_write,
    input wire i_request,
    output wire [DATA_WIDTH-1:0] o_data,
    output reg o_data_DV,

    // Port B: Read-Only
    input wire [ADDR_WIDTH-1:0] i_address_b,
    output wire [DATA_WIDTH-1:0] o_data_b
);

// Write enable for Port A
wire w_wr = i_write & i_request;
reg [7:0] w_data = 8'b0;
assign o_data = w_data;

// Instantiate the dual-port RAM
altsyncram altsyncram_component (
    // Port A: Read/Write
    .address_a(i_address),    // Address input for Port A
    .clock0(i_clk),             // Clock for Port A
    .data_a(i_data),          // Data input for Port A
    .wren_a(w_wr),            // Write enable for Port A
    .rden_a(1'b1),              // Read enable for Port A (always enabled)

    // Port B: Read-Only
    .address_b(i_address_b),    // Address input for Port B
    .clock1(i_clk),             // Clock for Port B
    .data_b({DATA_WIDTH{1'b0}}),// Data input for Port B (unused)
    .wren_b(1'b0),              // Write enable for Port B (disabled)
    .q_b(o_data_b),             // Data output for Port B
    .rden_b(1'b1),              // Read enable for Port B (always enabled)

    // Unused signals
    .clocken0(1'b1),            // Clock enable for Port A (always enabled)
    .clocken1(1'b1),            // Clock enable for Port B (always enabled)
    .clocken2(1'b0),            // Unused clock enable
    .clocken3(1'b0),            // Unused clock enable
    .aclr0(1'b0),               // Unused asynchronous clear for Port A
    .aclr1(1'b0),               // Unused asynchronous clear for Port B
    .byteena_a(1'b1),           // Byte enable for Port A (always enabled)
    .byteena_b(1'b1),           // Unused byte enable for Port B
    .addressstall_a(1'b0),      // Unused address stall for Port A
    .addressstall_b(1'b0),      // Unused address stall for Port B
    .eccstatus()                // Unused ECC status
);

// Set the parameters for the RAM
defparam altsyncram_component.clock_enable_input_a = "BYPASS";
defparam altsyncram_component.clock_enable_output_a = "BYPASS";
defparam altsyncram_component.power_up_uninitialized = "FALSE";
defparam altsyncram_component.intended_device_family = "Cyclone III";
defparam altsyncram_component.lpm_type = "altsyncram";
defparam altsyncram_component.operation_mode = "DUAL_PORT"; // Dual-port mode
defparam altsyncram_component.outdata_aclr_a = "NONE";
defparam altsyncram_component.outdata_reg_a = "CLOCK0";
defparam altsyncram_component.outdata_aclr_b = "NONE";
defparam altsyncram_component.outdata_reg_b = "CLOCK1";
defparam altsyncram_component.read_during_write_mode_port_a = "NEW_DATA_NO_NBE_READ";
defparam altsyncram_component.read_during_write_mode_port_b = "NEW_DATA_NO_NBE_READ";
defparam altsyncram_component.read_during_write_mode_mixed_ports = "OLD_DATA";
defparam altsyncram_component.widthad_a = ADDR_WIDTH;
defparam altsyncram_component.width_a = DATA_WIDTH;
defparam altsyncram_component.widthad_b = ADDR_WIDTH;
defparam altsyncram_component.width_b = DATA_WIDTH;
defparam altsyncram_component.width_byteena_a = 1;

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Sequential Logic for Data Valid Signals
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

// Port A Data Valid
always @(posedge i_clk) begin
    o_data_DV <= 1'b0;
    if (i_request) o_data_DV <= 1'b1;
end

endmodule

