/*************************************************************************
	> File Name: 10.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月28日 星期日 13时17分48秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;
int main(void){
	vector<double>   intVec{1,2,3,4,56,9} ;
	cout << accumulate(intVec.cbegin(),intVec.cend(),0 )  << endl ; 


	return 0 ;
}

