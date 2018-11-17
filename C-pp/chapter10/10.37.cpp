
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std ;
int main(void){

    vector<int> intVec{1,2,3,4,5,6,7,8,9,10} ;
    auto start = find(intVec.cbegin(),intVec.cend(),3);
    auto end = find(intVec.cbegin(),intVec.cend(),7) ;
    list<int> intList(end-start) ;
    copy(start,end,intList.rbegin()) ;
    copy(intList.begin(),intList.end(),ostream_iterator<int>(cout," ") );  //打印
    cout << endl;
	return  0  ;
}

