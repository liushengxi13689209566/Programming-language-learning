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
    int x,y;
    public:
    Myclass()
    {
        x= 0;
        y= 0 ;
    }
    Myclass(int x,int y){
        this->x= x;
        this->y = y ;
    }
    void print()
    {
        cout <<  x <<  "  " << y << endl;
    }
};
int main(void)
{
    Myclass *pmy = new Myclass(33,55);
    pmy->print();
    delete pmy ;
    pmy = NULL;  //记得把指针指空
}




