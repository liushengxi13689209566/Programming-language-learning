/*************************************************************************
	> File Name: insert.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月26日 星期五 14时35分44秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main(void)
{
	vector<string> vec= {"liu","sheng","xi"} ;
	list<string> slist ;
	slist.insert(slist.begin(),vec.end()-2 ,vec.end());
	for(auto i: slist )
		cout << i << "  ";
	cout << endl;

	slist.insert(slist.begin(),{"zui","shuai"} ) ;

	for(auto i: slist )
		cout << i << "  ";
	cout << endl;

	slist.insert(slist.begin() , slist.begin() ,slist.end()) ;
	
	for(auto i: slist )
		cout << i << "  ";
	cout << endl;
}
 

