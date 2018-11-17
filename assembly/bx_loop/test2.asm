;计算2的12次方
assume cs:TT 
TT segment 
	start:
;	mov ax,2 
;	mov cx,11
;  s:add ax,ax 
;	loop s ;  check the cx ,cx : 存放循环次数


	mov ax,236
	mov cx ,123
tag:add ax,ax 
	loop tag 

	mov ax,4c00H
	int 21H
TT ends 
end 
