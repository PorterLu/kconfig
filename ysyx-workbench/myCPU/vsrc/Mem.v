import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte mask);
import "DPI-C" function void pc_read(input longint raddr, output longint rdata);
module Mem(input clock, 
	input reset,
	input [63:0] pc_addr,
	output [63:0] pc_data,
	input[63:0] addr,
        input[63:0] wdata,
	input[7:0] mask,
	output[63:0] rdata,
	input enable,
	input wen);
	
	wire[63:0] tmp_data;
	reg[63:0] delay;

	always @(posedge clock) begin
		if(enable && !reset) begin
			if(wen) begin
				pmem_write(addr, wdata, mask);
			end
			else begin
				pmem_read(addr, tmp_data);
				delay <= tmp_data;
			end
		end
	end
	assign rdata = delay;
/*
	always @(posedge clock)
		if(!reset)
			pc_read(pc_addr, pc_data);*/
endmodule
		
