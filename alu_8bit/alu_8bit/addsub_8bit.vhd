
-- 8-bit add/subtract unit
-- sub = 0 : sum = A + B + Cin
-- sub = 1 : sum = A + (NOT B) + 1  = A - B
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity addsub_8bit is
    port (
        a, b : in  std_logic_vector(7 downto 0);
        cin  : in  std_logic;
        sub  : in  std_logic;
        sum  : out std_logic_vector(7 downto 0);
        cout : out std_logic
    );
end addsub_8bit;


architecture structural of addsub_8bit is
    signal sub_v   : std_logic_vector(7 downto 0);
    signal b_x     : std_logic_vector(7 downto 0);
    signal cin_eff : std_logic;
begin
    sub_v   <= (others => sub);
    b_x     <= b xor sub_v;      -- 8 XOR gates: invert B when sub = 1
    cin_eff <= cin or sub;       -- forces the "+1" for subtraction


    adder : entity work.adder_8bit
        port map (A => a, B => b_x, CIN => cin_eff, SUM => sum, COUT => cout);
end structural;