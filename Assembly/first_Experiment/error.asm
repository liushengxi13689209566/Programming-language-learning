assume cs:liushengxi
liushengxi segment
start:
	MOV		BP, BL						 
	MOV	[BX],[BP]
	MOV		[BX],20H						  
	INC	  	[SI]
	ADD		AX,[SI+DI]					  
	SHL  	AX,3
	PUSH		2000H						  
	POP  	AL
	MOV		CS,AX						 
	MOV  	DS,1000H

	mov ax,4c00H
    int 21H ;返回 OS 

	liushengxi ends 
end 
