/*************************************************************************
	> File Name: 9.45.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月27日 星期六 16时47分18秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
//使用迭代器和 insert && append 
string &fun(string &name ,string const &befname ,string const &aftname){
	string::iterator   i = name.begin() ;
 	name.insert(i,befname.cbegin(),befname.cend()) ;
	name.append(aftname.cbegin(),aftname.cend());
	return name ;
}

int main(void){
	string name ; 
	cout << fun(name,"liu","       shengxi") << endl ;
	return 0 ;
}

