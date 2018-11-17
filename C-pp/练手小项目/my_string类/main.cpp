/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月30日 星期六 15时51分26秒
 ************************************************************************/

#include<iostream>
#include"my_string.h"

using namespace std;
int main(void)
{
    My_string T1 ;
    cout << "T1 ==" << T1 << endl ;

    My_string T2("222222222") ;
    cout << "T2 ==" << T2 << endl ;

    My_string T3(T2);
    cout << "T3 ==" << T3 << endl ;

    My_string T4 = T2;
    cout << "T4 ==" << T4 << endl ;

    My_string T5 = "555555555";
    cout << "T5 ==" << T5 << endl ;

    My_string T6 ;
    cin >>  T6 ;
    cout << "T6 ==" << T6 << endl ;

    My_string T7 = T6 + T2 ;
    cout << "T7 ==" << T7 << endl ;

    My_string T8 = T6 + "jmbwjwwbnwrjhtjtjh";
    cout << "T8 ==" << T8 << endl ;

    My_string T9 ;
    T9 = T5 + T2 + "0000" ;
    cout << "T9 ==" << T9 << endl ;

    My_string T10 ;
    T10 = T2 + "10 10 10 10 10  " ; //为什么不重载= 会报double free 的错？？
    cout << "T10 ==" << T10 << endl ;

    My_string T11 ;
    T11  = T6 ;
    cout << "T11 ==" << T11 << endl ;

    My_string T12 = "12 12 12 12 12 " ;
    cout << "T12 ==" << T12 << endl ;
    cout << "T12[1] ==" << T12[1] << endl ;
    cout << "T12[2] ==" << T12[2] << endl ;
    cout << "T12[3] ==" << T12[3] << endl ;

    My_string T13  ;
    T13 = "13 13 13 13 " ;
    cout << "T13 ==" << T13 << endl ;

    My_string T14("mbkrobmn")  ;
    if(T14.Empty())
        cout << "T14,Empty  is sueecss !!! " <<  endl ;
    else 
        cout << "vbhnbiwnbiwhnibw" << endl ;

    My_string T15  ;
    T15 = "123456789" ;
    cout << "T15.getLength()  ==" << T15.getLength() << endl ;

    My_string T16  ;
    T13 = "16 16 16 16" ;
    cout << "T16.find(6)  ==" << T13.find('6') << endl ;
    My_string T17,T18  ;
    T17 = "17 17 17 17" ;
    T18 = T17 ;
    if(T18  == T17 )
        cout << "==    成功 ！！"<< endl ;
    else 
        cout << "erlmnerlbnronbrnl" << endl ;
    My_string T19 = "5111";
    My_string T20 = "222";
    if(T19 < T20 )
            cout << "刘生玺 " << endl;
    else 
        cout << " 最帅！！" << endl ;

    My_string T21 = "111";
    if(T21 == "111")
        cout << "哈哈哈哈 " << endl ;

}
