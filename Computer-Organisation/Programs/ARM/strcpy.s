@ string copy function

mov r0,#0
mov r1,#'a
ldr r2,=0x00002000
ldr r3,=0x00003000
loop:
	strb r1,[r2,r0]
	add r0,r0,#1
	add r1,r1,#1
	cmp r0,#26
	bne loop
	mov r0,#0
loop1:
	ldrb r4,[r2,r0]
	strb r4,[r3,r0]
	add r0,r0,#1
	cmp r0,#26
	bne loop1
swi 0x11