/*************************************************************************
	> File Name: begin_end.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月04日 星期一 11时56分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
void print(const int *beg,const int *end)
{
    while(beg != end)
    {
        cout << *beg++ << endl ;
    }
}
int main(void)
{
    int a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    print(begin(a),end(a));
}
