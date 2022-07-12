library IEEE;
library work;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity contador is
	port(clk: in std_logic;
		q: inout std_logic_vector(3 downto 0));
end contador;

architecture cuenta of contador is
begin
	process(clk) begin
	if(clk'event and clk='1') then
		q<= (q + 1);
	end if;
	end process;
end cuenta;

