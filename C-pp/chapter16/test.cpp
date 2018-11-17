/*************************************************************************
	> File Name: test.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年05月26日 星期六 17时09分30秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std ;
int main(void){

	vector<int> v={42,14,15,16} ;
	// vector<int> *pp = &v  ;
	// cout << pp->size() << endl ; 

	auto p = make_shared<vector<int>> (v) ;
	weak_ptr<vector<int>> wp(p) ;
	cout << wp.lock()->size() << endl;
	cout << (*(wp.lock()))[1] << endl;
	cout << (*p)[3] << endl;
	cout << p->size()  << endl;
	weak_ptr<vector<int>> wp_dump(p) ;
	if(wp_dump.lock() ==  wp.lock() )
		cout << "liushengxi " << endl ;
	return 0;
}

