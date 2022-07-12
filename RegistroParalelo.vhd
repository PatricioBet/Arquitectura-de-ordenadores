library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity reg is
	port(
	D: in std_logic_vector (0 to 7);
	clk: in std_logic;
	Q: out std_logic_vector(0 to 7));
end reg;

architecture arqreg of reg is
begin
	process(clk) begin
	if(clk'event and clk='1') then
		Q<=D;
	end if;
	end process;
end arqreg;

