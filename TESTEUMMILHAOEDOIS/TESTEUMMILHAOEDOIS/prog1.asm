.text
.globl main

main:
        j MyMain

DesvioParaTratamentoDeInterrupcoes:
        subu $sp, $sp, 4
        sw $ra, 0($sp)
        la $k0, EnderecoUART
        lw $k0,0($k0)
        lbu $k0, 0($k0)
        sll $k0, $k0, 0x02
        la $k1, TabelaDeInterrupcoes
        addu $k0, $k0, $k1
        jalr $k0
        lw $ra, 0($sp)
        addiu $sp, $sp, 4
        eret
        jr $ra

TabelaDeInterrupcoes:
        j UART_CIN
        j UART_COUT
        
UART_CIN:
        subu $sp, $sp, 12
        sw $t6, 0($sp)
        sw $t8, 4($sp)
        sw $ra, 8($sp)
        
        la $t6, EnderecoUART
        lw $t6,0($t6)
        addiu $t6,$t6,8
        addiu $t7,$t7,1
        lbu $t8,0($t7)
        beq $t8,$0, breakk
	sb $t8,0($t6) 

breakk:
	lw $ra, 8($sp)
        lw $t8, 4($sp)
        lw $t6, 0($sp)
        addiu $sp, $sp, 12
        jr $ra

UART_COUT:
	subu $sp, $sp, 12
        sw $t6, 0($sp)
        sw $t8, 4($sp)
        sw $ra, 8($sp)
	
	la $t6,EnderecoUART
	lw $t6,0($t6)
	addiu $t6,$t6,4
        lbu $t8,0($t6)
        sb $t8,0($t7) 
        addiu $t7,$t7,1
	
        lw $ra, 8($sp)
        lw $t8, 4($sp)
        lw $t6, 0($sp)
        addiu $sp, $sp, 12
        jr $ra

MyMain:
        li $t0, 0
        li $t1, 0
        li $t2, 0
        la $t5, EnderecoUART 
        lw $t5,0($t5)
        addiu $t5,$t5,8
        la $t7, BufferSaida
	lbu $t8,0($t7)#laod buffer->t8
	sb $t8,0($t5)#store t8->uart
SaltoMyMain:
        addiu $t0, $t0, 1
        addu $t1, $t1, $t0
        addu $t2, $t1, $t0
        j SaltoMyMain

.data 
EnderecoUART: 0xFFE00000
BufferSaida:  .asciiz  "Hello world Hello world Hello world Hello world Hello world Hello world Hello world Hello world Hello world Hello world Fim Mnsg"

