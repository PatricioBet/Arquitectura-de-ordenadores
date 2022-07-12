library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity registro is
	port(d, clk: in std_logic;
			q: out std_logic);
end registro;

architecture serie of registro is
begin
process (clk)
	variable a, b :std_logic;
	begin
		if(clk'event and clk = '1') then
		a := d;
		b := a;
		q <= b;
		end if;
end process;
end serie;

