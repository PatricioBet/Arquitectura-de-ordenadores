library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity RegistroDesplazamientoSerie4 is
	Port ( CLK: in  STD_LOGIC;
           Q: out  STD_LOGIC_VECTOR (3 downto 0));
end RegistroDesplazamientoSerie4;

architecture Behavioral of RegistroDesplazamientoSerie4 is
signal AUX : STD_LOGIC_VECTOR (3 downto 0) := "0000";
begin
	Q <= AUX;
	process(clk)
		begin
			if (CLK'event and CLK = '0') then -- Activo en bajo
					AUX <= not((AUX(3) or AUX(2)) or AUX(1)) & AUX (3 downto 1);
			end if;
	end process;
end Behavioral;

