library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity IntegracionConPins is
	port(clk: in std_logic;
			Q: inout std_logic_vector(1 downto 0 );
			F: out std_logic_vector(0 to 3));
end IntegracionConPins;

architecture Behavioral of IntegracionConPins is
begin
Contador: process(clk)
	begin
		if(clk'event and clk='1') then
			--Q<=Q+1;
			case Q is
				when "00"=>Q<="01";
				when "01"=>Q<="10";
				when "10"=>Q<="11";
				when others=>Q<="00";
			end case;
		end if;
	end process Contador;
	
Decodificador: process(Q)
begin
	case Q is
		when "00"=>F<="1000";
		when "01"=>F<="0100";
		when "10"=>F<="0010";
		when others=>F<="0001";
	end case;
end process Decodificador;
end Behavioral;

