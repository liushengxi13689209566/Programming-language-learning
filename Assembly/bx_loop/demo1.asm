
;实例：计算ffff:0～ffff:b 单元 中的数据的和 ，存储在dx中 。
assume cs:TT 
TT segment 
	start :
	mov ax,0ffffh
	mov ds,ax 

	mov dx,0  

	mov bx,0 

	mov cx,12 
tag:
	mov al,[bx]
	mov ah,0
	add dx,ax 
	inc bx 
	loop tag 

	mov ax,4c00h
	int 21h 

	TT ends  
end 