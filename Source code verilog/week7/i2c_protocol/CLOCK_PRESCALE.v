`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:17:25 10/19/2021 
// Design Name: 
// Module Name:    CLOCK_PRESCALE 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CLOCK_PRESCALE
(
input clk,
input enable,
input  [3:0] select,   
output out
    );
	localparam div_0 = 4'b0000;	//div by 1 
	localparam div_1 = 4'b0001;	// div by 2
	localparam div_2 = 4'b0010;	//div by 3
	localparam div_3 = 4'b0011;
	localparam div_4 = 4'b0100;
	localparam div_5 = 4'b0101; 
	localparam div_6 = 4'b0110;
	localparam div_7 = 4'b0111;
	localparam div_8 = 4'b1000;
	localparam div_9 = 4'b1001;
	localparam div_10 = 4'b1010;
	localparam div_11 = 4'b1011;
	localparam div_12 = 4'b110;
	localparam div_13 = 4'b1101;
	localparam div_14 = 4'b1110;
	localparam div_15 = 4'b1111;

	wire [3:0] counter ;
	reg [3:0] temp;
	reg [3:0] M ;
	initial begin
		temp = 0;
		M = 1;
		end
	assign out = (temp <= M) ? 0 : 1;
	assign counter = (temp == M*2) ? 0 : temp + 1;

	always @ ( posedge clk) begin
		if( enable == 1)
			temp <=  counter;
			else 
			temp <= 0;
		
end	

	always @ ( posedge clk) begin
		case (select)
			div_0: begin
				M <= 1;
				end
				
			div_1: begin
				M <= 2;
				end
				
			div_2: begin
				M <= 3;
				end
				
			div_3: begin
				M <= 4;
				end
				
			div_4: begin
				M <= 5;
				end
				
			div_5: begin
				M <= 6;
				end
				
			div_6: begin
				M <= 7;
				end
				
			div_7: begin
				M <= 8;
				end
				
			div_8: begin
				M <= 9;
				end
				
			div_9: begin
				M <= 10;
				end
				
			div_10: begin
				M <= 11;
				end
				
			div_11: begin
				M <= 12;
				end

			div_12: begin
				M <= 13;
				end
				
			div_13: begin
				M <= 14;
				end
				
			div_14: begin
				M <= 15;
				end
				
			div_15: begin
				M <= 11;
				end
		endcase
		
end	
endmodule
