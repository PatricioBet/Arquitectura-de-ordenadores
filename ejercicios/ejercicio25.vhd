----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:06:55 05/23/2022 
-- Design Name: 
-- Module Name:    ejercicio25 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ejercicio25 is
	port(A,B: IN STD_LOGIC_VECTOR(0 TO 3);
		F: OUT STD_LOGIC);
end ejercicio25;

architecture Behavioral of ejercicio25 is

begin
	F<= ((A(0) OR B(0)) AND (A(1) OR B(1)) AND (A(2) OR B(2)) AND (A(3) OR B(3)));

end Behavioral;

