/*************************************************************************
	> File Name: vector如何增长.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月27日 星期六 15时21分35秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void){
	vector<int> intVec ;
	intVec.reserve(50) ;

	cout <<  intVec.size()   << " , "
	<< intVec.capacity() << endl ;
	return 0 ;
}

