
DATA SEGMENT  
	INFOR1 DB  "Please input the frist data(<10):$"
	INFOR2 DB  0AH,0DH,"Please input the second data(<10):$" 
	INFOR3 DB  0AH,0DH,"The result is:$ " 
DATA ENDS 

CODE SEGMENT  
	ASSUME CS:CODE ,DS:DATA 
START :
	MOV AX ,DATA
	MOV DS,AX

	MOV DX ,OFFSET INFOR1 ;显示提示信息 
	MOV AH,09H  
	INT 21H 

	MOV AH,01H ;接受输入 
	INT 21H  ;此时等待用户输入，输入的字符一定存放在AL中
	sub AL,30H 
 
	MOV BL,AL ;转移到 BL 

	MOV DX ,OFFSET INFOR2 ;显示提示信息 
	MOV AH,09H 
	INT 21H

	MOV AH,01H  ;另一个数放在 AL 中
	INT 21H
	sub AL,30H  

	MOV DX ,OFFSET INFOR3
	MOV AH,09H 
	INT 21H 


	XOR AH,AH ; 清零 AH ，CF标志位也会清零 
	add AL,BL  
	AAA  

	push AX 
	MOV  DL,AH 
	add DL,30H
	MOV AH,02H
	INT 21H

	pop AX 
	MOV DL,AL 
	add DL,30H 
	MOV AH,02H
	INT 21H

	MOV AX,4C00H
	INT 21H


	CODE ENDS
END START 
