/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月18日 星期日 15时44分39秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
void  panduan(pair){
		if(tag.second  == false ) //插入失败 
		cout << "插入失败 " << endl;
	if(tag.second  == true ) //插入失败 
		cout << "插入成功 " << endl;
}
int main(void){
	map<int,double)*>  temp ;
	temp.insert(make_pair(33,97.5));
	temp.insert(make_pair(42,100));
	auto tag = temp.insert(make_pair(42,99));



	auto map_it=temp.cbegin();
	for( ;map_it != temp.cend();map_it++ )
   		cout<<map_it->first<<" "<<map_it->second<<endl;
	return 0 ;
}

