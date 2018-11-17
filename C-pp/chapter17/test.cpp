/*************************************************************************
	> File Name: test.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月21日 星期四 17时38分18秒
 ************************************************************************/

#include<iostream>
#include<tuple>
using namespace std;
int main(void) {
	auto item  =  make_tuple("0-999-8880",3,20.00);
	auto book  =  get<0>(item);
	auto count =  get<1>(item);
	cout << count  << endl ;

	tuple<int,int,int> t1(10,20,30);
	typedef decltype(t1) trans ;
	int limit = tuple_size<trans>::value ; 
	cout << limit << "\n";

	cout << get<0>(t1) << "\n";
	cout << get<1>(t1) << "\n";
	cout << get<2>(t1) << "\n";
	return 0;
}

