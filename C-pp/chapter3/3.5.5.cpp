/*************************************************************************
	> File Name: 3.5.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月12日 星期日 22时26分00秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    vector<int> ivec{0,1,2,3,4,5,6,7,8,9};
    int arr[10];
    for(int i = 0 ;i != ivec.size() ;i++)
        arr[i]= ivec[i];
    for(auto i:arr)
        cout << i << "   ";
    cout << endl ;
    return 0;

}
