/*************************************************************************
	> File Name: 12.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月17日 星期六 20时23分26秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct connection{
	string ip ;
	int port ;
	connection(const string &ip_ ,const int &port_ ):ip(ip_),port(port_){} //连接所需信息
};
struct destination{
	string ip ;
	int port ;
	destination(const string &ip_ ,const int &port_ ):ip(ip_),port(port_){}
	//正在连接什么服务器,即服务器ip ,port
};

connection connection(destination *temp){ //打开连接 
	shared_ptr<connection> pConn(new connection(temp->ip,temp->port) ) ;
	return *pConn ;
}
void disconnect(connection pConn ){ //关闭给定的连接
	cout << "connection close(" << pConn.ip << ":" << pConn.port << ")" <<  endl;	
}
void f(destination &d)
{
    connection conn = connect(&d);
    std::shared_ptr<connection> p(&conn, [](connection *pConn){
		disconnect(*pconn);
	});
    std::cout << "connecting now(" << p.use_count() << ")" << std::endl;
}
int main(void){
	destination dest("202.118.176.67", 3316);
    f(dest);
	return 0 ;
}

