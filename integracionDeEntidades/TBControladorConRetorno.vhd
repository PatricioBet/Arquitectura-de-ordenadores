
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TBControladorConRetorno IS
END TBControladorConRetorno;
 
ARCHITECTURE behavior OF TBControladorConRetorno IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT controladoraConRetorno
    PORT(
         clk : IN  std_logic;
         control : IN  std_logic;
         F : OUT  std_logic_vector(0 to 3);
         Q : INOUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal control : std_logic := '0';

	--BiDirs
   signal Q : std_logic_vector(1 downto 0):="ZZ";
		
 	--Outputs
   signal F : std_logic_vector(0 to 3);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: controladoraConRetorno PORT MAP (
          clk => clk,
          control => control,
          F => F,
          Q => Q
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
		control <= '1';
		wait for 1000 ns;	
		control <= '0';
      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
