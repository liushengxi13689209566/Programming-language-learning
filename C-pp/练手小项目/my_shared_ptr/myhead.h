#include<iostream>
#include<string>
#include<stdio.h>
#include<new>
template<class T> 
class my_shared_ptr{
	public:
		// my_shared_ptr<string>  test1
		my_shared_ptr():m_count(new size_t),m_ptr(nullptr){}
		// my_shared_ptr<int> test2 ;
		my_shared_ptr(T *temp):m_ptr(temp),m_count(new size_t){}

		my_shared_ptr(const my_shared_ptr &temp){
			m_ptr = temp.m_ptr ;
			m_count = temp.m_count ;
			++(*m_count); //引用计数加 1 
		}
		~my_shared_ptr(){
			--(*m_count);
			if( *m_count == 0 ){
				cout << "释放空间" << endl ;
				delete m_count ;
				delete m_ptr ;
				m_count = nullptr ;
				m_ptr == nullptr ;
			}
		}
		T& operator*(){  //解引用重载
			return *m_ptr ;
		}
		T* operator->(){
			return m_ptr ;
		}
		void operator=( my_shared_ptr &temp ){
			 
		}

	size_t use_count(){
		return *m_count ;
	}
	private:
		size_t *m_count ;
		T *m_ptr ;
};