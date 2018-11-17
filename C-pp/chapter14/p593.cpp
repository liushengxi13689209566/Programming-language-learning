/*************************************************************************
	> File Name: p593.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月04日 星期一 16时56分02秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>
template<typename T>
typename T::value_type top(const T& c){
	if( !c.empty())
		return c.back();
	else 
		return typename T::value_type();
}
template<typename T,typename F=less<T> > //less 1 < 5
int compare(const T &v1,const T&v2,F f=F() ) {
	if(f(v1,v2)) return -1;
	if(f(v2,v1)) return 1;
	return 0 ;
}

template<typename Container>
std::ostream& print(Container const& container, std::ostream& os)
{
    for(typename Container::size_type i = 0; i != container.size(); ++ i)
        os << container[i] << " ";
    return os;
}

int main(void) {
	// vector<int> ss ;
	// auto tt = top(ss);
	// cout << tt << endl ;


	// cout << compare(1,5) << endl ;
	// cout << compare(12,5) << endl ;
	
	// list<int>  ss1{1,2,3,4,5,6,7,8 };
	// print(ss1,cout ) <<  endl ;



	std::list<std::string>  ss2 = {"xi","sheng","lliu"};
	print(ss2,std::cout) << std::endl ;



}

