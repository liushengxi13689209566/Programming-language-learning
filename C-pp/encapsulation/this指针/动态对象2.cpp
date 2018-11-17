/*************************************************************************
	> File Name: 动态对象.cpp
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
    public:
    Myclass()
    {
        m= 0;
        n= 0 ;
    }
    Myclass(int x,int y){
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
    Myclass *pmy = new Myclass(33,55); //动态对象
    pmy->print();
    delete pmy ; //记得delete ！！ 
    pmy = NULL;  //记得把指针指空
}




