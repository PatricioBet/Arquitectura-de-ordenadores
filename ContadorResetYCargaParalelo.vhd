library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity cont is
	port(P: in std_logic_vector(3 downto 0);
		clk, LOAD, ENP, RESET: in std_logic;
		Q: inout std_logic_vector(3 downto 0));
end cont;

architecture arq_cont of cont is
begin
	process(clk, RESET, LOAD, ENP) begin
		if(RESET = '1') then
			Q<="0000";
		elsif (clk'event and clk='1') then
			if (LOAD= '0' and ENP = '-') then
				Q <= P;
			elsif (LOAD = '1' and ENP = '0')then
				Q <= Q;
			elsif (LOAD = '1' and ENP = '1')then
				Q<=Q+1;
			end if;
		end if;
	end process;
end arq_cont;
