/*************************************************************************
	> File Name: findAlgorithm.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 21时48分50秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<iostream>
using namespace std ;
// 一般是左闭右开的区间
template<class YY,class TT>
YY find(YY frist ,YY last, const TT &tt )
{
    for(YY temp = frist ; temp != last ;++temp)
    {
        if((*temp) == tt )
        {
            cout << "is find " << endl ;
            return temp ;
        }
    }
    return last ;
}
int main(void)
{
    vector<int> vec1={1,2,3,4,5,6,7,8,9};
    vector<int>::const_iterator i;
    i= find(vec1.begin() ,vec1.end(),8);
    if(i != vec1.end() )
        cout << *i << endl ;
}
