/*************************************************************************
	> File Name: main.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月05日 星期二 15时39分58秒
 ************************************************************************/

#include <iostream>
#include <string>
//#include"shared_ptr.h"
#include "unique_ptr.h"
#include"DebugDelete.h"
#include <assert.h>
/*struct Foo {
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
using namespace std ;
int main()
{
    unique_ptr<string> p1(new string("Shengxi-Liu"));
    cout << *p1 << endl ;
      {
        std::cout << "======================\nunique_ptr constructor:\n";
        unique_ptr<Foo> up1;
        unique_ptr<Foo> up1b(nullptr);
        unique_ptr<Foo> up2(new Foo);

        DebugDelete d;
        unique_ptr<Foo, DebugDelete> up3(new Foo, d);
        unique_ptr<Foo, DebugDelete&> up3b(new Foo, d);
        unique_ptr<Foo, DebugDelete> up4(new Foo, DebugDelete());
        unique_ptr<Foo> up5b(std::move(up2));
        unique_ptr<Foo, DebugDelete> up6b(std::move(up3));

        unique_ptr<Foo> up7 = std::move(up5b);
        Foo* fp = up7.release();
        assert(up7.get() == nullptr);
        delete fp;

        up6b.reset(new Foo());
        up6b.reset(nullptr);

        unique_ptr<Fooo> up71(new Fooo(1));
        unique_ptr<Fooo> up72(new Fooo(2));

        up71.swap(up72);

        std::cout << "up71->val:" << up71->GetBar() << std::endl;
        std::cout << "up72->val:" << (up72.get())->GetBar() << std::endl;

        unique_ptr<Foo, D> up8(new Foo(), D());
        D& del = up8.get_deleter();
        del.bar();
    }
}*/
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
    {
        std::cout << "======================\nunique_ptr constructor:\n";
        unique_ptr<Foo> up1;
        unique_ptr<Foo> up1b(nullptr);
        unique_ptr<Foo> up2(new Foo);

        DebugDelete d;
        unique_ptr<Foo, DebugDelete> up3(new Foo, d);
        unique_ptr<Foo, DebugDelete&> up3b(new Foo, d);
        unique_ptr<Foo, DebugDelete> up4(new Foo, DebugDelete());
        unique_ptr<Foo> up5b(std::move(up2));
        unique_ptr<Foo, DebugDelete> up6b(std::move(up3));

        unique_ptr<Foo> up7 = std::move(up5b);
        Foo* fp = up7.release();
        assert(up7.get() == nullptr);
        delete fp;

        up6b.reset(new Foo());
        up6b.reset(nullptr);

        unique_ptr<Fooo> up71(new Fooo(1));
        unique_ptr<Fooo> up72(new Fooo(2));

        up71.swap(up72);

        std::cout << "up71->val:" << up71->GetBar() << std::endl;
        std::cout << "up72->val:" << (up72.get())->GetBar() << std::endl;

        unique_ptr<Foo, D> up8(new Foo(), D());
        D& del = up8.get_deleter();
        del.bar();
    }
}

