LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY TBSemaforoMejorado15 IS
END TBSemaforoMejorado15;
 
ARCHITECTURE behavior OF TBSemaforoMejorado15 IS 
 
 
    COMPONENT SrmaforoMejorado15
    PORT(
         CLK : IN  std_logic;
         SESOR : IN  std_logic;
         OE : OUT  std_logic_vector(0 to 2);
         SN : OUT  std_logic_vector(0 to 2)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal SESOR : std_logic := '0';

 	--Outputs
   signal OE : std_logic_vector(0 to 2);
   signal SN : std_logic_vector(0 to 2);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SrmaforoMejorado15 PORT MAP (
          CLK => CLK,
          SESOR => SESOR,
          OE => OE,
          SN => SN
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
      SESOR<='0';
		wait for 100 ns;	
		SESOR<='1';
		wait for 400 ns;
		SESOR<='0';
		wait for 100 ns;
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
