library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity SistemaSecuencial18 is
	Port ( CLK, X : in  STD_LOGIC;
           Z : out  STD_LOGIC);
end SistemaSecuencial18;

architecture Behavioral of SistemaSecuencial18 is
type estados is (A, B, C, D, E);
signal presente, futuro : estados;
begin
proceso1 : process(presente, X) begin
	case presente is
		when A => Z <= '0';
			if X = '0' then
				futuro <= B;
			else
				futuro <= E;
			end if;
		when B => Z <= '1';
			if X = '0' then
				futuro <= A;
			else
				futuro <= C;
			end if;
		when C =>
			if X = '0' then
				futuro <= B;
				Z  <= '0';
			else
				futuro <= C;
				Z <= '1';
			end if;
		when D => Z <= '0'; 
			if X = '0' then
				futuro <= C;
			else
				futuro <= E;
			end if;
		when E => 
			if X = '0' then 
				futuro <= D;
				Z <= '1';
			else
				futuro <= A;
				Z <= '0';
			end if;
	end case;
end process proceso1;

proceso2 : process (CLK) begin
	if CLK'event and CLK = '1' then
		presente <= futuro;
	end if;
end process proceso2;
end Behavioral;

