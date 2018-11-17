#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include<algorithm>
using namespace std ;
class HasPtr {
public:
    friend void swap(HasPtr &lhs ,HasPtr &rhs) ;
    friend bool operator<(const HasPtr &lhs,const HasPtr &rhs );
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) { 
        // cout << " 拷 贝 构 造 函  数 " << endl ;
    }
    HasPtr& operator=(HasPtr &rhs ) {  //拷贝+交换的赋值运算符
        cout << " 拷贝+交换的赋值运算符 " << endl ;
        swap(*this,rhs);
        return *this ;
    }
    ~HasPtr(){
        delete ps ;
    }
    void print(){
        cout << *ps  << endl ;
        // cout << i << endl ;
    }
private:
    std::string *ps ;
    int i ;
};
void swap(HasPtr &lhs ,HasPtr &rhs){
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    std::cout << "call swap(HasPtr &rhs)" << std::endl;
}
bool operator<(const HasPtr &lhs,const HasPtr &rhs ) {  
        cout << " ' < ' 运算符 " <<  endl ;
        return *lhs.ps > *rhs.ps ; 
}
int main(void){
    // HasPtr test1("liushengxi") ,test3("zuishuai");
    // HasPtr test2(test1);
    // test2.print();

    // test2  = test2 ;
    // test2.print() ;

    vector<HasPtr> TT ;
    TT.push_back(HasPtr("111"));
    TT.push_back(HasPtr("222"));
    TT.push_back(HasPtr("333"));
    TT.push_back(HasPtr("444"));
    TT.push_back(HasPtr("555"));
    sort(TT.begin() ,TT.end() );
    for(auto j: TT){
        j.print() ;
    }
}

