#include <string>
#include <iostream>
#include <memory>
using namespace std ;
class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(make_shared<string>(s)), i(0)  { } 
    
    HasPtr(const HasPtr& hp) : ps(hp.ps), i(hp.i) { 
        cout << " 拷 贝 构 造 函  数 " << endl ;  // 又多了一个对象使用 *ps 
    }
    HasPtr& operator=(const HasPtr &rhs){  
        cout << " 赋 值 运 算 符 " << endl  ;
        ps = rhs.ps ;
        i = rhs.i ;   
        return  *this;
    }
    ~HasPtr(){ }
    
    void print(){
        cout << "*ps ==  " <<*ps  << endl ;
        cout << "i ==  " << i  << endl ;
        cout <<  "ps 引用计数 ==  " <<ps.use_count() << endl << endl << endl;
    }
private:
    shared_ptr<string>  ps ; //定义智能指针
    int i ;  // 额外数据成员 
};
int main(void){
    HasPtr test1("liushengxi") ,test3("3333333") ;
    HasPtr test2(test1); 
    test1.print(); // 引用计数应该 == 2 
    test2.print(); // 引用计数应该 == 2 

    
    test3  = test1 ;  //对于这种情况，左边引用计数 -1 ，右边引用计数 +1  
    test1.print() ;  //引用计数应该 == 3 
    test3.print() ;  // 引用计数应该 == 3 ，
    //而此时test3 初始化时指向的字符串“33333” ，应该已经被销毁了，这是因为test3 的引用计数 == 0 了，智能指针自动销毁
    return 0 ;
}
