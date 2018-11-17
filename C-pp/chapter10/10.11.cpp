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
template<class T>
void print(T tt){
	for(auto i : tt)
		cout << i << "  ";
	cout << endl ;		
}
int main(void){
	vector<string> strVec{"the","quick","red","fox","jumps","over",
	"the","slow","red","turtle"};

	sort(strVec.begin(),strVec.end());
	auto end_unique = unique(strVec.begin(),strVec.end());
	strVec.erase(end_unique,strVec.end());

	stable_sort(strVec.begin(),strVec.end(),isshorter); //
	print(strVec);
	return 0 ;
}

