@ find factorial iteratively

mov r0,#5
mov r1,r0
mov r2,#1
fact: 
	mul r2,r2,r1
	sub r1,r1,#1
	cmp r1,#0
	bge fact
swi 0x11