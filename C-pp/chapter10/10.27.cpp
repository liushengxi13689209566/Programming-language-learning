/*************************************************************************
	> File Name: 10.27.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月30日 星期二 15时51分08秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
int main(void){
	list<int> intList ;
	vector<int> intVec{1,2,2,2,5,6};
	unique_copy(intVec.begin(),intVec.end(),back_inserter(intList));
	for(auto i: intList)
		cout << i << " " ;
	cout << endl ;
	return 0 ;
}

