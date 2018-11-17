/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 20时58分28秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    vector<int> array={8,5,9,4,6,2,1,487,87,45,45,48,4};
    sort(array.begin() ,array.end());
    for(auto i:array )
        cout << i << "  ";
    cout << endl ;

}
