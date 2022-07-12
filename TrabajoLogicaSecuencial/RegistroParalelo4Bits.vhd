library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Reg4 is
	port(D: in std_logic_vector(3 downto 0);
	clk, CLR: in std_logic;
	Q, Qn: inout std_logic_vector(3 downto 0));
end Reg4;

architecture a_reg4 of Reg4 is
begin
	process (clk, CLR) begin
		if(clk'event and clk='1') then
			if(CLK = '1') then
				Q<= D;
				Qn <= not Q;
			else
				Q<= "0000";
				Q<="1111";
			end if;
		end if;
	end process;
end a_reg4;

