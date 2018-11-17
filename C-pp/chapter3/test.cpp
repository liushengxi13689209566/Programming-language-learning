/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月31日 星期二 17时01分30秒
 ************************************************************************/
#include<iostream>
using namespace std;
int main(void)
{
   /* string str1 = "hello ", str2 = "world \n";
    string s3 = str1 + "," + str2;
    cout << s3 << endl;*/
    string s("liu ,vhweihweiuhn,brohwoibh.ejvpijejiewp;bohoib:dvhowrhbou");
    /*unsigned count  =  0 ;
    for(auto temp:s){
        if(ispunct(temp))
        count++;
    }
    cout << count << endl ;*/ //  5
/*    for(auto &temp : s)
        temp = toupper(temp);
    cout  << s <<endl ;  //LIU ,VHWEIHWEIUHN,BROHWOIBH.EJVPIJEJIEWP;BOHOIB:DVHOWRHBOU */
/*    for(decltype(s.size())index = 0 ;index != s.size() && !isspace(s[index]) ;index++)
        s[index] = toupper(s[index]);//LIU ,vhweihweiuhn,brohwoibh.ejvpijejiewp;bohoib:dvhowrhbou*/
    /*const string TT = "0123456789ABCDEF" ;
    cout << "Please input the number of 0~~15 : " << endl ;
    string result ;
    string::size_type n;  
    while(cin >> n){
        if(n < TT.size())
            result += TT[n];
    }
    cout  << result  <<endl ;*/
    return 0;
}
