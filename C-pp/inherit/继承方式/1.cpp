 /*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月20日 星期一 23时17分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
class person{
public:
    person()
    {
        name = "liushengxi ";
    }
    void play()
    {
        cout << "play in person  and name == " <<  name << endl ;
    }
private:
protected:
    string name ;
};
//class solider: protected person  // protected 继承方式   
class solider:private person  
{
public:
    solider()
    {
    }
    void work()
    {
        name = "111111111";
        age = 28;
        cout << "name an dage in solider == " << name   << "  age ==  " << age << endl ;
    }
private:
protected:
    int age ;
};
class result :public solider 
{
public:
    void display()
    {
        cout << "display " << endl ;
        name = "520520520520520";
        cout << name << endl ;
    }
private:
protected:

};
int main(void)
{
    solider s1;
    s1.work(); //能成功说明成功继承到了protected 下
    //result t1;
    //t1.display();
    //s1.play();
    return 0;
}
