library ieee;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
use work.aux_functions.all;

ENTITY TbTop IS
END TbTop;
 
ARCHITECTURE behavior OF TbTop IS 
   signal dadoOUT1 : std_logic;
	signal dadoOUT2 : std_logic;
   signal send1 : std_logic;
	signal send2 : std_logic;
	signal accept1: std_logic;
	signal accept2: std_logic;
BEGIN
 
	
   maquina1:entity work.CPU_tb1 PORT MAP (
          dadoOUT => dadoOUT1,
          dadoIN => dadoOUT2,
          acceptSERIAL=>accept1,
			 receiveSERIAL=>send2,
			 ackSERIAL=>accept2,
			 sendSERIAL=>send1
        );
		  
	maquina2:entity work.CPU_tb2 PORT MAP (
          dadoOUT => dadoOUT2,
          dadoIN => dadoOUT1,
          acceptSERIAL=>accept2,
		 	 receiveSERIAL=>send1,
		 	 ackSERIAL=>accept1,
			 sendSERIAL=>send2
        );

END;
