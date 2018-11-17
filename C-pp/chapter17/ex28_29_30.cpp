/*************************************************************************
	> File Name: ex28_29_30.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月29日 星期五 17时51分51秒
 ************************************************************************/

#include<iostream>
#include<random>
using namespace std;
unsigned rand_unsigned(){
	static default_random_engine e ;
	static uniform_int_distribution<unsigned> u ;
	return u(e);
}
unsigned rand_unsigned( unsigned seed ){
	static default_random_engine e(seed) ;
	static uniform_int_distribution<unsigned> u ;
	return u(e);
}
unsigned rand_unsigned(unsigned seed,unsigned min,unsigned max ){
	static default_random_engine e(seed) ;
	static uniform_int_distribution<unsigned> u(min,max) ;
	return u(e);
}
int main(void) {
	cout << rand_unsigned() << endl ;
	cout << rand_unsigned(123) << endl ;
	cout << rand_unsigned(123,0,1) << endl ;
}

