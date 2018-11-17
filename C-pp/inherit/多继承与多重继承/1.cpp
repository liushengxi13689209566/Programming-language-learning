/*************************************************************************
	> File Name: 21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月27日 星期二 16时54分37秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std ;
class Person{
public:
	Person(string m_name = "父类初始化") {
		name = m_name ;
		cout << "Person  "<< endl ;
	}
	virtual ~Person() {
		cout << "～Person  "<< endl ;
	}
	void play() {
		cout <<"Person <--------- > play " << endl ;
		cout << "name == " << name << endl ;
	}
protected:
	string name ;
};
class Soldier : public Person
{
public:
	Soldier(string m_strname = "liushengxi" ,unsigned  m_age = 666 ) {
		name = m_strname ;
		age = m_age ;
		cout << "   Soldier()   " << endl ;
	}
	~Soldier() {
		cout << "   ～Soldier()   " << endl ;
	}
	void work() {
		cout <<  age << endl ;
		cout << name << endl ; 
		cout << "  Person <--------- > work " << endl; 
	}
protected:
	unsigned age ;
};

class Infantry:public Soldier 
{
	public:
	Infantry() ;
	~Infantry() ;
	void attack() {

	}
};
int main(void){

	return 0 ;
}

