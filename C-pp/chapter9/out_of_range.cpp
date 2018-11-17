/*************************************************************************
	> File Name: out_of_range.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月27日 星期六 12时07分58秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void){
	try{
		vector<string>  stringVec ;
		cout << stringVec.at(0) ;
	}catch(out_of_range){
		cout << "我抓住异常了哦 " << endl ;
	}
	return 0;
}

