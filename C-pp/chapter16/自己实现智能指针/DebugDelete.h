/*************************************************************************
	> File Name: DebugDelete.h
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月05日 星期二 15时49分31秒
 ************************************************************************/

#ifndef _DEBUGDELETE_H
#define _DEBUGDELETE_H
class DebugDelete{ // 我们在这里自定义一个删除器
public:
	DebugDelete(std::ostream &s= std::cerr):os(s){  }
	template<typename T>
	void operator()(T *p) const{
		os<< " DegbugDelete..... " << std::endl ;
		delete  p ;
	}
private:
	std::ostream &os ;
};
#endif
