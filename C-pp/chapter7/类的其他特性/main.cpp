/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月23日 星期六 16时35分30秒
 ************************************************************************/

#include"myhead.h"
using namespace std;
int main(void)
{
    Screen myScreen(5,5,'X');
    myScreen.move(4,0).set('@').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    cout << "myScreen.size() == " << myScreen.size() << "\n";
}


