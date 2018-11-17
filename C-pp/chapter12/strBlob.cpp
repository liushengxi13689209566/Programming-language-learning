/*************************************************************************
	> File Name: strBlob.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月17日 星期六 17时17分10秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std;
class strBlob{
	public:
	typedef vector<string>::size_type size_type ;
	strBlob();
	strBlob(initializer_list<string> il): data(make_shared< vector<string> >(il)){ }
	size_type size() const  {return data->size() ;}
	bool empty() const {return data->empty() ;}

	void push_back(const string &t){data->push_back(t);}
	void pop_back();
	string & front();
	string & back();
	private:
	shared_ptr<vector<string> >  data ;
	void check(size_type i ,const string &msg ) const ;
};
void strBlob::check(size_type i ,const string &msg ) const {
	if(i >= data->size() )
		throw out_of_range(msg);
}
string & strBlob::front(){
	check(0,"front on empty strBlob");
	return data->front();
}
string &  strBlob::back(){
	check(0,"back on empty strBlob");
	return data->back();
}
void  strBlob::pop_back(){
	check(0,"pop_back on empty strBlob");
	return data->pop_back();
}
int main()
{
    // const strBlob csb{ "hello", "world", "pezy" };
    strBlob sb{ "hello", "world", "Mooophy" };

    // std::cout << csb.front() << " " << csb.back() << std::endl;
    sb.back() = "pezy";
    std::cout << sb.front() << " " << sb.back() << std::endl;
}
