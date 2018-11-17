DATA SEGMENT 
	INF1  DB  0AH,0DH,"PLEASE INPUT A NUMBER (0~65536): $"
	OBUF1  DB 0AH,0DH," 2 Hexadecimal  : $"
	OBUF2  DB 0AH,0DH," THE 1's SUM  IS : $"
	IBUF  DB   100,0,100 DUP('$')
DATA ENDS
CODE SEGMENT 
	ASSUME CS:CODE ,DS:DATA 
START:
	MOV AX,DATA 
	MOV DS,AX 

	LEA DX,INF1 
	MOV AH,09H
	INT 21H  
	
	LEA DX,IBUF ;输入一个十进制数字（ < 65536 ）
	MOV AH,0AH
	INT 21H 

	MOV CL,IBUF+1 
	MOV CH,0 

	MOV AX,0
	LEA SI,IBUF+2 


FLAG: 
	MOV DX,10
	MUL DX 
	;如果参数是字节,将把 AL 做乘数, 结果放在 AX
	;如果参数是字 , 将把 AX 做乘数, 结果放在 DX:AX
	AND BYTE PTR [SI],0FH 
	ADD AL,[SI] 
	ADC AH,0

	INC SI 
	LOOP FLAG

	CALL PRINT_AX 



	MOV AH,4CH
	INT 21H

PRINT_AX PROC 

	LEA DX,OBUF1 
	MOV AH,09H
	INT 21H 

	MOV CX,16 
	MOV BX,0 
TAG:
	SHL AX,1
	JNC PRINT_0 ; WHEN CF == 0 
	JC  PRINT_1  ;CF  == 1
	JMP PEND
PRINT_0:
	INC BX 
	MOV DL,1
	ADD DL,30H
	MOV AH,02H
	INT 21H 
	LOOP TAG 
PRINT_1:
	MOV DL,0
	ADD DL,30H
	MOV AH,02H
	INT 21H 
	LOOP TAG 
PEND:
	LEA DX,OBUF2 
	MOV AH,09H
	INT 21H 

	MOV DL,BL
	MOV AH,02H
	INT 21H
	
	RET 
PRINT_AX  ENDP 

	CODE ENDS 
END START 	


