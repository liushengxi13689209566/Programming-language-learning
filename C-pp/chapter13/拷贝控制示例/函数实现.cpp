/*************************************************************************
	> File Name: 函数实现.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月11日 星期三 17时13分14秒
 ************************************************************************/

#include"myhead.h"
using namespace std ;
//将本 Messgae 添加到指向m的 Folder 中 
void Message::add_to_Folders( const Message &m ) {
	for(auto f : m.folders )
		f->addMsg(this);
}
void Folder::add_to_Message( const Folder &f) {  
	for(auto m :f.messages )
		m->addFolder( this );
}

void Message::remove_form_Folders( ){
	for(auto f : folders )
		f->remMsg(this);
}
void Folder::remove_form_Message( ) {
	for(auto f : messages )
		f->remFolder( this );
}


void Message::show( ){
	cout << "\t\t" << contents  ;
	cout << "\t\t" << folders.size()  << endl ;
}
void Folder::show() {
	cout << "\t\t" << messages.size()  << endl ;
}

void Folder::save( Message &TT) {
	addMsg(&TT);
}
Message::Message(const Message &m){
    contents = m.contents ;
    folders = m.folders ;
	add_to_Folders(m) ;
}
//拷贝赋值运算符 
Message& Message::operator=(const Message &rhs){
	remove_form_Folders();
	contents = rhs.contents ;
	folders = rhs.folders  ;
	add_to_Folders(rhs) ;
	return *this ;
}
Message::~Message() { //析构函数
	remove_form_Folders() ;
}
//从给定的 Folder 中添加/删除 Message 
void Message::save(Folder &f){
	folders.insert(&f) ; //将 f 加入我们的 Message 中
	f.addMsg(this) ;  //将 this 对象加入 f 中
} 
void Message::remove(Folder &f){
	folders.erase(&f) ; 
	f.remMsg(this);
}


void swap(Message &lhs ,Message &rhs){
	using std::swap ;
	for(auto f: lhs.folders)
		f->remMsg(&lhs);
	for(auto f: rhs.folders)
		f->remMsg(&rhs);
	swap(lhs.contents , rhs.contents);
	swap(lhs.folders , rhs.folders);
	for(auto f: lhs.folders)
		f->addMsg(&lhs);
	for(auto f: rhs.folders)
		f->addMsg(&rhs);
}


Folder::Folder(const Folder &f){ // 目录复制
	messages = f.messages ;
	add_to_Message(f) ; //将该目录加入到 Messagees 中 
}
Folder& Folder::operator=(const Folder &rhs){
	remove_form_Message();
	messages = rhs.messages ;
	add_to_Message(rhs);
	return *this ;
}
Folder::~Folder(){
	remove_form_Message();	
}


void swap(Folder  &lhs ,Folder &rhs ){
	using std::swap ;
	for(auto f: lhs.messages )
		f->remFolder( &lhs );
	for(auto f: rhs.messages)
		f->remFolder(&rhs);
	swap(lhs.messages , rhs.messages );
	for(auto f: lhs.messages)
		f->addFolder(&lhs);
	for(auto f: rhs.messages)
		f->addFolder(&rhs);
}



