library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity full_adder_4bit is
    Port (
        A    : in  STD_LOGIC_VECTOR(3 downto 0);
        B    : in  STD_LOGIC_VECTOR(3 downto 0);
        Cin  : in  STD_LOGIC;
        Sum  : out STD_LOGIC_VECTOR(3 downto 0);
        Cout : out STD_LOGIC
    );
end full_adder_4bit;

architecture Structural of full_adder_4bit is

    component full_adder_1bit
        Port (
            A    : in  STD_LOGIC;
            B    : in  STD_LOGIC;
            Cin  : in  STD_LOGIC;
            Sum  : out STD_LOGIC;
            Cout : out STD_LOGIC
        );
    end component;

    signal C1 : STD_LOGIC;
    signal C2 : STD_LOGIC;
    signal C3 : STD_LOGIC;

begin

    -- Bit 0
    FA0: full_adder_1bit
        port map (
            A    => A(0),
            B    => B(0),
            Cin  => Cin,
            Sum  => Sum(0),
            Cout => C1
        );

    -- Bit 1
    FA1: full_adder_1bit
        port map (
            A    => A(1),
            B    => B(1),
            Cin  => C1,
            Sum  => Sum(1),
            Cout => C2
        );

    -- Bit 2
    FA2: full_adder_1bit
        port map (
            A    => A(2),
            B    => B(2),
            Cin  => C2,
            Sum  => Sum(2),
            Cout => C3
        );

    -- Bit 3
    FA3: full_adder_1bit
        port map (
            A    => A(3),
            B    => B(3),
            Cin  => C3,
            Sum  => Sum(3),
            Cout => Cout
        );

end Structural;