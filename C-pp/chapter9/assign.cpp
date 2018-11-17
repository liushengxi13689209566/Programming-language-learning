/*************************************************************************
	> File Name: assign.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月26日 星期五 11时24分57秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<vector>
#include<string>
using namespace std ;
int main(void)
{
	list<string> names ;  
	vector<const char *> oldtype{"liu","sheng","xi"} ;
	names.assign(oldtype.begin() ,oldtype.end());
	for(auto i:names )
		cout << i << "  ";
	cout << endl ;
	names.assign(10,"P");
	for(auto i:names )
		cout << i << "  ";
	cout << endl ;
}

