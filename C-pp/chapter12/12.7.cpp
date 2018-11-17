/*************************************************************************
	> File Name: 12.6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月17日 星期六 19时09分38秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<new>
using namespace std;
vector<int> *fun(){
	auto  vec = new vector<int> ;
	return vec ;
}
void input(vector<int> *ptr){
	int temp ;
	for(int i=0;i< 5 ;++i){
		cin >> temp ;
		ptr->push_back(temp);
	}
}
auto print(vector<int> *ptr) -> ostream & {
	for(auto i : *ptr)
		cout << i  << "  ";
	return cout ;
}
int main(void){
	auto ptr = fun();
	input(ptr);
	print(ptr) << endl ;
	delete ptr ;
	return 0 ;
}

