library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity ContadorA9_10 is
	Port ( CLK, C : in  STD_LOGIC;
           SAL1, SAL2 : inout  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR (3 downto 0));
end ContadorA9_10;

architecture Behavioral of ContadorA9_10 is
signal AUX : STD_LOGIC_VECTOR (3 downto 0) := "0000";
begin
	Q <= AUX;
	process(CLK, C)
	begin
		if (CLK'event and CLK = '1') then
			if (C = '0') then
				if(AUX = "1001") then
					AUX <= "0000";
				else
					AUX <= AUX+1;
				end if;
			else
				if(AUX = "0000") then
					AUX <= "1001";
				else
					AUX <= AUX-1;
				end if;
			end if;
			if (C = '0' and AUX(0) = '1') then
				SAL1 <= '1';
				SAL2 <= '0';
			elsif(C = '1' and AUX(0) = '0') then
				SAL1 <= '0';
				SAL2 <= '1';
			else
				SAL1 <= '0';
				SAL2 <= '0';
			end if;
		end if;
	end process;
end Behavioral;

