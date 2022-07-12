library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity cont is
	port(clk, reset: in std_logic;
		Q: inout integer range 0 to 15);
end cont;

architecture arq_cont of cont is
begin
process(clk, reset) begin
	if(clk'event and clk ='1') then
	if (reset='1' or Q=9) then
	Q<=0;
	else
	Q<=Q+1;
	end if;
	end if;
end process;
end arq_cont;

