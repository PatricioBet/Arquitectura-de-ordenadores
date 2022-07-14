LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TBRegistro4Bits3 IS
END TBRegistro4Bits3;
 
ARCHITECTURE behavior OF TBRegistro4Bits3 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Registro4Bits3
    PORT(
         CLK : IN  std_logic;
         RESET : IN  std_logic;
         L : IN  std_logic;
         R : IN  std_logic;
         S : IN  std_logic_vector(0 to 1);
         D : IN  std_logic_vector(0 to 3);
         Q : OUT  std_logic_vector(0 to 3)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RESET : std_logic := '0';
   signal L : std_logic := '0';
   signal R : std_logic := '0';
   signal S : std_logic_vector(0 to 1) := (others => '0');
   signal D : std_logic_vector(0 to 3) := (others => '0');

 	--Outputs
   signal Q : std_logic_vector(0 to 3);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Registro4Bits3 PORT MAP (
          CLK => CLK,
          RESET => RESET,
          L => L,
          R => R,
          S => S,
          D => D,
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
      S<="00";
		D<="1010";
		wait for 100 ns;	
		S<="01";
		D<="1110";
		wait for 100 ns;	
		S<="10";
		D<="1100";
		wait for 100 ns;	
		S<="11";
		D<="0000";
		wait for 100 ns;	
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
