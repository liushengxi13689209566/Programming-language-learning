;;kbhit判断键盘有没有输入，若有zf=1,没有zf=0
;mov AH,1 int 16h 两条命令是读键盘缓冲区字符，返回参数ZF=0时AL=字符；ZF=1时，缓冲区为空。但是与要求相反
DATAS SEGMENT
    ;此处输入数据段代码  
DATAS ENDS
STACKS SEGMENT
    ;此处输入堆栈段代码
STACKS ENDS
kbcode segment
    ASSUME CS:kbcode,DS:DATAS,SS:STACKS
kbstart:
		mov  AX,DATAS
        mov  DS,AX ;不可以直接赋值

 		call kbhit
		mov AX ,4C00H
        int 21H ;return dos 

kbhit proc near
		mov AH,1 	
		int 16h 	;ZF=0时AL=字符；ZF=1时，缓冲区为空。
		je setone	;将zf=0改为zf=1
		cmp AL,0	;无键入时将zf=1改为zf=0
		je setzero 
		ret 			
kbhit endp 		
setone:	
		sub ax,ax	;将zf置1
		ret				
kbcode ends
end kbstart