/*************************************************************************
	> File Name: 14.38.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月15日 星期二 22时21分57秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std ;
// 先自己假设单词的长度不会超过50
class PP          
{
	public:
    PP(size_t tmp):n(tmp) {  } 
	bool operator()(const string  &s ) const {
		return 	(n == s.size() );		
	}
    private:
    size_t n ;
} ;
int main(int argc, char const *argv[])
{
    map<int,int> mmp ;
	std::ifstream fin("./test.txt") ;
    vector<string>  strVec ; 
    for( string word; fin >> word ; /* */ )  
		strVec.push_back(word) ; // first cunchu them  

	int num  = 0 ,i ;
	for(i = 1 ; i <  50 ; ++i) { // the lenght is 0 ~ 50 
        num = count_if ( strVec.begin() ,strVec.end(),PP(i) )  ; 
		if(num != 0 )
			mmp[i] =  num ;
	}
	for(auto it : mmp  )	
		cout << it.first << "  : " <<it.second << endl ;
	return 0;
}

