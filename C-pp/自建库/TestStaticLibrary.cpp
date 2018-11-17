/*************************************************************************
	> File Name: TestStaticLibrary.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月10日 星期日 11时38分25秒
 ************************************************************************/

#include "myhead.h"
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    double a = 10;
    double b = 2;
 
    cout << "a + b = " << StaticMath::add(a, b) << endl;
    cout << "a - b = " << StaticMath::sub(a, b) << endl;
    cout << "a * b = " << StaticMath::mul(a, b) << endl;
    cout << "a / b = " << StaticMath::div(a, b) << endl;
 
    return 0;
}
