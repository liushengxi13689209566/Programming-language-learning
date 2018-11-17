/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月05日 星期二 21时14分36秒
 ************************************************************************/

#include<iostream>
using namespace std;
constexpr int new_sz()
{
    return 45;
}
int main(void)
{
    constexpr int foo = new_sz();
    cout << foo << endl ;
}
