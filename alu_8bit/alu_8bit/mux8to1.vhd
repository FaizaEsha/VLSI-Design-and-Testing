-- 1-bit 8:1 multiplexer
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity mux8to1 is
    port (
        i0, i1, i2, i3, i4, i5, i6, i7 : in  std_logic;
        sel : in  std_logic_vector(2 downto 0);
        y   : out std_logic
    );
end mux8to1;


architecture dataflow of mux8to1 is
begin
    with sel select
        y <= i0 when "000",
             i1 when "001",
             i2 when "010",
             i3 when "011",
             i4 when "100",
             i5 when "101",
             i6 when "110",
             i7 when "111",
             '0' when others;
end dataflow;