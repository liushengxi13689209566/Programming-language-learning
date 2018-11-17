/*************************************************************************
	> File Name: 427.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月30日 星期五 08时14分31秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std;
int main(void){
    // allocator<string> alloc ;
    // auto const p = alloc.allocate(20);//只分配，未构造
	// *p = "liushnegxoi mkmhrm'hmthtp;omhpotmhptomhohpt";
	// cout << "*p == " << *p << endl ; 

	// auto q=p  ;
	// alloc.construct(q++,12,'L') ;//构造对象
	// cout << "*p == " << *p << endl ;

	// while( q!= p ){
	// 	alloc.destroy(--q); //记得析构对象
	// }
	// alloc.deallocate(p,20); //释放内存

	vector<int> intVector = {1,2,3,4,5,6,7,8} ;
	allocator<int> alloc ;
	auto p = alloc.allocate(intVector.size()*2);
	auto q = uninitialized_copy(intVector.begin(),intVector.end(),p);  
	// cout << "*q == " << *(q-1) << endl ; // 8 
	// cout << "*p == " << *p << endl ; // 1 
	
	q = uninitialized_fill_n(q,intVector.size(),42);
	--q ;
	while(q != p){
		cout << "*q == " << *q << endl ;
		q-- ;
	} 
	cout << "*q == " << *q << endl ;

	while( q != p ){
		alloc.destroy(--q); //记得析构对象
	}
	alloc.deallocate( p,intVector.size()*2 ); //释放内存
	return 0 ;
}

 