/*************************************************************************
	> File Name: initializer_list.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月04日 星期一 18时16分29秒
 ************************************************************************/

#include<iostream>
#include<initializer_list>
using namespace std;

void err_msg(initializer_list<string> list1,int a = 0)  //可变参
{
    cout << "a== " << a << endl ;
    for(auto i=list1.begin();i != list1.end();++i)
        cout << *i << "  " ;
    cout << endl ;
}
int  sum(initializer_list<int> const& list2)
{
    int sum = 0;
    for(auto i: list2)
        sum+=i;
    return sum;
}
int main(void)
{
    err_msg({"liu","sheng","xi"});
    err_msg({"rnejn","nbrm"});
    err_msg({});
    cout << "sum == "  << sum({1,2,3,4,5,6,7,8,9}) << endl ;
}
