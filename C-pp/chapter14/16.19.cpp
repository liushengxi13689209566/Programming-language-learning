

#include<iostream>
#include<vector>
#include<list>
#include<deque>
template<typename Container>
std::ostream& print1(Container const& container, std::ostream& os)
{
    for(typename Container::size_type i = 0; i != container.size(); ++ i)
        os << container[i] << " ";
    return os;
}

template<typename Container>
std::ostream& print2(Container const& container, std::ostream& os)
{
    for(auto  i = container.cbegin() ; i != container.cend(); ++i)
        os << *i  << " ";
    return os ;
}

int main(void) {

	std::vector<std::string>  ss2 = {"xi","sheng","lliu"};
	print1(ss2,std::cout) << std::endl ;



    std::list<std::string> l = { "ss", "sszz", "saaas", "s333s", "ss2"," sss" };
    print2(l, std::cout) << std::endl;

}