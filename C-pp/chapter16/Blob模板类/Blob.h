/*************************************************************************
	> File Name: Blob.h
	> Author: 
	> Mail: 
	> Created Time: 2018年02月17日 星期六 17时17分10秒
 ************************************************************************/
#ifndef BLOB_H
#define BLOB_H
#include<iostream>
#include<vector>
#include<string>
#include<memory>
template<typename> class BlobPtr ;

template<typename T> class Blob {

	friend class BlobPtr<T> ;

public:
	typedef T value_type ;
	typedef typename std::vector<T>::size_type size_type ;

	Blob();
	Blob(std::initializer_list<T> il) ;

	size_type size() const  {return data->size() ;}
	bool empty() const {return data->empty() ;}

	void push_back(const T &t) { data->push_back(t);}
	void push_back(const T &&t) {data->push_back(std::move(t)) ; }
	void pop_back();

	T & front();
	T & back(); 

	T & operator[](size_type i) ;// =,[ ],(),-> 必须是成员函数 
private:
    std::shared_ptr<std::vector<T> >  data ; 
    void check(size_type i ,const std::string &msg ) const ;//
} ;
// constructors
template<typename T>
Blob<T>::Blob():
    data(std::make_shared<std::vector<T>>() ) { }

template<typename T>
Blob<T>::Blob(std::initializer_list<T> il):
    data(std::make_shared< std::vector<T> >(il)){ }

template<typename T>
void Blob<T>::check(size_type i ,const std::string &msg ) const {
	if(i >= data->size() )
    	throw std::out_of_range(msg);
}
template<typename  T>
T & Blob<T>::front(){
	check(0,"front on empty Blob");
	return data->front();
}
template<typename  T>
T&  Blob<T>::back(){
	check(0,"back on empty Blob");
	return data->back();
}
template<typename  T>
T&  Blob<T>::operator[](size_type i){
	check(0,"out_of_range ");
	return (*data)[i] ;
}
template<typename  T>
void  Blob<T>::pop_back(){
	check(0,"pop_back on empty Blob");
	return data->pop_back();
}
#endif // BLOB_H
