/*************************************************************************
	> File Name: 引用形参_两数交换.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月15日 星期三 17时46分27秒
 ************************************************************************/

#include<iostream>
using namespace std;
void change(int &x,int &y)
{
    int temp =0;
    temp = x;
    x= y;
    y= temp;
}
int main(void)
{
    int x= 4;
    int y= 45;
    change(x,y);
    cout << "x== " << x << endl;
    cout << "y== " << y << endl;
}
