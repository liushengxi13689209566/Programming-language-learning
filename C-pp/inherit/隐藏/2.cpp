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
	Person(){
		name = "父类初始化" ;
	} 
	void Person_print() {
		cout << "In   Person_print name == " << name  << endl; 
	}
protected:
	string name ;
};

class Worker : public Person
{
public:
	Worker() = default ;
	void play_in_Worker(string Worker_str,string Person_str){
		name = Worker_str  ; 
		Person::name = Person_str ; // 就 这 样 做 
		cout << "Worker 中的 play 函数 " << endl ;
	}
	void print(){
		cout << "In Worker  name == " << name  << endl; 
	}
protected:
	string name ;  // 与父类数据成员同名
};
int main(void){
	Worker work1 ;
	work1.play_in_Worker("liu","555") ; 
	work1.print();
	work1.Person_print();


	cout << "--------------------------------------------------------"<<  endl ;

	work1.play_in_Worker("sheng","666") ; 
	work1.print();
	work1.Person_print();

	return 0 ;
}

