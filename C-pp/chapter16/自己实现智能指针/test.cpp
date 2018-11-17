/*************************************************************************
	> File Name: main.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月05日 星期二 15时39分58秒
 ************************************************************************/

#include <iostream>
#include<memory> //shared_ptr 
#include <iostream>g++ 
using namespace std ;
struct Foo {
    Foo() { std::cout << "Foo()\n"; }
    ~Foo() { std::cout << "~Foo()\n"; }
    Foo(const Foo&) { std::cout << "Foo copy ctor\n"; }
    Foo(Foo&&) { std::cout << "Foo move ctor\n"; }
};

struct Fooo {
    Fooo(int n = 0) noexcept : bar(n) { std::cout << "Fooo: constructor, bar = " << bar << '\n'; }
    ~Fooo() { std::cout << "Fooo: destructor, bar = " << bar << '\n'; }
    int GetBar() const noexcept { return bar; }

private:
    int bar;
};

struct D {
    void bar() { std::cout << "Call deleter D::bar()...\n"; }
    void operator()(Foo* p) const
    {
        std::cout << "Call delete from function object...\n";
        delete p;
    }
};
int main()
{
std::cout << "shared_ptr constructor with no managed object\n";
    {
        shared_ptr<Foo> sh1;
    }

    std::cout << "shared_ptr constructor with object and test swap \n";
    {
        shared_ptr<Foo> sh2(new Foo);
        std::cout << sh2.use_count() << '\n';//1
        shared_ptr<Foo> sh3(sh2);
        std::cout << sh3.use_count() << '\n';// 2

        shared_ptr<int> sh4(new int(4444)) ;
        shared_ptr<int> sh5(new int(5555)) ; // test swap()  
        sh4.swap(sh5);
        cout << "sh4 == "  << *sh4 << "\nsh5 == " << *sh5 << endl ; // 5555 4444 
        swap(sh4,sh5);
        cout << "sh4 == "  << *sh4 << "\nsh5 == " << *sh5 << endl ;  //4444  5555
    }

    std::cout << "shared_ptr constructor with deleter\n";
    {
        shared_ptr<Foo> sh5(new Foo, [](Foo* p) {
            std::cout << "Call delete from lambda...\n";
            delete p;
        });
    }

    {
        shared_ptr<Fooo> sptr(new Fooo(111)) ;
        std::cout << "The first Fooo's bar is " << sptr->GetBar() << "\n"; // 111  
        sptr.reset(new Fooo); //先搞一个新的出来,然后干掉原来的,避免自赋值
        std::cout << "The second Fooo's bar is " << sptr->GetBar() << "\n"; // 0 
    }
}


