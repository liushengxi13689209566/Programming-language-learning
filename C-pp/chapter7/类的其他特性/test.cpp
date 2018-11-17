/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月27日 星期三 20时47分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
/*typedef string Type;
Type initVal(); // use `string`
class Exercise {
public:
    typedef double Type;
    Type setVal(Type); // use `double`
    Type initVal(); // use `double`
private:
    int val;
};

//Exercise::Type Exercise::setVal(Type parm) {  // use 'double`
Type Exercise::setVal(Type parm) {  // first is `string`, second is `double`
    val = parm + initVal();     // Exercise::initVal()
    return val;
}*/
class Test1
{
private:
    int num;
public:
    friend void  print_1(Test1 &);
    
    Test1(int n)
    {
        num=n;
    }//普通构造函数
};
class Test2
{
public:
    explicit Test2(int n)
    {
        num=n;
    }//explicit(显式)构造函数
    friend void print_2(Test2 &) ;
private:
    int num;
};
void print_1(Test1 &t)
{
    printf("num == %d \n",t.num);
}
void print_2(Test2 &t)
{
    printf("num == %d \n",t.num);
}
int main(void)
{
    //画重点啦啦啦～～～
    
    //String s1 = “hello”; //OK 隐式转换，等价于String s1 = String（”hello”）

    Test1 t1=12;//隐式调用其构造函数,成功
    print_1(t1);
    Test2 t2 =  55 ;//编译错误,不能隐式调用其构造函数
    Test2 t2(52) ;//显式调用成功
    print_2(t2);
    return 0;
}

