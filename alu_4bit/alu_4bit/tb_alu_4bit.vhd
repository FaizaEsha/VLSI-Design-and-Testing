library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_alu_4bit is
end tb_alu_4bit;

architecture Behavioral of tb_alu_4bit is

    component alu_4bit
        Port (
            A    : in  STD_LOGIC_VECTOR(3 downto 0);
            B    : in  STD_LOGIC_VECTOR(3 downto 0);
            SEL  : in  STD_LOGIC_VECTOR(1 downto 0);
            Y    : out STD_LOGIC_VECTOR(3 downto 0);
            COUT : out STD_LOGIC
        );
    end component;

    signal A    : STD_LOGIC_VECTOR(3 downto 0) := "0000";
    signal B    : STD_LOGIC_VECTOR(3 downto 0) := "0000";
    signal SEL  : STD_LOGIC_VECTOR(1 downto 0) := "00";
    signal Y    : STD_LOGIC_VECTOR(3 downto 0);
    signal COUT : STD_LOGIC;

begin

    -- ==========================================
    -- Unit Under Test
    -- ==========================================

    UUT: alu_4bit
        port map (
            A    => A,
            B    => B,
            SEL  => SEL,
            Y    => Y,
            COUT => COUT
        );


    -- ==========================================
    -- Test Sequence
    -- ==========================================

    STIMULUS: process
    begin

        -- ==========================================
        -- STEP 1
        -- AND
        -- 1100 AND 1010 = 1000
        -- ==========================================

        SEL <= "00";
        A   <= "1100";
        B   <= "1010";

        wait for 10 ns;

        assert Y = "1000"
            report "STEP 1 FAILED: AND"
            severity error;

        assert COUT = '0'
            report "STEP 1 FAILED: COUT"
            severity error;


        -- ==========================================
        -- STEP 2
        -- AND
        -- 1111 AND 0101 = 0101
        -- ==========================================

        SEL <= "00";
        A   <= "1111";
        B   <= "0101";

        wait for 10 ns;

        assert Y = "0101"
            report "STEP 2 FAILED: AND"
            severity error;

        assert COUT = '0'
            report "STEP 2 FAILED: COUT"
            severity error;


        -- ==========================================
        -- STEP 3
        -- OR
        -- 1100 OR 0011 = 1111
        -- ==========================================

        SEL <= "01";
        A   <= "1100";
        B   <= "0011";

        wait for 10 ns;

        assert Y = "1111"
            report "STEP 3 FAILED: OR"
            severity error;

        assert COUT = '0'
            report "STEP 3 FAILED: COUT"
            severity error;


        -- ==========================================
        -- STEP 4
        -- OR
        -- 1001 OR 0100 = 1101
        -- ==========================================

        SEL <= "01";
        A   <= "1001";
        B   <= "0100";

        wait for 10 ns;

        assert Y = "1101"
            report "STEP 4 FAILED: OR"
            severity error;

        assert COUT = '0'
            report "STEP 4 FAILED: COUT"
            severity error;


        -- ==========================================
        -- STEP 5
        -- ADD
        -- 0011 + 0101 = 1000
        -- 3 + 5 = 8
        -- ==========================================

        SEL <= "10";
        A   <= "0011";
        B   <= "0101";

        wait for 10 ns;

        assert Y = "1000"
            report "STEP 5 FAILED: ADD"
            severity error;

        assert COUT = '0'
            report "STEP 5 FAILED: COUT"
            severity error;


        -- ==========================================
        -- STEP 6
        -- ADD
        -- 1111 + 0001 = 1 0000
        -- Y = 0000
        -- COUT = 1
        -- ==========================================

        SEL <= "10";
        A   <= "1111";
        B   <= "0001";

        wait for 10 ns;

        assert Y = "0000"
            report "STEP 6 FAILED: ADD"
            severity error;

        assert COUT = '1'
            report "STEP 6 FAILED: COUT"
            severity error;


        -- ==========================================
        -- STEP 7
        -- ADD
        -- 1010 + 0101 = 1111
        -- 10 + 5 = 15
        -- ==========================================

        SEL <= "10";
        A   <= "1010";
        B   <= "0101";

        wait for 10 ns;

        assert Y = "1111"
            report "STEP 7 FAILED: ADD"
            severity error;

        assert COUT = '0'
            report "STEP 7 FAILED: COUT"
            severity error;


        -- ==========================================
        -- STEP 8
        -- UNUSED
        -- SEL = 11
        -- Y = 0000
        -- COUT = 0
        -- ==========================================

        SEL <= "11";
        A   <= "1010";
        B   <= "0101";

        wait for 10 ns;

        assert Y = "0000"
            report "STEP 8 FAILED: UNUSED"
            severity error;

        assert COUT = '0'
            report "STEP 8 FAILED: COUT"
            severity error;


        -- ==========================================
        -- ALL TESTS PASSED
        -- ==========================================

        report "ALL 8 ALU TESTS PASSED SUCCESSFULLY!"
            severity note;

        wait;

    end process;

end Behavioral;