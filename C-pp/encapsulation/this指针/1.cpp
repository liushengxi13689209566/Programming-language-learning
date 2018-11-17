/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月02日 星期四 13时38分42秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Myclass{
    private :
    int x;
    int y;
    public:
    Myclass()
    {
        x= 0 ;
        y= 0 ;
    }
    Myclass(int x,int y)
    {
        /*
         * x=x;  编译器无法正确识别是参数还是数据成员
         y= y ;

         */
        this->x= x;      //加一个this 指针
        this->y= y;
    }
    void print()
    {
        cout << x << ": "  << y << endl ;
    }
};
int main(void)
{
    Myclass my(3,5);
    my.print();
    return 0;
}
