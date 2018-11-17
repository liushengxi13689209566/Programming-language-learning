/*************************************************************************
	> File Name: 3.2.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月31日 星期二 22时09分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(void)
{
    string str("vewihvuoehwovihneoview") ;
    //第一题：
/*    for(auto  &temp : str){
        temp = 'X' ;
    }

    // 无法改变str 的值
    for(char temp : str){
        temp = 'X';
    }*/

    decltype(str.size())i = 0 ;
   //第二题;
    /*while(i< str.size()){
        str[i++] = 'X';
    }
    cout << str << endl; 
    for(i=0;i< str.size() ;i++)
    str[i] = '9';

    string s ;
    cout << s[0] << endl ; //未定义的行为*/
    string test ;
    getline(cin ,test);
    for(auto temp : test){
        if( !ispunct(temp) ) 
            cout << temp ;
    }
    cout << endl;





   // cout << str << endl; 
}
