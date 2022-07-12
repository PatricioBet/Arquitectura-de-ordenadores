library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity contador is
	port( clk, LD, UP: in std_logic;
		D: in std_logic_vector(2 downto 0);
		Q: inout std_logic_vector(2 downto 0)
	);
end contador;
architecture modulo of contador is
begin
process(clk, LD, D, UP)
begin
	if(clk'event and clk='1') then
		if(LD='0') then
			Q<=D;
			elsif UP='1' then
				Q<=Q+1;
			else
				Q<=Q-1;
			end if;
		end if;
	end process;
end modulo;

