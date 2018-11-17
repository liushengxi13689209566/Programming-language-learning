/*************************************************************************
	> File Name: dynamic_cast.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月10日 星期四 15时32分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Base
{
    public:
    virtual ~Base(){} //有虚函数，所以是多态基类
};
class Derived:public Base
{
    
};

int main(void){
    Base b; 
    Derived d ;
    Derived *pd ;
    pd = reinterpret_cast<Derived *>(&b ) ; //reinterpret_cast 不检查安全性，总是进行转换
    if(pd == NULL ) 
        cout << "1111 " << endl; 

    pd = dynamic_cast<Derived *>(&b ); //转换会失败 ，因为&b 并没有实际指向一个派生类对象 
    if(pd == NULL )
        cout << "unsafe dynamic_cast  " << endl; 
    Base *pb = &d ;

    pd = reinterpret_cast<Derived *>(pb );//成功
    if(pd == NULL )
        cout << "unsafe dynamic_cast  " << endl; 
    else 
        cout << "safe dynamic_cast  " << endl; 
    return 0 ;
}
