/*************************************************************************
	> File Name: initializer_list.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月04日 星期一 18时16分29秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<initializer_list>
using namespace std;

void err_msg(initializer_list<string> list1)  //可变参
{
    for(auto i=list1.begin();i != list1.end();++i)
        cout << *i << "  " ;
    cout << endl ;
}
//std::vector<string> process(string s,string t)
initializer_list<string>  process(string s,string t)
{
    if(s == t )
        return {};
    else if(s< t)
        return {"111","2222","33333"};
    else 
    return {"444","55555"};
}
int main(void)
{
 
    err_msg({"liu","sheng","xi"});
    err_msg({"rnejn","nbrm"});
    string s="4465";
    string t = "4466" ;
    err_msg(process(s,t)); //未解决
}
