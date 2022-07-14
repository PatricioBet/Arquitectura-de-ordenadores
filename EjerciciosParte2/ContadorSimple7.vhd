library IEEE;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_1164.ALL;

entity ContadorSimple7 is
Port ( CLK, RESET : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR (2 downto 0));
end ContadorSimple7;

architecture Behavioral of ContadorSimple7 is
signal AUX :  STD_LOGIC_VECTOR (2 downto 0);
begin
	Q <= AUX;
	process(CLK, RESET)
	begin
		if (CLK'event and CLK = '1') then
			if (RESET = '0' or AUX = "111") then
				AUX <= "000";
			else
				AUX <= AUX+1;
			end if;
		end if;
	end process;
end Behavioral;