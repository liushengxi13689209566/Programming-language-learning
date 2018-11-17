/*************************************************************************
	> File Name: test1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月30日 星期五 08时45分06秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>

using namespace std;
class yourclass{
    public:
	int you ;
	yourclass(int _n):you(_n){}
};
class myclass{
	int my ;
	public:
	void operator=(yourclass temp){
		my = temp.you ;
	}
	void print(){
		cout << "my == " << my << endl ;
	}
};
int main(void){
	myclass  testMy;
	yourclass testYou(100) ;
	testMy=testYou ;
	testMy.print();
		return 0 ;
}

