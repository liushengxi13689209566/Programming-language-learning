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
// 先自己假设单词的长度不会超过 50
class PP          
{
	public:
    PP(int tmp1,int tmp2  ):low(tmp1),high(tmp2) {  } 
    PP( int tmp2 ):low(-1),high(tmp2) {  } 
	bool operator()(const string  &s ) const {
		if(low == -1 )
			return s.size() > high ;
		else  
			return 	( s.size() >= low && s.size() <= high) ;		
	}
    private:
    int low ;
    int high ;
} ;
int main(int argc, char const *argv[])
{
	std::ifstream fin("./test.txt") ;
    vector<string>  strVec ; 
    for( string word; fin >> word ; /* */ )  
		strVec.push_back(word) ;  //first cunchu them  

	int num  = 0 ,i ;
    num = count_if ( strVec.begin() ,strVec.end(),PP(1,9) ) ; 
	if(num != 0 ) {
		cout << "the length in  1~9  have " << num <<  endl ;
	}
	num = count_if ( strVec.begin() ,strVec.end(),PP(10)) ; 
	if(num != 0 ) {
		cout << "the length > 10   have " << num <<  endl ;
	}
	return 0;
}

