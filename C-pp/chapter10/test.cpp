/* 1，10.14 : 
[](int &a ,int &b){
    return a+b ;
}
2, 10.15
[val](int &a){
    return val+a;
}
3,10.17

 */
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
int main(void){
    istream_iterator<int> in(cin) , eof  ;
    vector<int> strVec(in,eof) ; 
    while(in != eof ){
        strVec.push_back(*in);
        in++ ;
    }
    for(auto i: strVec )
        cout << i << "  ";
    cout << endl ;
	return  0  ;
}

