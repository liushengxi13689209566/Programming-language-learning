/*************************************************************************
	> File Name: 10.6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月28日 星期日 13时37分59秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int main(void){
	vector<int> intVec={1,2,3,4,5,6,7};
	fill_n(intVec.begin() ,intVec.size(),0);
	for(auto i:intVec )
		cout << i << "  ";
	cout << endl ;
	return 0 ;
}

