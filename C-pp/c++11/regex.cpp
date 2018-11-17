/*************************************************************************
	> File Name: regex.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月10日 星期四 11时36分36秒
 ************************************************************************/

#include<iostream>
#include<regex> //正则表达式
using namespace std;

int main(int argc, char const *argv[])
{
	regex reg("b.?p.*k");
	cout << regex_match("bopggk",reg)<< endl ; 
	cout << regex_match("boopgggk",reg)<< endl ; 
	cout << regex_match("b pk",reg)<< endl ; 
	return 0;
}

