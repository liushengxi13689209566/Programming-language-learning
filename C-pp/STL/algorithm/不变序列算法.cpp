/*************************************************************************
	> File Name: 不变序列算法.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月25日 星期四 10时30分00秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//max ,min ,for_each 
//count_if 
//find  ==  find_if 
//search 
//for_each  
class  A {
	public:
	int  tt ;
	A (int  _n):tt(_n) {}
};
bool operator <  (const A  &a ,const A  &b){
	cout << "called " << endl ;
	if(a.tt == 3 && b.tt == 7)
		return true ;
	else 
		return false ;
}
int main(void)
{
	vector<A> vec = {3,5,7,2,1};
	cout << min_element(vec.begin(),vec.end())->tt  << endl ;
	cout << max_element(vec.begin(),vec.end())->tt  << endl ;  
	
}

