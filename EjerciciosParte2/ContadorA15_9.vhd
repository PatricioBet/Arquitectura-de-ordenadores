library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ContadorA15_9 is
	Port ( CLK, X : in  STD_LOGIC;
           Z1, Z2 : inout  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR(3 downto 0));
end ContadorA15_9;

architecture Behavioral of ContadorA15_9 is
signal AUX: std_logic_vector(3 downto 0) := "0000";
begin
	Q <= AUX;
	process(CLK, X) 
	begin
	if(CLK'event and CLK = '1') then
		if(X = '0') then
			AUX <= AUX+1;
		else
			AUX <= AUX-1;
		end if;
		if(AUX(0) = '0') then
			Z1 <= '1';
			Z2 <= '0';
		else
			Z1 <= '0';
			Z2 <= '1';
		end if;
	end if;
	end process;
end Behavioral;

