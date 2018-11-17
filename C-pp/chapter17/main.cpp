/*************************************************************************
	> File Name: main.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月21日 星期四 22时15分37秒
 ************************************************************************/

#include<iostream>
#include<tuple>
#include<algorithm> // equal_range 
#include<vector>
#include<numeric> // accumulate 
#include"Sales_data.h"
using namespace std;

	using TT = vector< vector<Sales_data> >  ;
	typedef tuple<vector<Sales_data>::size_type ,
	vector<Sales_data>::const_iterator ,
	vector<Sales_data>::const_iterator>  matches ;

bool compareIsbn(const Sales_data &lhs ,const  Sales_data &rhs){
	return lhs.isbn() < rhs.isbn() ;
}
vector<matches> findbook(const TT &files ,const string &book ){
	vector<matches> ret ;
	for(auto it = files.cbegin() ; it != files.cend() ;it++ ){
		auto found = equal_range(it->cbegin() ,it->cend() , Sales_data(book), compareIsbn );
		if( found.first != found.second )
			ret.push_back(make_tuple(it - files.cbegin() ,found.first,found.second ));
	}
	return ret ;
}
void reportResult(std::istream &in , std::ostream &os ,const TT &files ){
	string s ;
	while(cin >> s){
		auto trans =  findbook(files,s);
		if(trans.empty() ){
			cout << s << " not found in any stores \n" ;
			continue ;
		}
		for(const auto &store : trans )
        std::cout  << "store :" << get<0>(store) <<  "Sales : " 
			<< accumulate(get<1>(store),get<2>(store),Sales_data(s))  
			<< endl ;
	}
}
// vector<Sales_data> build_store(const string& s)
// {
//     vector<Sales_data> ret;
//     Sales_data item;
//     for (int i = 0; i < 4 ; ++i)
//     {
//     	cin >> item ;
//     	ret.push_back(item); 	
//     }
//     sort(ret.begin(), ret.end(),
//          [](const Sales_data& lhs, const Sales_data& rhs) {
//              return lhs.isbn() < rhs.isbn();
//          }); //! need sort for equal_range to work
//     return ret ;
// }

int main()
{
    // each element in files holds the transactions for a particular store
    vector<vector<Sales_data>> files;
    vector<Sales_data>  test ;
    for (int cnt = 0; cnt <  4; ++cnt){
    	files.push_back(test);
    }
    for (int j = 0;j < 4 ; ++j )
    {
    	for (int i = 0; i < 4 ; ++i)
    	{
    		files[j].push_back(Sales_data(to_string(i+1),i,i));
    	}
    }
    reportResult(std::cin, std::cout, files);
    // EX05::reportResults(std::cin, std::cout, files);
    // EX06::reportResults(std::cin, std::cout, files);
}

