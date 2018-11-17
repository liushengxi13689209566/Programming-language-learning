/*************************************************************************
	> File Name: 2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月02日 星期四 13时45分06秒
 ************************************************************************/
#include<iostream>
using namespace std;
class classCopy{
    private:
    int x,y;
    public:
    classCopy()
    {
        x= 0;
        y=0 ;
    }
    void Copy(classCopy  t) //1,如果在类的方法中，要用到两个对象，
                              // 那末一个对象调，一个对象传
    // 2,两个同类型的对象可以直接赋值。映射
    {
        //x= t.x;
        //y= t.y;
    *this = t ;
    }
    void print()
    {
        cout <<  x <<  "  " << y << endl;
    }
    classCopy(int  x,int y)
    {
        this->x= x;
        this->y =y ;
    }
};
int main(void)
{
    classCopy my1(3,5),my2;
    my2.Copy(my1);
    /*my2 = my1 ; */
    my2.print();
    my1.print();
}
