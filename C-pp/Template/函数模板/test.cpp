/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月18日 星期六 13时05分36秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

/**
 * 定义模板函数swapNum
 * 实现功能：交换两个数的位置
 */
//template <typename T>
template <class T>
void swapNum(T a,T b)
{
    /*T temp = a;
    a = b;
    b = temp;*/
    a= 100;
    b= 200;
}

int main(void)
{
    int x = 10;
    int y = 20;
    // 调用模板函数

    swapNum<int&>(x,y);
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
	return 0;
}

