/*************************************************************************
	> File Name: 2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月28日 星期四 17时55分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
istream &read(istream &is)
{
    string str ;
    while(is >> str)
    {
        cout << str << endl ;
    }
    is.clear();
    return is ;
}
int  main(void)
{
    istream& is = read(cin);
    std::cout << is.rdstate() << std::endl;
    return 0;


}
