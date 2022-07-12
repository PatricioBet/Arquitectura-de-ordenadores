library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ffd is
	port(D, clk: in std_logic;
	Q: out std_logic);
end ffd;

architecture arq_ffd of ffd is
begin
	process(clk) begin
		if (clk'event and clk='1') then
			Q <= D;
		end if;
	end process;
end arq_ffd;

