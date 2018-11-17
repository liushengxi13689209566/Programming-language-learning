/*************************************************************************
	> File Name: 10.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月28日 星期日 13时53分06秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;

template<class T>
void print(T tt){
	for(auto i : tt)
		cout << i << "  ";
	cout << endl ;		
}

int main(void){
	vector<int> intVec{6,1,6,3,1,5} ;

	sort(intVec.begin(),intVec.end());
	auto end_unique = unique(intVec.begin(),intVec.end());
	intVec.erase(end_unique,intVec.end());

	print(intVec);

	return 0 ;
}

