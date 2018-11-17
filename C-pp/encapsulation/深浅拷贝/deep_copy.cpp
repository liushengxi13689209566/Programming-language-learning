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
        p = new int[count];
        for(int i= 0;i != count ;++i)
            p[i] = i*i ;
    }
    Array(const Array &temp) //尽可能的使用 const 
    {
        cout << "~Array" << endl ;
        count = temp.count ;
        p = new int[temp.count];
        //p = temp.p;  是两个指针指向了同一块地址，delete 了两次
        for(int i =  0 ;i< temp.count ;++i)
            p[i] = temp.p[i];
    }
    void print()
    {
        cout << "count == " << count << endl;
        for(int i =0;i != count ;++i)
            cout << p[i] << endl ; //公有可以访问私有
    }
    void printAddr()
    {
        cout << "p == " << p << endl ;
    }
    ~Array()
    {
        delete []p;
        p= NULL;
    }
    private:
    int count;
    int *p ;
    
};
int main(void)
{
    Array My1(5);
    Array My2 = My1;
    My1.printAddr();
    My2.printAddr();
    My1.print();
    My2.print();
}
