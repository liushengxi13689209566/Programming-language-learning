/*************************************************************************
	> File Name: 10.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月28日 星期日 11时57分20秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<list>
using namespace std;
int main(void){
	vector<int> intVec{1,2,2,3,2,5};
	cout << count(intVec.cbegin(),intVec.cend(),2) << endl ;
	list<string> stringList={"111","222","222","333","222","555"} ;
	cout << count(stringList.cbegin(),stringList.cend(),"222") << endl ;
	return 0 ;
}

