/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 11时57分51秒
 ************************************************************************/
 //根据分数，找到比所查找的分低的第一个人
#include<iostream>
#include<map>
#include<string>
using namespace std;
class CSstudent{
	public:
	int  score  ; //作为 first 关键字来查询 
	typedef struct {
		int id  ;
		string name ;
	}Info ;
	Info studentInfo ;
};
int main(void)
{

	typedef multimap<int,CSstudent::Info> MAP  ;
	MAP mp ; 
	CSstudent st ;
	string cmd  ;  
	while(1){
		cin >> cmd  ;

		if(cmd == "add") //输入
		{
			cin >> st.studentInfo.name >> st.studentInfo.id >> st.score  ; // add name  id score 
			mp.insert(MAP::value_type(st.score,st.studentInfo)) ;
		}
		if(cmd == "Query") //查 ,Query  81 
		{
			int toQueryScore ;
			cin >>  toQueryScore  ;
			MAP::const_iterator i  =  mp.find(toQueryScore)  ;
			if(i == mp.end()){
				cout << "not find  " << endl;
			}
			else 
				cout << i->second.name  << " , "<< i->second.id << " , " << i->first  ;
		}
	}

	return  0;
}

