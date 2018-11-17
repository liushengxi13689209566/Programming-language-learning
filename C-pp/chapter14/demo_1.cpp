/*************************************************************************
	> File Name: demo_1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月26日 星期二 13时07分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
 //复数
class plural{ 
public:
    plural() = default ;
    plural(int a,int b):Real_component(a),Imaginary_part(b){}
    plural operator+(plural &) ; // 重载  +  号
    plural operator-(plural &) ; // 重载  -  号
    plural operator*(plural &) ; // 重载  *  号
    void print() ;
private:
    int Real_component ; //实部
    int Imaginary_part ; //虚部
};
plural  plural::operator+(plural &a )
{
    plural temp ;
    temp.Real_component = a.Real_component + Real_component ;
    temp.Imaginary_part = a.Imaginary_part + Imaginary_part ;
    return temp ;
}
plural  plural::operator-(plural &b )
{
    int x = Real_component - b.Real_component ;
    int y = Imaginary_part - b.Imaginary_part ;
    return plural(x,y);
}
plural  plural::operator*(plural &c )
{ 
    int x = c.Real_component *Real_component  - c.Imaginary_part*Imaginary_part ;
    int y = c.Real_component * Imaginary_part + c.Imaginary_part * Real_component ;
    return plural(x,y) ;
}
void plural::print()
{
    if(Imaginary_part  < 0) 
        cout << Real_component << Imaginary_part << "i " << endl ;
    else 
        cout << Real_component << "+" << Imaginary_part << "i " << endl ;
}
int main(void)
{
    plural f1(1,-4),f2(-1,9) ,add  ;
    cout << "f1 == " ;
    f1.print();
    cout << "f2 == " ;
    f2.print();
    add = f1 +f2 ;
    cout << "f1 + f2 == " ;
    add.print() ;

    plural sub = f1 - f2 ;
    cout << "f1 - f2 == " ;
    sub.print();

    plural mul = f1 * f2 ;
    cout << "f1 * f2 == " ;
    mul.print();

    return 0;
}
