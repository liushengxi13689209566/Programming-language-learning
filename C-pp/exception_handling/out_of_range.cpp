/*************************************************************************
	> File Name: out_of_range.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 15时58分53秒
 ************************************************************************/

#include<iostream>
#include<stdexcept>
#include<typeinfo>
#include<vector>
#include<string>
using namespace std;
int main(void){
    vector<int> v(10);
    try {
        //v[100] = 100 ; //[  ] 不检查下标越界 
        v.at(100 ) = 100 ;
    }
    catch(out_of_range &e ){
        cerr << e.what() <<  endl ;
        cout << "66666" << endl  ;
    }
    return 0 ;

}
