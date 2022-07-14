library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Registro4Bits3 is
	 Port ( CLK, RESET, L, R: in  STD_LOGIC;
			  S : in STD_LOGIC_VECTOR(0 to 1);
           D : in  STD_LOGIC_VECTOR (0 to 3);
           Q : out  STD_LOGIC_VECTOR (0 to 3));
end Registro4Bits3;

architecture Behavioral of Registro4Bits3 is
signal AUX : STD_LOGIC_VECTOR (0 to 3);
begin
		Q <= AUX;
	process(CLK, RESET, L, R, S, D)
	begin
		if (clk'event and clk = '1') then
			if (RESET = '1') then
				AUX <= "0000";
			elsif (S = "01" ) then
				AUX <= AUX( 1 to 3) & L;
			elsif (S = "11") then
				AUX <= R & AUX(0 to 2);
			elsif (S = "10") then
				AUX <= D;
			else
				AUX <= AUX;
			end if;
		end if;
	end process;
end Behavioral;

