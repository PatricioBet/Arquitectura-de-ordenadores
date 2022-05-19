----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:48:09 05/18/2022 
-- Design Name: 
-- Module Name:    robotCargador - Behavioral 
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

entity robotCargador is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           D : in  STD_LOGIC;
           F : out  STD_LOGIC); --F representa la salida del robot
end robotCargador;

architecture Behavioral of robotCargador is
	
begin
	F<= '1' WHEN (A='1' AND B='1' AND C='1' AND D='1')ELSE '0'; --Unicamente el robor partira cuando las cuatro entradas marquen 1
end Behavioral;

