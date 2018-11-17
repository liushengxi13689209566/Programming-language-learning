#include <vector>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    // 使用vector存储数字：3、4、8、4
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(4);

    
    //循环打印数字
    vector<int>::const_iterator iter  ;
	for(iter = vec.cbegin() ; iter != vec.cend() ;++iter)
		cout << *iter << endl ;
    
    // 使用map来存储字符串键值对
    map<string, string> m ;
	m.insert(make_pair("liu","111"));
	m.insert(make_pair("sheng","222"));
	m.insert(make_pair("xi","333"));
    // 打印map中数据
    map<string ,string>::const_iterator it ;
	for(it = m.cbegin() ;it != m.cend() ;++it )
		cout << it->first << " ," << it->second  << endl ;
    return 0;
}
