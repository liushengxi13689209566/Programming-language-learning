/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月21日 星期四 21时23分20秒
 ************************************************************************/

#include"myhead.h"
using namespace std;
int main(void)
{
    Sales_data total;
    cout << "please input the  图书编号 销售数量 单价  : " <<  endl ;
    if(read(cin,total))
    {
        Sales_data trans;
        while (read(cin,trans)) 
        {
            if ( !add(total,trans)) //是a+b ,不是b+a 
            {
                cout << "图书编号 销售数量 总收入 平均价格: "<< endl;
                print(cout,total);
                total = trans;
            }
        }
        print(cout,total);
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    /*Sales_data *p1 = new Sales_data ;
    print(cout,*p1);

    Sales_data *p2 = new Sales_data("刘生玺");//其余的数据成员执行默认的构造函数
    print(cout,*p2);

    Sales_data *p3 = new Sales_data("老王",520,12.12) ;
    print(cout,*p3);

    Sales_data *p4 = new Sales_data(cin) ;
    print(cout,*p4);*/

    return 0;
}

