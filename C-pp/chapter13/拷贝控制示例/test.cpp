/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月18日 星期三 23时01分06秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>
#include<typeinfo>
using namespace std;

struct Play
{
    void operator () (int i)
    {
        cout<<i<<endl;
    }
};

int main()
{
    int a[] = { 1, 3, 4, 5};
    vector<int> vc(a, a+sizeof(a)/sizeof(int));
    for_each(vc.begin(), vc.end(), Play());
}
