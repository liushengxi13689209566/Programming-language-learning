/*************************************************************************
	> File Name: myhead.h
	> Author: 
	> Mail: 
	> Created Time: 2017年12月10日 星期日 11时12分15秒
 ************************************************************************/

#ifndef _MYHEAD_H
#define _MYHEAD_H
class StaticMath
{
public:
    StaticMath(void);
    ~StaticMath(void);

    static double add(double a, double b);//加法
    static double sub(double a, double b);//减法
    static double mul(double a, double b);//乘法
    static double div(double a, double b);//除法
   
};
#endif
