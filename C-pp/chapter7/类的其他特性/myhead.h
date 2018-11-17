/*************************************************************************
	> File Name: myhead.h
	> Author: 
	> Mail: 
	> Created Time: 2017年12月23日 星期六 14时58分36秒
 ************************************************************************/

#ifndef _MYHEAD_H
#define _MYHEAD_H
#include<string>
#include<iostream>
#include<vector>
class Screen ;
class linux_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type ;  //size_type 下标类型
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens  ;
};
class Screen{
public:
    //typedef std::string::size_type pos ;

    using  pos = std::string::size_type  ;

    Screen() =  default ;

    Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' ')  {}

    Screen(pos ht,pos wd,char ch):height(ht),width(wd),contents(ht*wd,ch )  {}
    char get() const {return contents[cursor] ;}
    void cal_count() const { ++access_ctr ;}

    inline char get(pos ht,pos wd) const ;
    Screen &move(pos r,pos c);
    Screen &set(char ch) ;
    Screen &set(pos r,pos c,char ch);
    const Screen &display(std::ostream &output) const ;
    Screen &display(std::ostream & output)  ;
    friend  class  linux_mgr ;
    Screen::pos  size() const ;
private:
    pos cursor; //光标
    pos height = 0;
    pos width = 0;
    std::string contents ;  //内容
    mutable size_t access_ctr ;
    void do_display(std::ostream &output) const  ;
};
#endif
