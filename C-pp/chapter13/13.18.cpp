/*************************************************************************
	> File Name: 13.18.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月08日 星期日 16时25分16秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std ;
class Employee{
	public:
	Employee():name("liushengxi" )  { 
		ID = s_increment++ ;
	}
	Employee(const string  &name_temp){
		ID = s_increment++ ;
		name =  name_temp ;
	}

	Employee(const Employee &rhs) = delete ; // 不，因为那里确实没有明智的意义。员工无法在现实世界中复制。
	Employee& operator= (const Employee &rhs) = delete ;

	void print(){
		cout << name << endl ;
		cout << ID  << endl ;
	}
	private:
	string name;
	int ID;
	static  int  s_increment  ;
};
int Employee::s_increment = 1 ;
int main(void){
	Employee emp1,emp3("jnbkerjkb") ;
	emp1 = emp3 ;  // 需 要 赋 值 操 作 ，也就需要拷贝操作
	emp1.print();
	Employee emp2(emp1) ;
	emp2.print();
	emp3.print();
	return 0 ;
}

