DATA SEGMENT 
	GRADES DB 91,12,5,56,84
	HIGHTEST DB ? 
DATA ENDS 

CODE SEGMENT 
ASSUME CS:CODE,DS:DATA 
	START:
		MOV AX,DATA
		MOV DS,AX 
		
		MOV AX,0
		MOV CX,4
		MOV AL,GRADES
		MOV SI,OFFSET GRADES 
	TAG:
		INC SI 
		CMP AL,[SI]  
		JAE TEMP 
		XCHG AL,[SI]
	TEMP:
		DEC CX 
		JNZ TAG 
		MOV HIGHTEST,AL
		MOV AX,4C00H
		INT 21H
CODE ENDS 
END START 
