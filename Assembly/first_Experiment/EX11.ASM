
DATA	SEGMENT 
NUM	DB 82H, 68H, 88H 
SUM  	DB ?        
DATA  	ENDS
CODE  	SEGMENT
      	ASSUME CS:CODE, DS:DATA
            
START:	MOV	AX, DATA   
		MOV  	DS, AX  
		MOV  	BX, OFFSET NUM
		MOV  	AL, [BX]
      	INC  	BX
      	ADD  	AL, [BX]
      	INC  	BX
      	ADD  	AL, [BX]
            MOV  	SUM, AL
      	MOV  	AH, 4CH
      	INT  	21H
CODE  	ENDS
      	END  START
