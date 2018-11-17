/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月18日 星期六 13时24分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
template <typename T ,int size ,int val>  //类模板
class  My{
public:
    My();
    ~My()
    {
        delete []p;
        p= NULL;
    }
    void display();
private:
    T *p;
} ;
template <typename T ,int size ,int val>
My<T,size,val>::My()       //构造函数
{
    p= new T[size];
    for(int i= 0;i< size ;++i)
        p[i]= val;
}
template <typename T,int size ,int val>
void My<T,size,val>::display() //类+ 成员函数
{
    for(int i = 0;i< size ;++i)
     cout << p[i]  << endl;
}

int main(void)
{
    My<int,10,52> Myclass1;
    Myclass1.display();

}
