/*************************************************************************
	> File Name: 10.11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月28日 星期日 14时14分20秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool isshorter(const string &a ,const string &b){
	return a.size() < b.size();
}
void fun(vector<string> &strVec ,vector<string>::size_type sz){
	sort(strVec.begin(),strVec.end());
	auto end_unique = unique(strVec.begin(),strVec.end());
	strVec.erase(end_unique,strVec.end());

	stable_sort(strVec.begin(),strVec.end(),isshorter); //先按长度排序，在按字典序排序 
	//找到第一个大于等于给定单词长度的迭代器 ，计算数目 ，并输出
	auto wc = find_if(strVec.begin(),strVec.end() ,[sz](const string &a){
		return a.size() > sz ;});
	auto count = strVec.end() - wc ;
	cout << " 数目为 ：" << count <<  endl ;
	for_each(wc,strVec.end() ,[](const string &s){
		cout << s << "  " ;
	});
	cout << endl ;
}
//目标：求大于等于一个给定单词长度的数目，并输出
int main(void){
	vector<string> strVec{"the","quick","red","fox","jumps","over",
	"the","slow","red","turtle"};
	fun(strVec ,3);
	return 0 ;
}

