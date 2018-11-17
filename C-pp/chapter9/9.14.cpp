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
	list<const char *>  s{"liu","sheng","xi"} ;  
	vector<string>  vec ;
    vec.assign(s.cbegin()  ,s.cend());

	for(auto i:s )
		cout << i << "  ";
	cout << endl ;
	for(auto i:vec )
		cout << i << "  ";
	cout << endl  ;
}

