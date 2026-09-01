@ Check if prime number or not

.data
prompt: .asciiz "Enter number : "
msg_true: .asciiz "Prime"
msg_false: .asciiz "Not Prime"

.globl main
.text
main:
	li $v0,4
	la $a0,prompt
	syscall
	li $v0,5
	syscall
	li $s1,2
loop:
	div $v0,$s1
	mfhi $t0
	addi $s1,$s1,1
	beq $t0,$0,Not_Prime
	blt $s1,$v0,loop
	
Prime:
	li $v0,4
	la $a0,msg_true
	syscall
	j term

Not_Prime:
	li $v0,4
	la $a0,msg_false
	syscall

term:
	li $v0,10
	syscall