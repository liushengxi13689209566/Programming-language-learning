/*************************************************************************
	> File Name: regextest2.cpp
	> Author: Liu Shengxi
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月26日 星期二 23时08分39秒
 ************************************************************************/

#include<iostream>
#include<regex>
#include<string>
using namespace std;
int main(void) {
	string test_str = "foo.cpp   1.c 2.cc 3.cxx  ";
	//       std::string pattern(".c");
	// pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	//   	std::regex re("([[]])\\.()",std::regex::icase);

	smatch results ;
	std::regex r("([[:alnum:]]+)\\.(cpp|cxx|cc)", std::regex::icase) ;
	// if(regex_search(test_str,results,r))
	// 	cout << results.str(1) << endl ;


	for ( std::sregex_iterator it(test_str.begin(), test_str.end(), r) , end_it ; it != end_it ; ++it )
		std::cout << it->str(1) <<  std::endl  ;
	return 0;
}

