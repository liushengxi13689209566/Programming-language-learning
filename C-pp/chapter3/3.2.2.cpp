/*************************************************************************
	> File Name: 3.2.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月31日 星期二 17时06分33秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    /*
    //第一题 ：
    string temp ;
    cout << temp << endl;  //默认为空串
    //getline(cin ,temp); //读取一整行
    cin >> temp ;  //读取一个词
    cout << temp << endl ;

    //第3题：
    string s1 ,s2 ;
    cin >> s1 >> s2 ;
    if(s1 >  s2 ) 
        cout << s1 << endl ;
    else if(s1 < s2 )
        cout <<  s2 <<  endl ;
    else cout << "s1 == s2" << endl;


    unsigned t1 = s1.size() ,t2 = s2.size() ;
    if( t1 >  t2 ) 
        cout << s1 << endl ;
    else if(t1 < t2 )
        cout <<  s2 <<  endl ;
    else cout << "s1 == s2 " << endl;*/

    //第四题：
    string str ,Sum ;
    while(cin>> str) //用ctrl + D 来结束程序
        Sum+= str+ " ";
    cout << Sum <<  endl ;

    return 0;
}
