LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TBDiagramaDeEstados14 IS
END TBDiagramaDeEstados14;
 
ARCHITECTURE behavior OF TBDiagramaDeEstados14 IS 
 
 
    COMPONENT DiagramaDeEstados14
    PORT(
         CLK : IN  std_logic;
         X : IN  std_logic;
         Z : OUT  std_logic_vector(0 to 2)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal X : std_logic := '0';

 	--Outputs
   signal Z : std_logic_vector(0 to 2);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DiagramaDeEstados14 PORT MAP (
          CLK => CLK,
          X => X,
          Z => Z
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
      X<='1';
		wait for 300 ns;	
		X<='0';
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
