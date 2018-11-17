/*************************************************************************
	> File Name: myhead.h
	> Author: 
	> Mail: 
	> Created Time: 2018年04月11日 星期三 17时11分44秒
 ************************************************************************/

#ifndef _MYHEAD_H
#define _MYHEAD_H
#include<iostream>
#include<string>
#include<set>
#include<vector>

class Folder ;
class Message {
	friend class Folder ;
	friend void swap(Message &,Message &) ;
public:
	explicit Message(const std::string &str=""):contents(str){ }
	//拷贝控制成员 ,用来管理指向本 Message 的指针
	//拷贝构造函数
	Message(const Message &);
	//拷贝赋值运算符
	Message& operator=(const Message &);
	~Message() ;
	//从给定的 Folder 中添加/删除 Message 
	void save(Folder & );
	void remove(Folder &);

	// //在该目录下添加一条 Message 或者 删除一条 Message
	void addFolder(Folder *m) { folders.insert(m); }
    void remFolder(Folder *m) { folders.erase(m); }
    void show() ;

private:
    std::string contents ; // 实际消息文本
    std::set<Folder *> folders ; //目录指针
    
    void add_to_Folders(const Message & );
	void remove_form_Folders() ;

};
void swap(Message &lhs ,Message &rhs) ;

class Folder { 
	friend class Message ;
	friend void swap(Folder &,Folder &) ;
public:
	Folder() = default ;
	Folder(const Folder & );
	Folder& operator=(const Folder &);
	~Folder() ; 
	 void show() ;
	 void save(Message &TT) ;
	  // //在该目录下添加一条 Message 或者 删除一条 Message
	void addMsg(Message *m) { messages.insert(m); }
    void remMsg(Message *m) { messages.erase(m); }
private:
    std::set<Message *> messages ;

    void add_to_Message(const Folder & ) ;
	void remove_form_Message() ; 
};
void swap(Folder &,Folder &) ;
#endif
