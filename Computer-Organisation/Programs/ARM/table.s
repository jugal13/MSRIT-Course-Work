@ multiplication tables

mov r0,#2
mov r1,#10
ldr r2,=0x00002000
mov r3,#0
mov r5,#0
loop: 
	add r3,r3,#1
	mul r4,r0,r3
	str r4,[r2,r5]
	add r5,r5,#4
	cmp r3,r1
	blt loop
swi 0x11
