#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "Blob.h"
#include "BlobPtr.h"
using namespace std ;
int main(void)
{
	Blob<double> sb{ 0,1,2,3,4,5,6 } ;
    sb.push_back(777);
    std::cout << sb.front() << " " << sb.back() << std::endl; //0 777
    sb.back() =  99999 ;
    std::cout << sb.front() << " " << sb.back() << std::endl;// 0 99999
    cout << sb[3] << endl ; //3 

    BlobPtr<double> p = sb ;
    p = p+6 ; //测试指针的加号运算 
    cout << *p << endl ; // 6 
    p++ ;//测试指针的后置++ 
    cout << *p << endl ; // 99999
    --p ;//测试指针的qian置--
    cout << *p << endl ; // 6   

    BlobPtr<double> p_dump = p ;
    if(p_dump  == p )  
    	cout << "liu shengxi " << endl ;
    ++p_dump ;
    if(p < p_dump )
    	cout << "wen qing " << endl ;
    return 0;
}
