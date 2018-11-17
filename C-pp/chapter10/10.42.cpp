/*************************************************************************
	> File Name: 10.42.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月02日 星期五 20时25分35秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<list>
using namespace std;
int main(void) {
	list<string> strList{"the","quick","red","fox","jumps","over",
	"the","slow","red","turtle"} ;
	strList.sort() ;
	strList.unique();
	for(auto i: strList)
		cout << i << "  ";
	cout << endl; 

	return 0 ;
}









