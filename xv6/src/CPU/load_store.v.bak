module load_store (
  input wire        i_clk,
  input wire [31:0] i_instruction,
  input wire [31:0] i_regout1,
  input wire [31:0] i_regout2,
  input wire [31:0] i_PC,
  input wire [31:0] i_IR,
  input wire [31:0] i_state,
  input wire        i_input_bus_DV,
  input wire [31:0] i_input_bus_data,
  input wire        i_start_fetch,

  input wire [31:0] i_satp,

  output reg [2:0]  o_bhw = 3'd0,
  output reg [31:0] o_bus_address = 32'd0,
  output reg [31:0] o_bus_data = 32'd0,
  output reg        o_bus_DV = 1'd0,
  output reg        o_write_notread = 1'd0,

  output reg [31:0] o_loaded_value = 32'd0,
  output reg        o_loaded_value_DV = 1'd0,

  output reg [31:0] o_IR_value = 32'd0,
  output reg        o_IR_DV = 1'd0,

  output            o_ld_st_finnished,
  output            o_amo_finnished
);

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Combinational Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

wire signed [31:0] w_se_load_offset = { {20{i_IR[31]}}, i_IR[31:20] };
wire signed [31:0] w_se_store_offset = { {20{i_IR[31]}}, i_IR[31:25], i_IR[11:7]};

reg r_local_state = 1'b0;
reg r_first_fetch = 1'b1;
reg r_start_fetch = 1'b0;

localparam integer READY = 1'b0;
localparam integer WAITING = 1'b1;

integer integer_number_of_fetch = 32'd0; //ONLY FOR SIMULATION

assign o_ld_st_finnished = (i_instruction >= 32'd27 & i_instruction <= 32'd34) & i_state == 32'd1 &
  r_local_state == WAITING & i_input_bus_DV == 1'b1;

//AMOSWAP
localparam integer AMO_READY_LOAD = 32'd0;
localparam integer AMO_WAITING_LOAD = 32'd1;
localparam integer AMO_READY_WRITE = 32'd2;
localparam integer AMO_WAITING_WRITE = 32'd3;
localparam integer AMO_STANDBY = 32'd4;
localparam integer AMO_STANDBY2 = 32'd5;

reg [31:0] r_amo_local_state = 32'b0;
reg [31:0] r_amo_address = 32'b0;
reg [31:0] r_amo_value = 32'b0;
reg r_amo_finnished = 1'b0;
assign o_amo_finnished = r_amo_finnished;

//MMU
localparam integer MMU_STATE1 = 32'd0;
localparam integer MMU_STATE2 = 32'd1;
localparam integer MMU_STATE3 = 32'd2;
reg [31:0] mmu_state = 32'b0;

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Sequential Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

localparam OPCODE_LB     = 32'd27;
localparam OPCODE_LH     = 32'd28;
localparam OPCODE_LW     = 32'd29;
localparam OPCODE_LBU    = 32'd30;
localparam OPCODE_LHU    = 32'd31;
localparam OPCODE_SB     = 32'd32;
localparam OPCODE_SH     = 32'd33;
localparam OPCODE_SW     = 32'd34;
localparam OPCODE_AMOSWAP= 32'd60;

always @(posedge i_clk) begin
  //o_ld_st_finnished  <= 1'b0;
  o_bus_DV           <= 1'b0;
  o_loaded_value_DV  <= 1'b0;
  o_IR_DV            <= 1'b0;
  r_amo_finnished    <= 1'b0;

  //FETCH PHASE
  if (i_state == 32'b0) begin
    if (i_start_fetch)
      r_start_fetch <= 1'b1;
    handle_fetch(r_start_fetch, i_PC);
  end

  //EXECUTE PHASE
  else begin
    case (i_instruction)

      OPCODE_LB:  handle_load(3'b001, i_regout1 + w_se_load_offset, 1'b1, 2'b00);
      OPCODE_LH:  handle_load(3'b010, i_regout1 + w_se_load_offset, 1'b1, 2'b01);
      OPCODE_LW:  handle_load(3'b100, $signed(i_regout1) + $signed(w_se_load_offset), 1'b1, 2'b10);
      OPCODE_LBU: handle_load(3'b001, i_regout1 + w_se_load_offset, 1'b0, 2'b00);
      OPCODE_LHU: handle_load(3'b010, i_regout1 + w_se_load_offset, 1'b0, 2'b01);

      OPCODE_SB: handle_store(3'b001, i_regout1 + w_se_store_offset, {24'b0, i_regout2[7:0]});
      OPCODE_SH: handle_store(3'b010, i_regout1 + w_se_store_offset, {16'b0, i_regout2[15:0]});
      OPCODE_SW: handle_store(3'b100, i_regout1 + w_se_store_offset, i_regout2);

      OPCODE_AMOSWAP: handle_amoswap(i_regout1, i_regout2);

      default: ;
    endcase
  end
end

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  TASKS
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

task automatic start_bus_read(input [2:0] bhw, input [31:0] addr);
  begin
    if (i_satp == 32'b0) begin
      o_bhw <= bhw;
      o_write_notread <= 1'b0;
      o_bus_address <= addr;
      o_bus_DV <= 1'b1;
    end
    else begin
      translate_address(addr, bhw, 32'b0, 1'b0);
    end
  end
endtask

task automatic start_bus_write(input [2:0] bhw, input [31:0] addr, input [31:0] data);
  begin
    if (i_satp == 32'b0) begin
      o_bhw <= bhw;
      o_bus_data <= data;
      o_write_notread <= 1'b1;
      o_bus_address <= addr;
      o_bus_DV <= 1'b1;
    end
    else begin
      translate_address(addr, bhw, data, 1'b1);
    end
  end
endtask

task automatic handle_load;
  input [2:0] bhw;
  input [31:0] addr;
  input sign_extend;
  input [1:0] size;
  begin
    if (r_local_state == READY) begin
      start_bus_read(bhw, addr);
      if (i_satp == 0) begin
        r_local_state <= WAITING;
      end
      else if (mmu_state == MMU_STATE3) begin
        r_local_state <= WAITING;
      end
    end
    else if (r_local_state == WAITING && i_input_bus_DV) begin
      o_loaded_value <= complete_bus_read(i_input_bus_data, sign_extend, size);
      o_loaded_value_DV <= 1'b1;
      r_local_state <= READY;
      mmu_state <= 32'b0;
      //o_ld_st_finnished <= 1'b1;
    end
  end
endtask

task automatic handle_store;
  input [2:0] bhw;
  input [31:0] addr;
  input [31:0] data;
  begin
    if (r_local_state == READY) begin
      start_bus_write(bhw, addr, data);
      if (i_satp == 0) begin
        r_local_state <= WAITING;
      end
      else if (mmu_state == MMU_STATE3) begin
        r_local_state <= WAITING;
      end
    end
    else if (r_local_state == WAITING && i_input_bus_DV) begin
      r_local_state <= READY;
      mmu_state <= 32'b0;
      //o_ld_st_finnished <= 1'b1;
    end
  end
endtask

function [31:0] complete_bus_read;
  input [31:0] data;
  input sign_extend;
  input [1:0] size;
  begin
    case (size)
      2'b00: complete_bus_read = sign_extend ? { {24{data[7]}}, data[7:0] } : { 24'b0, data[7:0] };
      2'b01: complete_bus_read = sign_extend ? { {16{data[15]}}, data[15:0] } : { 16'b0, data[15:0] };
      default: complete_bus_read = data;
    endcase
  end
endfunction

task automatic handle_fetch;
  input start_fetch;
  input [31:0] PC;
  begin
    if (r_local_state == READY && (start_fetch || r_first_fetch)) begin
      r_first_fetch <= 1'b0;
      integer_number_of_fetch <= integer_number_of_fetch + 32'd1;
      start_bus_read(3'b100, PC);
      if (i_satp == 0) begin
        r_local_state <= WAITING;
      end
      else if (mmu_state == MMU_STATE3) begin
        r_local_state <= WAITING;
      end
    end
    else if (r_local_state == WAITING && i_input_bus_DV) begin
      o_IR_value <= i_input_bus_data;
      o_IR_DV <= 1'b1;
      r_local_state <= READY;
      r_start_fetch <= 1'b0;
      //o_ld_st_finnished <= 1'b1;
    end
  end
endtask

task automatic handle_amoswap;
  input [31:0] addr;
  input [31:0] value;
  begin
    case (r_amo_local_state)
      AMO_READY_LOAD: begin
        r_amo_address <= addr;
        r_amo_value <= value;
        start_bus_read(3'b100, addr);
        if (i_satp == 0) begin
          r_amo_local_state <= AMO_WAITING_LOAD;
        end
        else if (mmu_state == MMU_STATE3) begin
          r_amo_local_state <= AMO_WAITING_LOAD;
        end
      end

      AMO_WAITING_LOAD: begin
        if (i_input_bus_DV) begin
          o_loaded_value <= i_input_bus_data;
          o_loaded_value_DV <= 1'b1;
          r_amo_local_state <= AMO_READY_WRITE;
        end
      end

      AMO_READY_WRITE: begin
        start_bus_write(3'b100, r_amo_address, r_amo_value);
        if (i_satp == 0) begin
          r_amo_local_state <= AMO_WAITING_WRITE;
        end
        else if (mmu_state == MMU_STATE3) begin
          r_amo_local_state <= AMO_WAITING_WRITE;
        end
      end

      AMO_WAITING_WRITE: begin
        if (i_input_bus_DV) begin
          r_amo_local_state <= AMO_STANDBY;
          r_amo_finnished <= 1'b1;
        end
      end

      AMO_STANDBY: begin
        r_amo_local_state <= AMO_READY_LOAD;
      end
    endcase
  end
endtask

reg r_mmu_local_state = READY;

task handle_mmu_load;
  input [2:0] bhw;
  input [31:0] addr;
  input sign_extend;
  input [1:0] size;
  output reg [31:0] data;
  begin
    if (r_mmu_local_state == READY) begin
      o_bhw <= bhw;
      o_bus_address <= addr;
      o_write_notread <= 1'b0;
      o_bus_DV <= 1'b1;
      r_mmu_local_state <= WAITING;
    end
    else if (r_mmu_local_state == WAITING && i_input_bus_DV) begin
      data = complete_bus_read(i_input_bus_data, sign_extend, size);
      r_mmu_local_state <= READY;
      mmu_state <= mmu_state + 32'd1;
    end
  end
endtask



reg [31:0] l1_pte = 32'b0;
reg [31:0] l2_pte = 32'b0;

reg [9:0]  vpn1 = 0;
reg [9:0]  vpn0 = 0;
reg [11:0] offset = 0;
reg [21:0] root_ppn = 0;
reg [31:0] l1_addr = 0;
reg [19:0] l1_ppn = 0;
reg [31:0] l2_addr = 0;
reg [19:0] page_ppn = 0;
reg [31:0] phys_addr = 0;

task automatic translate_address;
  input [31:0] vaddr_reg;
  input [2:0] bhw;
  input [31:0] data;
  input store;



  begin
    case(mmu_state)
      MMU_STATE1: begin
        vpn1 = (vaddr_reg >> 22) & 10'h3FF;
        vpn0 = (vaddr_reg >> 12) & 10'h3FF;
        offset = vaddr_reg[11:0];
        root_ppn = i_satp[21:0];

        l1_addr = (root_ppn << 12) + (vpn1 << 2);
        handle_mmu_load(3'b100, l1_addr, 1'b1, 2'b10, l1_pte);
        //mmu_state <= MMU_STATE2;
      end
      MMU_STATE2: begin
        l1_ppn = (l1_pte >> 10) & 20'hFFFFF;
        l2_addr = (l1_ppn << 12) + (vpn0 << 2);
        handle_mmu_load(3'b100, l2_addr, 1'b1, 2'b10, l2_pte);
        //mmu_state <= MMU_STATE3;
      end
      MMU_STATE3: begin
        page_ppn = (l2_pte >> 10) & 20'hFFFFF;
        phys_addr = (page_ppn << 12) + offset;

        o_bus_address <= phys_addr;
        o_bhw <= bhw;
        o_write_notread <= store;
        o_bus_data <= data;
        o_bus_DV <= 1'b1;
        mmu_state <= MMU_STATE1;
      end
    endcase
  end
endtask

endmodule

