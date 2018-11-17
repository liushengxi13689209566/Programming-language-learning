/*************************************************************************
	> File Name: 5.6.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月15日 星期三 16时37分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(void)
{
    int x,y;
    cin >> x >> y;
    try{
        if( y == 0  )
        throw runtime_error("The y is zero !! \n"); //抛出异常将终止当前的函数，
        //转移到能处理该异常的代码,以The y is zero !! 初始化runtime_error 对象

        cout<<"x/y == " << x/y << endl;

    }catch(runtime_error err){
        cout << err.what();
    }
}
