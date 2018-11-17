/*************************************************************************
	> File Name: 2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月29日 星期日 21时52分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
 // int i =  100 , Sum = 0 ;
int main(void)
{
    /*out << "Please input the end number : " << endl;
    int x;
    cin >> x ;
    int Sum ;
    for(int i = 0 ;i< x ;++i)
         Sum+=i;
    cout << "the Sum is :" << Sum << endl;


    int i(100);
    int j = i;
    cout << "j== " << j << endl;


    cout << "i== " << i << endl;
    for(int i = 9;i != 10 ;++i)
        Sum += i ;
    cout << "Sum == " << Sum << endl;*/
    int i ,&ri = i;
    i = 5,ri = 10;
    cout << i <<  " " << ri << endl ;


    return 0;
}
