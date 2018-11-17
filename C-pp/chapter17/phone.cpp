/*************************************************************************
	> File Name: phone.cpp
	> Author: Liu Shengxi
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月28日 星期四 22时27分08秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<regex>
using namespace std;
bool valid(const smatch &m ) {
	if (m[1].matched ) {
		return m[3].matched && (m[4].matched == 0 || m[4].str() == " ");
	}
	else {
		return !m[3].matched && (m[4].str() == m[6].str());
	}
}
int main(void) {
	string phone =
	    "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ]?)(\\d{4})" ;
	regex r(phone);
	smatch  m;
	string s;
	while (getline(cin, s)) {
		for (sregex_iterator it(s.begin(), s.end(), r), end_it ; it != end_it ; it++) {
			if (valid(*it))
				cout << "valid:" << it->str() << endl ;
			else
				cout <<  "not vaild:" << it->str() << endl ;
		}
	}
	return 0;
}

