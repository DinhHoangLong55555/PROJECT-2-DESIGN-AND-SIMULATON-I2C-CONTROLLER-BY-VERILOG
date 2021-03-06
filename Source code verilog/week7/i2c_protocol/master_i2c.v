`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 23.12.2020 18:07:35
// Design Name: 
// Module Name: i2c_master
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
//////////////////////////////////////////////////////////////////////////////////


module master_i2c(input wire clk,
	input wire reset,
	input wire [6:0] addr,
	input wire [7:0] data_in,
	input wire enable,
	input wire rw,
    output reg [7:0] data_out,
	 output wire busy,
	output wire ready,
    inout i2c_sda,
	inout wire i2c_scl
 );
 // i2c master with 9 states as defined
 localparam idle=0; 
 localparam start=1;
 localparam address=2;
 localparam read_ack=3;
 localparam write_data=4;
 localparam write_ack=5;
 localparam read_data=6;
 localparam read_ack2=7;
 localparam stop=8;
 localparam DIVIDE_BY = 4;
 localparam before_stop =9;

	reg [7:0] state; //reg to store next state
	reg [7:0] saved_addr; 
	reg [7:0] saved_data;
	reg [7:0] counter;
	reg [7:0] counter2 = 0;
	reg i2c_sda_enable;
	reg sda_out;
	reg i2c_scl_enable = 0;
	reg i2c_clk = 1;
	reg flag;

 
   assign ready = ((reset == 0) && (state == idle) ) ? 1 : 0;
	assign i2c_scl = (i2c_scl_enable == 0 ) ? 1 : i2c_clk;
	assign i2c_sda = (i2c_sda_enable == 1) ? sda_out : 'bz;
	assign busy = (((i2c_sda_enable == 1) && (state != idle)) ||(i2c_sda_enable == 0)) ? 1 : 0;
	
	//Generating i2c clock
	always @(posedge clk) begin
		//if (counter2 == (DIVIDE_BY/2) - 1) begin
			i2c_clk <= ~i2c_clk;
			//counter2 <= 0;
		//end
		//else counter2 <= counter2 + 1;
	end 
	
	//i2c_scl enable setup
	always @(negedge i2c_clk, posedge reset) begin
		if(reset == 1) begin
			i2c_scl_enable <= 0;
		end else begin
			if ((state == idle) || (state == start) || (state == stop)) begin
				i2c_scl_enable <= 0;
			end else begin
				i2c_scl_enable <= 1;
			end
		end
	
	end

//i2c FSM of 9 states	
 always @(posedge i2c_clk, posedge reset) begin
		if(reset == 1) begin
			state <= idle;
		end		
		else begin
			case(state)
			    //Initial state
				idle: begin
					if (enable) begin
						state <= start;
						saved_addr <= {addr, rw};//addr of 7 bits + 1 acknowledge bit
						saved_data <= data_in;
					end
					else state <= idle;
				end

				start: begin
					counter <= 7;
					state <= address;
				end

				address: begin
					if (counter == 0) begin 
						state <= read_ack;
					end else counter <= counter - 1;
				end

				read_ack: begin
					if (i2c_sda == 0) begin
						counter <= 7;
						if(saved_addr[0] == 0) state <= write_data;
						else state <= read_data;
					end else state <= before_stop;
				end

				write_data: begin
					if(counter == 0) begin
						state <= read_ack2;
					end else counter <= counter - 1;
				end
				
				read_ack2: begin
						state <= before_stop;
				end
				

				read_data: begin
					data_out[counter] <= i2c_sda;
					if (counter == 0) state <= write_ack;
					else counter <= counter - 1;
					if( i2c_sda === 1'bx || i2c_sda === 1'bz )begin
						flag <= 1;
					end
					
				end
				

				
				/*before_stop: begin
					sda_out <= 0;
					i2c_sda_enable <= 1;
					state <= stop;
				
				end*/

			endcase
		end
	end
	
 always @(negedge i2c_clk, posedge reset) begin
		if(reset == 1) begin
			i2c_sda_enable <= 1;
			sda_out <= 1;
		end else begin
			case(state)
				
				start: begin
					i2c_sda_enable <= 1;
					sda_out <= 0;
				end
				
				address: begin
					sda_out <= saved_addr[counter];
				end
				
				read_ack: begin
					i2c_sda_enable <= 0;
				end
				
				write_data: begin 
					i2c_sda_enable <= 1;
					sda_out <= saved_data[counter];
				end
				
				read_ack2:begin
					i2c_sda_enable <= 0;
				end
				

				
				write_ack: begin
					if(flag == 1)begin
						i2c_sda_enable <= 1;
						sda_out <= 1;
					end
					
					else begin
						sda_out <= 0;
						i2c_sda_enable <= 1;

					end
					state <= before_stop;
									
				end
				
				read_data: begin
					i2c_sda_enable <= 0;				
				end
					
/*				stop: begin
					i2c_sda_enable <= 1;
					sda_out <= 1;
				end*/
			endcase
		end
	end
	
	
	always @ (posedge clk) begin
			case(state)
			
				before_stop: begin
						sda_out <= 0;
						i2c_sda_enable <= 1;
						state <= stop;
					
					end
				stop: begin
					i2c_sda_enable <= 1;
					sda_out <= 1;
					state <= idle;
				end

	
		endcase
end

 
endmodule

