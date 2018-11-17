
DATA  	SEGMENT
		INFOR1  DB 0AH,0DH,"Please  input your age :$"
		INFOR2  DB 0AH,0DH,"Your age is < 60 ,I think you are a child $"
		INFOR3  DB 0AH,0DH,"You are a middle man $"
		INFOR4  DB 0AH,0DH,"You are  a  old man $"
		INFOR5  DB 0AH,0DH,"You are a  other species !$" 
		AGE     DB 0,0,0
DATA  	ENDS

CODE  	SEGMENT
      ASSUME CS:CODE,DS:DATA
START:	
		MOV  AX,DATA
		MOV  DS,AX

		MOV  DX,OFFSET INFOR1
		MOV  AH,09H
		INT 21H 

		MOV CX,3 
		MOV BX,OFFSET AGE 
	tag:
		MOV AH,01H  ;接受输入 
		INT 21H    ;此时等待用户输入，输入的 one ge 字符一定存放在 AL 中
		MOV [BX],AL  
		INC BX 
		LOOP tag 

		MOV BX,OFFSET AGE    
		CMP  [BX],BYTE PTR '1'
		JE   TEMP   ; == 1

	 	CMP BYTE PTR [BX],'0'
		JNE  OTHER  ; != 0 

		INC BX 
		CMP  [BX],BYTE PTR '6'
		JB CHILD 

		CMP  [BX],BYTE PTR'8'
		JB MAN 
		JNB OLD_MAN  

		JMP  PEND
	TEMP:
		INC BX
		CMP [BX],BYTE PTR'5'
		JNA OLD_MAN ; <= 5 
		JA OTHER   ; >5
	CHILD:
		MOV  DX,OFFSET INFOR2
		MOV  AH,09H
		INT 21H 
		JMP  PEND		;注意执行完一个分支后应使程序跳出

	MAN:	
		MOV  DX,OFFSET INFOR3
		MOV  AH,09H
		INT 21H 
		JMP  PEND		

	OLD_MAN:	
		MOV  DX,OFFSET INFOR4 
		MOV  AH,09H
		INT 21H 
		JMP  PEND		

	OTHER:	
		MOV  DX,OFFSET INFOR5 
		MOV  AH,09H
		INT 21H 
		JMP  PEND		

	PEND:
		MOV  AH,4CH
    	INT  21H
CODE  	ENDS
END  START