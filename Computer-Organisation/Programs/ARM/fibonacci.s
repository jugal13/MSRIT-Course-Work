@ store fibonacci series in memory

mov r0,#0
mov r1,#1
mov r2,#5
mov r3,#0
ldr r4,=0x00002000
mov r5,#0
loop: str r0,[r4,r5]
add r6,r0,r1
mov r0,r1
mov r1,r6
add r5,r5,#4
add r3,r3,#1
cmp r3,r2
blt loop
swi 0x11