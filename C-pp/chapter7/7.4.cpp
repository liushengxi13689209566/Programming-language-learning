/*************************************************************************
	> File Name: 7.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月21日 星期四 20时42分41秒
 ************************************************************************/
#include<iostream>
using namespace std;
class Person{
    public:
    Person(): name("刘生玺 "),address("兰州 "){}

    auto get_name() const -> string const& {return name;}
    auto get_address() const -> string const& {return address;}  //新奇
    bool read(std::istream& input )  ;
    bool print(std::ostream& output ) const ;
    
    private:
    string name ;   //姓名
    string address; //住址
};

bool Person::read(std::istream& input )   
{
    cout << "please input the name and address " << endl;
    input >> this->name >> this->address ;
    return true ;
}
bool Person::print(std::ostream& output ) const 
{
    output << this->name << this->address << endl  ;
    return true ;
}

int main(void)
{
    Person per1 ;
    cout <<  per1.get_name() << endl ;
    cout  << per1.get_address()<< endl ;

    if( !per1.read(cin))
        cout << "read is wrong !! " << endl ;
    if( !per1.print(cout))
        cout << "print is wrong !! " << endl ;
    return 0;
}
