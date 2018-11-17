/*************************************************************************
	> File Name: myhead.h
	> Author: 
	> Mail: 
	> Created Time: 2017年12月21日 星期四 21时09分59秒
 ************************************************************************/


#include<iostream>
#include<string>
using namespace std ;
class Sales_data{
    public:
    Sales_data(const std::string& s ,unsigned n ,double p):bookNo(s),units_sold(n),revenue(p) {
        printf("111111111111111111111\n");
    }
    Sales_data():Sales_data(" ",0,0){
        printf("2222222222222222222\n");
    } ;
    Sales_data(const std::string& s):Sales_data(s,1,1){
        printf("33333333333333333\n");

    }
    Sales_data(std::istream& input):Sales_data(){
        printf("444444444444444444\n");
    } ;
    private:
    std::string bookNo ;
    unsigned units_sold = 0 ; //销售单位
    double revenue = 0.0 ; //收入
};
int main(void)
{
    Sales_data t1 ;
    Sales_data t2("liushnegxi",52,52) ;
    Sales_data t3("ynrterninn") ;
    Sales_data t4(cin) ;
    return 0;
}

