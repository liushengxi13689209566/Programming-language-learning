/*************************************************************************
	> File Name: bind.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月02日 星期六 17时48分14秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
//bool fun1(const string &s ,string::size_type &l,string::size_type &h ){ 
// string::size_type 不能用引用去传递参数
bool fun2(const string &s ,string::size_type &l,string::size_type &h,string::size_type temp){
	return s.size() < h && s.size() > l ;
}
bool fun1(const string &s ,std::string::size_type l ){
	return s.size() < l  ;
}
bool ff( const  string &s1, const string &s2 ,int &temp ){
	return s1[0] < s2[0];
}
int main(void) {
    using namespace std::placeholders ;//使用该命名空间，使得书写_1,_2,_n 时不需要书写"std::placeholders::_1 "
	std::vector<string> v{"11","2222222","9","44444444","555","66","8888","777777"} ;//长度分别为 2,7，1，8,3,2,6
	int num1= count_if(v.begin(),v.end() ,bind(fun1,_1,6 ) );
	cout << num1  << endl ;
	cout << "please input the length of the string's range : "   ;
	// string::size_type ll,hh ;
	// cin >> ll >> hh  ;
	// int num2= count_if(v.begin(),v.end() ,bind(fun2,_1,ll,hh,5555 ));
	// cout << num2  << endl ; 
	sort(v.begin() ,v.end() ,bind(ff,_1,_2,555)) ;
	for (auto i :v)
		cout  << i << "  ";
	cout << endl ;
}
