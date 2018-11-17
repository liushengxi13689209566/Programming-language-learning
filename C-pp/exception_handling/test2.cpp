/*************************************************************************
	> File Name: test2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 15时04分31秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std; 
class CException
{
    public:
    string msg ;
    CException(string s):msg(s){  }
};
double Devide(double x,double y){
    if( y == 0 ) 
        throw CException("Devide by zero ") ;
    cout << "in Devide " << endl ; //不输出
    return x/y ;
}
int CountTax(int salary){
    try{
        if(salary < 0 )
            throw -1;
        cout << "counting tax" << endl ; //这个不会执行
    }
    catch(int ){
        cout << "salary < 0 " << endl ; // 1
    }
    catch(...){
        cout << "catch(..)"  <<  endl ;
    }
    cout << "tax counted " << endl; //catch 块后面的能够正确执行 
    return salary*0.15  ;
}
int main(void){
    double f= 1.2 ;
    try{
        CountTax(-1); //异常自己就处理掉了
        f= Devide(3,0);
        cout << "end of try block "<< endl ;
    }
    catch(CException &e){
        cout << e.msg << endl ; //Devide by zero  
    }
    cout << "f == " << f<< endl ; // 1.2 
    cout << "finshed " << endl ; 
    return 0;

}
