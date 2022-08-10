import "DPI-C" function void halt();
module ebreak(input clock, input enable);
	always @(posedge clock)
		if(enable)
			halt();
endmodule
