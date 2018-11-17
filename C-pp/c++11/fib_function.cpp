/*************************************************************************
	> File Name: fib_function.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月10日 星期四 13时36分03秒
 ************************************************************************/

#include<iostream>
#include<functional>
using namespace std ;
int main(int argc, char const *argv[])
{
	function<int(int)> fib=[&fib](int n){
	return n <= 2? 1 : fib(n-1)+fib(n-2) ;};
	cout << fib(8) << endl ;
	
	return 0;
}

