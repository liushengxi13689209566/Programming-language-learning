/*************************************************************************
	> File Name: 范围for.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月17日 星期六 16时20分15秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void){
	vector<int> vi={1,2,3,4,5,6,7,8,9};
	for(auto &i : vi){ //会改变原来的数据大小
		i  = i*2 ;
		cout << i << "   ";
	}
	cout << endl;



	for(auto j : vi){
		cout << j << "   ";
	}
	cout << endl ;
	return 0;
}

