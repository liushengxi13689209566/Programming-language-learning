/*************************************************************************
	> File Name: demo_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月26日 星期二 13时28分21秒
 ************************************************************************/
#include<iostream>
#include<cmath>
using namespace std ;
 // 有理数 
class RationalNumber{
    public:
    RationalNumber() = default; 
    RationalNumber(int a,int b):molecular(a),denominator(b){}

    RationalNumber operator + (RationalNumber &);
    RationalNumber operator - (RationalNumber &);
    RationalNumber operator * (RationalNumber &);
    RationalNumber operator / (RationalNumber &);
    void print() ;
private:
    RationalNumber &reduction();
    int molecular ;   //分子
    int  denominator ; //分母
};
 //考虑分母为零和化简
int  gcd(int  a,int  b) //找到最大公约数
{  
    return a%b ?gcd(b,a%b):b;  //gcd 算 法
}
RationalNumber &RationalNumber::reduction() //化简函数
{
    if(denominator < 0 )
    {
        molecular = -molecular ;
        denominator = -denominator ;
    }
    int temp = gcd(abs(molecular),abs(denominator));
    molecular /= temp ;  
    denominator /= temp ;
    return *this ; //改变调用对象
}
RationalNumber RationalNumber:: operator + (RationalNumber &rhs)
{
    int a,b,c,d  ;
    a = molecular ;
    b= denominator ;
    c= rhs.molecular ;
    d= rhs.denominator ;
    return RationalNumber(a*d+b*c,b*d);
}
RationalNumber RationalNumber:: operator - (RationalNumber &rhs)
{
    int a,b ;
    int multiy ;
    multiy = rhs.denominator * denominator ;
    a = molecular* rhs.denominator  ;
    b= denominator * rhs.molecular ;
    return RationalNumber(a-b,multiy);
}
RationalNumber RationalNumber:: operator * (RationalNumber &rhs)
{
    int a,b,c,d ;
    a = molecular ;
    b= denominator ;
    c= rhs.molecular ;
    d= rhs.denominator ;
    return RationalNumber(a*c,b*d);
}
RationalNumber RationalNumber:: operator / (RationalNumber &rhs)
{
    int a,b,c,d ;
    a = molecular ;
    b= denominator ;
    c= rhs.molecular ;
    d= rhs.denominator ;
    return RationalNumber(a*d,b*c);
}
void RationalNumber::print()
{
    reduction();
    cout <<  molecular << "/ " << denominator  << endl ;
}
int main(void)
{
    RationalNumber t1(8,-16),t2(2,3) ,t3 ;
    cout << "t1 == "     ;
    t1.print() ;
    cout << "t2 == "     ;
    t2.print() ;
    cout << "t1 + t2 == "     ;
    t3 = t1 + t2 ;
    t3.print() ;
   cout << "t1 - t2 == "     ;
    t3 = t1 - t2 ;
    t3.print() ;
    cout << "t1 * t2 == "     ;
    t3 = t1 * t2 ;
    t3.print() ;
    cout << "t1 / t2 == "     ;
    t3 = t1 / t2 ;
    t3.print() ;
    cout << endl ;
    return 0;
}
