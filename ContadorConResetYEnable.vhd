library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity contador is
	port(clk, reset: in std_logic;
	q: inout std_logic_vector(3 downto 0));
end contador;
architecture modulo of contador is

begin
process(clk, reset)
begin
	if(clk'event and clk='1')then
		if(reset = '1' or 1="1001") then
			q<="0000";
			else
			q<=q+1;
			end if;
			end if;
	end process;
end modulo;