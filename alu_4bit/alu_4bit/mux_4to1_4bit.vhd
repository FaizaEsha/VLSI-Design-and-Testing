library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux_4to1_4bit is
    Port (
        I0  : in  STD_LOGIC_VECTOR(3 downto 0);
        I1  : in  STD_LOGIC_VECTOR(3 downto 0);
        I2  : in  STD_LOGIC_VECTOR(3 downto 0);
        I3  : in  STD_LOGIC_VECTOR(3 downto 0);
        SEL : in  STD_LOGIC_VECTOR(1 downto 0);
        Y   : out STD_LOGIC_VECTOR(3 downto 0)
    );
end mux_4to1_4bit;

architecture Behavioral of mux_4to1_4bit is

begin

    Y <= I0 when SEL = "00" else
         I1 when SEL = "01" else
         I2 when SEL = "10" else
         I3;

end Behavioral;