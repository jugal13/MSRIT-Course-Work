	PRESERVE8
	THUMB
	AREA |.text|,CODE,READONLY
	EXPORT __main
__main
	MOVS R0,#5
	MOVS R1,#0
loop
	ADDS R1,R1,R0
	SUBS R0,R0,#0
	CMP R0,#0
	BNE loop
stop B stop
	END