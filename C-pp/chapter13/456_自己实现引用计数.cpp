#include <string>
#include <iostream>
#include <memory>
using namespace std ;
class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0),use(new size_t(1)) { }
    HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) ,use(hp.use) { 
        cout << " 拷 贝 构 造 函  数 " << endl ; //又多了一个对象使用 *ps ，use++ ;
        ++(*hp.use) ;
    }
    HasPtr& operator=(const HasPtr &rhs){  
        cout << "赋值运算符 " << endl ;
        ++*rhs.use ;
        --*use ;

        auto temp_ps =  new string( *rhs.ps) ;
        delete ps ;
        ps = temp_ps ;
        i = rhs.i ;   
        use = rhs.use ;
        
        return  *this;
    }
    ~HasPtr(){
        --(*use) ;
        if( *use == 0 )
            delete ps ,delete use ;
    }
    void print(){
        cout << *ps  << endl ;
        cout <<  i  << endl ;
        cout << *use << endl << endl << endl  ;
    }
private:
    std::string *ps ;
    int i ;
    size_t *use ; //记录有多少个对象共享 *ps 成员 
};
int main(void){
    HasPtr test1("liushengxi") ,test3("3333333") ;
    HasPtr test2(test1);
    test1.print(); //  2 
    test2.print(); //  2 

    test3  = test1 ; 
    test1.print() ; // 3
    test3.print() ;  
    
    return 0 ;
}