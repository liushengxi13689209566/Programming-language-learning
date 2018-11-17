/*************************************************************************
	> File Name: 11.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 19时51分59秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
void print(const map<string,size_t> & temp ){
	for(const auto i : temp )
		cout << i.first << ":" << i.second << endl;
	cout << endl ;
}
string &fun(string &str){
	for(auto ch:str )
		ch = toupper(ch) ;
    str.erase(remove_if(str.begin(), str.end(), static_cast<int(*)(int)>(&ispunct)), str.end()); 
	return str ;
}

int main(void){
	map<string ,size_t> word_count  ;
	string word ;
	while(cin >> word){
		if(word.size() != 0 )
			++word_count[fun(word)] ;	
	}
	print(word_count );
	return 0 ;
}

