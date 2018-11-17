/*************************************************************************
	> File Name: BlobPtr.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月17日 星期六 17时17分10秒
 ************************************************************************/
#ifndef BLOBPTR_H
#define BLOBPTR_H
#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include"Blob.h"
template<typename> class BlobPtr ;
/*具有对称性的运算符可能转换任意一端的运算对象，例如：算术，相等性，关系和位运算等，通常为非成员函数 */
template<typename T>
bool operator == (const BlobPtr<T>& lhs ,const BlobPtr<T> &rhs) ;

template<typename T>
bool operator <  (const BlobPtr<T>& lhs ,const BlobPtr<T> &rhs) ;



template<typename T> 
class BlobPtr {
	friend bool operator == <T>(const BlobPtr<T>& lhs ,const BlobPtr<T> &rhs);
	friend bool operator <  <T>(const BlobPtr<T>& lhs ,const BlobPtr<T> &rhs);

public:
	BlobPtr() : curr(0) { }
	BlobPtr(Blob<T> &a ,size_t sz = 0 ) : wptr(a.data) , curr(sz) { }
	T& operator *()  const {
		auto p = check( curr,"derefence past end  ");
		return (*p)[curr]  ;
	}
	
	BlobPtr& operator++();//前置运算符
	BlobPtr& operator-- () ;

	BlobPtr  operator++ (int) ; //后置运算符
	BlobPtr  operator-- (int ) ;

	BlobPtr operator+(int n );


private:
    std::shared_ptr<std::vector<T>> check( std::size_t i ,const std::string &msg ) const ; 
    std::weak_ptr<std::vector<T> >  wptr ; 
	size_t curr ; // postion in array 
};
template<typename T>
std::shared_ptr<std::vector<T>> BlobPtr<T>::check( std::size_t i ,const std::string &msg ) const {
	if( i >= wptr.lock()->size() )
    	throw std::out_of_range(msg);
    else 
    	return wptr.lock() ;
}
template<typename T>
BlobPtr<T> BlobPtr<T>::operator++ (int) { //后置++
	BlobPtr ret = *this ;
	++(*this) ;
	return ret ;
}
template<typename T>
BlobPtr<T> BlobPtr<T>::operator-- (int) { //后置--
	BlobPtr ret = *this ;
	--(*this) ;
	return ret ;
}
//指针的加号运算，比如：p指到了第一个数，那么我给它加5之后就希望它指到第五个数字
template<typename T>
BlobPtr<T> BlobPtr<T>::operator+(int n ) { 
	check(curr+n,"past end of the arrry ");
	curr+= n; 
	return *this;
}
template<typename T>
BlobPtr<T>& BlobPtr<T>::operator ++() //qian置++
{
    check(curr, "increment past end of StrBlob");
    ++curr ;
    return *this;
}
template<typename T>
BlobPtr<T>&  BlobPtr<T>::operator-- ( ) { //qian置--
	check(curr, "increment past start of StrBlob");
	--curr ;
	return *this  ;
}
template<typename T>
bool operator ==  (const BlobPtr<T>& lhs ,const BlobPtr<T> &rhs) {
	if(lhs.wptr.lock() != rhs.wptr.lock() )
		throw std::runtime_error("ptrs point to different Blobs !!");

	return lhs.curr == rhs.curr  ;
}
template<typename T>
bool operator < (const BlobPtr<T>& lhs ,const BlobPtr<T> &rhs) {
	if(lhs.wptr.lock() != rhs.wptr.lock() )
		throw std::runtime_error("ptrs point to different Blobs !!");
	return lhs.curr < rhs.curr;
}
#endif // BLOBPTR_H