library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity contador is
	port(clk: in std_logic;
		Q: inout std_logic_vector (3 downto 0));
		attribute pin_numbers of contador : entity is 
		" clk:1 Q(3):14 Q(2):15 Q(1):16 Q(0):17 ";
end contador;

architecture pins of contador is
begin
process (clk)
begin
if(clk'event and clk='1') then
	Q<=Q+1;
end if;
end process;
end pins;