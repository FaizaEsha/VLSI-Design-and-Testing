library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_8bit_tb is
end alu_8bit_tb;

architecture Behavioral of alu_8bit_tb is

    signal A      : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal B      : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal Cin    : STD_LOGIC := '0';
    signal Op     : STD_LOGIC_VECTOR(2 downto 0) := "000";
    signal Result : STD_LOGIC_VECTOR(7 downto 0);
    signal Cout   : STD_LOGIC;
    signal Zero   : STD_LOGIC;

begin

    -- Instantiate the ALU
    UUT: entity work.alu_8bit
        port map (
            A      => A,
            B      => B,
            Cin    => Cin,
            Op     => Op,
            Result => Result,
            Cout   => Cout,
            Zero   => Zero
        );

    -- Apply test cases
    stim_proc: process
    begin

        -- Test 1: ADD 5 + 3 = 8
        A <= x"05";
        B <= x"03";
        Cin <= '0';
        Op <= "000";
        wait for 20 ns;

        assert Result = x"08" and Cout = '0' and Zero = '0'
            report "Test 1 ADD failed"
            severity error;

        -- Test 2: ADD FF + 01 = 00, carry = 1
        A <= x"FF";
        B <= x"01";
        Cin <= '0';
        Op <= "000";
        wait for 20 ns;

        assert Result = x"00" and Cout = '1' and Zero = '1'
            report "Test 2 ADD carry failed"
            severity error;

        -- Test 3: ADD 5 + 3 + Cin(1) = 9
        A <= x"05";
        B <= x"03";
        Cin <= '1';
        Op <= "000";
        wait for 20 ns;

        assert Result = x"09" and Cout = '0' and Zero = '0'
            report "Test 3 ADD with Cin failed"
            severity error;

        -- Test 4: SUB 9 - 4 = 5
        A <= x"09";
        B <= x"04";
        Cin <= '0';
        Op <= "001";
        wait for 20 ns;

        assert Result = x"05" and Cout = '1' and Zero = '0'
            report "Test 4 SUB failed"
            severity error;

        -- Test 5: SUB 5 - 5 = 0
        A <= x"05";
        B <= x"05";
        Cin <= '0';
        Op <= "001";
        wait for 20 ns;

        assert Result = x"00" and Cout = '1' and Zero = '1'
            report "Test 5 SUB zero failed"
            severity error;

        -- Test 6: AND AA AND F0 = A0
        A <= x"AA";
        B <= x"F0";
        Cin <= '0';
        Op <= "010";
        wait for 20 ns;

        assert Result = x"A0" and Cout = '0' and Zero = '0'
            report "Test 6 AND failed"
            severity error;

        -- Test 7: OR AA OR F0 = FA
        A <= x"AA";
        B <= x"F0";
        Op <= "011";
        wait for 20 ns;

        assert Result = x"FA" and Cout = '0' and Zero = '0'
            report "Test 7 OR failed"
            severity error;

        -- Test 8: XOR AA XOR F0 = 5A
        A <= x"AA";
        B <= x"F0";
        Op <= "100";
        wait for 20 ns;

        assert Result = x"5A" and Cout = '0' and Zero = '0'
            report "Test 8 XOR failed"
            severity error;

        -- Test 9: NOT 0F = F0
        A <= x"0F";
        Op <= "101";
        wait for 20 ns;

        assert Result = x"F0" and Cout = '0' and Zero = '0'
            report "Test 9 NOT failed"
            severity error;

        -- Test 10: NOT FF = 00
        A <= x"FF";
        Op <= "101";
        wait for 20 ns;

        assert Result = x"00" and Cout = '0' and Zero = '1'
            report "Test 10 NOT zero failed"
            severity error;

        -- Test 11: Reserved opcode returns zero
        A <= x"12";
        B <= x"34";
        Op <= "110";
        wait for 20 ns;

        assert Result = x"00" and Cout = '0' and Zero = '1'
            report "Test 11 Reserved opcode failed"
            severity error;

        report "All ALU test cases completed."
            severity note;

        wait;

    end process;

end Behavioral;