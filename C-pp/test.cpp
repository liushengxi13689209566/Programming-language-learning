/*************************************************************************
	> File Name: test.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年08月15日 星期三 17时23分17秒
 ************************************************************************/

#include <iostream>
using namespace std;
class PTNode {
  friend class PTree;
  private:
    int data;
    int parent;
};
class PTree {
  private:
    int r, n;
  public:
    PTNode *nodes;

    PTree(int t= 0 ) {
      cout << "11111"  << endl;
	  n = t;
	  nodes = new PTNode[n];
    }
	~PTree(){
		cout << "delete .... " << endl;
		delete []nodes;
	}
};

int main(void)
{
	PTree  pt;
	PTree *p = new PTree ;
	//delete p; //析构函数执行（默认析构器是析构函数）
}
