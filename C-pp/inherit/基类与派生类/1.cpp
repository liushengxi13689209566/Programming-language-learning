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
        name = "父类初始化" ;
        ID =  "父类初始化";
        age = "父类初始化" ;
        cout << "父 类 构 造 函 数" << endl ;
    }
    ~person()
    {
        cout << " ～父 类 析 构 函 数" << endl ;
    }
    void eat()
    {
        name = "父类name" ;
        ID =  "父类ID";
        age = "父类age" ;
        cout << "父 类 成 员 函 数" << endl;
    }
    string ID ; // 公有数据成员
private:
    string name ;    //私有数据
protected:
    string age ;  //保护数据成员
};
class worker :public person    //公有继承
{
    public:
    worker()
    {
        salary = "子类初始化 ";
        cout << "子 类 构 造 函 数" << endl ;
    }
    ~worker()
    {
        cout << " ～子 类 析 构 函 数" << endl ;
    }
    void work()
    {
        // name = "子类name" ; //  子类都无法直接使用父类中的private成员
        ID = "子类ID";
        age = "子类age" ;
        salary = "子类salary" ;
        cout << "子 类 成 员 函 数 " << endl ;
    }
    void print()
    {
        cout << "age  == " << age <<  endl ;
        cout << "ID == " << ID << endl ;
        cout << "salary == "<< salary << endl ;
    }
private:
    string salary ;
};
int main(void)
{
    worker work1 ;
    work1.ID = "我在外界设置的ID" ;
    // work1.age =  "我在外界设置的age";  //被继承到了子类的protected 中 
    work1.print();
    cout << "---------------------------------------------------" <<  endl ;

    work1.eat(); //调用父类的public成员函数
    work1.print();
    cout << "---------------------------------------------------" <<  endl ;

    work1.work() ;//调用子类的public成员函数
    work1.print();
    cout << "---------------------------------------------------" <<  endl ;
}
