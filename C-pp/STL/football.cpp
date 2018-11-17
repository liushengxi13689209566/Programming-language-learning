/*************************************************************************
	> File Name: football.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年07月05日 星期四 09时06分25秒
 ************************************************************************/
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(void) {
	map<string,string> football;
	football.insert(make_pair("Australian","Spain"));
	football.insert(make_pair("Holland","Chile"));
	football.insert(make_pair("Cameroon","Brazil"));
	football.insert(make_pair("Croatia","Mexico "));
	string str;
	while(cin>>str){
		map<string,string>::const_iterator it = football.find(str);
		if(it==football.end()){
			cout<<str<<"'s team has no match today.";
		}else{
			cout << it->first << " team's rival is "<< it->second <<'.'<< endl;
		}
	}
}

