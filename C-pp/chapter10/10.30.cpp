
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std ;
int main(void){
    istream_iterator<int>  in(cin) ,eof ;
	
    vector<int> intVec ;
	copy(in,eof,back_inserter(intVec)) ; 
    sort(intVec.begin() ,intVec.end()) ;
    copy(intVec.begin(),intVec.end(),ostream_iterator<int>(cout ," ")) ;

	return  0  ;
}

