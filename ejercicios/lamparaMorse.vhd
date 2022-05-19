----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:55:30 05/18/2022 
-- Design Name: 
-- Module Name:    lamparaMorse - Behavioral 
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

entity lamparaMorse is
    Port ( boton : in  STD_LOGIC;
           luz : out  STD_LOGIC);
end lamparaMorse;

architecture Behavioral of lamparaMorse is
	begin
	process(boton) begin
	if (boton='1') then 
	luz<='1';
		else 
		luz<='0';
	end if;
	end process;
end Behavioral;

