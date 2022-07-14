LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY TBFlipFlopJK1 IS
END TBFlipFlopJK1;
 
ARCHITECTURE behavior OF TBFlipFlopJK1 IS 
 
 
    COMPONENT FlipFopJK1
    PORT(
         J : IN  std_logic;
         K : IN  std_logic;
         CLK : IN  std_logic;
         Q1 : OUT  std_logic;
         Q2 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal J : std_logic := '0';
   signal K : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal Q1 : std_logic;
   signal Q2 : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FlipFopJK1 PORT MAP (
          J => J,
          K => K,
          CLK => CLK,
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
      J<='0';
		K<='0';
		wait for 100 ns;	
		
		J<='0';
		K<='1';
		wait for 100 ns;
		
		J<='1';
		K<='0';
		wait for 100 ns;
		
		J<='1';
		K<='1';
		wait for 100 ns;
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
