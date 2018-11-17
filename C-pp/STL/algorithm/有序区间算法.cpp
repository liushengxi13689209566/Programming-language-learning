/*************************************************************************
	> File Name: 变序算法.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月25日 星期四 16时48分03秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int main(void)
{
	vector<int> vec = {12,15,16,48,49,52,55,66,88,99,74564};
	if(binary_search(vec.begin(),vec.end(),88)){
		cout << "find " << endl;
	}
	vector<int>::const_iterator i = find(vec.begin(),vec.end(),88);
	cout  << "*i ==  "<< *i <<  endl ;
	return 0;

}

