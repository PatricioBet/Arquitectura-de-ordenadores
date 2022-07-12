library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity contador is
	port(clk, UP: in std_logic;
		Q: inout std_logic_vector(3 downto 0));
end contador;
architecture a_contador of contador is
begin
	process(UP, clk) begin
		if(clk'event and clk = '1') then
			if(UP = '0') then
				Q <= Q+1;
			else
				Q <= Q-1;
			end if;
		end if;
	end process;
end a_contador;

