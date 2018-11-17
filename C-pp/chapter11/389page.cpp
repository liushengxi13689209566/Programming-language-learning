/*************************************************************************
	> File Name: 389page.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月13日 星期二 17时09分20秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std ;
int main(void){
	multimap<string,string> mmap ;
	mmap.insert(make_pair("liu","111"));
	mmap.insert(make_pair("liu","222"));
	mmap.insert(make_pair("liu","333"));
	mmap.insert(make_pair("xi","444"));
	mmap.insert(make_pair("xi","555"));
	mmap.insert(make_pair("xi","666"));
	mmap.insert(make_pair("sheng","777"));
	mmap.insert(make_pair("sheng","888"));
	mmap.insert(make_pair("sheng","999"));
	//first 
	string search_author("liu");
	auto size = mmap.count(search_author);
	auto temp = mmap.find(search_author);
	while(size) {
		cout << temp->second << endl ;
		++temp ;
		size--;
	}
	//second 
	search_author = "xi";
	for(auto beg = mmap.lower_bound(search_author),
	end = mmap.upper_bound(search_author) ; beg != end ;beg++){
		cout << beg->second << endl ;
	}
	//third 
	search_author = "sheng";
	for(auto pos = mmap.equal_range(search_author);pos.first != pos.second ; pos.first++){
		cout << pos.first->second  << endl ; 
	}
	//fourth 
	string str ;
	cout << "please input the str : " ;
	cin >>  str ;
	search_author = str  ;
	auto geshu = mmap.count(search_author);
	auto it = mmap.find(search_author);
	while(geshu){
		mmap.erase(it);
		it++ ;
		geshu--;
	}
	for(auto  beg = mmap.cbegin() ,end = mmap.cend() ; beg != end ;beg++){
		cout << beg->first << ":" << beg->second  << endl ;
	}
	return 0 ;
}

