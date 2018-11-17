/*************************************************************************
	> File Name: myhead.h
	> Author: 
	> Mail: 
	> Created Time: 2017年12月21日 星期四 21时09分59秒
 ************************************************************************/

#ifndef _MYHEAD_H
#define _MYHEAD_H
#include<iostream>
#include<string>
class Sales_data{
    public:
    Sales_data() = default;
    Sales_data(const std::string& s):bookNo(s){}
    Sales_data(const std::string& s ,unsigned n ,double p):bookNo(s),units_sold(n),revenue(p) {}
    Sales_data(std::istream& input) ;


    std::string isbn() const ; //返回bookNo
    bool combine(const Sales_data& temp);

    private:
    double avg_price() const ;
    std::string bookNo ;
    unsigned units_sold = 0 ; //销售单位
    double revenue = 0.0 ; //收入

    //友元函数并不是该类的成员函数
    friend bool  add(const Sales_data& a,const Sales_data& b); 
    friend std::ostream& print(std::ostream &output,const Sales_data& temp );
    friend std::istream& read(std::istream& input,Sales_data& temp);

};

bool  add( Sales_data& a,const Sales_data& b);
std::ostream& print(std::ostream &output,const Sales_data& temp );
std::istream& read(std::istream& input,Sales_data& temp);

#endif
