library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ContadorAleatorio19 is
	Port ( CLK, X : in  STD_LOGIC;
           Z : out  STD_LOGIC_VECTOR (2 downto 0));
end ContadorAleatorio19;

architecture Behavioral of ContadorAleatorio19 is
type estados is (N0,N1,N2,N3,N4,N5,N6,N7);
signal presente, futuro : estados;
begin
	proceso1 : process(presente, X) begin
		case presente is
			when N0 =>
				if X = '0' then
					futuro <= N1;
				end if;
			when N1 =>
				if X = '0' then 
					futuro <= N2;
				else
					futuro <= N4;
				end if;
			when N2 =>
				if X = '0' then
					futuro <= N3;
				else
					futuro <= N5;
				end if;
			when N3 =>
				if X = '0' then
					futuro <= N4;
				else
					futuro <= N1;
				end if;
			when N4 => 
				if X = '0' then 
					futuro <= N5;
				else
					futuro <= N2;
				end if;
			when N5 => futuro <= N6;
			when N6 => futuro <= N7;
			when N7 =>
				if X = '0' then
					futuro <= N0;
				else
					futuro <= N3;
				end if;
		end case;
	end process proceso1;
	
	asigZ : process(presente) begin
		case presente is
			when N0 => Z <= "000";
			when N1 => Z <= "001";
			when N2 => Z <= "010";
			when N3 => Z <= "011";
			when N4 => Z <= "100";
			when N5 => Z <= "101";
			when N6 => Z <= "110";
			when N7 => Z <= "111";
		end case;
	end process asigZ;
	
	procesoCLK : process(CLK) begin	
		if CLK'event and CLK = '1' then
			presente <= futuro;
		end if;
	end process procesoCLK;
end Behavioral;

