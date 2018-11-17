/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月07日 星期六 19时16分42秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
int main(void){
    ifstream infile("test.txt") ;
	vector<string>  lines ;
	string text ;
	while( getline(infile,text  )){ 
		lines.push_back(text);
	}
	for(auto i : lines )	
		cout << i << endl ;
		
    infile.close();
	return 0 ;
}

