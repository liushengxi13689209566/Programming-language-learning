/*************************************************************************
	> File Name: 析构函数解析.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月11日 星期日 11时54分44秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class classbase
{
	public:
	classbase(){}
	virtual ~classbase(){
		cout << "classbase 析构函数  "  << endl ;
	}
	virtual void print()
	{
		cout << "11111111 \n" ;
	}
};
class classtwo:public classbase
{
	public:
	classtwo(){}
   	~classtwo(){
		cout << "classtwo 析构函数  " << endl ;
	}
	void print()
	{
		cout << "222222222 "  << endl ; 
	}
} ;
int main(void){
	classbase *test = new classtwo ;
	test->print() ;
	delete test ;
	return 0 ;
}

