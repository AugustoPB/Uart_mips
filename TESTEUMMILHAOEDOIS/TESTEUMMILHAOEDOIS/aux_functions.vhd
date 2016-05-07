
library IEEE;
use IEEE.std_logic_1164.all;

package aux_functions is

	subtype reg32 is std_logic_vector(31 downto 0);
	subtype reg16 is std_logic_vector(15 downto 0);
	subtype reg8 is std_logic_vector(7 downto 0);
	subtype reg4 is std_logic_vector(3 downto 0);

	-- definio do tipo 'memory', que ser utilizado para as memrias de dados/instrues
	constant MEMORY_SIZE: integer:= 2048;
	type memory is array (0 to MEMORY_SIZE) of reg8;
	constant TAM_LINHA: integer:= 200;
	function CONV_VECTOR(letra: string(1 to TAM_LINHA); pos: integer) return std_logic_vector;

end aux_functions;

package body aux_functions is

	--
	-- converte um caracter de uma dada linha em um std_logic_vector
	--
	function CONV_VECTOR(letra:string(1 to TAM_LINHA);  pos: integer) return std_logic_vector is
		variable bin: reg4;
	begin
		case (letra(pos)) is
				when '0' => bin:= "0000";
				when '1' => bin:= "0001";
				when '2' => bin:= "0010";
				when '3' => bin:= "0011";
				when '4' => bin:= "0100";
				when '5' => bin:= "0101";
				when '6' => bin:= "0110";
				when '7' => bin:= "0111";
				when '8' => bin:= "1000";
				when '9' => bin:= "1001";
				when 'A' | 'a' => bin:= "1010";
				when 'B' | 'b' => bin:= "1011";
				when 'C' | 'c' => bin:= "1100";
				when 'D' | 'd' => bin:= "1101";
				when 'E' | 'e' => bin:= "1110";
				when 'F' | 'f' => bin:= "1111";
				when others =>  bin:= "0000";
		end case;
	return bin;
	end CONV_VECTOR;

end aux_functions;

