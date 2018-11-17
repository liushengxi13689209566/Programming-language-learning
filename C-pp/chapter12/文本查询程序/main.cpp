/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月01日 星期日 11时42分31秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<memory> //shared_ptr 
#include<fstream> 
#include<sstream> //istringstream 
using namespace std ;
using line_no = vector<string>::size_type ; // 行号


class DegbugDelete{ // 我们在这里自定义一个删除器
public:
	DegbugDelete(ostream &s= cerr):os(s){  }
	template<typename T> 
	void operator()(T *p) const{
		os<< "deleteing shared_ptr " << endl ;
		delete  p;
	}
private:
	ostream &os ;
};
class QueryResult{
	friend ostream& print(ostream& os , const QueryResult &TT ){ 
		os <<  TT.sought << "   occurs " << TT.lines->size()  << "  times  "<< endl ;
		if(TT.lines->size() == 0 ) 
			return os ;
		auto tag  = TT.lines->begin() ;
		decltype(tag) temp = tag ;
		tag++ ;
		while( temp != TT.lines->end()){
			if( *tag != *temp  ){
				 os << " 行 "<<*temp+1 << " : " <<  (*TT.file)[*temp] << endl ;
			}
			temp++ ;
			tag++  ;
		}
		return os  ;
	}
	public:
    QueryResult() = default ;
	QueryResult(string s ,
	shared_ptr<multiset<line_no>> p , 
	shared_ptr<vector<string>> f ):sought(s),lines(p),file(f){}
	private:
	string sought ;
	shared_ptr<multiset<line_no>> lines ; 
	shared_ptr<vector<string>> file ;
};
class TextQuery {
	public:
	TextQuery(ifstream &infile): file ( new vector<string> ,DegbugDelete() ) //定义删除器
	{   
		//读取文件数据到 vector<string> 中 ，分离各个单词 
		string text ,word ;
		while( getline(infile,text  )){ 
			file->push_back(text) ;
			int n = file->size() - 1 ;
			istringstream line(text) ; 
			while( line >> word ){ 
				auto &lines = wm[word] ; //当我们这样使用时，加入没有的单词，就已经创建了,只不过指针是空的而已
				if( ! lines )
					lines.reset( new multiset<line_no> ,DegbugDelete() ) ; // 初始化 shared_ptr 
				lines->insert(n) ; //插入n 
			}
		}
	}
	QueryResult query( const string &temp ) const { 
		static shared_ptr<multiset<line_no>> nodata(new multiset<line_no>,DegbugDelete()) ; 
		//emmmm ,如果不构造此空 set 使用默认的 default，就会出现段错误 
		auto loc = wm.find(temp);
		if( loc == wm.end() ){
			cout <<  temp << "  is not in test.txt  file " << endl ;
			return QueryResult(temp ,nodata ,file);
		}
		else 
			return QueryResult(temp, loc->second,file ) ;
	}
	private:
	shared_ptr< vector<string> > file ; //输入文件 ,智能指针 
	map<string,shared_ptr<multiset<line_no> > >  wm ; //每一个单词到行号的映射 
};
int fun(ifstream &infile){
		const TextQuery tq(infile);
		string word ;
		while(1) {
			cout << "    请 输 入 你 想 要 查 询 的 单 词 ：" ;
			cin >> word ; 
			if(word == "q")
				return 0 ;
			print(cout,tq.query(word)) << endl  ;

		}
		return 0 ;
}
int main(void){
	cout << "    你将在文件：test.txt 中查询你想要查询的单词 \n\n" << endl ;
	ifstream infile("test.txt");
	if( !infile.is_open()){
		cout << " 未 成 功 打 开 文 件！！" << endl ;
		return -1 ;
	}
	fun(infile);
	infile.close() ;
	return 0 ;
}
