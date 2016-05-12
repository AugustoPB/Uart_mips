library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_signed.all;
use IEEE.std_logic_arith.all;
use work.p_MR2.all;

entity BUFF is
port
	(
		ck, rst, ce: in std_logic;
		dataIN: in reg8;
		dataOUT: out reg8;
		hasDate: out std_logic;
		catchData: out std_logic;
		bFull: out std_logic;
		ackTX: in std_logic
	);

end BUFF;

architecture BUFF of BUFF is
	
	signal bufferReg: std_logic_vector (71 downto 0);
	signal alocate: std_logic_vector (3 downto 0) := (others => '0');
	
begin

	bFull <= '1' when alocate = x"7" else '0';

	process(ce, rst, ackTX, ck)
	begin
		
		if rst = '1' then
			alocate <= (others => '0');
			bufferReg <= (others => '0');
			
		elsif ackTX'event and ackTX = '1' and alocate /= x"0" then
			bufferReg <= to_StdLogicVector(to_bitvector(bufferReg) sll 8);
			alocate <= alocate - x"1";
			
		else
			case alocate is
				
				when x"0" =>	if ce'event and ce = '1' then
										bufferReg <= dataIN & bufferReg(63 downto 0);
										if ackTX /= '1' then
											alocate <= alocate + x"1";
										end if;
									end if;
				
				when x"1" =>	if ce'event and ce = '1' then
										bufferReg <= bufferReg(71 downto 64) & dataIN & bufferReg(55 downto 0);
										if ackTX /= '1' then
											alocate <= alocate + x"1";
										end if;
									end if;
				
				when x"2" =>	if ce'event and ce = '1' then
										bufferReg <= bufferReg(71 downto 56) & dataIN & bufferReg(47 downto 0);
										if ackTX /= '1' then
											alocate <= alocate + x"1";
										end if;
									end if;
				
				when x"3" =>	if ce'event and ce = '1' then
										bufferReg <= bufferReg(71 downto 48) & dataIN & bufferReg(39 downto 0);
										if ackTX /= '1' then
											alocate <= alocate + x"1";
										end if;
									end if;
				
				when x"4" =>	if ce'event and ce = '1' then
										bufferReg <= bufferReg(71 downto 40) & dataIN & bufferReg(31 downto 0);
										if ackTX /= '1' then
											alocate <= alocate + x"1";
										end if;
									end if;
				
				when x"5" =>	if ce'event and ce = '1' then
										bufferReg <= bufferReg(71 downto 32) & dataIN & bufferReg(23 downto 0);
										if ackTX /= '1' then
											alocate <= alocate + x"1";
										end if;
									end if;
				
				when x"6" =>	if ce'event and ce = '1' then
										bufferReg <= bufferReg(71 downto 24) & dataIN & bufferReg(15 downto 0);
										if ackTX /= '1' then
											alocate <= alocate + x"1";
										end if;
									end if;
				
				when x"7" =>	if ce'event and ce = '1' then
										bufferReg <= bufferReg(71 downto 16) & dataIN & bufferReg(7 downto 0);
										if ackTX /= '1' then
											alocate <= alocate + x"1";
										end if;
									end if;
				
				when x"8" =>	if ce'event and ce = '1' then
										bufferReg <= bufferReg(71 downto 8) & dataIN;
										if ackTX /= '1' then
											alocate <= alocate + x"1";
										end if;
									end if;
									
				when x"9" =>	if ackTX /= '1' then
											bufferReg <= to_StdLogicVector(to_bitvector(bufferReg) sll 8);
											alocate <= alocate - x"1";
										end if;
									
				when others =>	NULL;
			end case;
		end if;
	end process;
	
	catch:process(rst, ck, ce)
	begin
		if rst = '1' then
			catchData <= '0';
		elsif ce'event and ce = '1' then
			catchData <= '1';
		elsif ck'event and ck = '0' then
			catchData <= '0';
		end if;
	end process;
	
	
	hasDate <= '1' when alocate /= x"0" and ce /= '1' else '0';
	
	dataOut <= bufferReg(71 downto 64);
	
end BUFF;



--#################################################################################################################


library IEEE;
use IEEE.std_logic_1164.all;
package estadosSerial is
	type ESTADO_TRANSMISSAO is (pegaDado, transmite, esperaAck, esperaFimAck);
	type ESTADO_RECEBIMENTO is (recebimento, esperaFimReceive, esperaAckCpu);
end estadosSerial;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.estadosSerial.all;

entity SERIAL is
	port
	(ck, rst: in std_logic;
	--dataINCPU: in reg8;
	--dataOUTCPU: out reg8;
	dataINCPU: in std_logic_vector(7 downto 0); -- dado recebido da cpu para transferencia
	dataOUTCPU: out std_logic_vector(7 downto 0); -- dado recebido da outra maquina para cpu
	accept: out std_logic; 
	receive: in std_logic;
	ack: in std_logic;
	sendCpu: out std_logic; -- avisa que pegou o dado
	ackCpu: in std_logic; -- buffer avisa que ja guardou dado recebido
	hasData: in std_logic; -- buffer avisa que tem dado para enviar
	send: out std_logic; 
	dadoRecebido: out std_logic;
	dadoEnviado: out std_logic ;
	dataOUT: out std_logic;
	dataIN: in std_logic
	);
end SERIAL;

architecture SERIAL of SERIAL is
signal dadoEnviarP82: std_logic_vector(11 downto 0):= (others => '0');
signal dadoRecebidoP82: std_logic_vector(11 downto 0):= (others => '0');
signal paridade: std_logic;
signal estadoTT: ESTADO_TRANSMISSAO;
signal estadoTR: ESTADO_RECEBIMENTO;
signal recData: std_logic;
signal preDadoRecebido: std_logic;
begin
	paridade <= ((dataINCPU(0)xnor dataINCPU(1))xor
								(dataINCPU(2)xnor dataINCPU(3)))xnor
								((dataINCPU(4)xnor dataINCPU(5))xor
								(dataINCPU(6)xnor dataINCPU(7)));
	Transmissao: process(ck,rst)
	variable contadorE: integer range 0 to 12;
		begin 
			if rst = '1' then
				dadoEnviado <= '0';
				estadoTT <= pegaDado;
				send<= '0';
				contadorE:= 12;
				sendCpu <= '0';
				dataOUT <= '1';
			elsif ck'event and ck = '1' then 
				case estadoTT is 
					when pegaDado=> 
						if hasData = '1' then
							dadoEnviarP82 <= "1" & dataINCPU & paridade & "11";
							sendCpu <= '1';
							estadoTT<= transmite;
						end if;
					when transmite =>
							send<='1';
							sendCpu<='0';
							dataOUT<=dadoEnviarP82(contadorE-1);
							contadorE := contadorE - 1;
							estadoTT<= esperaAck;
					when esperaAck =>
						if ack = '1' then
							send <= '0';
							estadoTT<=esperaFimAck;
						end if;
					when esperaFimAck =>
						if ack = '0' then 
							if contadorE = 0 then
								dadoEnviado <= '1';
								contadorE := 12;
								estadoTT<= pegaDado;
							else
							estadoTT<= transmite;
							end if;
						end if;
					end case;
				end if;
			end process;
			
	Recepcao: process(ck,rst)
	variable contadorR: integer range 0 to 12;
		begin
			if rst = '1' then 
				recData <= '0';
				accept <= '0';
				contadorR:= 12;
				estadoTR<= recebimento;
			elsif ck'event and ck = '1' then
				case estadoTR is
					when recebimento =>
						if receive = '1' then 
								dadoRecebidop82(contadorR-1)<= dataIN;
								contadorR := contadorR - 1;
								accept <= '1';
								estadoTR <= esperaFimReceive;
							end if;
					when esperaFimReceive =>
						if receive = '0' then
							if contadorR = 0 then 
								contadorR := 12;
								recData <= '1';
								dataOUTCPU <= dadoRecebidop82(10 downto 3);
								estadoTR<= esperaAckCpu;
							else
							estadoTR<= recebimento;
							end if;
							accept <= '0';
							end if;
					when esperaAckCpu =>
						if  preDadoRecebido <= '0' then
							recData <= '0';
							estadoTR<= recebimento;
						end if;
					end case;
			end if;
		end process;
		
		process(rst,recData, ackCpu)
		begin
		
			if rst = '1' then
				preDadoRecebido <= '0';
			elsif recData'event and recData = '1' then
				preDadoRecebido <= '1';
			elsif ackCpu'event and ackCpu = '0' then
				preDadoRecebido <= '0';
			end if;
					
		end process;
		
		dadoRecebido <= preDadoRecebido;
				
end SERIAL;

