library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity procesosSucesivos is
	port(clk: in std_logic;
			F: out std_logic_vector(0 to 3));
end procesosSucesivos;

architecture Behavioral of procesosSucesivos is
signal Q: std_logic_vector(1 downto 0):="00";
begin
	Contador: process(clk)
	begin
	if(clk'event and clk='1') then
		Q<=Q+1;
	end if;
	end process Contador;

	Decodificador: process (Q)
	begin
	case Q is
		when "00"=>F<="1000";
		when "01"=>F<="0100";
		when "10"=>F<="0010";
		when others=>F<="0001";
	end case;
	
	--F <= "1000" when Q = "00" ELSE
	--	"0100" when Q ="01" ELSE
	--	"0010" when Q ="10" ELSE "0001";
	end process Decodificador;
end Behavioral;

