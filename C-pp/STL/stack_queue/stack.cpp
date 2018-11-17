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
class stack{

	cont tt ;

	public:
	T & top(){
		return tt.front();
	}
	void pop( ){
		tt.pop_front() ;
	}
	void push(T  temp){
		tt.push_front(temp);
	}
	int size(){
		return tt.size();
	}
};
int main(void)
{
	stack<int> st ;
	st.push(1);
	st.pop();
	st.push(2);
	st.push(3);
	st.pop();
	cout << "1,st.top() ==  "  << st.top()  << endl ;
	st.push(4);
	cout << "2,st.top() ==  "  << st.top()  << endl ;
	cout << "3,st.size() ==  "  << st.size()  << endl ;
	return 0;
}

