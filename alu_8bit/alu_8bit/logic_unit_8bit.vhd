-- 8-bit logic unit: bitwise AND, OR, XOR, NOT (of A)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity logic_unit_8bit is
    port (
        a, b  : in  std_logic_vector(7 downto 0);
        and_r : out std_logic_vector(7 downto 0);
        or_r  : out std_logic_vector(7 downto 0);
        xor_r : out std_logic_vector(7 downto 0);
        not_r : out std_logic_vector(7 downto 0)
    );
end logic_unit_8bit;


architecture dataflow of logic_unit_8bit is
begin
    and_r <= a and b;
    or_r  <= a or b;
    xor_r <= a xor b;
    not_r <= not a;
end dataflow;