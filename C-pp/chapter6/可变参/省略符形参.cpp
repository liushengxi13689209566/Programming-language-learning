
#include <stdio.h> 
#include <stdarg.h> 
void ArgFunc(const char *str ... ) 
{ 
    va_list ap; 

    int n = 3; 
    char *s = NULL; 
    int d = 0; 
    double f = 0.0; 

    va_start(ap, str); // 注意！这里第二个参数是本函数的第一个形参 

    s = va_arg(ap, char*); 
    //s = va_arg(ap, int);  //编译不通过，报错

    d = va_arg(ap, int); 

    f = va_arg(ap, double); // 浮点最好用double类型，而不要用float类型；否则数据会有问题 

    va_end(ap); 

    printf("%s is %s %d, %f \n\n", str, s, d, f); 
} 
int main(void) 
{ 
    ArgFunc("The answer", "Hello", 345, 788.234); 
} 

