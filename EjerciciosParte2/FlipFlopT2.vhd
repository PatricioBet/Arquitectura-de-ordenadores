library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FlipFlopT2 is
	port(
		T, CLK: IN STD_LOGIC;
		Q1, Q2: INOUT STD_LOGIC
	);
end FlipFlopT2;

architecture Behavioral of FlipFlopT2 is
	signal TMP: std_logic;
begin
	process(CLK)
	begin
		if(CLK'event and CLK='1') then
			if (T = '0' and Q1='0') then
				Q2<='0';
			end if;
			if (T = '0' and Q1='1') then
				Q2<='1';
			end if;
			if (T = '1' and Q1='0') then
				Q2<='1';
			end if;
			if (T = '1' and Q1='1') then
				Q2<='0';
			end if;
		end if;
	end process;
end Behavioral;

