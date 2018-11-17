/*************************************************************************
	> File Name: 函数指针.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月05日 星期二 22时22分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
int compare_0(const int &a,const int &b)
{
    return a-b;
}
double compare_1(const int &a,const int &b)
{
    return a-b;
}
int main(void)
{
    int (*p)(const int &,const int &);
    p=compare_0;  //不存在智能转换
    cout << "a-b == " <<   p(12,11) << endl ; 
}
