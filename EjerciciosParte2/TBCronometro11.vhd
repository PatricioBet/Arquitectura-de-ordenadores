LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TBCronometro11 IS
END TBCronometro11;
 
ARCHITECTURE behavior OF TBCronometro11 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Cronometro11
    PORT(
         CLK : IN  std_logic;
         Deco1 : OUT  std_logic_vector(0 to 6);
         Deco2 : OUT  std_logic_vector(0 to 6);
         Q1 : OUT  std_logic_vector(0 to 3);
         Q2 : OUT  std_logic_vector(0 to 3)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';

 	--Outputs
   signal Deco1 : std_logic_vector(0 to 6);
   signal Deco2 : std_logic_vector(0 to 6);
   signal Q1 : std_logic_vector(0 to 3);
   signal Q2 : std_logic_vector(0 to 3);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Cronometro11 PORT MAP (
          CLK => CLK,
          Deco1 => Deco1,
          Deco2 => Deco2,
          Q1 => Q1,
          Q2 => Q2
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
