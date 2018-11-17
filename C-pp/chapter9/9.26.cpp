/*************************************************************************
	> File Name: 9.26.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月27日 星期六 12时42分34秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
using namespace std;
int main(void){
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> intVec ;
	list<int> intList ;
	forward_list<int> intforList ;
	intList.assign(ia,ia+sizeof(ia)/sizeof(int));
	intforList.assign(ia,ia+sizeof(ia)/sizeof(int));
	intVec.assign(ia,ia+sizeof(ia)/sizeof(int));


	// for(auto i=intList.begin(); i != intList.end();  ){
	// 	if( *i % 2 != 0  ){ //jishu 
	// 		i = intList.erase(i) ;
	// 	}
	// 	else 
	// 	  	i++ ;
	// }
	// for(auto i=intVec.begin(); i != intVec.end();   ){
	// 	if( *i % 2  == 0  ){ //oushu
	// 		i = intVec.erase(i) ;
	// 	}
	// 	else 
	// 		i++ ;
	// }
	auto before_head  = intforList.before_begin() ;
	auto  head  = intforList.begin() ;

	while(head != intforList.end()){ 
		if(*head %2 !=  0){  //jishu 
			head   = intforList.erase_after(before_head);
		}
		else{  //oushu 
			before_head  = head ;
			head++;
		} 
		// before_head++ ;
	}
	// for(auto i:intVec)
	// 	cout << i << "  ";
	// cout << endl ;  

	for(auto i:intforList)
		cout << i << "  ";
	cout << endl; 

	return 0 ;
}

