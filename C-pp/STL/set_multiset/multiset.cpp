/*************************************************************************
	> File Name: set.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月23日 星期二 14时43分02秒
 ************************************************************************/

#include<iostream>
#include<set>
#include<vector>
using namespace std;
// class A{

// };
// int main(void)
// {
//     multiset<A> a, 
//     a.insert(A()); //因为没有重载 <  会报错
// }

template<class T>
void Print(T frist ,T last){
    for(;frist != last ;frist++){
        cout << *frist << "  " ;
    }
}
class A{
	private:
	int n ;
	public:
	A(int _n):n(_n) {}
	friend bool operator < (const A &a1,const A &a2 ){
		return a1.n < a2.n ;
	}
	friend ostream & operator << ( ostream& os,const A & a2){
		os << a2.n  ;
		return os  ;
	}
	friend class Myless ;
};
struct Myless{
	bool operator () (const A &a1 ,const A & a2){
		return a1.n % 10 < a2.n % 10;
	}
};

typedef multiset<A> MSET1 ;
typedef multiset<A,Myless> MSET2 ;

int main(void) 
{
	vector<A> a = {4,22,19,8,33,40};
	//const int SIZE =  6;
	//A a[SIZE] = {4,22,19,8,33,40};
	MSET1 m1 ;
	m1.insert(a.begin(),a.end());
	m1.insert(22);
	cout << m1.count(22) << endl ;
	Print(m1.begin() ,m1.end());
	cout  << endl ;
	MSET1::iterator pp = m1.find(19);
	if(pp != m1.end())
		cout << "找到了 " << endl ;
	else 
		cout << "没找到" << endl ;

	cout << *m1.lower_bound(22) << "," 
	<< *m1.upper_bound(22) << endl ;
	
	pp = m1.erase(m1.lower_bound(22),m1.upper_bound(22));
	cout <<  *pp << endl; 
	Print(m1.begin() ,m1.end()); 
	cout << endl ;
	return 0;
}
