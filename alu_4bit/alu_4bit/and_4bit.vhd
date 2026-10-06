library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity and_4bit is
    Port (
        A : in  STD_LOGIC_VECTOR(3 downto 0);
        B : in  STD_LOGIC_VECTOR(3 downto 0);
        Y : out STD_LOGIC_VECTOR(3 downto 0)
    );
end and_4bit;

architecture Structural of and_4bit is

    component and_gate
        Port (
            A : in  STD_LOGIC;
            B : in  STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

begin

    AND0: and_gate
        port map (
            A => A(0),
            B => B(0),
            Y => Y(0)
        );

    AND1: and_gate
        port map (
            A => A(1),
            B => B(1),
            Y => Y(1)
        );

    AND2: and_gate
        port map (
            A => A(2),
            B => B(2),
            Y => Y(2)
        );

    AND3: and_gate
        port map (
            A => A(3),
            B => B(3),
            Y => Y(3)
        );

end Structural;