LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TBRegistroDesplazamientoSerie4 IS
END TBRegistroDesplazamientoSerie4;
 
ARCHITECTURE behavior OF TBRegistroDesplazamientoSerie4 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RegistroDesplazamientoSerie4
    PORT(
         CLK : IN  std_logic;
         Q : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RegistroDesplazamientoSerie4 PORT MAP (
          CLK => CLK,
          Q => Q
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
      
		wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
