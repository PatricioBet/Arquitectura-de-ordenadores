--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:50:01 07/14/2022
-- Design Name:   
-- Module Name:   D:/circuitos/EjerciciosParte2/TBContadorAleatorio19.vhd
-- Project Name:  EjerciciosParte2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ContadorAleatorio19
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TBContadorAleatorio19 IS
END TBContadorAleatorio19;
 
ARCHITECTURE behavior OF TBContadorAleatorio19 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ContadorAleatorio19
    PORT(
         CLK : IN  std_logic;
         X : IN  std_logic;
         Z : OUT  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal X : std_logic := '0';

 	--Outputs
   signal Z : std_logic_vector(2 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ContadorAleatorio19 PORT MAP (
          CLK => CLK,
          X => X,
          Z => Z
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      X<='0';
		wait for 100 ns;	
		X<='1';
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;