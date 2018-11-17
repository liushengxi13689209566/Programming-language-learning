/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月17日 星期五 22时10分12秒
 ************************************************************************/

#include<iostream>
using namespace std;
class person{
    public:
    person()
    {
        name = "jim";
        age = 520;
        cout << " person " << endl ;
    }
    ~person()
    {
        cout << " ~person " << endl ;
    }
    void eat()
    {
        cout << "name ==  "<<  name  << endl;
        cout << "age ==  "<<  age  << endl;
    }
//protected:
private:
    string name ; 
    unsigned age ;
// private:
//     unsigned age ;
};

class worker :public person //公有继承
{
    public:
    worker()
    {
        cout << "worker" << endl ;
    }
    ~worker()
    {
        cout << " ~worker" << endl ;
    }
    void work()
    {
        name = "888888";
        age = 45454 ;
        salary = 1101 ;
        cout << "work " << endl ;
    }
    void print()
    {
        cout << "name ==  "<<  name  << endl;
        cout << "age ==  "<<  age  << endl;
        cout << "salary ==  "<<  salary   << endl;
    }
    protected:
    unsigned salary;
};
int main(void)
{
    worker work1 ;
    // work1.name= "liushengxi";
    // work1.age = 20 ;
    work1.eat();
    // work1.salary = 100;
    // cout << "name == " << work1.name << endl ;
    // cout << "age  == " << work1.age <<  endl ;
    // cout << "salary == " << work1.salary  << endl ;
    work1.work();
    work1.print() ;

    // worker work1 ;
   
    // work1.eat() ;
    // person person1 ;
    // person1.eat();
}
