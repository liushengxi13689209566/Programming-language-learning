/*************************************************************************
	> File Name: 9.41.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月27日 星期六 15时36分41秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void){
	vector<char> charVec{'l','s','x'};
	string str(charVec.begin(),charVec.end() )	;
	cout << str << endl ;
	return 0 ;
}

