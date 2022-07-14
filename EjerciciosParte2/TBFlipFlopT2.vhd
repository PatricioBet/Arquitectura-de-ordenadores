LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY TBFlipFlopT2 IS
END TBFlipFlopT2;
 
ARCHITECTURE behavior OF TBFlipFlopT2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FlipFlopT2
    PORT(
         T : IN  std_logic;
         CLK : IN  std_logic;
         Q1 : INOUT  std_logic;
         Q2 : INOUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal T : std_logic := '0';
   signal CLK : std_logic := '0';

	--BiDirs
   signal Q1 : std_logic;
   signal Q2 : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FlipFlopT2 PORT MAP (
          T => T,
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
		T<='0';
		Q1<='0';
      wait for 100 ns;	
		Q1<='1';
      wait for 100 ns;
		T<='1';
      wait for 100 ns;
		Q1<='0';
      wait for 100 ns;
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
