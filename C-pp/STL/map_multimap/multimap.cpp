/*************************************************************************
	> File Name: multimap.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月23日 星期二 15时40分02秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(void)
{
	typedef multimap<int ,double ,less<int>> mmid  ;
	mmid pairs;
 	cout  << pairs.count(11) << endl ;
	pairs.insert(mmid::value_type(15,2.7));
	pairs.insert(mmid::value_type(15,99.3));
	cout  << pairs.count(15) << endl ;
	pairs.insert(mmid::value_type(8,97.5));
	pairs.insert(mmid::value_type(100,100));
	pairs.insert(mmid::value_type(666,99));
	for(mmid::const_iterator i = pairs.begin() ; i != pairs.end();i++ )
		cout << i->first << " ," << i->second << endl ;
	return 0;

}


