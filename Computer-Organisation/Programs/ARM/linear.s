@ Linear search

ldr r0,=0x00002000
mov r1,#0
mov r2,#10
mov r3,#0
mov r5,#50
loop:
	str r2,[r0,r3]
	add r2,r2,#10
	add r3,r3,#4
	add r1,r1,#1
	cmp r1,#10
	blt loop
mov r3,#0
mov r1,#0
loop1:
	ldr r6,[r0,r3]
	cmp r6,r5
	beq print
	add r3,r3,#4
	add r1,r1,#1
	cmp r1,#10
	blt loop1
	cmp r1,#10
	beq no
print:	mov r0,#'Y
	swi 0x00
swi 0x11
no:	mov r0,#'N
	swi 0x00
swi 0x11