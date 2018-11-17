// /*************************************************************************
// 	> File Name: test.cpp
// 	> Author: Liu Shengxi 
// 	> Mail: 13689209566@163.com
// 	> Created Time: 2018年06月27日 星期三 09时02分57秒
//  ************************************************************************/
// /*C++标准模板库或者你熟悉的其他类库编程实现。
// */
#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(void) {
    set<string> strSet ;
	string str ;
    for(int i = 0 ;i< 5 ;i++){
	    cin >> str ;
		strSet.insert(str);		
    }
    cout << "After sorted:"<< endl;
	for(set<string>::const_iterator it= strSet.begin();
		it != strSet.end() ;it++)
		cout << *it << endl ;
	return 0 ;

}

#include <iostream>
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
} 