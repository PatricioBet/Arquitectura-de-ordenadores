library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
--use ieee.std_logic_arith.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

entity controladoraConRetorno is
	port(clk, control: in std_logic;
			F: out std_logic_vector(0 to 3);
			Q: inout std_logic_vector(1 downto 0));
end controladoraConRetorno;

architecture Behavioral of controladoraConRetorno is
begin
contador: process(clk, control)

begin
	if(clk'event and clk='1') then
		if(control = '1') then
			--Q<=std_logic_vector(unsigned(Q)+1);
			case Q is
				when "00"=>Q<="01";
				when "01"=>Q<="10";
				when "10"=>Q<="11";
				when others=>Q<="00";
			end case;
			else
			--Q<=std_logic_vector(Q-1);
			case Q is
				when "00"=>Q<="11";
				when "01"=>Q<="00";
				when "10"=>Q<="01";
				when others=>Q<="10";
			end case;
			end if;
		end if;
end process contador;

deco: process(Q)
begin
	case Q is
		when "00"=>F<="1000";
		when "01"=>F<="0100";
		when "10"=>F<="0010";
		when others=>F<="0001";
	end case;
end process deco;
end Behavioral;
