/*************************************************************************
	> File Name: 函数对象.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 13时48分37秒
 ************************************************************************/

#include<iostream>
#include<vector>
/*给定一个区间和初值init 以及一个可选的操作函数op，返回一个和init一样类型的结果，
该结果是通过对给定区间内的每个元素逐个累积  ""用op操作作用于init而得到的。""
op是一个二元操作函数，默认的op是 + 运算, 这就是第一个例子执行累加的原因.*/
using namespace std;
// class Myclass {
//     public:
//     double operator()(int a1 ,int a2 ,int a3){
//         return (double)(a1+a2+a3)/3 ;
//     }
// };

template <class InputIterator, class T>
   T accumulate(InputIterator frist, InputIterator last, T init){
    for(;frist != last ;frist++){
        init += (*frist);
    }
    return init ;
}

template <class InputIterator, class T, class BinaryOperation>
    T accumulate (InputIterator frist, InputIterator last, T init,
                 BinaryOperation binary_op){
    for(;frist != last ;frist++){
        init = binary_op(init ,*frist);
    }
    return init ;
}

int sumSquares(int total ,int value ) 
{
    return  total = total + value *value  ;
}

template<class T>
void Print(T frist ,T last){
    for(;frist != last ;frist++){
        cout << *frist << "  " ;
    }
}
template<class T>
class SumPowers{
    int power ;
    public:
    SumPowers(int p):power(p){};
    const T operator()(const T &total ,const T & value){
        T v = value ;
        for(int i= 0 ;i < power -1 ;++i){
            v = v* value ;
        }
        return total+v ;
    }
};

int main(void)
{
    // Myclass my1 ;
    // cout << my1(1,2,3) << endl ;
    const int SIZE  = 10;
    vector<int> v= {1,2,3,4,5,6,7,8,9,10} ;
    Print(v.begin(),v.end());
    cout << endl ;

    int result = accumulate(v.begin(),v.end(),0); //求和 ,无op
    cout << "result ==  " << result << endl ;

    //进行 op 操作
    result = accumulate(v.begin(),v.end(),0,sumSquares); //求平方和 ，有op
    cout << "result ==  " << result << endl ;

    result = accumulate(v.begin(),v.end(),0,SumPowers<int>(3)); // 所有数的 3 次方之和
    cout << "result ==  " << result << endl ;

    result = accumulate(v.begin(),v.end(),0,SumPowers<int>(4));// 所有数的 4 次方之和
    cout << "result ==  " << result << endl ;

}
