/*************************************************************************
	> File Name: 9.24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月27日 星期六 12时22分32秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<class T>
void fun(vector<T> tvec){
	cout << tvec.at(0) << endl;
	cout << tvec[0] << endl ;
	auto &temp = tvec.front();
	temp =  666 ;
	cout << tvec.front() << endl;
	cout << *tvec.begin() << endl ; 
}
int main(void){
	vector<int> intVec1 ;
	vector<int> intVec2 = {1,2,3,4};
	//fun(intVec1) ; // at 抛出out_of_range 的异常 ，其余的报段错误
	fun(intVec2);
	return 0 ;
}

