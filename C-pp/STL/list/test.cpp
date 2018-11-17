/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月09日 星期二 20时51分10秒
 ************************************************************************/

#include<iostream>
#include<list>
using namespace std;
template <class T>    //函数模板
void PrintList(const list<T> &lst){
    int temp = lst.size() ;
    if(temp > 0 )
    {
        typename list<T> ::const_iterator i ; 
        i= lst.begin() ;
        while( i != lst.end() )
        {
            cout <<  *i << "  ";
            i++ ;
        }
    }
}
class A{
    public:
    A(int  b):n(b){}
    friend bool operator < (const A &a1 ,const A &a2) ;
    friend bool operator == (const A &a1 ,const A &a2) ;
    friend ostream & operator << (ostream &os ,const A &a) ;
    private:
    int n ;
};
bool operator < (const A &a1 ,const A &a2) 
{
    return a1.n < a2.n ;
}
bool operator == (const A &a1 ,const A &a2) 
{
    return a1.n == a2.n ;
}
ostream & operator << (ostream &os ,const A &a) 
{
    os << a.n ;
    return os ;
}
int main(void)
{
    list<A> a1 ;
    a1.push_back(10);
    a1.push_back(2);
    a1.push_front(34);
    a1.push_back(4);
    a1.push_back(5);
    a1.push_front(8);
    a1.push_back(1);
    a1.push_front(2);
    PrintList(a1);
    cout << endl ;

    a1.sort() ;
    PrintList(a1);
    cout << endl ;

    a1.reverse() ;
    PrintList(a1);
    cout << endl ;
}
