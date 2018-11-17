/*************************************************************************
	> File Name: bad_cast.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 15时44分31秒
 ************************************************************************/

#include<iostream>
#include<stdexcept>
#include<typeinfo>
using namespace std;
class Base
{
    virtual void func(){  } //多态基类
};
class Derived:public Base 
{
    public:
        void print() {   
            cout << "Liushengxi " <<  endl ;
        }
};
void printObject(Base & b )
{
    try{
        Derived &rd  = dynamic_cast<Derived &>(b) ;
        rd.print(  );
    }
    catch(bad_cast &e){
        cout << e.what() << endl ;
        cout << "666666666666 " << endl ;
    }
}
int main(void){
    Base b; 
    printObject(b);
    return 0;

}
