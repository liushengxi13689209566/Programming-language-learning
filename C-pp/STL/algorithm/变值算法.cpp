/*************************************************************************
	> File Name: 变值算法.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月25日 星期四 11时30分36秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
// copy 
//for_each 
//
class Clessthen9{
	public:
	bool operator () (int n){
		return n< 9 ;
	}
};
void outputSquare(int value){
	cout << value* value << "  ";
}
int cal(int value){
	return value*value*value ;
}
int main(void)
{
	vector<int> vec1={1,2,3,4,5,6,7,8,9,10};
	vector<int> temp ={100,2,8,1,50,3,8,9,10,2} ;
	vector<int> vec2(10,0) ;
	ostream_iterator<int> output(cout," ");
	random_shuffle(vec1.begin()  ,vec1.end()); // 打乱顺序
	cout << "1 >> "  << endl ;
	copy(vec1.begin(),vec1.end(),output); 
	cout << endl ;


	copy(temp.begin(),temp.end(),vec2.begin());

	cout << count(vec2.begin(),vec2.end(),8) << endl ;
	cout << count_if(vec2.begin(),vec2.end(),Clessthen9()) << endl ;

	for_each(vec1.begin(),vec1.end(),outputSquare);
	cout << endl ;

	int tt[]={1,2,3,4,5};
	vector<int> yy(5);
	transform(tt,tt+5,yy.begin(),cal);
	copy(yy.begin(),yy.end(),output); 
}

