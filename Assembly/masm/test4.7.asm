assume cs:TT
TT  segment
start:
	mov al,68H
	add al,59H
	daa

	mov ax,4c00H
    int 21H ;返回

	TT ends

end