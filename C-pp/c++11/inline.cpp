/*************************************************************************
	> File Name: inline.cpp
	> Author: Liu Shengxi
	> Mail: 13689209566@163.com
	> Created Time: 2018年07月02日 星期一 15时58分09秒
 ************************************************************************/

#include<iostream>
using namespace std;
inline void fun( )
{
	int tt ;
	tt =  0 ;
}
int main(void) {
	int tt = 10 ;
	fun();
	cout << "tt==" << tt << endl ;
	return 0;

}

