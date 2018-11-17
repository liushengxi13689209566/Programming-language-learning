/*************************************************************************
	> File Name: dequeue.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 21时04分11秒
 ************************************************************************/

#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;
int main(void)
{
    deque<int> deue1; //双向队列
    deue1.push_back(11);
    deue1.push_back(22);
    deue1.push_back(33);
    deue1.push_back(44);
    cout << deue1.front() << endl ;
    deue1.pop_back() ; //删除最后一个元素
    deue1.push_back(55);

    deque<int>::const_iterator i ; //定义一个deque的常量迭代器

    for(i= deue1.begin() ; i != deue1.end() ;++i)
        cout << *i << "  ";
    cout << endl; 
    deque<int>::reverse_iterator  r   ; //反向迭代器
    for(r= deue1.rbegin() ;r != deue1.rend();++r) //rbegin 指向最后一个元素
    //rend 指向第一个元素，使用迭代器来避免指针越界
        cout << *r << "  " ;
    cout << endl ;

    deque<int>::iterator j; //非常量
    for(j = deue1.begin() ;j != deue1.end();++j)
    {
        *j=666 ;
        cout << *j << "  " ;
    }
    cout << endl ;






}

