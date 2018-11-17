/*************************************************************************
	> File Name: 3.3.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 14时16分33秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    string temp; 
    //vector<int> p ;
    vector<string> p;
    while(cin >> temp)
    {
        p.push_back(temp);
    }
    for(auto i:p)
    {
        cout << i << endl ;
    }
    return 0;
}
