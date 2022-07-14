--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:52:58 07/14/2022
-- Design Name:   
-- Module Name:   D:/circuitos/EjerciciosParte2/TBSistemaSecuencial20.vhd
-- Project Name:  EjerciciosParte2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: SistemaSecuncial20
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
 
ENTITY TBSistemaSecuencial20 IS
END TBSistemaSecuencial20;
 
ARCHITECTURE behavior OF TBSistemaSecuencial20 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SistemaSecuncial20
    PORT(
          : OUT  std_logic
        );
    END COMPONENT;
    

 	--Outputs
   signal  : std_logic;
   -- No CLKs detected in port list. Replace <CLK> below with 
   -- appropriate port name 
 
   constant <CLK>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SistemaSecuncial20 PORT MAP (
           => 
        );

   -- CLK process definitions
   <CLK>_process :process
   begin
		<CLK> <= '0';
		wait for <CLK>_period/2;
		<CLK> <= '1';
		wait for <CLK>_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      SensorM<="0001";
		wait for 100 ns;	
		SensorM<="1001";
      wait for <CLK>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
