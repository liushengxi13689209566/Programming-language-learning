/*************************************************************************
	> File Name: stack.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 14时11分37秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

class HEAP {   //实现堆排序
    public :
    void HeapAdjust(vector<double>  &vec, double parent, double size) {
        double temp = vec[parent]; // temp保存当前父节点
        double child = 2 * parent + 1; // 先获得左孩子
        while (child < size ){
            // 如果有右孩子结点，并且右孩子结点的值大于左孩子结点，则选取右孩子结点
            if (child + 1 < size  && vec[child] < vec[child + 1]) {
                child++;
            }
            // 如果父结点的值已经大于孩子结点的值，则直接结束
            if (temp >= vec[child])
                break;

            // 把孩子结点的值赋给父结点
            vec[parent] = vec[child];
            // 选取孩子结点的左孩子结点,继续向下筛选
            parent = child;
            child = 2 * child + 1;
        }
        vec[parent] = temp;
    }
    void heapSort(vector<double> &list) {

        // 循环建立初始堆

        for (double i = list.size() / 2; i >= 0; i--) {
            HeapAdjust(list, i, list.size());
        }
        // 进行n-1次循环，完成排序
        for (double i = list.size() - 1; i > 0; i--) {
            // 最后一个元素和第一元素进行交换
            double temp = list[i];
            list[i] = list[0];
            list[0] = temp;

            // 筛选 R[0] 结点，得到i-1个结点的堆

            HeapAdjust(list, 0, i);
        }
    }
};

template<class T ,class cont = vector<T> >  // 用 vector 来实现
class priority_queue{
	cont tt ;
	HEAP heap ;
	public:
	T & top(){
        heap.heapSort(tt);
		return tt[0];
	}
	void pop(){  //先按照规则排序，然后移动其余所有元素 ，最后pop_back()
        heap.heapSort(tt);
		for(int i= 0 ;i< tt.size() ;++i){
			tt[i] = tt[i+1];
		}
		tt.pop_back();
	}
	void push(T  temp){
		tt.push_back(temp);	
	}
	int size(){
		return tt.size();
	}
};
int main(void)
{
	priority_queue<double> priority_que ;
	priority_que.push(88.2);
	priority_que.push(56.5);
	priority_que.push(99.6);
	priority_que.pop();
	cout << "1,priority_que.top() ==  "  << priority_que.top()  << endl ;
	
	priority_que.push(44);

	cout << "2,priority_que.top() ==  "  << priority_que.top()  << endl ;
	cout << "3,priority_que.size() ==  "  << priority_que.size()  << endl ;
	return 0;
}

