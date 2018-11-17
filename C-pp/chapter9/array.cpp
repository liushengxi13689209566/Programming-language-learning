/*************************************************************************
	> File Name: 9.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月26日 星期五 10时31分28秒
 ************************************************************************/

#include<iostream>
#include<array>
using namespace std;
int main(void)
{
	array<int,5>  arr1{1,2,3,4,5,};
	array<int,5>  arr2 ;
	arr2 = {6};
	for(auto i : arr1) 
		cout << i <<  "  ";
	cout << endl ;
	for(auto i : arr2) 
		cout << i <<  "  ";
	cout << endl ;

	arr2 = arr1 ;

	for(auto i : arr2) 
		cout << i <<  "  ";
	cout << endl ;
}

