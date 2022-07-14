library IEEE;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_1164.ALL;

entity ContadorAdcendenteDescendente8 is
	Port ( CLK, X : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR (1 downto 0));
end ContadorAdcendenteDescendente8;

architecture Behavioral of ContadorAdcendenteDescendente8 is
signal AUX : STD_LOGIC_VECTOR (1 downto 0);
begin
	Q <= AUX;
	process(CLK, X)
	begin
		if (CLK'event and CLK = '1') then
			if (X = '0') then
				AUX <= AUX+1;
			else 
				AUX <= AUX - 1;
			end if;
		end if;
	end process;
end Behavioral;