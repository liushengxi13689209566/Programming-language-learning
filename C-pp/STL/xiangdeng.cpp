/*************************************************************************
	> File Name: xiangdeng.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 22时11分38秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class A{
    public:
    A(int n):v(n){}
    bool operator < (const A & a2) const {
        cout <<  v << "< " << a2.v  << endl ;
        return false ;
    }
    bool operator == (const A & a2) const {
        cout << v << " == "  << a2.v << endl;
        return v== a2.v ;
    }
    private:
    int v; 
};
int main(void)
{
    A a[]={A(1),A(2),A(3),A(4),A(5),A(6)};
    cout << binary_search(a,a+4,A(9));
    return 0;

}
