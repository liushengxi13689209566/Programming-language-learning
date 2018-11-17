/*************************************************************************
	> File Name: p595.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月04日 星期一 18时01分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
class DegbugDelete{
public:
	DegbugDelete(ostream &s= cerr):os(s){  }
	template<typename T> 
	void operator()(T *p) const{
		os<< "deleteing unique_ptr " << endl ;
		delete  p;
	}
private:
	ostream &os ;
};
int main(void) {
	double *p= new double ;
	DegbugDelete d;
	d(p);
	int *ip= new int ;
	DegbugDelete()(ip);
	
}

