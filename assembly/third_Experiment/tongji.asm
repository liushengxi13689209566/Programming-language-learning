
DATA  	SEGMENT
		INFOR1  DB 0AH,0DH,"Please Press Any Key to input a letter:$"
		INFOR2  DB 0AH,0DH,"Lowercase Letter : $"
		INFOR3  DB 0AH,0DH,"Uppercase Letter : $"
		INFOR4  DB 0AH,0DH,"Digit : $"
		INFOR5  DB 0AH,0DH,"Other Letter : $"
DATA  	ENDS
CODE  	SEGMENT
      ASSUME CS:CODE,DS:DATA
START:	
PRINT MACRO STR,RHS  ; MACRO 为宏
	LEA DX,RHS
	MOV AH,09H
	INT 21H
    MOV DL,STR 
    ADD DL,30H
    MOV AH,02H 
    INT 21H 
ENDM
		MOV  AX,DATA
		MOV  DS,AX

		MOV  DX,OFFSET INFOR1
		MOV  AH,09H
		INT 21H 

		MOV BX,0 
		MOV CX,0
XUNHUAN:
	MOV AH ,01H
	INT 21H ;AL 
	CMP  AL,0DH ; \n
	JZ  DISPLAY

	CMP  AL,'0'
	JB   OTHER
	CMP  AL,'9'
	JBE  DIGIT

	CMP  AL,'A'
	JB   OTHER
	CMP  AL,'Z'
	JBE  UPPER

	CMP  AL,'a'
	JB   OTHER
	CMP  AL,'z'
	JBE  LOWER

	JMP  XUNHUAN 
	LOWER:
		INC BL
		JMP XUNHUAN	;     
	UPPER:	
		INC BH
		JMP  XUNHUAN		
	DIGIT:	
		INC CL
		JMP  XUNHUAN		
	OTHER:	
		INC CH 
		JMP  XUNHUAN	
	DISPLAY:
		PRINT BL,INFOR2
		PRINT BH,INFOR3
		PRINT CL,INFOR4
		PRINT CH,INFOR5
		MOV  AH,4CH
    	INT  21H
CODE  	ENDS
END  START