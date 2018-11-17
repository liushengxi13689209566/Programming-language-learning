/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月17日 星期六 15时58分11秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
int main(void){
	int ia[6]={1,2,3,4,5,6};
	vector<int ,allocator<int>> vi(ia,ia+6);
	cout << count_if(vi.begin() ,vi.end(),not1(bind2nd(less<int>(),4))) 
	<< endl ;
	return 0 ;
}

