/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月28日 星期四 16时44分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Acount {
public:
    void calculate(){amount += amount * interestRate ;}
    static double rate(){ return interestRate ;}
    static void rate(double);
private:
    std::string owner ;
    double amount;
    static double interestRate ;
    static double initRate() ;
    static  constexpr int period  =30 ;
    double daily_tb1[period];
};
void Acount::rate(double newRate)
{
    interestRate = newRate ;
}
double Acount::interestRate = initRate() ;
constexpr int Acount::period ;


int main(void)
{
    double r;
    r = Acount::rate() ;

}
