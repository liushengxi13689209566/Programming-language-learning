/*************************************************************************
	> File Name: regextest1.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月26日 星期二 20时53分23秒
 ************************************************************************/

#include<iostream>
#include<regex>
#include <exception>
#include<string>
using namespace std;
int main(void) {
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    regex r(pattern,regex::icase);
	smatch results ;
	string  test_str  = "receipt freind theif receive  545ei464  rvhbei  vnknvei  ndvjdbnei ";
	/*for( sregex_iterator it(test_str.begin(),test_str.end(),r),end_it ;it != end_it; ++it )
		cout << it->str() << endl  ; */

	for( sregex_iterator it(test_str.begin(),test_str.end(),r),end_it ;it != end_it; ++it ){
		auto pos= it->prefix().length();
		pos = pos > 40 ? pos-10 :0 ;
		cout << it->prefix().str().substr(pos)  <<  "\n" 
		<< it->str() << "\n" << it->suffix().str().substr(0,40) << "\n\n\n";
	}

	//if(regex_search(test_str,results,r))
	//		cout << results.str()  << endl ;

    /*try {
        regex r("[[:alpha:]]*(cie|[^c]ei)[[:alpha:]]*");
        std::string word;
        while (std::cout << "Enter a word, or q to quit: ", std::cin >> word) {
            if (word == "q") break;
            std::smatch result;
            if ( !std::regex_search(word, result, r))
                std::cout << "Violate the rule: 'i before e except after c'"
                          << std::endl;
            else
                std::cout << word + " is okay." << std::endl;
        }
    }
    catch (std::regex_error e) {
        std::cout << e.what() << "\ncode:" << e.code() << std::endl ;
    }*/
	return 0;
}
//! @test
// Enter a word, or q to quit: believe
// believe is okay.
// Enter a word, or q to quit: receive
// receive is okay.
// Enter a word, or q to quit: species
// Violate the rule: 'i before e except after c'
// Enter a word, or q to quit: seize
// Violate the rule: 'i before e except after c'
// Enter a word, or q to quit: q

