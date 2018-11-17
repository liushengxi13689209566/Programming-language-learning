/*************************************************************************
	> File Name: insert.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月26日 星期五 14时35分44秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(void)
{
	list<int> ilist{1,2,3,4,5,6,7,8,9,10};
	deque<int> jideque ,oudeque ;
	auto it = ilist.cbegin() ;
	for(;it != ilist.cend();++it ){
		if(*it %2 == 0 ) //偶数
			oudeque.push_back(*it);
		else 
			jideque.push_back(*it);
	}
	for(auto i:jideque)
		cout << i << "  ";
	cout << endl ;
	for(auto i:oudeque)
		cout << i << "  ";
	cout <<  endl ;
}
 

