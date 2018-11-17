/*************************************************************************
	> File Name: map.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 13时32分19秒
 ************************************************************************/

#include<iostream>
#include<map>
using namespace std;

template<class key,class value>
ostream & operator <<  (ostream &os ,const pair<key,value > &p)
{
	os <<  p.first << " ," << p.second  <<  endl ;
	return os ;
}
int main(void)
{
	typedef map<int ,double ,less<int> >  mmid  ;  
	mmid pairs;
	pairs.insert(make_pair(15,99.3));
	cout  << pairs.count(15) << endl ;
	pairs.insert(mmid::value_type(8,97.5));
	pairs.insert(mmid::value_type(100,100));
	pairs.insert(mmid::value_type(666,99));

	for(mmid::const_iterator i = pairs.begin() ; i != pairs.end();i++ )
		cout << *i << endl ;
	int n = pairs[888];
	for(mmid::const_iterator i = pairs.begin() ; i != pairs.end();i++ )
		cout << *i << endl ; 
	return 0;

}
