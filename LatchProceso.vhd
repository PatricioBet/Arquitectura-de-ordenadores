library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity latch is
	port(dato, control: in std_logic;
					salida: out std_logic);
end latch;
architecture Behavioral of latch is
begin
process (dato, control)
begin
	if control='1' then 
	salida <= dato;
	end if;
end process;
end Behavioral;