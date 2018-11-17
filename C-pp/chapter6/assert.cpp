/*************************************************************************
	> File Name: assert.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月05日 星期二 21时41分15秒
 ************************************************************************/

#include<iostream>
#include<cassert>
using namespace std;
int main(void)
{
    string s;
    string sougth="111";
    while(cin >> s && s != sougth)
    {
        cout << "liushengxi" << endl ;
    }
    assert(s != sougth );
    //如果它的条件返回错误，则终止程序执行
        cout << "bnbnflb" << endl ;
        cout << "bnbnflb" << endl ;
        cout << "bnbnflb" << endl ;
}
