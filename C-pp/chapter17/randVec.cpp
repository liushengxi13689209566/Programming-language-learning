/*************************************************************************
	> File Name: randVec.cpp
	> Author: Liu Shengxi
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月28日 星期四 23时36分58秒
 ************************************************************************/

#include<iostream>
#include<random>
using namespace std;
vector<unsigned> bad_randVec(){
	default_random_engine e ;
	uniform_int_distribution<unsigned> u(0, 9);
	vector<unsigned> ret ;
	for(size_t i = 0 ;i< 100 ;i++)
		ret.push_back(u(e));
	return ret ;
}
vector<unsigned> good_randVec() {
	static default_random_engine e ;
	static uniform_int_distribution<unsigned> u(0, 9);
	vector<unsigned> ret ;
	for(size_t i = 0 ;i< 100 ;i++)
		ret.push_back(u(e));
	return ret ;
}
int main(void){
	vector<unsigned> v1(bad_randVec());
	vector<unsigned> v2(bad_randVec());
	if(v1 ==  v2 )
		cout << "same "<< endl;

	vector<unsigned> v3(good_randVec());
	vector<unsigned> v4(good_randVec());
	if(v3 ==  v4 )
		cout << "same "<< endl;
	else 
		cout << "not same "<< endl;
	for(auto i: v3)
		cout << i << " " ;
	cout << endl ;
}

