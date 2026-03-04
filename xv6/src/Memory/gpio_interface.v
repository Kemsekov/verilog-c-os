module gpio_interface (
  input wire i_clk,
  input wire [7:0] i_data,
  input wire [11:0] i_address,
  input wire i_write,
  input wire i_request,
  output wire [7:0] o_data,
  output reg o_data_DV,

  input wire [7:0] i_gpio_data,
  input wire [3:0] i_gpio_control,

  output wire [3:0] o_gpio_control
);

reg [7:0] r_control = 8'b0;

assign o_data = i_address == 12'd0 ? i_gpio_data :
                i_address == 12'd1 ? {i_gpio_control[3:0], r_control[3:0]} :
                8'b0;

assign o_gpio_control = r_control[3:0];

always @(posedge i_clk) begin
  o_data_DV <= 1'b0;

    if (i_request) begin
        o_data_DV <= 1'b1;

        if (i_write && i_address == 1) begin
          r_control <= i_data;
        end
    end
end

endmodule

