library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity RegistroSemaforo5 is
	Port ( CLK: in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR (3 downto 0);
           SN, EO : inout  STD_LOGIC_VECTOR (0 to 2));
end RegistroSemaforo5;

architecture Behavioral of RegistroSemaforo5 is
signal AUX : STD_LOGIC_VECTOR (3 downto 0) := "0000";
begin
	Q <= AUX;
	process(CLK)
		begin
			if (CLK'event and CLK= '0') then
					AUX <= not((AUX(3) or AUX(2)) or AUX(1)) & AUX (3 downto 1);
				if(AUX = "1000") then
					SN <= "100"; --Sur a Norte
					EO <= "001"; --Este a Oeste
				elsif (AUX = "0100") then
					EO <= "010";
				elsif (AUX = "0010") then
					SN <= "001";
					EO <= "100";
				elsif (AUX = "0001") then
					SN <= "010";
				end if;
			end if;
	end process;
end Behavioral;

