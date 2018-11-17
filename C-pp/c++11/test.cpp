/*************************************************************************
	> File Name: test.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月27日 星期三 09时02分57秒
 ************************************************************************/
/*C++标准模板库或者你熟悉的其他类库编程实现。
*/
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(void) {
    map<string,string> mmp ;
	mmp.insert(pair<string,string>("encapsulation","封装性"));
	mmp.insert(pair<string,string>("inheritance","继承性"));
	mmp.insert(pair<string,string>("polymorphism","多态性"));
	mmp.insert(pair<string,string>("message","消息"));
	mmp.insert(pair<string,string>("class","类"));
	mmp.insert(pair<string,string>("object","对象"));
  	mmp.insert(pair<string,string>("constructor","构造函数"));
  	mmp.insert(pair<string,string>("destructor","析构函数"));
	string str ;
	while(cin >> str){
		map<string,string>::const_iterator it = mmp.find(str);
		if(it == mmp.end())
			cout << "抱歉！没有找到"<< str << endl ;
		else 
			cout << it->first << ":"<< it->second << endl;
	}
}

