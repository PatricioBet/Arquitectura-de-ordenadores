library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FLIP is
	port(D, clk, RESET: in std_logic;
		Q: out std_logic);
end FLIP;
architecture FLOP of FLIP is
begin
	process(clk, D, RESET) begin
		if RESET='1' then
			Q<='0';
			elsif (clk'event and clk='1') then
		end if;
	end process;
end FLOP;

