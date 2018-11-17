/*************************************************************************
	> File Name: 3.4.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 17时16分15秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    //练习3.23
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
    for(auto i = ivec.begin() ;i != ivec.end() ;i++){  // i 就是一个指针 ，解引用自然就是他所指向的变量的值了
         *i =  (*i) * 2 ;
    }
    for(auto i = ivec.cbegin() ;i != ivec.cend() ;i++){
        cout <<  *i  << endl ;
    }
    return 0;
}
