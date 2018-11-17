/*************************************************************************
	> File Name: 多继承_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月12日 星期一 22时11分58秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Farmer{
	public:
	Farmer(string thename = "jack"){
		m_strName = thename ;
		cout << "Farmer()" << endl ;
	}
	virtual ~Farmer(){
		cout << "~Farmer() " << endl ;
	}
	void sow(){
		cout << m_strName << endl ;
		cout << "Farmer-----sow()"<< endl ;
	}
	protected:
	string m_strName ;
};
class Worker{
	public:
	Worker(string thecode  = "001"){
		m_strCode = thecode  ;
		cout << "Worker() " << endl ;
	}
	virtual ~Worker(){
		cout << "~Worker " << endl ;
	}
	void carry(){
		cout << m_strCode << endl; 
		cout << "Worker ------ carry() "<< endl; 
	}
	protected:
	string m_strCode  ;
};
class FarmerWorker:public Farmer ,public Worker 
{
	public:
	FarmerWorker(string thename,string thecode):Farmer(thename),Worker(thecode)
	{
		cout << "FarmerWorker()" << endl ;
	}
	~FarmerWorker(){ 
		cout << "~FarmerWorker()" << endl ;
	}
};
int main(void){
	FarmerWorker  *p = new FarmerWorker("liushegxi","666");
	p->sow();
	p->carry();
	delete p ;
	p= nullptr ;




	FarmerWorker f1 ;
	f1.sow();
	f1.carry();
	return 0 ;
}

