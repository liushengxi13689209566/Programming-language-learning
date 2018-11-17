/*************************************************************************
	> File Name: list.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 21时40分25秒
 ************************************************************************/

#include<iostream>
#include<list>
using namespace std;
int main(void)
{
    list<int> list1 ;
    list1.push_back(111);
    list1.push_back(222);
    list1.push_back(333);
    list1.push_back(444);
    list1.push_back(555);
    list<int>::const_iterator i ;
    for(i = list1.begin() ; i !=  list1.end() ;++i)
        cout << *i << "   ";
    cout << endl ;
}
