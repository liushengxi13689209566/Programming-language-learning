/*************************************************************************
	> File Name: 9.50.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月27日 星期六 16时59分58秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std ;
int main(void){
	vector<string> stringVec{"11","22","33"} ;
	int sum = 0 ;
	for(auto i : stringVec ){
		sum += stod(i);
	}
	cout << "sum ==  "<< sum << endl;
	return 0 ;
}

