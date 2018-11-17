/*************************************************************************
	> File Name: 12.7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月17日 星期六 19时09分38秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std ;
using TT= shared_ptr<vector<int> > ;
auto fun(){
	auto vec = make_shared<vector<int>>() ;
	return vec ;
}
void input(TT ptr){
	int temp ;
	for(int i=0;i< 5 ;++i){
		cin >> temp ;
		ptr->push_back(temp);
	}
}
auto print(TT ptr) -> ostream & {
	for(auto i : *ptr)
		cout << i  << "  ";
	return cout ;
}
int main(void){
	shared_ptr<vector<int>> ptr = fun();
	input(ptr) ;
	print(ptr) << endl ;
	return 0 ;
}

