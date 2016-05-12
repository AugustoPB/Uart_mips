-------------------------------------------------------------------------
--
-- 32 bits PROCESSOR TESTBENCH - LITTLE  ENDIAN
--
-- It must be observed that the processor is hold in reset
-- (rstCPU <= '1') at the start of simulation, being activated
-- (rstCPU <= '0') just after the end of the object file reading be the
-- testbench.
--
-- This testbench employs two memories implying a HARVARD organization
--
-------------------------------------------------------------------------

-------------------------------------------------------------------------
--  CPU PROCESSOR SIMULATION TESTBENCH
-------------------------------------------------------------------------
library ieee;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
use STD.TEXTIO.all;
use work.aux_functions.all;

entity CPU_tb1 is
	port( dadoOUT: out std_logic;
	dadoIN: in std_logic;
	sendSERIAL: out std_logic;
	ackSERIAL: in std_logic;
	receiveSERIAL: in std_logic;
	acceptSERIAL: out std_logic
	);
end CPU_tb1;

architecture CPU_tb1 of CPU_tb1 is

	signal Dadress, Ddata, Iadress, Idata,
			i_cpu_address, d_cpu_address, data_cpu, tb_add, tb_data: reg32:= (others => '0');
	signal Dce_n, Dwe_n, Doe_n, Ice_n, Iwe_n, Ioe_n, ck, rst, rstCPU,
			go_i, go_d, rw, bw: std_logic;
	signal ce: std_logic_vector(16 downto 0);
	signal intr, inta: std_logic;
	signal req, ack: reg16;	-- vetores que comunicam o perifrio ao controlador de interrupo

	signal stx: std_logic;
	signal tx: std_logic_vector(3 downto 1);
	signal tx_ack: std_logic_vector(3 downto 1);
	signal external_data16: reg16;
	signal external_data: reg32;
	
	file ARQ: TEXT open READ_MODE is "ProgramaCIN.txt";

begin
 
	rst <= '1', '0' after 5 ns;		--generates the reset signal

	process						-- generates the clock signal
	begin
		ck <= '1', '0' after 5 ns;
		wait for 10 ns;
	end process;

	Data_mem: entity work.RAM_mem generic map(START_ADDRESS => x"10010000") port map(ce_n => Dce_n, we_n => Dwe_n, oe_n => Doe_n, bw => bw, address => Dadress, data => Ddata);

	Instr_mem: entity work.RAM_mem generic map(START_ADDRESS => x"00400000") port map(ce_n => Ice_n, we_n => Iwe_n, oe_n => Ioe_n, bw => '1', address => Iadress, data => Idata);

	-- data memory signals --------------------------------------------------------
	Dce_n <= '0' when  ce(16)='1' or go_d='1' else '1';
	Doe_n <= '0' when (ce(16)='1' and rw='1') else '1';
	Dwe_n <= '0' when (ce(16)='1' and rw='0') or go_d='1' else '1';
	Dadress <= tb_add  when rstCPU='1' else d_cpu_address;
	Ddata	<= tb_data when rstCPU='1' else data_cpu when (ce(16)='1' and rw='0') else (others => 'Z');
	data_cpu <= Ddata when (ce(16)='1' and rw='1') else (others => 'Z');

	-- instructions memory signals --------------------------------------------------------
	Ice_n <= '0';
	Ioe_n <= '1' when rstCPU='1' else '0';			-- impede leitura enquanto est escrevendo
	Iwe_n <= '0' when go_i='1'	else '1';			-- escrita durante a leitura do arquivo
	Iadress <= tb_add  when rstCPU='1' else i_cpu_address;
	Idata <= tb_data when rstCPU='1' else (others => 'Z');

	----------------------------------------------------------------------------
	-- this process loads the instruction memory and the data memory during reset
	--
	--
	--	O PROCESSO ABAIXO  UMA PARSER PARA LER CDIGO GERADO PELO SPIM NO
	--	SEGUINTE FORMATO:
	--
	--		.CODE
	--		[0x00400020]		0x3c011001  lui $1, 4097 [d2]				: 16: la	$t0, d2
	--		[0x00400024]		0x34280004  ori $8, $1, 4 [d2]
	--		[0x00400028]		0x8d080000  lw $8, 0($8)						: 17: lw	$t0,0($t0)
	--		.....
	--		[0x00400048]		0x0810000f  j 0x0040003c [loop]				: 30: j	loop
	--		[0x0040004c]		0x01284821  addu $9, $9, $8					: 32: addu $t1, $t1, $t0
	--		[0x00400050]		0x08100014  j 0x00400050 [x]					: 34: j	x
	--		.DATA
	--		[0x10010000]								0x0000faaa  0x00000083  0x00000000  0x00000000
	--
	----------------------------------------------------------------------------
	process
		variable ARQ_LINE: LINE;
		variable line_arq: string(1 to 200);
		variable code	: boolean;
		variable i, address_flag: integer;
	begin
		go_i <= '0';
		go_d <= '0';
		rstCPU <= '1';			-- hold the processor during file reading
		code:=true;				-- default value of code is 1 (CODE)

		wait until rst = '1';

		while NOT (endfile(ARQ)) loop	-- INCIO DA LEITURA DO ARQUIVO CONTENDO INSTRUO E DADOS -----
			readline(ARQ, ARQ_LINE);
			read(ARQ_LINE, line_arq(1 to  ARQ_LINE'length));

			if line_arq(1 to 5)=".TEXT" then code := true;							-- code
			elsif line_arq(1 to 5)=".DATA" then code := false;						-- data
			else
				i := 1;										-- LEITORA DE LINHA - analizar o loop abaixo para compreender
				address_flag := 0;							-- para INSTRUO  um para (end,inst)
															-- para DADO aceita (end, dado 0, dado 1, dado 2 ....)
				loop
					if line_arq(i) = '0' and line_arq(i+1) = 'x' then		-- encontrou indicao de nmero hexa: '0x'
						i:= i + 2;
						if address_flag=0 then
							for w in 0 to 7 loop
								tb_add((31-w*4) downto (32-(w+1)*4))  <= CONV_VECTOR(line_arq,i+w);
							end loop;
							i:= i + 8;
							address_flag:= 1;
						else
							for w in 0 to 7 loop
								tb_data((31-w*4) downto (32-(w+1)*4))  <= CONV_VECTOR(line_arq,i+w);
							end loop;
							i:= i + 8;
							wait for 0.1 ns;
							if code=true then go_i <= '1';	-- the go_i signal enables instruction memory writing
											else go_d <= '1';	-- the go_d signal enables data memory writing
							end if;
							wait for 0.1 ns;
							tb_add <= tb_add + 4;		-- *great!* consigo ler mais de uma word por linha!
							go_i <= '0';
							go_d <= '0';
							address_flag:= 2;	-- sinaliza que j leu o contedo do endereo;
						end if;
					end if;
					i:= i + 1;
					-- sai da linha quando chegou no seu final OU j leu par(endereo, instruo) no caso de cdigo
					exit when i=TAM_LINHA or (code=true and address_flag=2);
				end loop;
			end if;
		end loop;								-- FINAL DA LEITURA DO ARQUIVO CONTENDO INSTRUO E DADOS -----
		rstCPU <= '0';	-- release the processor to execute
		wait for 2 ns;	-- To activate the RST CPU signal
		wait until rst = '1';  -- to Hold again!
	end process;

	-- Port map dos subsitemas ------------------------------------------------------------
	---------------------------------------------------------------------------------------
	CPU: Entity work.MR2 port map
		(clock => ck, reset => rstCPU, i_address => i_cpu_address, instruction => Idata,
		ce => ce, rw => rw, bw => bw, d_address => d_cpu_address, data => data_cpu,
		intr => intr, inta => inta);
	
	uart: entity work.UART port map	(ck => ck, rst => rst, ce => ce(0), rw => rw, data => data_cpu, u_address => d_cpu_address
												,intr => intr, inta => inta, serialTX => dadoOUT, serialRX => dadoIN, ack => ackSERIAL
												,send => sendSERIAL, receive => receiveSERIAL, accept => acceptSERIAL);


	req(0) <= '0';		-- 0 eh o proprio controlador de interrupo
	req(4) <= '0';		-- demais pedidos de interrupo
	req(5) <= '0';
	req(6) <= '0';
	req(7) <= '0';
	req(8) <= '0';
	req(9) <= '0';
	req(10) <= '0';
	req(11) <= '0';
	req(12) <= '0';
	req(13) <= '0';
	req(14) <= '0';
	req(15) <= '0';

	---------------------------------------------------------------------------------------
	---	Deve ser inserido um codigo que complementa a funcionalidade dos perifericos
	---------------------------------------------------------------------------------------

end CPU_tb1;
