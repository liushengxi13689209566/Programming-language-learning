/*************************************************************************
	> File Name: insert.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月26日 星期五 14时35分44秒
 ************************************************************************/

#include<iostream>
#include<deque>
#include<string>
#include<list>
using namespace std;
int main(void){
	// deque<string> dequ ;
	// string str ;
	// while(cin >> str){
	// 	dequ.push_back(str) ;
	// }
	// deque<string>::const_iterator i = dequ.begin()   ;
	// for(; i != dequ.end();i++ )
	// 	cout << *i << "  ";
	// cout << endl ;
	list<string>  slist ;
	string str ;
	while(cin >> str){
		slist.push_back(str) ;
	}
	list<string>::const_iterator i = slist.begin()   ;
	for(; i != slist.end();i++ )
		cout << *i << "  ";
	cout << endl ;
}
 

