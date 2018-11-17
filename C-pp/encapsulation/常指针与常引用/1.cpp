/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月16日 星期四 23时12分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
class coordinate {
public:
    coordinate(int x,int y)
    {
        this->x= x;
        this->y =y;
    }
    ~coordinate()
    {
    }
    int getX()  //与下面的是不同的函数，但一般不这样书写
    {
    }
    int getX() const  //常成员函数，与上面的函数不冲突，但不建议这样写
    {
        return x;
    }
    int getY() const 
    {
        return y;
    }
    void printInfo() const  //要求 this 指针只读
    {
        cout << "liushengxi ----- " << endl;
    }
private:
    int x;
    int y;
};
int main(void)
{
    coordinate   My1(1,2); 

    const coordinate  &My2 = My1; //常引用
    const coordinate  *p = &My1; //常指针

    My2.getX(); //getX 要求this 是一个具有读写权限的对象，下同
    p->getY();
    
    return 0;

}
