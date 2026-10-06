library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_4bit is
    Port (
        A    : in  STD_LOGIC_VECTOR(3 downto 0);
        B    : in  STD_LOGIC_VECTOR(3 downto 0);
        SEL  : in  STD_LOGIC_VECTOR(1 downto 0);
        Y    : out STD_LOGIC_VECTOR(3 downto 0);
        COUT : out STD_LOGIC
    );
end alu_4bit;

architecture Structural of alu_4bit is

    component and_4bit
        Port (
            A : in  STD_LOGIC_VECTOR(3 downto 0);
            B : in  STD_LOGIC_VECTOR(3 downto 0);
            Y : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    component or_4bit
        Port (
            A : in  STD_LOGIC_VECTOR(3 downto 0);
            B : in  STD_LOGIC_VECTOR(3 downto 0);
            Y : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    component full_adder_4bit
        Port (
            A    : in  STD_LOGIC_VECTOR(3 downto 0);
            B    : in  STD_LOGIC_VECTOR(3 downto 0);
            Cin  : in  STD_LOGIC;
            Sum  : out STD_LOGIC_VECTOR(3 downto 0);
            Cout : out STD_LOGIC
        );
    end component;

    component mux_4to1_4bit
        Port (
            I0  : in  STD_LOGIC_VECTOR(3 downto 0);
            I1  : in  STD_LOGIC_VECTOR(3 downto 0);
            I2  : in  STD_LOGIC_VECTOR(3 downto 0);
            I3  : in  STD_LOGIC_VECTOR(3 downto 0);
            SEL : in  STD_LOGIC_VECTOR(1 downto 0);
            Y   : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    signal AND_RESULT : STD_LOGIC_VECTOR(3 downto 0);
    signal OR_RESULT  : STD_LOGIC_VECTOR(3 downto 0);
    signal ADD_RESULT : STD_LOGIC_VECTOR(3 downto 0);

    signal ADD_COUT   : STD_LOGIC;

    signal UNUSED_RESULT : STD_LOGIC_VECTOR(3 downto 0);

begin

    -- Unused operation
    UNUSED_RESULT <= "0000";


    -- ==========================================
    -- AND Unit
    -- ==========================================

    AND_UNIT: and_4bit
        port map (
            A => A,
            B => B,
            Y => AND_RESULT
        );


    -- ==========================================
    -- OR Unit
    -- ==========================================

    OR_UNIT: or_4bit
        port map (
            A => A,
            B => B,
            Y => OR_RESULT
        );


    -- ==========================================
    -- 4-bit ADDER
    -- ==========================================

    ADDER_UNIT: full_adder_4bit
        port map (
            A    => A,
            B    => B,
            Cin  => '0',
            Sum  => ADD_RESULT,
            Cout => ADD_COUT
        );


    -- ==========================================
    -- 4-to-1 MUX
    -- ==========================================

    MUX_UNIT: mux_4to1_4bit
        port map (
            I0  => AND_RESULT,
            I1  => OR_RESULT,
            I2  => ADD_RESULT,
            I3  => UNUSED_RESULT,
            SEL => SEL,
            Y   => Y
        );


    -- ==========================================
    -- COUT
    -- Only ADD produces COUT
    -- ==========================================

    COUT <= ADD_COUT when SEL = "10" else
            '0';

end Structural;