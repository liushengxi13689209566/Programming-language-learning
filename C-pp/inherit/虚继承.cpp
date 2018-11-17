/*************************************************************************
	> File Name: 虚继承.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月12日 星期一 22时11分58秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Person{
	public:
	Person(string theColor){
		m_strColor = theColor ;
		cout << "Person()  " << endl ;
	}
	virtual ~Person(){
		cout << "~Person "<< endl ;
	}
	void printColor(){
		cout << m_strColor << endl ;
		cout <<"Person ------ printColor "<< endl ;
	}
	protected:
	string m_strColor ;
};
class Farmer : virtual  public   Person  //颜色 blue 
{
	public:
	Farmer(string thename = "jack ",string color = "blue " ):Person(color) 
	{
		m_strName = thename ;
		cout << "Farmer()" << endl ;
	}
	virtual ~Farmer(){
		cout << "~Farmer() " << endl ;
	}
	protected:
	string m_strName ;
};
class Worker :  virtual  public  Person  // 颜色 red  
{
	public:
	Worker(string thecode ="001",string color = "red " ):Person(color )
	{
		m_strCode = thecode  ;
		cout << "Worker() " << endl ;
	}
	virtual ~Worker(){
		cout << "~Worker " << endl ;
	}
	protected:
	string m_strCode  ;
};
class FarmerWorker : public Farmer ,public Worker 
{
	public:
	FarmerWorker(string thename,
                 string thecode ,
                 string the_color):Farmer(thename,the_color),Worker(thecode,the_color),Person(the_color)
	{
		cout << "FarmerWorker()" << endl ;
	}
	~FarmerWorker(){ 
		cout << "~FarmerWorker()" << endl ;
	}
};
int main(void){
	FarmerWorker  *p = new FarmerWorker("liushegxi","666","yellow ");
	p->Farmer::printColor();
	p->Worker::printColor();
	delete p ;
	p = nullptr ;
	return 0 ;
}

