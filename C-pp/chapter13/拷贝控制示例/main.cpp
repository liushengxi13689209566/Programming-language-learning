/*************************************************************************
	> File Name: 拷贝控制示例.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月09日 星期一 20时30分57秒
 ************************************************************************/

#include"myhead.h"
using namespace std ;
int main(void )  
{  
    string s1("cutter_point1");  
    string s2("cutter_point2");  
    string s3("cutter_point3");  
    string s4("cutter_point4");  
    string s5("cutter_point5");  
    string s6("cutter_point6");  
    // all new messages, no copies yet  
    Message m1(s1);  
    Message m2(s2);  
    Message m3(s3);  
    Message m4(s4);  
    Message m5(s5);  
    Message m6(s6);  
  
    Folder f1;  
    Folder f2;  
  
    m1.save(f1); m3.save(f1);m5.save(f1); 
    m1.save(f2);  
    m2.save(f2); m4.save(f2); m6.save(f2);  

    cout<<"f1到f2中 Message 的个数："<<endl;  
    f1.show(); f2.show() ;  //should is 3  ,4  

   	cout<<"m1到m6中folders的个数："<<endl;  
    m1.show(); m2.show(); m3.show();  //should is 2,1,1,1,1,1   
    m4.show(); m5.show(); m6.show();  

    // create some copies  
    Message c1(m1);  
    Message c2(m2), c4(m4), c6(m6) ;

    cout<<"f1到f2中 Message 的个数："<<endl;  
    f1.show(); f2.show() ; //should is 4 , 8 

   	cout<<"c1,c2,c4,c6 中folders的个数："<<endl;  
    c1.show(); c2.show(); c4.show();   //should is 2,1,1,1
    c6.show();    


    // finally, self-assignment  
    m2 = m2;  
    m1 = m1;  

    // now some assignments  
    m2 = m3;  
    m4 = m5;  
    m6 = m3;  
    m1 = m5;  

 	cout<<"f1到f2中 Message 的个数："<<endl;  
    f1.show(); f2.show() ; //should is 7,4 

   	cout<<"m1到m6中folders的个数："<<endl;  
    m1.show(); m2.show(); m3.show();  //should is 1,1,1,1,1,1   
    m4.show(); m5.show(); m6.show(); 
    
    cout<<"c1,c2,c4,c6 中folders的个数："<<endl;  
    c1.show(); c2.show(); c4.show();   //should is 2,1,1,1
    c6.show();




    Folder f3;  
    f3.save(c1) ;
    f3.save(c4) ; 
    f3.save(c6) ; 
    Folder f4 =  f3 ;

    cout<<"c1，c4,c6 中folders的个数："<<endl;  
    c1.show();   //should is 3,2,2 
    c4.show();
    c6.show();
	cout<<"f3 ,f4中 Message 的个数："<<endl;  
    f3.show(); f4.show() ; //should is 3,3
  
    return 0;  
} 
