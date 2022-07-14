library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity DetectorSecuencia16 is
	Port ( CLK, X : in  STD_LOGIC;
           Z : out  STD_LOGIC);
end DetectorSecuencia16;

architecture Behavioral of DetectorSecuencia16 is
type estados is (A,B,C,D,E,F);
signal pre_estado, fut_estado : estados;
begin
proceso1: process(pre_estado, X) begin
	case pre_estado is
		when A => Z <= '0';
			if X = '1' then
				fut_estado <= B;
			end if;
		when B => Z <= '0';
			if X = '1' then
				fut_estado <= C;
			end if;
		when C => Z <= '0';
			if X = '0' then
				fut_estado <= D;
			end if;
		when D => Z <= '0';
			if X = '0' then
				fut_estado <= E;
			end if;
		when E => Z <= '0';
			if X = '1' then
				fut_estado <= F;
			end if;
		when F =>
			if X = '1' then
				fut_estado <= A;
				Z <= '1';
			else
				Z <= '0';
			end if;
	end case;
end process proceso1;

proceso2: process(CLK) begin
	if (CLK'event and CLK='1') then
		pre_estado <= fut_estado;
	end if;
end process proceso2;
end Behavioral;

