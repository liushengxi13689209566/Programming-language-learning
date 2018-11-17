/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月15日 星期日 16时04分53秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<utility>
#include<string>
#include<algorithm>
//Equivalent to " vector<string> "
class StrVec{
    public:
    StrVec():elements(nullptr),frist_free(nullptr),cap(nullptr){ } 
    StrVec( const StrVec & ) ;

    StrVec( StrVec &&s ) noexcept : //移动构造函数
    elements(s.elements),frist_free(s.frist_free),cap(s.cap)
    {
    	s.elements =s.frist_free = s.cap = nullptr ; 
    }

    StrVec( const std::initializer_list<std::string> & ) ;
    StrVec& operator=( const StrVec & ) ;

    StrVec &operator=(StrVec &&rhs) noexcept ; //移动赋值运算符(右值引用)

    ~StrVec() ;
    void push_back(const std::string &) ;
    size_t size() const { return frist_free - elements ;}  //元素数量
    size_t capacity() const { return cap  - elements ;}   //空间总共大小

    void reserve( size_t new_cap ) ;
    void resize( size_t count, const std::string &value  = std::string("666") ) ; 

    std::string *begin() const { return elements ;}
    std::string *end() const { return frist_free  ;}

    private:
    std::allocator<std::string>  alloc  ;
    void chk_n_alloc() {
        if( size() == capacity() )
            reallocate(); 
    }
    std::pair<std::string * ,std::string *> alloc_n_copy(const std::string * ,const std::string * ) ;
    void free() ;  //销毁元素并释放内存
    void reallocate(size_t temp = 1 ) ; //得到更多的内存并移动原来的元素
    std::string* elements ; // 
    std::string* frist_free;
    std::string* cap ;
};
StrVec::StrVec(const StrVec &s){
	auto newdata =  alloc_n_copy(s.begin() ,s.end() ) ;
	elements = newdata.first ;
	frist_free = cap = newdata.second ;
}
StrVec::StrVec( const std::initializer_list<std::string> &v ) {
    for (auto itm : v) {
        this->push_back(itm) ;
    }
}
StrVec& StrVec::operator=(const StrVec &s) {
	/*
	 1.将右侧对象拷贝拷贝到一个局部临时对象中
    2.销毁左侧运算对象现有成员
    3.将临时局部对象拷贝到左侧运算对象的成员 
	*/
	auto newdata =  alloc_n_copy(s.begin() ,s.end() ) ;
	free() ;
	elements = newdata.first ;
	frist_free = cap = newdata.second ;
	return *this ;
}

StrVec &StrVec::operator=(StrVec &&rhs) noexcept {
	if(this != &rhs){
		free();
		elements = rhs.elements ;
		frist_free = rhs.frist_free ;
		cap = rhs.cap ;

		rhs.elements =rhs.frist_free =rhs.cap  = nullptr ;
	}
	return *this ;
}

void StrVec::push_back(const std::string &s) {
	chk_n_alloc() ;  //首先检查 StrVec
	alloc.construct(frist_free++,s); //构造元素放入即可
}
void StrVec::reserve( size_t new_cap ) {
	if( new_cap > capacity() ) {  //beyond the capacity , Redistribution 
		reallocate(new_cap) ;
	}
}
//增大容器或缩小容器，其中的对象也会被构造好
void StrVec::resize(size_t count, const std::string &value )
{
    if (count > size() ) {
        if (count > capacity()) reserve(count * 2) ;
        for (size_t i = size(); i != count ; ++i)
            alloc.construct(frist_free++, value);
    }
    else if (count < size( )) {
        while (frist_free != elements + count)
            alloc.destroy(--frist_free) ;
    }
}
//拷贝和赋值StrVec 时，需要用到（StrVec）是类值的对象 ，不同对象不同内存
std::pair<std::string * ,std::string *> StrVec::alloc_n_copy(const std::string *b,const std::string *e){
	auto data = alloc.allocate( e - b ) ;  
	return { data ,uninitialized_copy(b,e,data)  } ;
}


// for loop Method 
/*void StrVec::free(){  //销毁元素并释放内存
	if( elements ){    // why judge it ? you should think it 
		for(auto p = frist_free ; p != elements ; )
			alloc.destroy(--p) ; //must is --p  
	}
	alloc.deallocate( elements ,cap - elements ) ;
}*/

// for_each  and lambda Method 
void StrVec::free(){  
	if( elements ){ 
	    for_each( elements , frist_free ,  [this]( std::string &p){
	    	alloc.destroy( &p ) ; // need you to look out !!!!!! 
	    } );  
	    alloc.deallocate( elements ,cap - elements ) ;
    }
}

void StrVec::reallocate(size_t temp  ) { 
    size_t newcapacity ;
	if(temp ==  1  )
		newcapacity = size() ? 2*size() : 1 ; 
	else 
		newcapacity = temp ; 
	auto newdata = alloc.allocate( newcapacity );
	auto dest = newdata ;
	auto elem = elements ;
	for(size_t i= 0 ;i != size() ;i++){
		alloc.construct(dest++,std::move(*elem++)) ;
	}
	free();
	elements = newdata ;
	frist_free = dest ;
	cap = elements + newcapacity ;
}
StrVec::~StrVec(){
    free() ;
}
int main(void){
	StrVec temp ;
	temp.push_back("1") ;
	temp.push_back("2") ;	
	temp.push_back("3") ;
	temp.push_back("4") ;
	temp.push_back("5") ; //now the size() = 5  ,capacity() == 8  

    for(auto i : temp )
        std::cout << i << " ";
    std::cout << std::endl ;

	std::cout  << temp.size() << std::endl ;
	std::cout  << temp.capacity() << std::endl << std::endl ;

	temp.reserve(52) ;  //the capacity shouble is 52 
	 for(auto i : temp )
        std::cout << i << " ";
    std::cout << std::endl ;

	std::cout  << temp.size() << std::endl ; //  5 
	std::cout  << temp.capacity() << std::endl << std::endl ;

	temp.resize(2) ;  //size() = 2 ,capacity = 52 
	 for(auto i : temp )
        std::cout << i << " ";
    std::cout << std::endl ;

	std::cout  << temp.size() << std::endl ;
	std::cout  << temp.capacity() << std::endl << std::endl ;

	temp.resize(150) ;   //capacity = 300 ,size() = 150 
	 for(auto i : temp )
        std::cout << i << " ";
    std::cout << std::endl ;

	std::cout  << temp.size() << std::endl ;  
	std::cout  << temp.capacity() << std::endl << std::endl ;

	StrVec temp2={"6","7","8","9","10"}; //test the std::initializer_list
	for(auto i : temp2 )
        std::cout << i << " ";
    std::cout << std::endl ;

	std::cout  << temp2.size() << std::endl ;
	std::cout  << temp2.capacity() << std::endl << std::endl ;
	return 0 ;

}
