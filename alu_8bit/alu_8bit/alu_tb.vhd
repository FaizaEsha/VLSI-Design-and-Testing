-- Testbench for the 8-bit ALU
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
 
entity alu_tb is
end alu_tb;
 
architecture sim of alu_tb is
    signal A, B, Res : std_logic_vector(7 downto 0) := (others => '0');
    signal Op        : std_logic_vector(2 downto 0) := "000";
    signal Cin, Cout, Zero : std_logic := '0';
begin
    uut : entity work.alu_8bit
        port map (A => A, B => B, Cin => Cin, Op => Op,
                  Result => Res, Cout => Cout, Zero => Zero);
 
    stim : process
    begin
        -- ADD: 45 + 27 = 72
        A <= x"2D"; B <= x"1B"; Cin <= '0'; Op <= "000"; wait for 30 ns;
        assert Res = x"48" report "ADD 45+27 failed" severity error;
 
        -- ADD with carry-in: 100 + 55 + 1 = 156
        A <= x"64"; B <= x"37"; Cin <= '1'; Op <= "000"; wait for 30 ns;
        assert Res = x"9C" report "ADD with Cin failed" severity error;
 
        -- ADD overflow: 200 + 100 = 300 -> 44 (0x2C), Cout = 1
        A <= x"C8"; B <= x"64"; Cin <= '0'; Op <= "000"; wait for 30 ns;
        assert Res = x"2C" and Cout = '1'
            report "ADD 200+100 failed" severity error;
 
        -- SUB: 80 - 30 = 50
        A <= x"50"; B <= x"1E"; Cin <= '0'; Op <= "001"; wait for 30 ns;
        assert Res = x"32" report "SUB 80-30 failed" severity error;
 
        -- SUB: 123 - 123 = 0, Zero = 1
        A <= x"7B"; B <= x"7B"; Cin <= '0'; Op <= "001"; wait for 30 ns;
        assert Res = x"00" and Zero = '1'
            report "SUB 123-123 failed" severity error;
 
        -- SUB with negative result: 15 - 25 = -10 (0xF6 in 8 bits)
        A <= x"0F"; B <= x"19"; Cin <= '0'; Op <= "001"; wait for 30 ns;
        assert Res = x"F6" report "SUB 15-25 failed" severity error;
 
        -- AND
        A <= x"96"; B <= x"5C"; Cin <= '0'; Op <= "010"; wait for 30 ns;
        assert Res = x"14" and Cout = '0' report "AND failed" severity error;
 
        -- OR
        Op <= "011"; wait for 30 ns;
        assert Res = x"DE" report "OR failed" severity error;
 
        -- XOR
        Op <= "100"; wait for 30 ns;
        assert Res = x"CA" report "XOR failed" severity error;
 
        -- NOT (of A)
        Op <= "101"; wait for 30 ns;
        assert Res = x"69" report "NOT failed" severity error;
 
        -- Unused code
        Op <= "111"; wait for 30 ns;
        assert Res = x"00" and Zero = '1' report "Unused op failed" severity error;
 
        report "ALU testbench finished" severity note;
        wait;
    end process;
end sim;