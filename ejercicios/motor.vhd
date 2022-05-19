----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:58:51 05/18/2022 
-- Design Name: 
-- Module Name:    motor - Behavioral 
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

entity motor is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : in  STD_LOGIC;
           y : out  STD_LOGIC);
end motor;
use work.gates.all;
architecture Behavioral of motor is

	SIGNAL X: BIT_VECTOR(0 TO 1);
begin
	U0: AND2 PORT MAP(a, not b, X(0));
	U1: AND2 PORT MAP(c, not b, X(1));
	U2: AND2 PORT MAP(a, c, X(2));
	U3: OR2 PORT MAP (X(0), X(1), X(3));
	U4: AND2 PORT MAP(X(3), X(2), Y);
end Behavioral;

