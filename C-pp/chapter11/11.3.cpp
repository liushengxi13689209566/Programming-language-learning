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
using namespace std;
int main(void){
	map<string ,size_t> word_count  ;
	string word ;
	for(int i= 0;i< 4 ;++i){
		cin >> word ;
		if(word.size() != 0 ){
			auto map_it =  word_count.insert(make_pair(word,1));
			if( !map_it.second )
				map_it.first->second++ ;
		}
	}
	for(auto i : word_count)
			cout << i.first << ":" << i.second << endl;
		cout << endl ;
	return 0 ;
}

