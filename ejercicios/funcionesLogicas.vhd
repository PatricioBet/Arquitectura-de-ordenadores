----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:29:26 05/18/2022 
-- Design Name: 
-- Module Name:    funcionesLogicas - Behavioral 
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

entity funcionesLogicas is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           F : out  STD_LOGIC;
           F0 : out  STD_LOGIC;
           F2 : out  STD_LOGIC);
end funcionesLogicas;
use work.gates.all;

architecture Behavioral of funcionesLogicas is
SIGNAL X: BIT_VECTOR(0 TO 3);
begin
	U0: OR2 PORT MAP (A, B, X(0));
	U1: AND2 PORT MAP (X(0), C, F0);
	U2: AND2 PORT MAP (A, C, X(1));
	U3: AND2 PORT MAP (B, C, X(2);
	U4: OR2 PORT MAP (X(1), X(2), F0;
	U5: AND2 PORT MAP (B, C, F);
	U6: OR2 PORT MAP (A, C, F2);
end Behavioral;

