/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月15日 星期四 20时28分55秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include <stdexcept>  
#include"myhead.h"
using namespace std;
int main(void){
    MyArrry<int,10,20> my ;
    try{
        my.display() ;
    }catch (out_of_range &exc){  
        cout  << exc.what() << " Line:" << __LINE__ << " File:" << __FILE__ << endl;  
    }
	return 0 ;
}

