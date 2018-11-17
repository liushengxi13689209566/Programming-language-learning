/*************************************************************************
	> File Name: 拷贝构造函数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月24日 星期五 19时45分54秒
 ************************************************************************/

#include<iostream>
using namespace std;
  
class Myclass {  
private:  
    int a;  
public:  
    //构造函数  
    Myclass(int b)  
    { a = b;}  
      
    //拷贝构造函数  
    Myclass(const Myclass& C)  
    {  
        a = C.a;  
    }  
  
    //一般函数  
    void Show ()  
    {  
        cout<<a<<endl;  
    }  
};  
int main()  
{  
    Myclass A(100);  
    Myclass B = A; // Myclass B(A); 也是一样的  
     B.Show ();  
    return 0;  
}   

