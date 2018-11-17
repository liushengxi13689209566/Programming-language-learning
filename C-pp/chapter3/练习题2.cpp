/*************************************************************************
	> File Name: 2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月02日 星期四 13时02分33秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Myclass{
    public:
    Myclass(int *x)  //构造函数与类同名,创建对象时第一个调用的函数
    {
        /*int x= 3; 
        px = &x ;*/ //错误 ，x 被释放老，所以必须要传进来一个形参 
        px =  x ;
    }
    void print()
    {
        cout << *px << endl ;
    }
    private:
    int  *px;
};
int main(void)
{
    int x= 3 ;
    Myclass my1(&x);
    my1.print() ; //公有函数直接调用
}
