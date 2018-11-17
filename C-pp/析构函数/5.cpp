/*************************************************************************
	> File Name: 5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月30日 星期一 20时07分08秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Myclass{
    public:
    Myclass()  //构造函数
    {
        cout << "11111111"  << endl ;
    }
    ~Myclass()  //析构函数
    {
        cout << "22222222222" << endl;
    }
};

Myclass myGlobal ; //构造时的申请：myGlobal->my1->my2->pmy 

int main(void)
{
    cout << "The myGlobal size is " << sizeof(myGlobal) << endl;
    //                                       1个字节,8 bit 
    Myclass my1,my2;
    Myclass *pmy = new Myclass() ;  //new 必须加括号
    delete pmy; //释放顺序：pmy->my2->my1->myGlobal  释放前调用
    //                                           析构函数
}
