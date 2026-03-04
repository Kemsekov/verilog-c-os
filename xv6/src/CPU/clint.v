module clint(
    input i_ECALL,
    input i_EBREAK,

    input i_timer_int,

    output reg o_s_interrupt,
    output reg o_m_interrupt,

    //CSRs 
    input [31:0] mideleg,
    input [31:0] medeleg,
    input [31:0] mstatus,
    input [31:0] sstatus,
    input [31:0] mie,
    input [31:0] sie,

    input i_external_interrupt
);

always @(*) begin
    o_s_interrupt = 1'b0;
    o_m_interrupt = 1'b0;

    // -------------------
    // PS2 Exception
    // -------------------
    if (i_external_interrupt) begin
      if ((mideleg[9] == 1'b1) && (sstatus[1] == 1'b1) && (sie[9] == 1'b1)) begin
        o_s_interrupt = 1'b1;
      end
    end

    // -------------------
    // ECALL Exception
    // -------------------
    if (i_ECALL) begin
        if (medeleg[11]) begin
            o_s_interrupt = 1'b1;
        end else begin
            o_m_interrupt = 1'b1;
        end
    end

    // -------------------
    // EBREAK Exception
    // -------------------
    else if (i_EBREAK) begin
        if (medeleg[3]) begin
            o_s_interrupt = 1'b1;
        end else begin
            o_m_interrupt = 1'b1;
        end
    end

    // -------------------
    // Timer Interrupt
    // -------------------
    else if (i_timer_int) begin
        if (mideleg[7]) begin
            if (sie[7] && sstatus[1]) begin
                o_s_interrupt = 1'b1;
            end
        end else begin
            if (mie[7] && mstatus[3]) begin
                o_m_interrupt = 1'b1;
            end
        end
    end

end


endmodule

