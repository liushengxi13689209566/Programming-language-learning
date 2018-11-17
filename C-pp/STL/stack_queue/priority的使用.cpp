/*************************************************************************
	> File Name: stack.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 14时11分37秒
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;
struct   A {
	A (double _n):tt(_n) {}
	double tt ;
};
bool operator <  (const A  &a ,const A  &b){
	return a.tt > b.tt ;
}
int main(void)
{
	priority_queue<A> priority_que ;

	priority_que.push(A(88.2));
	priority_que.push(A(56.5)) ;
	priority_que.push(A(99.6));
	priority_que.pop();

	cout << "1,priority_que.top() ==  "  << priority_que.top().tt   << endl ;
	
	priority_que.push(A(44));

	cout << "2,priority_que.top() ==  "  << priority_que.top().tt  << endl ;
	cout << "3,priority_que.size() ==  "  << priority_que.size()  << endl ;
	return 0;
}
