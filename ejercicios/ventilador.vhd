----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:15:06 05/18/2022 
-- Design Name: 
-- Module Name:    ventilador - Behavioral 
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

entity ventilador is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           direccion : out  STD_LOGIC); --el valor de 1 significa derecha y el valor 0 izquierda
end ventilador;

architecture Behavioral of ventilador is
	begin
	process(a, b) begin
		if(a='1' and b='0') then
			direccion <= '0';--girara a la izquierda
			else
				if(a='0' and b='1') then
					direccion <='1'; -- girara a la derrecha
				end if;
		end if;
	end process;
end Behavioral;

