/*************************************************************************
	> File Name: static_cast.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月10日 星期四 13时47分13秒
 ************************************************************************/
#include<iostream>
/* static_cast 主要完成的是平常整型，浮点等的转换，
* 不能完成有关于指针类型的转换*/
using namespace std;
class A
{
public:
	operator int(){return 1 ;}
	operator char *(){return nullptr ;}
};
int main(int argc, char const *argv[])
{
	A a ;
	int n ; 
	char *p= "Liu Shengxi ";
	n= static_cast<int>(3.14);
	cout << n << endl ;
	n = static_cast<int>(a) ; // 1 
	cout << n << endl ;

	p = static_cast<char *>(a);/*从类型‘int’到类型‘char*’中的 static_cast 无效*/
	n = static_cast<int>(p) ;
	p = static_cast<char *>(n) ;
	
	return 0;
}

/*const string s= "TT";
string &p = const_cast<string &>(s) ;
string *pp = const_cast<string *>(&s) ;*/