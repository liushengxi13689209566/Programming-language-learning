/*************************************************************************
	> File Name: 对象指针.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月04日 星期六 10时23分48秒
 ************************************************************************/
#include<iostream>
using namespace std;
class Myclass{
    private:
    int m;
    int n;
    public:    //公有访私有
    Myclass()  //函数重载   {与下面的Myclass(int x,int y) }
    {
        m= 0;
        n=0 ;
    }
    Myclass(int x,int y){ //构造函数
        m= x;
        n = y ;
    }
    void print()
    {
        cout <<  m <<  "  " << n << endl;
    }
};
int main(void)
{
    Myclass my1(3,5),my2;
    Myclass *pmy=&my1;  //对象指针 pmy 指向了对象my1 
    pmy->print();  //通过对象指针操作对象
    //my2=*pmy;
    pmy=&my2;
    pmy->print();
}




