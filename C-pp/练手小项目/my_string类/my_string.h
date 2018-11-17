/*************************************************************************
	> File Name: my_string.h
	> Author: 
	> Mail: 
	> Created Time: 2017年12月25日 星期一 22时22分39秒
 ************************************************************************/

#ifndef _MY_STRING_H
#define _MY_STRING_H
#define MAXSIZE  55984
#include<string.h>
class My_string{
    public:
        //接受一个单参数 string 构造函数不是 explicit
        //接受一个容量参数的 vector 构造函数是 explicit
/*这里是几种初始化 string 的方式*/
        My_string() ;  //string str 
        My_string(const char *) ;  //string str("vjdbvb") 
        My_string(const My_string& ) ;  //string S1(S2)  s3 = "berbner ", S3 = S4 
        My_string(const int ,const char) ; //string s4(10,'L')
        ~My_string() ; 
/*实现一些成员函数*/        
    unsigned int getLength();
    int find(char );
    bool Empty();

/*重载+,[],S3 = S2,==,!= ,< ,> */    
    My_string  operator + (const My_string &) ;
    My_string  operator + (const char *) ;
    My_string  operator = (const My_string &) ;
    bool  operator <  (const My_string &) ;
    bool  operator == (const My_string &) ;
    char  operator [] (unsigned int ) ;
/*重载输入输出运算符*/    
        friend std::ostream& operator << (std::ostream &,My_string &) ;
        friend std::istream& operator >>  (std::istream &,My_string &) ;
    private:
    char *str ;  
};
std::ostream& operator << (std::ostream &,My_string &) ; 
//如果希望类的用户使用某个友元函数，那就在类外再专门对该函数声明一次
std::istream& operator >> (std::istream &,My_string &) ;
#endif
