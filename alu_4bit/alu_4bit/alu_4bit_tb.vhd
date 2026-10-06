library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_4bit_tb is
end alu_4bit_tb;

architecture Test of alu_4bit_tb is

    signal in_A    : STD_LOGIC_VECTOR(3 downto 0) := "0000";
    signal in_B    : STD_LOGIC_VECTOR(3 downto 0) := "0000";
    signal select_op : STD_LOGIC_VECTOR(1 downto 0) := "00";

    signal output_Y : STD_LOGIC_VECTOR(3 downto 0);
    signal carry_out : STD_LOGIC;

begin

    UUT: entity work.alu_4bit
        port map (
            A    => in_A,
            B    => in_B,
            SEL  => select_op,
            Y    => output_Y,
            COUT => carry_out
        );

    stimulus: process
    begin

        ----------------------------------------------------------------
        -- CASE 1 : ADD
        -- 1010 + 0101 = 1111
        ----------------------------------------------------------------
        in_A <= "1010";
        in_B <= "0101";
        select_op <= "10";

        wait for 10 ns;

        assert (output_Y = "1111")
        report "ADD test failed: 1010 + 0101"
        severity error;

        assert (carry_out = '0')
        report "Incorrect carry for ADD case 1"
        severity error;


        ----------------------------------------------------------------
        -- CASE 2 : AND
        -- 1111 AND 0101 = 0101
        ----------------------------------------------------------------
        in_A <= "1111";
        in_B <= "0101";
        select_op <= "00";

        wait for 10 ns;

        assert (output_Y = "0101" and carry_out = '0')
        report "AND test failed: 1111 AND 0101"
        severity error;


        ----------------------------------------------------------------
        -- CASE 3 : OR
        -- 1001 OR 0100 = 1101
        ----------------------------------------------------------------
        in_A <= "1001";
        in_B <= "0100";
        select_op <= "01";

        wait for 10 ns;

        assert (output_Y = "1101" and carry_out = '0')
        report "OR test failed: 1001 OR 0100"
        severity error;


        ----------------------------------------------------------------
        -- CASE 4 : ADD WITH CARRY
        -- 1111 + 0001 = 10000
        ----------------------------------------------------------------
        in_A <= "1111";
        in_B <= "0001";
        select_op <= "10";

        wait for 10 ns;

        assert (output_Y = "0000" and carry_out = '1')
        report "Overflow ADD test failed"
        severity error;


        ----------------------------------------------------------------
        -- CASE 5 : AND
        -- 1100 AND 1010 = 1000
        ----------------------------------------------------------------
        in_A <= "1100";
        in_B <= "1010";
        select_op <= "00";

        wait for 10 ns;

        assert (output_Y = "1000" and carry_out = '0')
        report "AND test failed: 1100 AND 1010"
        severity error;


        ----------------------------------------------------------------
        -- CASE 6 : OR
        -- 1100 OR 0011 = 1111
        ----------------------------------------------------------------
        in_A <= "1100";
        in_B <= "0011";
        select_op <= "01";

        wait for 10 ns;

        assert (output_Y = "1111" and carry_out = '0')
        report "OR test failed: 1100 OR 0011"
        severity error;


        ----------------------------------------------------------------
        -- CASE 7 : ADD
        -- 0011 + 0101 = 1000
        ----------------------------------------------------------------
        in_A <= "0011";
        in_B <= "0101";
        select_op <= "10";

        wait for 10 ns;

        assert (output_Y = "1000" and carry_out = '0')
        report "ADD test failed: 0011 + 0101"
        severity error;


        ----------------------------------------------------------------
        -- CASE 8 : UNUSED OPERATION
        -- SEL = 11 -> output must be 0000
        ----------------------------------------------------------------
        in_A <= "1010";
        in_B <= "0101";
        select_op <= "11";

        wait for 10 ns;

        assert (output_Y = "0000" and carry_out = '0')
        report "Unused SEL=11 test failed"
        severity error;


        report "ALU verification completed: all test cases passed."
        severity note;

        wait;

    end process;

end Test;