/*************************************************************************
	> File Name: temp.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月25日 星期四 15时49分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <vector>
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
template < class T >
class CMyostream_iterator {
	public:
	string i ;
	ostream &write;
	CMyostream_iterator( ostream & oup, string c ) : write(oup ), i( c ) {}
	CMyostream_iterator< T > & operator *() { return *this; }
	CMyostream_iterator< T > & operator ++() { return *this; }
	CMyostream_iterator< T > & operator =( T & obj ) {  write << obj << i; return *this; }
};
int main()
{
 int a[5] = { 1, 2, 3, 4, 5 };
 CMyostream_iterator<int> output(cout,"*");
 vector< int > v( a, a + 5 );
 copy( v.begin(), v.end(), output );
 return 0;
}
