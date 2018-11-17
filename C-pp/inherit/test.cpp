#include<iostream>  
using namespace std;  
class A//定义基类A  
  
{public:A(int i){ cout<<"A cons"<<endl;}   
        void virtual print(){cout<<"aaa"<<endl;}          
};  
  
class B : public virtual A //A作为B的虚基类  
  
{public:B(int n):A(n){ cout<<"B cons"<<endl;}   
        void virtual print(){cout<<"bbb"<<endl;};  
};  
  
class C : public virtual A //A作为C的虚基类  
  
{public:C(int n):A(n){cout<<"C cons"<<endl; }   
    //  void virtual  print(){};  
};  
  
class D :public B,public C //类D的构造函数,在初始化表中对所有基类初始化  
  
{public:D(int n):A(n),B(n),C(n){ cout<<"D cons"<<endl;}  
    void virtual print(){cout<<"ddd"<<endl;};  
};  
  
int  main()  
{  
    D d(1);  
  
    d.B::print();  
    d.C::print();  
    d.print();     
    d.A::print();   
  
    cout<<"size of A:"<<sizeof(A)<<endl;  
    cout<<"size of B:"<<sizeof(B)<<endl;  
    cout<<"size of C:"<<sizeof(C)<<endl;  
    cout<<"size of D:"<<sizeof(D)<<endl;  
    return 0;
} 
