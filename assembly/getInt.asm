
; void getInt();//输入一个数字（有缓冲区,也就是允许使用退格键），
; 将数字保存到ax中。以回车结束输入，
; 有错误输入处理，如需要返回bool值则置zf=1，否则zf=0。

; 思路就是先将所有的值全放入 CX 中，然后传入 AX 返回

DATA    SEGMENT
        INFOR1  DB 0AH,0DH,"Please Press Any Key to input a letter:$"
DATA    ENDS

CODE    SEGMENT
      ASSUME CS:CODE,DS:DATA
START:  
        mov  AX,DATA
        mov  DS,AX ;不可以直接赋值

        call getInt 
        jnz error ; zf == 0 

        mov AX ,4C00H
        int 21H ;return dos 

error:
        mov DL,36H
        mov AH,02H
        int 21H

        mov AX ,4C00H
        int 21H ;return dos 


; getInt 函数　
getInt  PROC                
        push BX  ;保护现场
        push DX 
        push CX 
        pushf 
        mov AX,0 ;初始化 
        mov BX,0 
        mov CX,0
        mov DX,0 
getInt_XUNHUAN:
    mov AH ,01H
    int 21H ; 输入一个字符，一定存储在　AL 中
    cmp  AL,0DH ; 判断回车符　
    jz  getInt_RESULT ; 

    cmp  AL,08H ;判断退格符 
    je   getInt_SUB_TO_AX  

    cmp  AL,1BH ;判断esc符 
    je   getInt_DO_ESC     

    cmp  AL,09H ;判断tab符 
    je   getInt_DO_TAB        

    cmp  AL,30H
    jb   getInt_OTHER_ERROR ; < 0
    cmp  AL,39H ;<= 9 && > 0
    jbe  getInt_SUM_TO_AX   

    jmp  getInt_XUNHUAN ;继续循环　

getInt_SUM_TO_AX: 
        mov AH,0 ;清除 AX 高位
        push AX  ;保存 AX

        mov AX,CX  ;将原先的值乘以　10 ,实质上乘起来的值放在了 CX 中 
        mov BX,10
        ;如果参数是字节,将把 AL 做乘数, 结果放在 AX
        ;如果参数是字 , 将把 AX 做乘数, 结果放在 DX:AX
        mul BX 
        mov DX,0
        mov CX,AX 
        pop AX
        sub AL,30H
        add CX,AX 
        jmp  getInt_XUNHUAN    
            
getInt_SUB_TO_AX:
        mov AX,CX 
    ; 被除数默认存放在 AX 中 
    ; 除数是8位， 则被除数为 AX，    AL 存储商，AH 储存余数; 
    ; 除数是16位，则被除数为 DX:AX ，AX 储存商，DX 储存余数
        mov DX,0
        mov BX,10
        div BX 
        mov CX,AX
        
        mov DL,20H ;输出空格
        mov AH,02H
        int 21H

        mov AL,08H 
        mov DL,AL
        mov AH,02H
        int 21H

        jmp  getInt_XUNHUAN     

getInt_DO_TAB:;tab置zf为1
        sub AX,AX ;结果为0，ZF就置1
        jmp getInt_RESULT 
getInt_DO_ESC: ;esc置zf为0
        add AX,0 ;
        jmp getInt_RESULT
    ;如果要处理其他错误的话，就在这里处理 
getInt_OTHER_ERROR:  
        jmp  getInt_XUNHUAN   
getInt_RESULT:
        mov AX,CX
        pop BX  ;恢复现场
        pop DX 
        pop CX
        popf 
        ret  
getInt ENDP 

    CODE    ENDS
END  START
