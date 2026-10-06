library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity full_adder_1bit is
    Port (
        A    : in  STD_LOGIC;
        B    : in  STD_LOGIC;
        Cin  : in  STD_LOGIC;
        Sum  : out STD_LOGIC;
        Cout : out STD_LOGIC
    );
end full_adder_1bit;

architecture Structural of full_adder_1bit is

    signal X1 : STD_LOGIC;
    signal A1 : STD_LOGIC;
    signal A2 : STD_LOGIC;

begin

    -- Sum = A XOR B XOR Cin
    X1  <= A XOR B;
    Sum <= X1 XOR Cin;

    -- Cout = AB + Cin(A XOR B)
    A1 <= A AND B;
    A2 <= X1 AND Cin;

    Cout <= A1 OR A2;

end Structural;