`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 23.12.2020 18:08:55
// Design Name: 
// Module Name: i2c_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
/////////////////////////////////////////////////////////////////////////////////

module tb_i2c;

	// Inputs
	//reg clk_72Mhz;
	reg clk;
	reg reset;
	reg [6:0] addr;			// dia ch? slaver mun truyen
	reg [7:0] in_data;		// chan data can truyen tu master to slaver
	reg enable;					// chan enable truyen
	reg rw;
	reg [7:0] data_slave;	// du lieu can truyen tu slaver to master
/*	reg [3:0] select;
	reg enable_clock;	*/
	// Outputs
	wire [7:0] out_data;		//output data sau khi slaver truyen cho master
	wire ready;
	wire busy;
	
	// Bidirs
	wire sda;
	wire scl;
	


	//CLOCK_PRESCALE clock(.clk(clk_72Mhz) , .select(select) ,.enable(enable_clock), .out(clk));


	// Instantiate the Unit Under Test (UUT)
	master_i2c m ( .clk(clk),
	.reset(reset),
	.addr(addr),
	.data_in(in_data),
	.enable(enable),
	.rw(rw),
   .data_out(out_data), 
   .ready(ready),
	.busy(busy),
	.i2c_sda(sda),
	.i2c_scl(scl));
		
	i2c_slave slave (
    .sda(sda), 
    .scl(scl),
	 .data_slave(data_slave),
	 .clk(clk),
	 .busy(busy)
    );
	 
	 i2c_slave_1 slave_1 (
    .sda(sda), 
    .scl(scl),
	 .data_slave(data_slave),
	 .clk(clk),
	 .busy(busy)
    );
	 
	 i2c_slave_model slave_opencore(
	 .sda(sda), 
    .scl(scl)
	 
	 );
	 
	 
	
	
	initial begin
		clk = 0;
		forever begin
			clk = #4 ~clk;
		end		
	end
	
	
	
	/*initial begin
		clk_72Mhz = 0;
		forever begin
			clk_72Mhz = #2 ~clk_72Mhz;
		end		
	end*/
	

	initial begin
		// Initialize Inputs

		reset = 1;
		//enable_clock = 1;
		//select = 4'b0000;


		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 0;		
		addr = 7'b110_1010;
		data_slave = 8'b10110000;
		//in_data = 8'b1011_1000;
		
		rw = 1;	
		enable = 1;
	
		#100
		//reset=1;
		//#300
		enable = 0;
		
		#150
      
		enable = 1;
		#100
		enable=0;		
		#350
		reset = 1;
		#40
		reset =0;
		addr = 7'b1110010;
		//in_data = 8'b1111_0000;
		data_slave = 8'b10101100;
		rw=1;
		enable =1;
		#40;
		enable=0;
		
		
		
	end      
endmodule

