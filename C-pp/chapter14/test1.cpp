/*************************************************************************
	> File Name: test1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月18日 星期五 08时51分55秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<functional>
using namespace std;
int add(int i,int j){
	return i+j ;
}
auto mod=[](int i,int j)
{
	return i%j ;
};
struct divide{
	int operator()(int i ,int j){
		return i/j ;
	}
};
int main(int argc, char const *argv[])
{
	std::map<string, function<int(int,int)>> mmp; 
	mmp.insert({"+",add});
	mmp.insert({"-",std::minus<int>()});
	mmp.insert({"*",[](int i,int j){return i*j;} });
	mmp.insert({"/",divide()});
	mmp.insert({"%",mod});

	cout << mmp["+"](10,5) << endl ;
	cout << mmp["-"](10,5) << endl ;
	cout << mmp["*"](10,5) << endl ;
	cout << mmp["/"](10,5) << endl ;
	cout << mmp["%"](10,5) << endl ;
	return 0;
}

