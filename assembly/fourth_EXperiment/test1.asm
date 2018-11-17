; getInt 函数　
getInt  PROC                
        push BX  ;保护现场
        push DX 
        push CX 
        mov BX,0 ;初始化 
        mov AX,0 
        mov DX,0
        mov CX,0 
XUNHUAN:
    mov AH ,01H
    int 21H ; 输入一个字符，一定存储在　AL 中
    cmp  AL,0DH ; 判断回车符　
    jz  RET_AX ; display　将 AX 中的数字打印到屏幕

    cmp  AL,08H ;判断退格符 
    je   SUB_TO_AX     

    cmp  AL,30H
    jb   OTHER_ERROR ; < 0
    cmp  AL,39H ;<= 9 && > 0
    jbe  SUM_TO_AX   

    jmp  XUNHUAN ;继续循环　

SUM_TO_AX: 
        mov AH,0 ;清除 AX 高位
        push AX  ;保存 AX

        mov AX,CX  ;将原先的值乘以　10 ,实质上乘起来的值放在了 CX 中 
        mov BX,10
        ;如果参数是字节,将把 AL 做乘数, 结果放在 AX
        ;如果参数是字 , 将把 AX 做乘数, 结果放在 DX:AX
        mul BX 
        ;判断有没有位拓展(假设没有进行位拓展) (cf)=(of)=0
        mov CX,AX 
        pop AX
        sub AL,30H
        add CX,AX 
        jmp  XUNHUAN        
SUB_TO_AX:
        mov AX,CX 
    ; 被除数默认存放在 AX 中 
    ; 除数是8位， 则被除数为 AX，    AL 存储商，AH 储存余数
    ; 除数是16位，则被除数为 DX:AX ，AX 储存商，DX 储存余数
        mov BX,10
        div BX 
        mov CX,AX
        jmp  XUNHUAN     
    ;如果要处理其他错误的话，就在这里处理 
    OTHER_ERROR:  
        jmp  XUNHUAN   
    RET_AX:
        mov AX,CX
        RET 
getInt ENDP 