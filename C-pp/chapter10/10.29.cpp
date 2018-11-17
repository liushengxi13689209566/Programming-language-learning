
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include <fstream>
using namespace std;
int main(void){
	ifstream infile("test.txt") ;
    istream_iterator<string>  in(infile) , eof ;
	
    vector<string> strVec ;
	copy(in,eof,back_inserter(strVec)) ; 
    copy(strVec.begin(),strVec.end(),ostream_iterator<string>(cout ," ")) ;

	return  0  ;
}

