-- 8-bit ALU (top level)
-- Inputs : A, B, Cin, Op
-- Outputs: Result, Cout, Zero
--
--  Op   Operation
--  000  ADD   A + B + Cin
--  001  SUB   A - B
--  010  AND   A and B
--  011  OR    A or B
--  100  XOR   A xor B
--  101  NOT   not A
--  110  unused (Result = 0)
--  111  unused (Result = 0)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity alu_8bit is
    port (
        A      : in  std_logic_vector(7 downto 0);
        B      : in  std_logic_vector(7 downto 0);
        Cin    : in  std_logic;
        Op     : in  std_logic_vector(2 downto 0);
        Result : out std_logic_vector(7 downto 0);
        Cout   : out std_logic;
        Zero   : out std_logic
    );
end alu_8bit;


architecture structural of alu_8bit is
    signal sum_s, and_s, or_s, xor_s, not_s : std_logic_vector(7 downto 0);
    signal res_s   : std_logic_vector(7 downto 0);
    signal cout_ad : std_logic;
begin
    -- add / subtract unit (Op(0) acts as the Sub control)
    u_addsub : entity work.addsub_8bit
        port map (a => A, b => B, cin => Cin, sub => Op(0),
                  sum => sum_s, cout => cout_ad);


    -- logic unit
    u_logic : entity work.logic_unit_8bit
        port map (a => A, b => B,
                  and_r => and_s, or_r => or_s,
                  xor_r => xor_s, not_r => not_s);


    -- result selection: one 8:1 mux per bit
    gen_mux : for i in 0 to 7 generate
        m : entity work.mux8to1
            port map (i0 => sum_s(i), i1 => sum_s(i),
                      i2 => and_s(i), i3 => or_s(i),
                      i4 => xor_s(i), i5 => not_s(i),
                      i6 => '0',      i7 => '0',
                      sel => Op, y => res_s(i));
    end generate;


    Result <= res_s;


    -- carry-out only for ADD (000) and SUB (001)
    Cout <= cout_ad and (not Op(2)) and (not Op(1));


    -- zero flag: 1 when all result bits are 0 (8-input NOR)
    Zero <= not (res_s(0) or res_s(1) or res_s(2) or res_s(3) or
                 res_s(4) or res_s(5) or res_s(6) or res_s(7));
end structural;