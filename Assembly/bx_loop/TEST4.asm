assume cs:TT 
TT segment 
	start:
	mov ax, 2000H
	mov ds,ax  
	mov al ,[0] ; equal to mov al,0 
	mov bl ,[1]
	mov cl ,[2]
	mov dl ,[3]

	mov ax ,4c00H
	int 21H
TT ends  
end 
