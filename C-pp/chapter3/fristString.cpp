/*************************************************************************
	> File Name: fristString.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月30日 星期一 22时41分26秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(void)
{
    /*string str ;
    cout << str << endl;
    cin >> str ;
    cout << str << endl;*/
    string word ;
    //while(cin >> word ){
    while(getline(cin,word)){
        cout << word <<  endl;
    }
    return 0;

}
