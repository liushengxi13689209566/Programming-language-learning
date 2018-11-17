/*************************************************************************
	> File Name: Sales_data.h
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月21日 星期四 18时20分48秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <iostream>
#include <string>
// added conversion operators to convert a Sales_data to string and to double.
class Sales_data {
    friend std::istream& operator>>(std::istream&, Sales_data&);
    friend std::ostream& operator<<(std::ostream&, const Sales_data&);
    friend Sales_data operator+(const Sales_data&, const Sales_data&);
public:
    Sales_data(const std::string& s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(n * p)
    {
    }
    Sales_data() : Sales_data("", 0, 0.0f) {}
    Sales_data(const std::string& s) : Sales_data(s, 0, 0.0f) {}
    Sales_data(std::istream& is);

    // Sales_data& operator=(const std::string&){
    	
    // }
    // Sales_data& operator+=(const Sales_data&){

    // }
    explicit operator std::string() const { return bookNo; }  // to string
    explicit operator double() const { return avg_price(); }  // to double

    std::string isbn() const { return bookNo; }

private:
    inline double avg_price() const;

    std::string bookNo ;
    unsigned units_sold = 0; //图书数量
    double revenue = 0.0; // 单价
};
std::istream& operator>>(std::istream& in, Sales_data&tmp ){
	in >> tmp.bookNo >> tmp.units_sold >> tmp.revenue ;
}
std::ostream& operator<<(std::ostream& os , const Sales_data& tmp ){
	os << tmp.bookNo <<  tmp.units_sold <<  tmp.revenue ;
}
Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs){
	Sales_data temp ;
	temp.bookNo = lhs.bookNo+rhs.bookNo ;
	temp.units_sold = lhs.units_sold +rhs.units_sold ;
	temp.revenue = lhs.revenue +rhs.revenue ;	
	return temp ;
}
inline double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}

#endif
