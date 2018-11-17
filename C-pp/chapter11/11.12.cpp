/*************************************************************************
	> File Name: 11.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月09日 星期五 20时18分03秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<list>
using namespace std ;
int main(void){
    vector<pair<string ,int>> pairVec ;
	string temp ;
	int t ;
	for(int i = 0;i< 3 ;++i){
		cin >> temp >> t ;
		//pairVec.push_back(make_pair(temp,t));
		pairVec.push_back({temp,t});
		pairVec.push_back(pair<string,int>(temp,t));

	}
	for(const auto i : pairVec )
		cout << i.first << ":" << i.second << endl;
	cout << endl ;
	return 0 ;
}

