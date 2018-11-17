
assume cs:TT  
TT segment 
	start :
		mov ax,0ffffh ;
		mov ds,ax 

		mov bx ,6 
		mov al,[bx]
		mov ah ,0 

		;mov ax ,[bx]

		mov dx,0 

		mov cx ,123
	tag:add dx,ax 
		loop  tag 

		mov ax,4c00h
		int 21h 

TT	ends 
end 