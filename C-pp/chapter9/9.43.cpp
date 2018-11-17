/*************************************************************************
	> File Name: 9.43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月27日 星期六 15时44分12秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
//使用迭代器和 insert && erase 
auto fun(string &s,string const &oldval ,string  const &newval){
	for(auto  i = s.begin() ; i != s.end();++i ){
		if(oldval == string(i,i+oldval.size())){  //找到匹配点
			// 先删除 ，后插入
			s.erase(i,i+oldval.size());
			s.insert(i,newval.begin(),newval.end());
		}
	}
}
int main(void){
	string str{"1111tho8888tho"};
	fun(str , "tho" , "666" );
	cout <<  "str == "  << str << endl ;
	return 0 ;
}

