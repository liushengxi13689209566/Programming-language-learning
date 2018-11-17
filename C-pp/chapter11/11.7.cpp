/*************************************************************************
	> File Name: 11.7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月04日 星期日 12时26分18秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
int main(void){
	map<string,vector<string>> name ; //string 代表性 ，vector<string>  名 
	//添加新的家庭 ，以及添加新的孩子 
	// name.insert(make_pair(liu,{shengxi,shenglong})) ;
	// name.insert(make_pair(an,{tanxin,tanlong})) ;
	// push_back(name[liu]);
	string str ,temp ;
	while(cin >> str){
			if(str  == "666")  break ;
		cout << "input the ming " << endl ;
		while(cin >> temp ){
			if(temp == "666")  break ;
			name[str].push_back(temp);
		}
	}
	for(auto i: name ){
	    cout << i.first << " : "  ; 
		    for(auto j:i.second )
		        cout <<  j << "  " ;
			cout << endl ;
    }
	cout << endl ;
	return 0 ;
}

