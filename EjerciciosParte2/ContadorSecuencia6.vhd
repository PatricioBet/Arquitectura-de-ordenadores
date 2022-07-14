library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ContadorSecuencia6 is
	Port ( CLK, RESET : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR (2 downto 0));
end ContadorSecuencia6;

architecture Behavioral of ContadorSecuencia6 is
signal AUX : STD_LOGIC_VECTOR (2 downto 0);
begin
	Q <= AUX;
	process(CLK, RESET)
	begin
		if ( CLK'event and CLK='1') then
			if(RESET = '0' or AUX ="101") then
				AUX <= "000";
			elsif(AUX = "000") then
				AUX <= AUX+1;
			else
				AUX <= AUX+2;
			end if;
		end if;
	end process;
end Behavioral;

