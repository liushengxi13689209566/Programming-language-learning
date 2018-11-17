/*************************************************************************
	> File Name: 派生类_基类.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月04日 星期六 09时41分11秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Base{
    public:
    void fun(){
    cout << "11111" << endl;
    }
    private:{
        cout << "222222"  << endl;
    }
};

class Parent:public Base{
    public:
    void fun


};
int main(void)
{
    Parent object ;
    object.fun();
    return 0;
}
