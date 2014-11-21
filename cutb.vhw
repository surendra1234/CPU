--------------------------------------------------------------------------------
-- Copyright (c) 1995-2003 Xilinx, Inc.
-- All Right Reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 10.1
--  \   \         Application : ISE
--  /   /         Filename : cutb.vhw
-- /___/   /\     Timestamp : Sat Apr 20 02:56:24 2013
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: 
--Design Name: cutb
--Device: Xilinx
--

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_TEXTIO.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;
USE STD.TEXTIO.ALL;

ENTITY cutb IS
END cutb;

ARCHITECTURE testbench_arch OF cutb IS
    FILE RESULTS: TEXT OPEN WRITE_MODE IS "results.txt";

    COMPONENT CU
        PORT (
            ins_data : In std_logic_vector (15 DownTo 0);
            ins_addr : Out std_logic_vector (15 DownTo 0);
            ins_req : Out std_logic;
            ins_ack : In std_logic;
            clock : In std_logic;
            dat_addr : Out std_logic_vector (15 DownTo 0);
            dat_data : InOut std_logic_vector (7 DownTo 0);
            dat_read : Out std_logic;
            dat_req : Out std_logic;
            dat_ack : In std_logic;
            test : Out std_logic_vector (7 DownTo 0);
            regout1 : Out std_logic_vector (7 DownTo 0);
            regout2 : Out std_logic_vector (7 DownTo 0);
            alout : Out std_logic_vector (7 DownTo 0)
        );
    END COMPONENT;

    SIGNAL ins_data : std_logic_vector (15 DownTo 0) := "0000000000000000";
    SIGNAL ins_addr : std_logic_vector (15 DownTo 0) := "0000000000000000";
    SIGNAL ins_req : std_logic := '0';
    SIGNAL ins_ack : std_logic := '0';
    SIGNAL clock : std_logic := '0';
    SIGNAL dat_addr : std_logic_vector (15 DownTo 0) := "0000000000000000";
    SIGNAL dat_data : std_logic_vector (7 DownTo 0) := "ZZZZZZZZ";
    SIGNAL dat_read : std_logic := '0';
    SIGNAL dat_req : std_logic := '0';
    SIGNAL dat_ack : std_logic := '0';
    SIGNAL test : std_logic_vector (7 DownTo 0) := "00000000";
    SIGNAL regout1 : std_logic_vector (7 DownTo 0) := "00000000";
    SIGNAL regout2 : std_logic_vector (7 DownTo 0) := "00000000";
    SIGNAL alout : std_logic_vector (7 DownTo 0) := "00000000";

    BEGIN
        UUT : CU
        PORT MAP (
            ins_data => ins_data,
            ins_addr => ins_addr,
            ins_req => ins_req,
            ins_ack => ins_ack,
            clock => clock,
            dat_addr => dat_addr,
            dat_data => dat_data,
            dat_read => dat_read,
            dat_req => dat_req,
            dat_ack => dat_ack,
            test => test,
            regout1 => regout1,
            regout2 => regout2,
            alout => alout
        );

        PROCESS
            BEGIN
                WAIT FOR 200 ns;

            END PROCESS;

    END testbench_arch;

