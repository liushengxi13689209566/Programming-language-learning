/*************************************************************************
	> File Name: NDEBUG.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月05日 星期二 21时37分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::endl;

#define NDEBUG

void printVec(vector<int> &vec)
{
#ifdef NDEBUG
    cout << "vector size: " << vec.size() << endl;
#endif
    if (!vec.empty())
    {
        auto tmp = vec.back();
        vec.pop_back();
        printVec(vec);
        cout << tmp << " ";
    }
}

int main()
{
    vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    printVec(vec);
    cout << endl;

    return 0;
}
