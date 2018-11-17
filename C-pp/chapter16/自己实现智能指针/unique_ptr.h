#ifndef _UNIQUE_PTR_H
#define __UNIQUE_H
class Delete {   
public:
	template<typename T>
	void operator()(T *p) const {
		delete  p;
	}
};
template<typename T,typename D = Delete >
class unique_ptr {
public:
	explicit unique_ptr(T *pp = nullptr ,const D &dd= D() )
		:un_ptr(pp),del(dd)
		{  
		}
	~unique_ptr() { 
		del(un_ptr); 
	} 
	/* 不支持拷贝与赋值   */
 	unique_ptr(const unique_ptr&) = delete ;
    unique_ptr& operator=(const unique_ptr& ) = delete ;

    /*可以拷贝或者赋值一个将要被销毁的 unique_ptr（右值引用）*/
    unique_ptr( unique_ptr&& right_value):
    	un_ptr(right_value.un_ptr),del(std::move(right_value.del)) {
    	right_value.un_ptr = nullptr ;
    }
    unique_ptr& operator=( unique_ptr&& right_value ) noexcept {
    	if(this != &right_value ){
    		std::cout << "operator && right_value " << std::endl ;
    		del(*this);
    		un_ptr = right_value.un_ptr;
    		del = std::move(right_value.del);
    		right_value.un_ptr =  nullptr ;
    	}
    	return *this ;
    }
    //u.release()   u 放弃对指针的控制权，返回指针，并将 u 置为空
	T* release(){ 
		T *tmp = un_ptr ;
		un_ptr = nullptr ;
		return  tmp  ;
	}
	/*
	u.reset()   释放u指向的对象
	u.reset(q)  如果提供了内置指针q，就令u指向这个对象 
	u.reset(nullptr) 将 u 置为空
	*/
	void reset(){  del(un_ptr); }
	void reset(T* q  ){ 
		if( un_ptr ){
			del(un_ptr) ;
			un_ptr = q ;
		}
		else 
			un_ptr = nullptr ; 
	}
	void swap(unique_ptr &other ) noexcept {
		using std::swap ; 
		swap( un_ptr,other.un_ptr );
		swap(del,other.del) ;
	} 
	T* get() { return un_ptr ; }
	D& get_deleter(){ return  del ; }
	T& operator*()  { return *un_ptr ; }
  	T* operator->() { return  un_ptr ; }
private:
	T *un_ptr = nullptr ;
	D del ;
};
#endif