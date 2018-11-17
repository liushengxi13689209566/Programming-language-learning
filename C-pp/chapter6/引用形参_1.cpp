/*************************************************************************
	> File Name: 引用形参.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月15日 星期三 17时17分23秒
 ************************************************************************/

#include<iostream>
using namespace std;
void reset(int &i)
{
    i=522;
}
int main(void)
{
    int i = 500;
    reset(i); //不支持拷贝操作时，只能用引用形参完成对应的操作
    cout << "i== "<< i << endl;

}
