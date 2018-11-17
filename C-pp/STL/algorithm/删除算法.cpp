/*************************************************************************
	> File Name: 删除算法.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月25日 星期四 16时14分46秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){
	vector<int> vec = {1,2,3,2,5};
	vector<int>::iterator i = remove(vec.begin(),vec.end(),2);
	for(int i= 0; i <  vec.size() ;++i)
		cout << vec[i] << "  ";
	cout << endl ;
}

