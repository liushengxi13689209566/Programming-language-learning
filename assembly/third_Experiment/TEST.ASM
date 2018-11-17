
DATA  	SEGMENT
		INFOR1  DB 0AH,0DH,"Please Press Any Key to input a letter:$"
		INFOR2  DB 0AH,0DH,"You Input a Lowercase Letter！$"
		INFOR3  DB 0AH,0DH,"You Input a Uppercase Letter！$"
		INFOR4  DB 0AH,0DH,"You Input a Digit!$"
		INFOR5  DB 0AH,0DH,"You Input Other Letter!$"
DATA  	ENDS

CODE  	SEGMENT
      ASSUME CS:CODE,DS:DATA
START:	
		MOV  AX,DATA
		MOV  DS,AX

		MOV  DX,OFFSET INFOR1
		MOV  AH,09H
		INT 21H 

		MOV AH,01H ;接受输入 
		INT 21H  ;此时等待用户输入，输入的字符一定存放在AL中

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

		JMP  PEND
	LOWER:
		MOV  DX,OFFSET INFOR2
		MOV  AH,09H
		INT 21H 
		JMP  PEND		;注意执行完一个分支后应使程序跳出 ERROR need to teacher's  help   

	UPPER:	
		MOV  DX,OFFSET INFOR3
		MOV  AH,09H
		INT 21H 
		JMP  PEND		;注意执行完一个分支后应使程序跳出

	DIGIT:	
		MOV  DX,OFFSET INFOR4 
		MOV  AH,09H
		INT 21H 
		JMP  PEND		;注意执行完一个分支后应使程序跳出

	OTHER:	
		MOV  DX,OFFSET INFOR5 
		MOV  AH,09H
		INT 21H 
		JMP  PEND		;注意执行完一个分支后应使程序跳出

	PEND:
		MOV  AH,4CH
    	INT  21H
CODE  	ENDS
END  START