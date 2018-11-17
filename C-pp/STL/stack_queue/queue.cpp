/*************************************************************************
	> File Name: stack.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 14时11分37秒
 ************************************************************************/

#include<iostream>
#include<deque>
using namespace std;

template<class T ,class cont = deque<T> >  //类模板
class queue{

	cont tt ;

	public:
	T & top(){
		return tt.front();
	}
	T & back(){
		return tt.back();
	}
	void pop( ){
		tt.pop_front() ;
	}
	void push(T  temp){
		tt.push_back(temp);
	}
	int size(){
		return tt.size();
	}
};
int main(void)
{
	queue<int> que ;
	que.push(1);
	que.push(2);
	que.push(3);
	que.pop();
	cout << "1,que.top() ==  "  << que.top()  << endl ;
	cout << "2,que.back() ==  "  << que.back()  << endl ;
	
	que.push(4);

	cout << "3,que.top() ==  "  << que.top()  << endl ;
	cout << "4,que.back() ==  "  << que.back()  << endl ;
	cout << "5,que.size() ==  "  << que.size()  << endl ;
	return 0;
}

