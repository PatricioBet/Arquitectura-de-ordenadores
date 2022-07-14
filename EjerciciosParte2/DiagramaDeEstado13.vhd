library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity DiagramaDeEstado13 is
	Port ( CLK, X: in  STD_LOGIC;
				Z : out STD_LOGIC);
end DiagramaDeEstado13;

architecture Behavioral of DiagramaDeEstado13 is
type estados is (A, B, C ,D);
	signal edo_pres, edo_fut: estados := A;
begin
	proceso1 : process (edo_pres, X) begin
		case edo_pres is
			when A => Z <= '0';
				if X = '0' then
					edo_fut <= D;
				else
					edo_fut <= B;
				end if;
			when B => Z <= '0';
				if X = '0' then
					edo_fut <= D;
				else
					edo_fut <= C;
				end if;
			when C => Z <= '0';
				if X = '0' then
					edo_fut <= D;
				else
					edo_fut <= B;
				end if;
			when D =>
				if X = '0' then
					edo_fut <=D;
					Z <= '0';
				else
					edo_fut <= A;
					Z <= '1';
				end if;
		end case;
	end process proceso1;
proceso2: process (CLK) begin
	if(CLK'event and CLK='1') then
		edo_pres <= edo_fut;
	end if;
end process proceso2;
end Behavioral;

