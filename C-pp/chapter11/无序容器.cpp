/*************************************************************************
	> File Name: 11.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 19时51分59秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std ;
using TT = unordered_map<string,size_t> ;

int main(void){
	string word ;
	TT word_count ;
	for(int i= 0;i< 8 ;++i){
		cin >> word ;
		word_count[word]++ ;
	}
	for(auto i : word_count)
			cout << i.first << ":" << i.second << endl;
		cout << endl ;
	return 0 ;
}

