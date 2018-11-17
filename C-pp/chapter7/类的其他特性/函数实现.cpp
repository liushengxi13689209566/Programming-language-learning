/*************************************************************************
	> File Name: 函数实现.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月23日 星期六 15时16分46秒
 ************************************************************************/

#include"myhead.h"
using namespace std;
char Screen::get(pos r,pos c) const
{
    pos row = r * width ;
    return contents[row +c ];
}
Screen &Screen::move(pos r,pos c)
{
    pos row = r * width ;
    cursor = row + c;
    return *this ;
}
Screen &Screen::set(char ch)
{
    contents[cursor] = ch;
    return *this;
}
Screen &Screen::set(pos r,pos c,char ch)
{
    contents[r*width+c] = ch ;
    return *this;
}
Screen &Screen::display(std::ostream &output)
{
    do_display(output);
    return *this;
}
const Screen &Screen::display(std::ostream &output) const 
{
    do_display(output);
    return *this;
}
void Screen::do_display(std::ostream &output) const 
{
    output << "cursor height width contents access_ctr " << endl ;
    output << cursor << endl <<  
        height << endl << width << endl <<  contents   
      <<  endl  << access_ctr  << endl ;
}
void linux_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height*s.width,' ');
}

Screen::pos Screen::size() const 
{
    return height*width ;
}
