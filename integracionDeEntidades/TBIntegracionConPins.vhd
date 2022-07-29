LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TBIntegracionConPins IS
END TBIntegracionConPins;
 
ARCHITECTURE behavior OF TBIntegracionConPins IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT IntegracionConPins
    PORT(
         clk : IN  std_logic;
         Q : INOUT  std_logic_vector(1 downto 0);
         F : OUT  std_logic_vector(0 to 3)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';

	--BiDirs
   signal Q : std_logic_vector(1 downto 0);

 	--Outputs
   signal F : std_logic_vector(0 to 3);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: IntegracionConPins PORT MAP (
          clk => clk,
          Q => Q,
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
