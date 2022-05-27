--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:04:39 05/25/2022
-- Design Name:   
-- Module Name:   D:/circuitos/maquinaEstado/dispensador_test.vhd
-- Project Name:  maquinaEstado
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: dispensador
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
 
ENTITY dispensador_test IS
END dispensador_test;
 
ARCHITECTURE behavior OF dispensador_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT dispensador
    PORT(
         clk : IN  std_logic;
         prox : IN  std_logic;
         vacio : IN  std_logic;
         disp : OUT  std_logic;
         ledV : OUT  std_logic;
         aux : INOUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal prox : std_logic := '0';
   signal vacio : std_logic := '0';

	--BiDirs
   signal aux : std_logic_vector(1 downto 0);

 	--Outputs
   signal disp : std_logic;
   signal ledV : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: dispensador PORT MAP (
          clk => clk,
          prox => prox,
          vacio => vacio,
          disp => disp,
          ledV => ledV,
          aux => aux
        );
	prox<='1' after 100ns, '1' after 200ns, '1' after 300ns, '0' after 400ns;
	vacio<='0' after 100ns, '0' after 200ns, '1' after 300ns, '0' after 400ns;
   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 10 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
