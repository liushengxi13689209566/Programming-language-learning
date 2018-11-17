/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 14时47分53秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(void){
    double m,n ;
    cin >> m >> n ;
    try{
        cout << "before dividing " << endl ;
        if(n ==  0 )
            throw 111 ; //int 类型异常
        else if( m == 0 )
            throw -666.0  ;
        else 
            cout << m/n << endl ;
        cout << "after dividing "  << endl ;
    }
    catch(double d){
        cout << "catch (double d )"  << d << endl ;
    }
    catch(int e){
        cout << "catch (int e )" << e <<endl ;
    }
    catch(...){
        cout << "catch (... )"  <<endl ;
    }
    cout << "finshed " << endl ;
}
