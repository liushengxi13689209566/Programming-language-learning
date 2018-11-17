/*************************************************************************
	> File Name: 引用形参_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月15日 星期三 17时26分10秒
 ************************************************************************/

#include<iostream>
using namespace std;
string::size_type fun(const string &str,char s,int &count )
{
    auto ret = str.size();  //返回一个string::size_type 类型的值
    count = 0;
    for(decltype(ret)i = 0 ;i != str.size() ;++i){
        if(str[i]  == s ){
            if(ret == str.size())
            ret = i ; //ret 只有刚开始等于str.size(  )
           ++count;
        }
    }
    return ret ;
}
int main(void)
{
    string str{"liushengxizuishuai!!!"};
    string::size_type  temp ;
    int count ;
    temp = fun(str,'i',count);
    cout << "frist show :"<< temp << endl ;
    cout << "show  Times :"<< count << endl ;
    return 0;
}
