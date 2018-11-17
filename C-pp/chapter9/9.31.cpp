/*************************************************************************
	> File Name: 9.26.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月27日 星期六 12时42分34秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<list>s
using namespace std;
int main(void){

	list<int> intList = {1,2,3,4,5,6} ; 

	auto iter = intList .begin() ;
	while(iter  != intList.end()){
		if(*iter %  2){ //jishu 
			iter = intList.insert(iter,*iter);
			// iter++;
			// iter++ ;
			advance(iter,2);  
		}
		else { //oushu 
			iter = intList.erase(iter);
		}
	}
	for(auto i:intList)
		cout << i << "  ";
	cout << endl; 
	return 0 ;
}

