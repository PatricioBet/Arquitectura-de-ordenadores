----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Patricio Betancourt
-- 
-- Create Date:    22:12:18 05/22/2022 
-- Design Name: 		
-- Module Name:    dispensador - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity dispensador is
	port(clk, prox, vacio: in std_logic;
		disp, ledV: out std_logic;
		aux: inout std_logic_vector(1 downto 0));
end dispensador;

architecture Behavioral of dispensador is
Type estado is (A,B,C,D); --declaramos el tipo estado con los cuatro estados que tendra el dispensador
signal estate_fut, estate: estado; --se inicializan seniales de tipo estado
begin
process(prox, vacio, clk) begin
		case estate is
		--primer ciclo, se comprueba si el sensor de proximidad manda senial
			when A => 
			disp <= '0';
			ledV <= '0';
			aux<="00";
			if prox = '1' then estate_fut <= B;
			else estate_fut<=A;
			end if;
		--segundo ciclo, se comprueba si el sensor de vacio esta activo o no
			when B => 
			disp <= '0';
			ledV <= '0';
			aux<="01";
			if vacio = '0' then estate_fut <= D;
			else estate_fut<= C;
			end if;
		--tercer ciclo, se enciende el led de vacio y se espera a que sea rellenado el dispensador
			when C => 
			disp <= '0';
			ledV <= '1';
			aux<="10";
			if vacio = '0' then estate_fut <= A;
			else estate_fut<= C;
			end if;
		--cuarto ciclo, se dispensa el alcohol y se comprueba si el usuario mantiene la mano o si la retira
			when D => 
			disp <= '1';
			ledV <= '0';
			aux<="11";
			if prox = '0' then estate_fut <= A;
			else estate_fut<= B;
			end if;
		end case;
end process;

process (clk) begin --se inicia el proceso con un reloj
	if(clk' event and clk='1')then
		estate<=estate_fut; --cada que el reloj mande una senial en alto se hara el intercambio de estados
	end if;
end process;
end Behavioral;