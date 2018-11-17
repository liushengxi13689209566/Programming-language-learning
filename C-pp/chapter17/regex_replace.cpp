/*************************************************************************
	> File Name: regex_replace.cpp
	> Author: Liu Shengxi
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月28日 星期四 23时00分28秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<regex>
using namespace std;
int main(void) {
	string phone = R"((\()?(\d{3})(\))?([-. ])?(\d{3})([-. ]?)(\d{4}))";

	string fmt = "$2.$5.$7 ";
	regex r(phone);
	vector<string> number = {"liu (908) 555-1800 862-555-0123", "drew (973)555.0130",
	                         "lee (609)555.0132 201.55.0175 800.555.0000"
	                        };
	using std::regex_constants::format_no_copy ;
	cout << regex_replace(number[0], r, fmt, format_no_copy) << endl ;
	cout << regex_replace(number[1], r, fmt, format_no_copy) << endl ;
	cout << regex_replace(number[2], r, fmt, format_no_copy) << endl ;


	return 0;
}

