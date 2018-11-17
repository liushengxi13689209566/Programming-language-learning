/*************************************************************************
	> File Name: test1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月09日 星期三 23时23分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
1,auto 
template<T1,T2>
auto add (T1 x,T2 y)->decltype( x + y ){
}
2, 统一的初始化方法 
int arr[3]{1,2,3}
vector<int> iv{1,2,3}
map<int,string> mp{{1,"a"},{2,"b"}} 
int *p= new int[20]{1,2,3}
A fun(){
    return {m,n}
}
3,
class test{
    private:
    int num = 111 ;
}
int main(void){
}
4, 空指针  nullptr  
5, 范围 for 循环 
for(auto &e :array ){
}
6,右值引用 and move 


