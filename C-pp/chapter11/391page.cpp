/*************************************************************************
	> File Name: 391page.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月13日 星期二 20时12分24秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<fstream>
#include<sstream> //为了使用istringstream 
using namespace std;
using stringMap = map<string,string> ; 
/*要求：
*/
class Myclass{
	public:
	Myclass(){
		rule_fp.open("./rules.txt");
		data_fp.open("./data.txt") ;
		out_file.open("./output");
		if( ! rule_fp.is_open())
			cout << "open rules.txt is failure " << endl ;
		if(!data_fp.is_open() )
			cout << "open data.txt is failure  "<< endl ;
		if(!out_file.is_open() )
			cout << "open output is failure  "<< endl ;
	}
	~Myclass(){
		rule_fp.close();
		data_fp.close();
		out_file.close();
	}
	int setMap(){
		string key ;
		string value ;
		while( rule_fp >> key && getline(rule_fp,value ) )  // 得到一行数据
    	{	
			if(value.size() > 1 ){
				sMap[key] = value.substr(1);
			}
    	} 
	}
	int transform(){
        string  line  ;
		while( getline(data_fp,line) ){  
        	istringstream str(line);
			string word ;
			bool firstword = true ;
			while(str >> word ){
				if(firstword)
					firstword = false ;
				else 
					out_file << " " ;

				auto it = sMap.find(word);
				if( it != sMap.end() )
					out_file << sMap[word] ;
				else 
					out_file << word ;
			}
		out_file << endl ;
		}
	}
	private:
	stringMap sMap ;
	ifstream rule_fp,data_fp ; 
	ofstream out_file ;
};
int main(void){
	//1.建立映射关系
	//2.读入data.txt 文件进行转换操作，并陆续写入文件
	Myclass my ;
	my.setMap();
	my.transform();
	return 0 ;
}

