/*************************************************************************
	> File Name: 6.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月30日 星期一 21时15分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Myclass{
    private :
    int *px;
    public:
    Myclass(int *t)
    {
        px = t ;
    }
    void print()
    {
        cout << *px << endl ;
    }
};
int main(void)
{
    int *pint = new int(3);
    Myclass *pmy = new Myclass(pint);
    pmy->print();
    delete pint;
    delete pmy ;
}
