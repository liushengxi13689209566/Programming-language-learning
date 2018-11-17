/*************************************************************************
	> File Name: shared_ptr.h
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月05日 星期二 15时35分48秒
 ************************************************************************/

#ifndef _SHARED_PTR_H
#define _SHARED_PTR_H

template<typename> class shared_ptr ;

template< class T >
void swap( shared_ptr<T>& lhs, shared_ptr<T>& rhs ) noexcept {
	std::cout << "swap out object  " << std::endl ;
	lhs.swap(rhs);
}

template<typename T>
class shared_ptr {
	using DelFuncPtr = void (*)(T*) ;

public:
	shared_ptr():m_ptr(nullptr),count_ptr( new size_t(0)),del(nullptr)
	{
	}
	explicit shared_ptr(T *ptr ,DelFuncPtr temp = nullptr ):
	m_ptr(ptr),count_ptr(new size_t(1)), del(temp )
	{ 
	}
	//拷贝构造函数
	shared_ptr(const shared_ptr &hp):
	m_ptr(hp.m_ptr),count_ptr(hp.count_ptr),del(hp.del)
	{ 
		++(*count_ptr) ; //引用计数加1 
	}
	//拷贝赋值运算符 
	shared_ptr& operator=( shared_ptr &rhs){
		swap(*this,rhs);
		return *this;
	}
	//析构函数
	~shared_ptr(){
		--(*count_ptr);
		if((*count_ptr) == 0 ){
			del ? del(m_ptr):
				delete m_ptr;
				delete count_ptr  ;
		}
		m_ptr = nullptr ;
		count_ptr =nullptr ;
	}
	size_t use_count(){ return (*count_ptr);}
	T& operator*() { return *m_ptr ;}
 	T* operator->() { return m_ptr ; }

 	void swap(shared_ptr &hp){
 		std::cout << "swap in object " << std::endl ;
 		using std::swap ;
		swap(m_ptr,hp.m_ptr);
		swap(count_ptr,hp.count_ptr);
		swap(del,hp.del);
 	}
 	void reset( ){
 		if((*count_ptr) == 1) {
 			delete m_ptr;
			delete count_ptr ;
			m_ptr = nullptr ;
			count_ptr =nullptr ;
 		}
 	}
 	void reset( T *hp ,DelFuncPtr del = nullptr ){ //p.reset( )
 		shared_ptr temp(hp,del);
 		swap(temp);
 	}
private:
    T* m_ptr = nullptr ;
    size_t* count_ptr = nullptr ;//思考一下为什么是size_t*,而不是 size_t ? ?
    DelFuncPtr del = nullptr ; //自定义de删除器
};
#endif
