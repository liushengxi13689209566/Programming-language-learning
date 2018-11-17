/*************************************************************************
	> File Name: 14.52.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月22日 星期二 22时20分56秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct LongDouble {
    LongDouble(double = 0.0);
    operator double();
    operator float();
    LongDouble operator+(const )
};
LongDouble ldObj;
int ex1 = ldObj;    // error ambiguous: double or float?
float ex2 = ldObj;  // legal

int main(int argc, char const *argv[])
{
	return 0;
}

