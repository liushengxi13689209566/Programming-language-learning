/*************************************************************************
	> File Name: ostream_iterator.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月25日 星期四 15时11分36秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
template<class T>
class My_ostream_iterator {
	string sep ; // * 号 
	ostream &os  ;
	public:
	My_ostream_iterator(ostream &o,string str):sep(str),os(o){}
	void  operator++(){ }; 
	My_ostream_iterator & operator * () {return *this ;}
	My_ostream_iterator & operator = (const T &val){
		os << val << sep ;
		return *this ;
	}
	// My_ostream_iterator<T> copy(T *_F ,T *_L ,My_ostream_iterator<T> _X ){   // copy 函数的实现
	// 	for(;_F != _L ;++_X ,++_F)
	// 		*_X = *_F ;
	// 	return _X ;
	// }
};
//如何书写    My_ostream_iterator ??? 
int main(void){
	vector<int> vec = {1,2,3,4};
	My_ostream_iterator<int>  oit(cout,"*");
	copy(vec.begin() , vec.end() , oit) ;
	//输出1*2*3*4*
	ofstream oFile("test.txt" , ios::out);
	My_ostream_iterator<int> oitf(oFile,"*") ;
	copy(vec.begin(),vec.end(),oitf);
	//向test.txt文件写入1*2*3*4* 
	oFile.close();
	return 0;
}

