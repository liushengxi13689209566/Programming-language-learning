/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月18日 星期六 12时47分26秒
 ************************************************************************/

#include<iostream>
using namespace std;
template <typename T>   //函数模板
void display(T a)
{
    cout << a << endl ;
}
template <typename T,class S>
void display(T t,S s)
{
    cout << t << endl ;
    cout << s << endl ;
}
template <typename T,int  size>  //常量参数
void display(T t)
{
    for(int i = 0 ;i != size ;++i)
        cout << t << endl ;
}
int main()
{
    display<int>(12); //模板函数
    return 0;
}
