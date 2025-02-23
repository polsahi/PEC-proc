LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.numeric_std.all;  

LIBRARY work;
USE work.renacuajo_pkg.all;

ENTITY exception_controller IS
    PORT (
        clk     : IN  STD_LOGIC;
        boot    : IN  STD_LOGIC;
        alu_in  : IN  STD_LOGIC; -- div_zero
        mem_in  : IN  STD_LOGIC; -- alinacio impar
        con_in  : IN  STD_LOGIC; -- inst ilegal
        int_in  : IN  STD_LOGIC; -- interrupcio
        call_in : IN  STD_LOGIC; -- syscall
        inst_prot : IN  STD_LOGIC; -- instruccio protegida
        mem_prot  : IN  STD_LOGIC; -- memoria protegida
        mode    : IN  mode_t;
        miss_tlb_data: IN STD_LOGIC;
		miss_tlb_instr: IN STD_LOGIC;
		pag_inv_data : IN STD_LOGIC;
		pag_inv_instr: IN STD_LOGIC;
		pag_priv_data: IN STD_LOGIC;
		pag_priv_instr:IN STD_LOGIC;
		pag_ill : IN STD_LOGIC;
        exc_code: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
        except  : OUT STD_LOGIC
    );
END ENTITY;

ARCHITECTURE Structure OF exception_controller IS

SIGNAL pag_priv_data_s : STD_LOGIC;
SIGNAL pag_priv_instr_s : STD_LOGIC;

BEGIN

    PROCESS (clk)
    BEGIN
        if rising_edge(clk) then 
            if alu_in = '1' then 
                exc_code <= x"4";
            elsif mem_in = '1' then 
                exc_code <= x"1";
            elsif con_in = '1' then 
                exc_code <= x"0";
            elsif inst_prot = '1' then
                exc_code <= x"D";
            elsif mem_prot = '1' then
                exc_code <= x"B";
            elsif call_in = '1' then 
                exc_code <= x"E";
            elsif int_in = '1' then 
                exc_code <= x"F";
            elsif miss_tlb_data = '1'then
                exc_code <= x"7";
            elsif miss_tlb_instr = '1'then
                exc_code <= x"6";
            elsif pag_inv_instr = '1'then
                exc_code <= x"8"; 
            elsif pag_inv_data = '1'then
                exc_code <= x"9"; 
            elsif pag_priv_instr = '1'then
                exc_code <= x"A"; 
            elsif pag_priv_data = '1'then
                exc_code <= x"B"; 
            elsif pag_ill = '1'then
                exc_code <= x"C";  
           END if;
        END if;
    END PROCESS;

    pag_priv_instr_s <= '1' when (pag_priv_instr = '1' and mode = USER) else '0';
    pag_priv_data_s <= '1' when (pag_priv_data = '1' and mode = USER) else '0'; 

    except <= alu_in or mem_in or con_in or inst_prot or mem_prot or call_in
              or miss_tlb_data or miss_tlb_instr or pag_inv_instr or pag_priv_data_s
              or pag_inv_data or pag_priv_instr_s  
              or pag_ill when boot = '0' else '0';


END Structure;