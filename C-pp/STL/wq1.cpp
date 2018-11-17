
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(void) {
    map<string,string> mmp ;
	mmp.insert(make_pair("encapsulation","封装性"));
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
/*#include <iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 	string a;
 	int i=0;
 	vector<string> s;
 	while(i<5)
 	{
 		//gets(a);
 		//getline(cin,a);
 		cin >> a ; //gaiyixia zheli jiuxingl 
 		i++; 
 		s.push_back(a);
	 }
 	
 	sort(s.begin(),s.end());
	vector<string>::iterator p=s.begin();
	cout<<"After sorted:"<<endl;
	while(p!=s.end())
	{
		cout<<*p<<'\n';
		p++;
	}
	cout<<endl;
	return 0;
} */
