LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.numeric_std.all;        --Esta libreria sera necesaria si usais conversiones TO_INTEGER
--USE ieee.std_logic_unsigned.all; --Esta libreria sera necesaria si usais conversiones CONV_INTEGER

ENTITY regfile IS
   PORT (
		clk    	: IN  STD_LOGIC;
        wrd    	: IN  STD_LOGIC;
        d      	: IN  STD_LOGIC_VECTOR(15 DOWNTO 0);
        addr_a 	: IN  STD_LOGIC_VECTOR(2 DOWNTO 0);
	    addr_b 	: IN  STD_LOGIC_VECTOR(2 DOWNTO 0);
		addr_d 	: IN  STD_LOGIC_VECTOR(2 DOWNTO 0);
		d_sys	: IN  STD_LOGIC;					--WrD del banc de sistema
		a_sys	: IN  STD_LOGIC; 					-- Seleccina el mux
		ei 		: IN  STD_LOGIC;
		di		: IN  STD_LOGIC;
		reti	: IN  STD_LOGIC;
		boot	: IN  STD_LOGIC;
		sys		: IN  STD_LOGIC;
		PCret		: IN  STD_LOGIC_VECTOR(15 downto 0);
		a      	: OUT STD_LOGIC_VECTOR(15 DOWNTO 0);
		b		: OUT STD_LOGIC_VECTOR(15 DOWNTO 0);
		int_e	: OUT STD_LOGIC; 					-- interrupt enable
		PCsys	: OUT STD_LOGIC_VECTOR(15 downto 0)
	);
END regfile;
ARCHITECTURE Structure OF regfile IS
	TYPE t_regs is array(0 to 7) of std_logic_vector(15 downto 0);
	SIGNAL regs: t_regs;
	SIGNAL sys_regs: t_regs;

BEGIN
	PROCESS (clk)
	BEGIN
		if rising_edge(clk) then		
			if (d_sys = '0' and wrd = '1') then
				regs(to_integer(unsigned(addr_d))) <= d;
			elsif (d_sys = '1' and wrd = '1') then 
				sys_regs(to_integer(unsigned(addr_d))) <= d;
			elsif (ei = '1') then 
				sys_regs(7)(1) <= '1';
			elsif (di = '1') then
				sys_regs(7)(1) <= '0';
			elsif (reti = '1') then 
				sys_regs(7) <= sys_regs(0);
			END if;	
			
			if sys = '1' then 
				sys_regs(0) <= sys_regs(7);
				sys_regs(1) <= PCret;
				sys_regs(2) <= x"000F";
				sys_regs(7)(1) <= '0';
			END if;
		END if;
			
		if boot = '1' then 
			sys_regs(2) <= x"0000";
			sys_regs(5) <= x"0000";
			sys_regs(7) <= x"0000";
		END if;
	END PROCESS;
	
	a <= regs(to_integer(unsigned(addr_a))) when a_sys = '0' else sys_regs(to_integer(unsigned(addr_a)));
	b <= regs(to_integer(unsigned(addr_b)));

	int_e <= sys_regs(7)(1);
	
	PCsys <= sys_regs(5); -- per permetre que es faci l'escriptura en pujada de flanc

END Structure;