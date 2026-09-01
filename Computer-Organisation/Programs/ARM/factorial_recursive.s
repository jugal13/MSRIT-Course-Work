@ find factorial recusively

mov r0,#5
bl fact
swi 0x11
fact:
	sub sp,sp,#8
	str r0,[sp,#0]
	str lr,[sp,#4]
	cmp r0,#1
	bge l1
	mov r0,#1
	add sp,sp,#8
	mov pc,lr
l1:
	sub r0,r0,#1
	bl fact
	mov r12,r0
	ldr r0,[sp,#0]
	ldr lr,[sp,#4]
	add sp,sp,#8
	mul r0,r12,r0
	mov pc,lr
	