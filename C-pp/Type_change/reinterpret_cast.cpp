/*************************************************************************
	> File Name: reinterpret_cast.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月10日 星期四 13时56分22秒
 ************************************************************************/

#include<iostream>
using namespace std ;
class A
{
public:
	int i ;
	int j ; 
	A(int n):i(n),j(n){}
};
int main(int argc, char const *argv[])
{
	A a(100);
	int &r = reinterpret_cast<int &>(a);
	r =  200 ; 
	cout << a.i <<" ," << a.j << endl ;
	int n = 300 ; 
	A *pa =reinterpret_cast< A *>(& n);
	pa-> i = 400 ; // n 变为 400 
	pa->j = 500 ; //不安全，容易导致程序崩溃
	cout << "n== " << n << endl ;
	long long la = 0x12345678abcdLL ; 
	pa = reinterpret_cast<A *>(la) ;  //la 太长，只取低32位0x5678abcd拷贝给 pa 
	// unsigned int u = reinterpret_cast<unsigned int >(pa);//pa 逐个拷贝到 u
	cout << hex << pa << endl ; 
    typedef void (*PF1)(int) ;
    typedef int (*PF2)(int ,char *);
    PF1 pf1  ;
    PF2 pf2 ;
    pf2 = reinterpret_cast<PF2>(pf1 );//不同类型的函数指针也可以互相转换

	return 0;
}

