 				/*************************************************************************
	> File Name: MyMax.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 19时51分57秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
class Myless{
	public:
	bool operator () (int a1 ,int a2){
		if(a1%10 < a2%10 )
			return true  ;
		else 
			return false ;
	}
};

bool mycompare(int a1 ,int a2){
		if(a1%10 < a2%10 )
			return false   ;
		else 
			return true  ;
}

template<class InputIterator ,class T>  //MyMax 模板  
InputIterator  MyMax(InputIterator begin ,InputIterator end ,T op){
	InputIterator temp = begin  ;
	for(; begin != end ;begin++){
		if(op(*temp ,*begin )) {
			temp = begin ;
		}
	}
	return temp ;
}
int main(void)
{
	vector<int> vec={35,7,13,19,12};
	cout << *MyMax(vec.begin() ,vec.end() ,Myless());
	cout << endl ;

	cout << *MyMax(vec.begin() ,vec.end() ,mycompare);
	cout << endl ;
}

