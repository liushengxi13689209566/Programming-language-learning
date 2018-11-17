/*************************************************************************
	> File Name: greater.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 15时42分06秒
 ************************************************************************/
#include<iostream>
#include<list>
#include<functional>
using namespace std;
template<class T>
void print(T  frist ,T last){
    while(frist != last ){
        cout  <<  *frist  <<  "  " ;
        frist++ ;
    }
    cout << endl ;
    return ;
}
class Myless{
    public:
    bool operator()(const int &a,const int &b) {
        return a < b ;
    }
};
int main(void)
{
    list<int> lst = {4,6453,434,64,89,41,1654,55};
    lst.sort( Myless() );
    print( lst.begin() ,lst.end());

    lst.sort(greater<int>()); //greater  默认降序
    print( lst.begin() ,lst.end());
    cout << endl ; 
}


