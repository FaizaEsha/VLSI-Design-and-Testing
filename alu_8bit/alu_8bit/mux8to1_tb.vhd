library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux8to1_tb is
end mux8to1_tb;

architecture Behavioral of mux8to1_tb is

    component mux8to1
        port (
            i0, i1, i2, i3, i4, i5, i6, i7 : in  std_logic;
            sel : in  std_logic_vector(2 downto 0);
            y   : out std_logic
        );
    end component;

    signal i0_tb, i1_tb, i2_tb, i3_tb : std_logic;
    signal i4_tb, i5_tb, i6_tb, i7_tb : std_logic;
    signal sel_tb : std_logic_vector(2 downto 0);
    signal y_tb   : std_logic;

begin

    UUT: mux8to1 port map (i0 => i0_tb, i1 => i1_tb, i2 => i2_tb, i3 => i3_tb,
                           i4 => i4_tb, i5 => i5_tb, i6 => i6_tb, i7 => i7_tb,
                           sel => sel_tb, y => y_tb);

    stim_proc: process
    begin
        -- Inputs: only one input is '1' at a time, the select picks it
        i0_tb <= '0'; i1_tb <= '0'; i2_tb <= '0'; i3_tb <= '0';
        i4_tb <= '0'; i5_tb <= '0'; i6_tb <= '0'; i7_tb <= '0';

        sel_tb <= "000"; i0_tb <= '1'; wait for 10 ns;
        assert (y_tb = '1') report "FAIL: sel=000" severity error;
        i0_tb <= '0';

        sel_tb <= "001"; i1_tb <= '1'; wait for 10 ns;
        assert (y_tb = '1') report "FAIL: sel=001" severity error;
        i1_tb <= '0';

        sel_tb <= "010"; i2_tb <= '1'; wait for 10 ns;
        assert (y_tb = '1') report "FAIL: sel=010" severity error;
        i2_tb <= '0';

        sel_tb <= "011"; i3_tb <= '1'; wait for 10 ns;
        assert (y_tb = '1') report "FAIL: sel=011" severity error;
        i3_tb <= '0';

        sel_tb <= "100"; i4_tb <= '1'; wait for 10 ns;
        assert (y_tb = '1') report "FAIL: sel=100" severity error;
        i4_tb <= '0';

        sel_tb <= "101"; i5_tb <= '1'; wait for 10 ns;
        assert (y_tb = '1') report "FAIL: sel=101" severity error;
        i5_tb <= '0';

        sel_tb <= "110"; i6_tb <= '1'; wait for 10 ns;
        assert (y_tb = '1') report "FAIL: sel=110" severity error;
        i6_tb <= '0';

        sel_tb <= "111"; i7_tb <= '1'; wait for 10 ns;
        assert (y_tb = '1') report "FAIL: sel=111" severity error;
        i7_tb <= '0';

        report "PASS: mux8to1 testbench completed" severity note;
        wait;
    end process;

end Behavioral;