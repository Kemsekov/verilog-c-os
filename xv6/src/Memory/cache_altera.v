module cache_altera #(
    parameter DATA_WIDTH = 8,  // Width of each memory word
    parameter ADDR_WIDTH = 13   // Depth of memory (2^ADDR_WIDTH locations)
) (
  input wire i_clk,
  input wire [DATA_WIDTH-1:0] i_data,
  input wire [ADDR_WIDTH-1:0] i_address,
  input wire i_write,
  input wire i_request,
  output wire [DATA_WIDTH-1:0] o_data,
  output reg o_data_DV
);

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  MEMORY
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

wire w_wr = i_write & i_request;

altsyncram altsyncram_component (
  .address_a(i_address),    // Address input
  .clock0(i_clk),                // Input clock
  .data_a(i_data),               // Data input
  .wren_a(w_wr),  // Write enable
  .q_a(o_data),              // Data output (connected to a wire)
  .clock1(i_clk),             // Output clock
  .wren_b(1'b0),                 // Unused write enable for port B
  .rden_a(1'b1),                 // Read enable for port A (always enabled)
  .rden_b(1'b0),                 // Unused read enable for port B
  .data_b(i_data),                 // Unused data input for port B
  .address_b(i_address),             // Unused address input for port B
  .clocken0(1'b1),               // Clock enable for port A (always enabled)
  .clocken1(1'b0),               // Unused clock enable for port B
  .clocken2(1'b0),               // Unused clock enable
  .clocken3(1'b0),               // Unused clock enable
  .aclr0(1'b0),                  // Unused asynchronous clear for port A
  .aclr1(1'b0),                  // Unused asynchronous clear for port B
  .byteena_a(1'b1),              // Byte enable for port A (always enabled)
  .byteena_b(1'b0),              // Unused byte enable for port B
  .addressstall_a(1'b0),         // Unused address stall for port A
  .addressstall_b(1'b0),         // Unused address stall for port B
  .q_b(),                        // Unused data output for port B
  .eccstatus()                   // Unused ECC status
);

// Set the parameters for the RAM
defparam altsyncram_component.clock_enable_input_a = "BYPASS";
defparam altsyncram_component.clock_enable_output_a = "BYPASS";
defparam altsyncram_component.power_up_uninitialized = "FALSE";
defparam altsyncram_component.intended_device_family = "Cyclone III";
defparam altsyncram_component.lpm_type = "altsyncram";
defparam altsyncram_component.operation_mode = "SINGLE_PORT";
defparam altsyncram_component.outdata_aclr_a = "NONE";
defparam altsyncram_component.outdata_reg_a = "CLOCK1";
defparam altsyncram_component.power_up_uninitialized = "FALSE";
defparam altsyncram_component.read_during_write_mode_port_a = "NEW_DATA_NO_NBE_READ";
defparam altsyncram_component.widthad_a = ADDR_WIDTH;
defparam altsyncram_component.width_a = DATA_WIDTH;
defparam altsyncram_component.widthad_b = ADDR_WIDTH;
defparam altsyncram_component.width_b = DATA_WIDTH;
defparam altsyncram_component.width_byteena_a = 1;


// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Sequential Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

always @(posedge i_clk) begin
  o_data_DV <= 1'b0;
  if(i_request) o_data_DV <= 1'b1;
end

endmodule

