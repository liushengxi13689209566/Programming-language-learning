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
	void play() {
		name = "由父类 Person 设置 "  ;
		cout << "Person 中的 play 函数 " << endl ;
	}
protected:
	string name ;
};

class Worker : public Person
{
public:
	Worker() = default ;
	void play(){
		name = "由子类 Worker 设置 "  ;
		cout << "Worker 中的 play 函数 " << endl ;
	}
	void print(){
		cout << "name == " << name  << endl; 
	}
protected:
};
int main(void){
	Worker work1 ;
	work1.play() ; //这样调用的是子类中的play 函数
	work1.print();

	cout << "--------------------------------------------------------"<<  endl ;

	work1.Person::play();  //这样调用的是父类中的play 函数,且必须这样调用
	work1.print();
	return 0 ;
}

