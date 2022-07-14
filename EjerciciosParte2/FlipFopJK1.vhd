library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee. std_logic_arith.all;
use ieee. std_logic_unsigned.all;

entity FlipFopJK1 is
	port(J, K, CLK: IN STD_LOGIC;
		Q1, Q2: OUT STD_LOGIC
	);
end FlipFopJK1;

architecture Behavioral of FlipFopJK1 is
begin
	PROCESS(CLK)
	variable TMP: std_logic;
	BEGIN
		if(CLK='1' and CLK'event) then
			if(J='0' and K='0')then
				TMP:=TMP;
			elsif(J='1' and K='1')then
			TMP:= not TMP;
		elsif(J='0' and K='1')then
			TMP:='0';
		else
			TMP:='1';
		end if;
		end if;
			Q1<=TMP;
			Q2<=not TMP;
	END PROCESS;

end Behavioral;

