/*************************************************************************
	> File Name: 9.25.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月27日 星期六 12时38分16秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void){
	vector<int> intVec{1,2,3,4,5};
	auto it1  = intVec.end() ; 
	auto it2 = intVec.end() ;
	intVec.erase(it1,it2);
	for(auto i : intVec )
		cout << i << "  ";
	cout << endl;
	return 0 ;
}

