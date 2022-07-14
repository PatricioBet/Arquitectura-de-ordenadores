library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity SistemaSecuencial20 is
	Port ( CLK : in  STD_LOGIC;
           SensorM : in  STD_LOGIC_VECTOR(4 downto 0);
           RCambio : out  STD_LOGIC_VECTOR(3 downto 0));
end SistemaSecuencial20;

architecture Behavioral of SistemaSecuencial20 is
type estados is (inicial, SensorM5, SensorM10, SensorM20);
signal presente, futuro : estados;
begin
 procesoMaquina : process(presente, SensorM) begin
	case presente is
		when inicial => RCambio <= "0000";
			if SensorM = "00101" then
				futuro <= SensorM5;
			elsif SensorM = "01010" then
				futuro <= SensorM10;
			elsif SensorM = "10100" then
				futuro <= SensorM20;
			else
				futuro <= inicial;
			end if;
		when SensorM5 => RCambio <= "0000";
			futuro<= inicial;
		when SensorM10 => RCambio <= "0101";
			futuro<= inicial;
		when SensorM20 => RCambio <= "1111";
			futuro<= inicial;
	end case;
 end process procesoMaquina;

 procesoCLK : process(CLK) begin
	if CLK'event and CLK = '1' then
		presente <= futuro;
	end if;
 end process procesoCLK;
end Behavioral;

