/*************************************************************************
	> File Name: 3.5.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月12日 星期日 21时59分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(void)
{
    /*int a[10];
    for(int i= 0;i< 10 ;i++)
        a[i] = i;
    for(int i= 0;i< 10 ;i++)
        cout << a[i] << "  ";
    cout << endl;
    int *p1 = & a[3];
    int *p2 = & a[4];
    p1 += p2 - p1;
    cout << "*p1 == "<< *p1 << endl ;
    cout << "*p2 == " << *p2 << endl ;*/
    const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }   //输出了许多的垃圾数据
    return 0;



}
