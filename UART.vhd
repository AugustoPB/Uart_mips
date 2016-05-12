library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_signed.all;
use IEEE.std_logic_arith.all;
use work.p_MR2.all;

entity UART is
port
	(
		ck, rst, ce, rw: in std_logic;
		data: inout reg32;
		u_address: in reg32;
		intr: out std_logic;
		inta: in std_logic;
		serialTX: out std_logic;
		serialRX: in std_logic;
		ack: in std_logic;
		send: out std_logic; 
		receive: in std_logic;
		accept: out std_logic
	);

end UART;

architecture UART of UART is

signal vBase: std_logic_vector(1 downto 0);
signal dataCin: reg8;
signal ceCin, ceCout: std_logic;
signal hasDataCout, hasDataCin: std_logic;
signal nxtDataCout, nxtDataCin: std_logic;
signal dataInSerial, dataOutSerial: reg8;
signal coutCatch, cinCatch: std_logic;
signal serialDataSent: std_logic;
signal cpuCatch: std_logic;
signal data8: reg8;
signal gatCout: std_logic := '0';
signal cinIsFull, coutIsFull: std_logic;
signal interrupt: std_logic;
type sInt is (int_cin, int_cout, no_int);

signal EA, PE: sInt;
	
begin

								 
	data8 <= 	"000000" & vBase when u_address = x"FFE00000" else 
				dataCin when u_address = x"FFE00004" else (others => 'Z');
	data<= "ZZZZZZZZZZZZZZZZZZZZZZZZ"& data8;		  
				  
	buffCIN: entity work.BUFF port map	(ck => ck, rst => rst, ce => ceCin, dataIN => dataOutSerial, dataOUT => dataCin, hasDate => hasDataCin, catchData => cinCatch, bFull => cinIsFull, ackTX => nxtDataCin);
	
	buffCOUT: entity work.BUFF port map	(ck => ck, rst => rst, ce => ceCout, dataIN => data(7 downto 0), dataOUT => dataInSerial, hasDate => hasDataCout, catchData =>coutCatch, bFull => coutIsFull, ackTX => nxtDataCout);
				  
	serial: entity work.SERIAL port map	(ck => ck, rst => rst, dataINCPU => dataInSerial, dataOUTCPU => dataOutSerial, accept => accept, receive => receive, ack => ack, send => send,
													sendCpu => nxtDataCout, ackCpu => cinCatch, hasData => hasDataCout, dadoRecebido => ceCin, dadoEnviado => serialDataSent, dataOUT => serialTX, dataIN => serialRX);


	
	ceCout <= '1' when ce = '1' and rw = '0' and u_address = x"FFE00008" else '0';
	
	
	gatilho:process(rst, ceCout)
	begin
		if rst = '1' then
			gatCout <= '0';
		elsif ceCout'event and ceCout = '1' then
			if data = x"00" then
				gatCout <= '0';
			elsif data /= x"00" then
				gatCout <= '1';
			end if;
		end if;
			
	end process;
	
	intr <= interrupt;
	
	interrupt <= '1' when (EA = int_cin or EA = int_cout) else '0';
	
	vbase <= "01" when EA = int_cin else
				"10" when EA = int_cout else
				"00";
				
	--nxtDataCin <= '1' when ce = '1' and rw = '1' and u_address = x"FFE00004" else '0';
	
	cpuCatch <= '1' when ce = '1' and rw = '1' and u_address = x"FFE00004" else '0';
	
	process(rst, ck)
		variable ceStat: integer range 0 to 2;
	begin
		if rst = '1' then
			ceStat := 0;
			nxtDataCin <= '0';
		elsif ck'event and ck = '1' then
			case ceStat is
			
				when 0 => 	if cpuCatch = '1' then
									ceStat := 1;
								end if;
				when 1 =>	nxtDataCin <= '1';
								ceStat := 2;
				when 2 =>	nxtDataCin <= '0';
								ceStat := 0;
			end case;
		end if;
	end process;
	
	--if rst = '1' then
	--		CpuSaw := 0;
	--	elsif ce'event and ce = '1' then
	--		if rw = '1' and u_address = x"FFE00004" then
	--			CpuSaw := 1;
	--		end if;
	--	elsif ce'event and ce = '0' then
	--		if CpuSaw = 1 then
	--			nxtDataCin <= '1';
	--			CpuSaw := 0;
	--		end if;
	--	else
	--		nxtDataCin <= '0';
	--	end if;
	
	
	
	int: process(EA, hasDataCin, gatCout, inta)
	begin
		case EA is
			
			when no_int => if hasDataCin = '1' then
									PE <= int_cin;
								elsif gatCout = '1' and coutIsFull = '0' then
									PE <= int_cout;
								else
									PE <= no_int;
								end if;
			
			when int_cin => 	if inta = '1' then
										PE <= no_int;
									else
										PE <= int_cin;
									end if;
									
			when int_cout => 	if inta = '1' then
										PE <= no_int;
									else
										PE <= int_cout;
									end if;
			when others => NULL;
			
		end case;
	end process;
	
	SMint:process(rst, ck)
	begin
		if rst='1' then
			EA <= no_int;
		elsif ck'event and ck='1' then
			EA <= PE;
		end if;
	end process;
	

end UART;










