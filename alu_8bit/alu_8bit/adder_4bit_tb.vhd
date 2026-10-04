library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity adder_4bit_tb is
end adder_4bit_tb;

architecture Behavioral of adder_4bit_tb is

    component adder_4bit
        Port ( A    : in  STD_LOGIC_VECTOR (3 downto 0);
               B    : in  STD_LOGIC_VECTOR (3 downto 0);
               CIN  : in  STD_LOGIC;
               SUM  : out STD_LOGIC_VECTOR (3 downto 0);
               COUT : out STD_LOGIC);
    end component;

    signal A_tb, B_tb, SUM_tb : STD_LOGIC_VECTOR (3 downto 0);
    signal CIN_tb, COUT_tb    : STD_LOGIC;

begin

    UUT: adder_4bit
        port map (
            A    => A_tb,
            B    => B_tb,
            CIN  => CIN_tb,
            SUM  => SUM_tb,
            COUT => COUT_tb
        );

    stim_proc: process
    begin

        -- Test 1: 0000 + 0000 + 0 = 0000
        A_tb <= "0000"; B_tb <= "0000"; CIN_tb <= '0';
        wait for 20 ns;
        assert (SUM_tb = "0000" and COUT_tb = '0')
            report "FAIL: 0000 + 0000 + 0"
            severity error;

        -- Test 2: 0001 + 0010 + 0 = 0011
        A_tb <= "0001"; B_tb <= "0010"; CIN_tb <= '0';
        wait for 20 ns;
        assert (SUM_tb = "0011" and COUT_tb = '0')
            report "FAIL: 0001 + 0010 + 0"
            severity error;

        -- Test 3: 0101 + 0011 + 0 = 1000
        A_tb <= "0101"; B_tb <= "0011"; CIN_tb <= '0';
        wait for 20 ns;
        assert (SUM_tb = "1000" and COUT_tb = '0')
            report "FAIL: 0101 + 0011 + 0"
            severity error;

        -- Test 4: 0111 + 0001 + 0 = 1000
        A_tb <= "0111"; B_tb <= "0001"; CIN_tb <= '0';
        wait for 20 ns;
        assert (SUM_tb = "1000" and COUT_tb = '0')
            report "FAIL: 0111 + 0001 + 0"
            severity error;

        -- Test 5: 1111 + 0001 + 0 = 0000, COUT = 1
        A_tb <= "1111"; B_tb <= "0001"; CIN_tb <= '0';
        wait for 20 ns;
        assert (SUM_tb = "0000" and COUT_tb = '1')
            report "FAIL: 1111 + 0001 + 0"
            severity error;

        -- Test 6: 1010 + 0101 + 0 = 1111
        A_tb <= "1010"; B_tb <= "0101"; CIN_tb <= '0';
        wait for 20 ns;
        assert (SUM_tb = "1111" and COUT_tb = '0')
            report "FAIL: 1010 + 0101 + 0"
            severity error;

        -- Test 7: 1111 + 1111 + 0 = 1110, COUT = 1
        A_tb <= "1111"; B_tb <= "1111"; CIN_tb <= '0';
        wait for 20 ns;
        assert (SUM_tb = "1110" and COUT_tb = '1')
            report "FAIL: 1111 + 1111 + 0"
            severity error;

        -- Test 8: 0000 + 0000 + 1 = 0001
        A_tb <= "0000"; B_tb <= "0000"; CIN_tb <= '1';
        wait for 20 ns;
        assert (SUM_tb = "0001" and COUT_tb = '0')
            report "FAIL: 0000 + 0000 + 1"
            severity error;

        -- Test 9: 0011 + 0100 + 1 = 1000
        A_tb <= "0011"; B_tb <= "0100"; CIN_tb <= '1';
        wait for 20 ns;
        assert (SUM_tb = "1000" and COUT_tb = '0')
            report "FAIL: 0011 + 0100 + 1"
            severity error;

        -- Test 10: 1111 + 0000 + 1 = 0000, COUT = 1
        A_tb <= "1111"; B_tb <= "0000"; CIN_tb <= '1';
        wait for 20 ns;
        assert (SUM_tb = "0000" and COUT_tb = '1')
            report "FAIL: 1111 + 0000 + 1"
            severity error;

        -- Test 11: 1000 + 0111 + 1 = 0000, COUT = 1
        A_tb <= "1000"; B_tb <= "0111"; CIN_tb <= '1';
        wait for 20 ns;
        assert (SUM_tb = "0000" and COUT_tb = '1')
            report "FAIL: 1000 + 0111 + 1"
            severity error;

        -- Test 12: 1010 + 1010 + 1 = 0101, COUT = 1
        A_tb <= "1010"; B_tb <= "1010"; CIN_tb <= '1';
        wait for 20 ns;
        assert (SUM_tb = "0101" and COUT_tb = '1')
            report "FAIL: 1010 + 1010 + 1"
            severity error;

        report "PASS: adder_4bit testbench completed"
            severity note;

        wait;

    end process;

end Behavioral;