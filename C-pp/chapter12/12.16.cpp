/*************************************************************************
	> File Name: 12.16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月17日 星期六 21时18分16秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std;
int main(void){
	unique_ptr<int> p1 (new int(520));
	unique_ptr<int> p2(p1) ;
	unique_ptr<int> p3 ;
	p3 = p1 ;

	return 0 ;
}

