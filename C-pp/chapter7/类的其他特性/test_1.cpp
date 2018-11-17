/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月27日 星期三 20时47分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Test1
{
private:
    int num;
public:
    friend void  print_1(Test1 &);
    
    Test1(int n)
    {
        num=n;
    }//构造函数
    int   compare(Test1 other) ;
};
int Test1::compare(Test1 other)
{
    if(other.num == num)
        return  6888888 ;
}
void print_1(Test1 &t)
{
    printf("num == %d \n",t.num);
}
int main(void)
{
    //画重点啦啦啦～～～
    
    //String s1 = “hello”; //OK 隐式转换，等价于String s1 = String（”hello”）

    Test1 t1= 555 ;//隐式调用其构造函数,成功
    print_1(t1);
    Test1 temp(2120);
    cout << " compare返回值是 : " << temp.compare(2120) << endl ; //发生隐式调用
    //等价于 temp.compare(Test1(2120));  编译器自己给你搞出来一个临时对象

    return 0;
}

