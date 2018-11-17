/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月08日 星期五 21时25分02秒
 ************************************************************************/

#include<iostream>
using namespace std;
void print(const char *str)
{
    if(str) //指针非空
    {
        while(*str)
            cout <<   *str++  << "  " ;
        cout << endl ;
    }
}
