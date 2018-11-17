
#include<iostream>
#include<vector>
#include<string>
using namespace std;

typedef string::size_type  pos ;

// size_type 下标 ** replace 函数 
auto fun(string &s,string const &oldval ,string  const &newval){
	for( pos i =  0 ; i <  s.size(); ++i ){
		if(oldval == s.substr(i,oldval.size() ))  //找到匹配点
			s.replace(i,oldval.size(),newval ) ;
	}	
}
int main(void){
	string str("1111tho8888tho");
	fun(str , "tho" , "666" );
	cout <<  "str == "  << str << endl ;
	return 0 ;
}

