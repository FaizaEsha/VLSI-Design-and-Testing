library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity tb_register_8bit is
end tb_register_8bit;


architecture Behavioral of tb_register_8bit is


    component register_8bit
        Port (
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            LOAD  : in  STD_LOGIC;
            D     : in  STD_LOGIC_VECTOR(7 downto 0);
            Q     : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;


    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal LOAD  : STD_LOGIC := '0';
    signal D     : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal Q     : STD_LOGIC_VECTOR(7 downto 0);


begin


    -- Unit Under Test
    UUT: register_8bit
        port map (
            CLK   => CLK,
            RESET => RESET,
            LOAD  => LOAD,
            D     => D,
            Q     => Q
        );


    -- ==========================================
    -- Clock Generation
    -- 20 ns clock period
    -- ==========================================
    CLK_PROCESS: process
    begin
        while true loop
            CLK <= '0';
            wait for 10 ns;


            CLK <= '1';
            wait for 10 ns;
        end loop;
    end process;




    -- ==========================================
    -- Test Stimulus
    -- ==========================================
    STIMULUS: process
    begin


        -- ==========================================
        -- Test 1: RESET
        -- ==========================================
        RESET <= '1';
        LOAD  <= '0';
        D     <= "10101010";


        wait for 20 ns;


        -- Q should become 00000000


        RESET <= '0';




        -- ==========================================
        -- Test 2: LOAD 10101010
        -- ==========================================
        LOAD <= '1';
        D    <= "10101010";


        wait for 20 ns;


        -- Q should become 10101010




        -- ==========================================
        -- Test 3: HOLD
        -- ==========================================
        LOAD <= '0';
        D    <= "11111111";


        wait for 20 ns;


        -- Q should remain 10101010




        -- ==========================================
        -- Test 4: LOAD 11001100
        -- ==========================================
        LOAD <= '1';
        D    <= "11001100";


        wait for 20 ns;


        -- Q should become 11001100




        -- ==========================================
        -- Test 5: HOLD
        -- ==========================================
        LOAD <= '0';
        D    <= "00001111";


        wait for 20 ns;


        -- Q should remain 11001100




        -- ==========================================
        -- Test 6: LOAD 11110000
        -- ==========================================
        LOAD <= '1';
        D    <= "11110000";


        wait for 20 ns;


        -- Q should become 11110000




        -- ==========================================
        -- Test 7: RESET again
        -- ==========================================
        RESET <= '1';
        LOAD  <= '0';
        D     <= "11111111";


        wait for 20 ns;


        -- Q should become 00000000




        -- ==========================================
        -- End Simulation
        -- ==========================================
        RESET <= '0';
        LOAD  <= '0';


        wait;


    end process;


end Behavioral;