#include"myhead.h"
using namespace std;

int main(void)
{
    my_shared_ptr<int>  p1(new int);
    *p1 = 222;
    cout<<"ֵ��"<<*p1<<" ���ü�����"<<p1.use_count()<<endl; //222   1

    my_shared_ptr<int> p2 = p1 ; // ���� = �� 
    *p2 = 333;
    cout<<"ֵ��"<<*p2<<" ���ü�����"<<p1.use_count()<<endl; //333   2 

    my_shared_ptr<int> p3 ;
	p3 = p2 ;
    *p3 = 444;
    cout<<"ֵ��"<<*p3<<" ���ü�����"<< p3.use_count()<< endl; // 444  3 


    cout<<"���ü�����"<<p1.use_count()<<endl;  //  1      

   /* my_shared_ptr<string> q1(new string("����string1"));
    cout<<(*(q1)).c_str()<<endl;

    my_shared_ptr<string> q2(new string("����string2"));
    q2.swap(q1);
    cout<<(*(q1)).c_str()<<endl;*/

	getchar();
	return 0;
}