/*************************************************************************
	> File Name: right_reference.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月10日 星期四 10时54分07秒
 ************************************************************************/

#include<iostream>
#include <string.h>

using namespace std;
class my_string{
public:
	char *str ;
	my_string():str(new char[1]){
		str[0]  = 0 ;
	}
	my_string(const char *s){
		str = new char[strlen(s)+1];
		strcpy(str,s)  ;
	}
	my_string(const my_string & s){
		str = new char[ strlen(s.str ) + 1] ;
		strcpy(str,s.str )  ;
	}
	my_string& operator = (const my_string &s){
		if(str != s.str ) {   //think about it ?  
			delete []str ; 
			str = new char[ strlen(s.str ) + 1] ;
			strcpy(str,s.str )  ;
		}
		return *this  ;
	}
	my_string(my_string && s ):str(s.str){ //move constructor 
		cout << "&&  move constructor  " << endl ;
		s.str =  new char [1];
		s.str[0] = 0 ;
	}

	my_string& operator = ( my_string &&s){
		if(str != s.str ) {   //think about it ? 
			cout << "&& operator == " << endl ;
			delete []str ;
			str = s.str ;
			s.str = new char[1] ;
			s.str[0] = 0 ;
		}
		return *this  ;
	}
	~my_string(){ delete []str ;}
};
template<class T >
	void moveswap(T &a ,T &b){
		T tmp(move(a)) ;
		a= move(b) ;
		b = move(tmp);
	}
int main(int argc, char const *argv[])
{
	my_string s; 
	s= my_string("ok"); //这样初始化的形式都产生临时对象，即右值
	my_string &&r = my_string("this");
	cout << r.str << endl ;
	my_string s1 = "hello" ,s2 = "world ";
	moveswap(s1,s2);
	cout <<s2.str << endl;
	return 0;
}

