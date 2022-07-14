LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TBDiagramaDesEstado13 IS
END TBDiagramaDesEstado13;
 
ARCHITECTURE behavior OF TBDiagramaDesEstado13 IS 
 
    COMPONENT DiagramaDeEstado13
    PORT(
         CLK : IN  std_logic;
         X : IN  std_logic;
         Z : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal X : std_logic := '0';

 	--Outputs
   signal Z : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DiagramaDeEstado13 PORT MAP (
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
      X<='0';
		wait for 200 ns;	
		X<='1';
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
