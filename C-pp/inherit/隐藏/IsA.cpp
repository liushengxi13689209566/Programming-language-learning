/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月26日 星期一 21时26分09秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Person{
public:
	Person(string m_name = "父类初始化") {
		name = m_name ;
		cout << "Person  "<< endl ;
	}
	~Person() {
		cout << "～Person  "<< endl ;
	}
	void play() {
		cout << "name == " << name << endl ;
	}
protected:
	string name ;
};
class Worker : public Person
{
public:
	Worker(string m_strname = "liushengxi" ,unsigned  m_age = 666 ) {
		name = m_strname ;
		age = m_age ;
		cout << "   worker()   " << endl ;
	}
	~Worker() {
		cout << "   ～worker()   " << endl ;
	}
	void work() {
		cout <<  age << endl ;
		cout << name << endl ; 
		cout << "   Workerwork() function  " << endl; 
	}
protected:
	unsigned age ;
};
void test1(Person p){
	p.play() ;
}
void test2(Person &p){
	p.play() ;
}
void test3(Person *p){
	p->play() ;
}
int main(void){
	// // Worker w ;
	// Person *p  =  new Worker   ;/* = w  */ ; //把 W 都 一部分拷贝给 p ，不需要实例化，即调用 Person 的构造函数
	// //p = w ;
	// p->play();
	// //p->work() ;
	// delete p ;
	// p = nullptr ;

	Worker w ;
	Person p ;  
	test1(w);
	test1(p);

	return 0 ;
}

