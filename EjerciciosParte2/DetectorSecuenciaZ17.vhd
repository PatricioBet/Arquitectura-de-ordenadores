library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity DetectorSecuenciaZ17 is
	Port ( CLK, X : in  STD_LOGIC;
           Z : out  STD_LOGIC_VECTOR(0 to 6));
end DetectorSecuenciaZ17;

architecture Behavioral of DetectorSecuenciaZ17 is
type estados is (A,B,C,D,E,F,G,H);
signal estado_presente, estado_futuro : estados;
begin
proceso1 : process (estado_presente, X) begin
	case estado_presente is
		when A => Z <= "0000000";
			if X = '0' then
				estado_futuro <= B;
			end if;
		when B => Z <= "0000000";
			if X = '1' then
				estado_futuro <= C;
			end if;
		when C => Z <= "0000000";
			if X = '1' then
				estado_futuro <= D;
			end if;
		when D => Z <= "0000000";
			if X = '0' then
				estado_futuro <= E;
			end if;
		when E => Z <= "0000000";
			if X = '1' then
				estado_futuro <= F;
			end if;
		when F => Z <= "0000000";
			if X = '0' then
				estado_futuro <= G;
			end if;
		when G => Z <= "0000000";
			if  X = '1' then
				estado_futuro <= H;
			end if;
		when H =>
			if X = '0' then 
				estado_futuro <= A;
				Z <= "1101111";
			else
				Z <= "0000000";
			end if;
	end case;
end process proceso1;

proceso2 : process(CLK) begin
	if CLK'event and CLK = '1' then
		estado_presente <= estado_futuro;
	end if;
end process proceso2;
end Behavioral;

