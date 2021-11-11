`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:43:58 10/31/2021
// Design Name:   i2c_slave
// Module Name:   C:/Verilog/fix_doan2/slave_tb.v
// Project Name:  fix_doan2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2c_slave
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module slave_tb;

	// Inputs
	reg [7:0] data_slave;
	reg clk;

	// Outputs
	reg [7:0] data_in;

	// Bidirs
	wire sda;
	wire scl;
	wire busy;

	// Instantiate the Unit Under Test (UUT)
	i2c_slave uut (
		.data_slave(data_slave), 
		.sda(sda), 
		.scl(scl), 
		.busy(busy), 
		.clk(clk), 
		.data_in(data_in)
	);
	
	initial begin
		clk = 0;
		forever begin
			clk = #2 ~clk;
		end		
	end

	initial begin
		// Initialize Inputs
		data_slave = 0;
		data_in = 8'b1001_0000;

		// Wait 100 ns for global reset to finish
		
		
        
		// Add stimulus here

	end
      
endmodule

