/*************************************************************************
	> File Name: 2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月05日 星期二 22时48分53秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
typedef int TT( int a , int b) ;
int sum(const int &a ,const int &b)
{
    return a+b;
}
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }
int main(void)
{
    vector<TT *> a;
    a.push_back(add);
    a.push_back(subtract);
    a.push_back(multiply);
    a.push_back(divide);
    for(auto i:a)
    {
        cout << i(2,2) << endl ;
    }




}
