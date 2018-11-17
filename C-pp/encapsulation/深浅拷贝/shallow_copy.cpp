/*************************************************************************
	> File Name: shallow_copy.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月15日 星期三 23时15分30秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Array{
    public:
    Array(int t)
    {
        cout << "Array" << endl ;
        count = t ;
    }
    Array(const Array &temp) //尽可能的使用 const 
    {
        cout << "~Array" << endl ;
        count = temp.count ;
    }
    void print()
    {
        cout << "count == " << count << endl;
    }
    private:
    int count;
};
int main(void)
{
    Array My1(5);
    Array My2 = My1;
    My1.print();
    My2.print();
}
