LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TBContadorA9_10 IS
END TBContadorA9_10;
 
ARCHITECTURE behavior OF TBContadorA9_10 IS 
 
 
    COMPONENT ContadorA9_10
    PORT(
         CLK : IN  std_logic;
         C : IN  std_logic;
         SAL1 : INOUT  std_logic;
         SAL2 : INOUT  std_logic;
         Q : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal C : std_logic := '0';

	--BiDirs
   signal SAL1 : std_logic;
   signal SAL2 : std_logic;

 	--Outputs
   signal Q : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ContadorA9_10 PORT MAP (
          CLK => CLK,
          C => C,
          SAL1 => SAL1,
          SAL2 => SAL2,
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
      C<='0';
		wait for 100 ns;	
		C<='1';
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
