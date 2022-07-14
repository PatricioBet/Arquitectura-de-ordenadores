LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY TBRegistroSemaforo5 IS
END TBRegistroSemaforo5;
 
ARCHITECTURE behavior OF TBRegistroSemaforo5 IS 
 

 
    COMPONENT RegistroSemaforo5
    PORT(
         clk : IN  std_logic;
         Q : OUT  std_logic_vector(3 downto 0);
         SN : INOUT  std_logic_vector(0 to 2);
         EO : INOUT  std_logic_vector(0 to 2)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';

	--BiDirs
   signal SN : std_logic_vector(0 to 2);
   signal EO : std_logic_vector(0 to 2);

 	--Outputs
   signal Q : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RegistroSemaforo5 PORT MAP (
          clk => clk,
          Q => Q,
          SN => SN,
          EO => EO
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
