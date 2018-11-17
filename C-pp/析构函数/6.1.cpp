/*************************************************************************
	> File Name: 6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月30日 星期一 20时46分49秒
 ************************************************************************/
#include<iostream>
using namespace std;
class Myclass{
    private :
        int *px;  //私有不能在类外所使用
    public:  //公有可以访问私有
    Myclass()
    {
        px = new int(888);
    }
    void print()
    {
        cout << *px  << endl ;
    }
    ~Myclass() //类内new 的东西，类内 delete 
    {
        delete px;
    }
};
/*int main(void)
{
    Myclass my ;
    my.print();
}*/
int main(void)
{
    Myclass *pmy = new Myclass() ;
    pmy->print() ;// 等价于 (*pmy).print() ; 
    (*pmy).print() ;
    delete pmy ;
    pmy= nullptr ;
}
