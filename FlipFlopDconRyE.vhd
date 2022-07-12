library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Flip is
	port(clk, RESET, EN, D: in std_logic;
			Q: inout std_logic);
end Flip;

architecture Flop of Flip is
	signal q_aux: std_logic;
begin
	process (clk, RESET, EN) begin
		if RESET='1' then q_aux<='0';
			elsif (clk'event and clk = '1') then
				if(EN='1') then
					q_aux<=D;
					else
						q_aux<=Q;
						end if;
						end if;
						end process;
end Flop;

