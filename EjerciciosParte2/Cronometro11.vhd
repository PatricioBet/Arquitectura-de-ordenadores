library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Cronometro11 is
	Port ( CLK : in  STD_LOGIC;
           Deco1, Deco2 : out  STD_LOGIC_VECTOR (0 to 6);
           Q1, Q2 : out  STD_LOGIC_VECTOR (0 to 3));
end Cronometro11;

architecture Behavioral of Cronometro11 is
signal AUX1 : STD_LOGIC_VECTOR(0 to 3) := "0000";
	signal AUX2 : STD_LOGIC_VECTOR(0 to 3) := "0000";
begin
	Q1 <= AUX1;
	Q2 <= AUX2;
	process(CLK)
	begin
		if(CLK'event and CLK = '1') then
			AUX1 <= AUX1+1;
			if(AUX1 = "1001") then
				AUX1 <= "0000";
				AUX2 <= AUX2+1;
			end if;
			if (AUX2 = "1001" and AUX1 = "1001") then
				AUX2 <= "0000";
			end if;
			case AUX1 is
				when "0000" => Deco1 <= "0000001";
				when "0001" => Deco1 <= "1001111";
				when "0010" => Deco1 <= "0010010";
				when "0011" => Deco1 <= "0000110";
				when "0100" => Deco1 <= "1001100";
				when "0101" => Deco1 <= "0100100";
				when "0110" => Deco1 <= "0100000";
				when "0111" => Deco1 <= "0001110";
				when "1000" => Deco1 <= "0000000";
				when "1001" => Deco1 <= "0000100";
				when others => Deco1 <= "1111111";
			end case;
			case AUX2 is
				when "0000" => Deco2 <= "0000001";
				when "0001" => Deco2 <= "1001111";
				when "0010" => Deco2 <= "0010010";
				when "0011" => Deco2 <= "0000110";
				when "0100" => Deco2 <= "1001100";
				when "0101" => Deco2 <= "0100100";
				when "0110" => Deco2 <= "0100000";
				when "0111" => Deco2 <= "0001110";
				when "1000" => Deco2 <= "0000000";
				when "1001" => Deco2 <= "0000100";
				when others => Deco2 <= "1111111";
			end case;
		end if;
	end process;
end Behavioral;

