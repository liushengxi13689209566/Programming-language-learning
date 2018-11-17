/*************************************************************************
	> File Name: p484.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月14日 星期一 12时20分42秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Foo
{
public:
	Foo sorted() &&  ;
	Foo sorted()  const &  ;
	//Foo sorted()  const  ;
	using Comp = bool(const int & ,const int &) ;
	//Foo sorted(Comp *) ;
	//Foo sorted(Comp *) const  ;
private:
	vector<int> data ;
};
Foo Foo::sorted() &&   //data 可以被改变
{
	std::cout << "right zhi "	 << endl ; 
	sort(data.begin() ,data.end() );
	return *this ;
}
Foo	Foo::sorted() const &
{
	std::cout << " left  zhi "	 << endl ; 
	Foo ret(*this);
	sort(ret.data.begin() , ret.data.end());
	return ret ;
}
int main(int argc, char const *argv[])
{
	Foo().sorted(); // call "&&"
    Foo f;
    f.sorted(); // call "const &"
	return 0;
}

