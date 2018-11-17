/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月16日 星期四 23时12分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
class coordinate { //坐标点
public:
    coordinate(int x,int y)
    {
        this->x= x;
        this->y =y;
    }
    ~coordinate()
    {
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
private:
    int x;
    int y;
};

class Line{  //一条线段
public:
    Line(int x1 ,int y1,int x2,int y2)
    {
        A = new coordinate(x1,y1);
        B = new coordinate(x2,y2);
    }
    void print()
    {
        cout << A->getX() << " " << A->getY() << endl ;
        cout << B->getX() << " " << B->getY() << endl ;
    }
    ~Line()
    {
        delete A;
        A=NULL;
        delete B;
        B=NULL;
    }
private:
    coordinate *A; //对象成员指针
    coordinate *B;

};
int main(void)
{
//    Line *p= new Line(1,2,3,4);
    Line *p;
    int *t;
    p= new Line(1,2,3,4);
    p->print();
    delete p ;
    p= NULL;
    cout <<"   t  == " <<  sizeof(t)<< endl ;
    cout <<"   p  == " <<  sizeof(p)<< endl ;
    cout <<"   sizeof(line1) == " <<  sizeof(Line)<< endl ;
    return 0;
}
