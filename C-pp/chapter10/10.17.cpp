/*************************************************************************
	> File Name: 10.17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月30日 星期二 14时42分09秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Myclass{
	int n ;
	Myclass(int _n):n(_n){}
	//friend bool fun(const Myclass &a,const Myclass &b);
};
/* bool fun(const Myclass &a,const Myclass &b){
	return a.n < b.n ; 
} */
int main(void){
	Myclass my1(8),my2(4),my3(3),my4(5),my5(41000),my6(0),my7(1);
	vector<Myclass> MyclassVec{my1,my2,my3,my4,my5,my6,my7};
	sort(MyclassVec.begin() ,MyclassVec.end(),[](const Myclass &a,const Myclass &b){
		return a.n < b.n ; 
	});
	for(auto i: MyclassVec)
		cout <<  i.n  << "  ";
	cout << endl ;
	return 0 ;
}

