library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity SrmaforoMejorado15 is
	Port ( CLK, SESOR : in  STD_LOGIC;
            OE, SN : out  STD_LOGIC_VECTOR(0 to 2));
end SrmaforoMejorado15;

architecture Behavioral of SrmaforoMejorado15 is
type estados is (inicial, eo_AMARILLO, inicial_inv, ns_AMARILLO);
	
	signal futuro, presente: estados:= inicial;
	signal VERDE: STD_LOGIC_VECTOR(0 to 2):="001";
	signal AMARILLO: STD_LOGIC_VECTOR(0 to 2):="010";
	signal ROJO: STD_LOGIC_VECTOR(0 to 2):="100";
	
begin
proceso1 : process(presente, SESOR) begin
	case presente is
		when inicial =>
			if SESOR = '1' then
				futuro <= eo_AMARILLO;
			end if;
		when eo_AMARILLO =>
				futuro <= inicial_inv;
		when inicial_inv =>
				futuro <= ns_AMARILLO;
		when ns_AMARILLO =>
				futuro <= inicial;
	end case;
end process proceso1;
	
proceso2: process(presente) begin
	case presente is
		when inicial =>
			SN <= ROJO;
			OE <= VERDE;
		when eo_AMARILLO =>
			SN <= ROJO;
			OE <= AMARILLO;
		when inicial_inv =>
			SN <= VERDE;
			OE <= ROJO;
		when ns_AMARILLO =>
			SN <= AMARILLO;
			OE <= ROJO;
	end case;
end process proceso2;

proceso3: process(CLK) begin
	if(CLK'event and CLK='1') then
		presente <= futuro;
	end if;
end process proceso3;
end Behavioral;

