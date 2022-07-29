LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TBprocesosSucesivos IS
END TBprocesosSucesivos;
 
ARCHITECTURE behavior OF TBprocesosSucesivos IS 

 
    COMPONENT procesosSucesivos
    PORT(
         clk : IN  std_logic;
         F : OUT  std_logic_vector(0 to 3)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';

 	--Outputs
   signal F : std_logic_vector(0 to 3);
   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: procesosSucesivos PORT MAP (
          clk => clk,
          F => F
        );

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
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
