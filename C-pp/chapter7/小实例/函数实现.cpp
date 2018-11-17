/*************************************************************************
	> File Name: 函数实现.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月21日 星期四 21时37分04秒
 ************************************************************************/

#include"myhead.h"
#include<iostream>
using namespace std;
//类内的成员函数
Sales_data::Sales_data(std::istream& input)
{
    read(input,*this);
}
string Sales_data::isbn()  const 
{
    return this->bookNo;
}
bool  Sales_data::combine(const Sales_data& temp)
{
    if(this->bookNo == temp.bookNo){
        this->units_sold += temp.units_sold ;
        this->revenue += temp.revenue ;
        return true ;
    }
    else 
        return false ;
}
double Sales_data::avg_price() const  //平均价格
{
    if(units_sold)  //如果销售数量为零，那么就没有所谓的收入
        return revenue/units_sold;
    else 
        return 0.0;
}
// 类外成员函数
bool  add( Sales_data& a,const Sales_data& b)
{
        Sales_data&  sum = a ;
        if( sum.combine(b) )
            return true ;
        else return false ;
}

ostream& print(ostream &output,const Sales_data& temp)
{
    output << temp.isbn() << "  "
    << temp.units_sold    << "  "
    << temp.revenue     <<  "  "
    << temp.avg_price() << endl ;
    return output ;
}

istream& read(istream& input,Sales_data& temp)
{
    double price = 0;
    input >> temp.bookNo >> temp.units_sold >> price ;
    temp.revenue = price * temp.units_sold ;
    return input ;
}


