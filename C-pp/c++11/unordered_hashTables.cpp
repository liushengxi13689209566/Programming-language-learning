/*************************************************************************
	> File Name: unordered_hashTables.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月10日 星期四 11时25分11秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<unordered_map>
int main(int argc, char const *argv[])
{
	unordered_map<string,int>  TT ;
	TT.insert(make_pair("1",111));
	TT.insert(make_pair("2",222));
	TT.insert(make_pair("3",333));
	TT.insert(make_pair("4",444));
	TT.insert(make_pair("5",555));
	TT["6"] = 666 ;  
	string name ; 
	cin >> name ; 
	auto p = TT.find(name);
	if( p != TT.end() )
		cout << p->second  ;
	else 
		cout << "Not found "  ; 
	cout <<  endl ; 

	return 0;
}

