/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月02日 星期四 12时58分11秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Myclass{
public:
    Myclass(int *t){
        px=t ;
    }
    void print(){
        cout << *px << endl;
    }
private:
    int *px;
};
int main(void)
{
    int *pint = new int(3);//等价于pint = (int *)malloc(sizeof(int))
    Myclass my(pint);
    my.print() ;


    Myclass *pmy = new Myclass(pint);
    pmy->print();

    delete pint ;
    delete pmy ;
    pmy = NULL ;
    pint = NULL ;

    return 0;
}



