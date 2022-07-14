LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TBContadorAscendenteDescendente8 IS
END TBContadorAscendenteDescendente8;
 
ARCHITECTURE behavior OF TBContadorAscendenteDescendente8 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ContadorAdcendenteDescendente8
    PORT(
         CLK : IN  std_logic;
         X : IN  std_logic;
         Q : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal X : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(1 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ContadorAdcendenteDescendente8 PORT MAP (
          CLK => CLK,
          X => X,
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
      X<='0';
		wait for 300 ns;	
		X<='1';
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
