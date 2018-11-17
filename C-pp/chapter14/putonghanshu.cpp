/*************************************************************************
	> File Name: putonghanshu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月22日 星期二 22时51分56秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool  cmp_ordinary_function(int a,int b){
	return  a % 10 < b % 10 ;
}
int main(int argc, char const *argv[])
{
	vector<int> v{45,2,50,8454,33,68421,5,84,1,59};
	// sort(v.begin() ,v.end(),less<int>());
	// for(auto i : v)
	// 	cout << i << "  ";
	// cout << endl ;

	// sort(v.begin() ,v.end(),greater<int>());
	// for(auto i : v)
	// 	cout << i << "  ";
	// cout << endl ;



	sort(v.begin() ,v.end(),cmp_ordinary_function );
	for(auto i : v)
		cout << i << endl ;
	cout << endl ;
	return 0;
}




bool LengthIsLessThanFive(const string& str) {
     return str.length()<5;    
}
int res=count_if(vec.begin(), vec.end(), LengthIsLessThanFive);