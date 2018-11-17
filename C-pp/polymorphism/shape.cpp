/*************************************************************************
	> File Name: shape.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月15日 星期四 22时11分30秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std ;
class shape{
public:
	shape(){
		cout << "shape()" << endl ;
	}
	virtual ~shape(){
		cout << "~shape()" << endl ;
	}
	virtual  double  calcArea() {
		cout << "calcArea() " << endl ;
		return 0;
	}
protected:

};
class round :public shape 
{
public:
	round(double _R):m_r(_R){
		cout << "round()" << endl;
	}
	~round(){
		cout << "~round() "<< endl;
	}
	virtual double calcArea(){
		return 3.14*m_r*m_r ;
	}
private: 
	double m_r ;
};
class matrix : public shape 
{
public:
	matrix(double _length ,double _wide):length(_length),wide(_wide){
		cout << "matrix()" << endl;
	}
	~matrix(){
		cout << "~matrix()" <<  endl ;
	}
	virtual double calcArea(){
		return length *wide ;
	}
private:
	double length ;
	double wide ;
};
int main(void){
	shape *p1 =  new round(3);;
	shape *p2 =  new matrix(1,2);

	cout << p1->calcArea() << endl ;
    cout <<  p2->calcArea() << endl ;
	delete p1 ;
	delete p2 ;
	p1 = nullptr ;
	p2 = nullptr;

	return 0 ;
}

