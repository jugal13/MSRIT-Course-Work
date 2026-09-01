	PRESERVE8
	THUMB
	AREA |.text|,CODE,READONLY
	EXPORT __main
__main
	LDR R0,#5
	LDR R1,#1
fact
	MULS R1,R1,R0
	SUBS R0,R0,1
	CMP R0,0
	BNE fact
stop B stop
	END
	