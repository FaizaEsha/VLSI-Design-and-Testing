library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity addsub_8bit_tb is
end addsub_8bit_tb;

architecture Behavioral of addsub_8bit_tb is

    component addsub_8bit
        port (
            a, b : in  std_logic_vector(7 downto 0);
            cin  : in  std_logic;
            sub  : in  std_logic;
            sum  : out std_logic_vector(7 downto 0);
            cout : out std_logic
        );
    end component;

    signal a_tb, b_tb, sum_tb : std_logic_vector(7 downto 0);
    signal cin_tb, sub_tb, cout_tb : std_logic;

begin

    UUT: addsub_8bit port map (a => a_tb, b => b_tb, cin => cin_tb,
                               sub => sub_tb, sum => sum_tb, cout => cout_tb);

    stim_proc: process
    begin
        -- ADD: 05 + 03 = 08
        a_tb <= x"05"; b_tb <= x"03"; cin_tb <= '0'; sub_tb <= '0'; wait for 20 ns;
        assert (sum_tb = x"08" and cout_tb = '0') report "FAIL: 05+03" severity error;

        -- ADD: FF + 01 = 00, cout=1
        a_tb <= x"FF"; b_tb <= x"01"; cin_tb <= '0'; sub_tb <= '0'; wait for 20 ns;
        assert (sum_tb = x"00" and cout_tb = '1') report "FAIL: FF+01" severity error;

        -- ADD with carry-in: 10 + 20 + 1 = 31
        a_tb <= x"10"; b_tb <= x"20"; cin_tb <= '1'; sub_tb <= '0'; wait for 20 ns;
        assert (sum_tb = x"31" and cout_tb = '0') report "FAIL: 10+20+cin" severity error;

        -- SUB: 09 - 04 = 05, cout=1 (no borrow)
        a_tb <= x"09"; b_tb <= x"04"; cin_tb <= '0'; sub_tb <= '1'; wait for 20 ns;
        assert (sum_tb = x"05" and cout_tb = '1') report "FAIL: 09-04" severity error;

        -- SUB: 03 - 05 = FE, cout=0 (borrow)
        a_tb <= x"03"; b_tb <= x"05"; cin_tb <= '0'; sub_tb <= '1'; wait for 20 ns;
        assert (sum_tb = x"FE" and cout_tb = '0') report "FAIL: 03-05" severity error;

        -- SUB: FF - FF = 00, cout=1
        a_tb <= x"FF"; b_tb <= x"FF"; cin_tb <= '0'; sub_tb <= '1'; wait for 20 ns;
        assert (sum_tb = x"00" and cout_tb = '1') report "FAIL: FF-FF" severity error;

        report "PASS: addsub_8bit testbench completed" severity note;
        wait;
    end process;

end Behavioral;