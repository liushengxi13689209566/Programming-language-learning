/*************************************************************************
	> File Name: 3.3.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 14时34分41秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using namespace std;
int main(void)
{
    //练习3.17:
    /*vector<string>  text;
    string temp ; 
    getline(cin,temp) ;   // 会读取空格作为有效输入 ，cin 不会，就会作为结束标志
    text.push_back(temp);

    for(auto &i: text){
        for(auto &j : i){
            if(!isspace(j))
                j= toupper(j);
        }
    }
    //for(decltype(text.size())i = 0 ;i < text.size() ;i++){
    for(auto j :text){
        for(auto i : j){
            if(!isspace(i))
                cout << i   ;
            else cout << endl;
        }
    }*/
    // 练习3.20
    vector<int> ivec ;
    int temp ;
    for(int i = 0 ; i< 10 ;i++){
        cin >> temp  ;
        ivec.push_back(temp);
    }
    int t ;
    for(decltype(ivec.size())j = 0 ,  t = ivec.size()-1; j < ivec.size()/2 ;j++,t--){
        cout << ivec[j]+ivec[t] << endl ;
    }
    return 0;
}





