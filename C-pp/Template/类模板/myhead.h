/*************************************************************************
	> File Name: myhead.h
	> Author: 
	> Mail: 
	> Created Time: 2018年03月15日 星期四 20时15分11秒
 ************************************************************************/
#ifndef _MYHEAD_H
#define _MYHEAD_H
template<typename T ,int size,int count> 
class MyArrry{
public:
	MyArrry() ;
	~MyArrry() ;
	void display();
private:
	T *m_pArr ;
};
template<typename T ,int size ,int count> //构造函数 
MyArrry<T,size,count>::MyArrry(){
	m_pArr = new T[size];
	for(int i =0  ;i < size ;i++ )
		m_pArr[i] = i ;
}
template<typename T ,int size ,int count> //析构函数 
MyArrry<T,size,count>::~MyArrry(){
	delete []m_pArr;
	m_pArr = nullptr ;
}
template<typename T ,int size  ,int count>
void MyArrry<T,size,count>:: display (){
	for(int i= 0 ;i< count ;i++) 	
		printf("m_pArr[%d] == %d \n",i,m_pArr[i]);
}
#endif

