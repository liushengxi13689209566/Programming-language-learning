/*************************************************************************
	> File Name: 4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月30日 星期一 14时11分34秒
 ************************************************************************/
// 2.5.3 节练习

#include<iostream>
using namespace std;
int main(void)
{
    /*第一题：
     * int a =3, b= 4 ;
    decltype(a)c = a; // int c 
    decltype((b))d= a;  //int & d    d其实就是a 的一个引用  
   // ++c;
    //++d;
    d= 55;
    cout << "a== " << a <<endl;
    cout << "b== " << b <<endl;
    cout << "c== " << c <<endl;
    cout << "d== " << d <<endl;
    return 0;*/

//  第二题：
    //  如果i 是int型，那么表达式i=x 是int&
    int a= 3 ,b= 4;
    decltype(a)c= a;  //int   c 
    decltype(a =  b)d=a; // int & d 是a 的一个引用
    cout << "a== " << a << endl ; //3
    cout << "b== " << b << endl ; // 4
    cout << "c== " << c << endl ; //3
    cout << "d== " << d << endl ; //3
    d= 55 ;
    cout << "a== " << a << endl ; //55 
//  第三题：






}
