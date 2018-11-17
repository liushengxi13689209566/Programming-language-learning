/*************************************************************************
	> File Name: 迭代器_二分搜索.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 17时43分47秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
/*
 * struct timespec {
2 time_t tv_sec;  //seconds 
3 long tv_nsec; // nanoseconds   納秒
4 };
*/
timespec diff(timespec start, timespec end)
{
    timespec temp;
    if ((end.tv_nsec-start.tv_nsec)<0) {    
        temp.tv_sec = end.tv_sec-start.tv_sec-1;
        temp.tv_nsec = 1000000000 + end.tv_nsec - start.tv_nsec;
    } else {
        temp.tv_sec = end.tv_sec-start.tv_sec;
        temp.tv_nsec = end.tv_nsec-start.tv_nsec;
    }
    return temp;
}
int main(void)
{
    vector<int> ivec{2,3,4,5,7,14,17,186,209};
    auto head= ivec.begin();
    auto rear = ivec.end();
    auto mid = head + (rear - head) / 2 ; 
    int goal =  0 ;
    timespec time1, time2;
    cout << "你想要查找的数字是 ：" << endl;
    cin >> goal ;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);   // 一个进程的时间

     while(mid != rear  && *mid  !=  goal ){
        if(*mid <  goal){ //后半部分
            head = mid + 1  ;
        }
        else {  //前半部分
            rear  = mid  - 1;
        }
        mid = head + (rear - head) / 2 ; 
    }
    if(mid == rear) cout << "没找到"<< endl;
    else           cout << *mid << endl;
    /*while(*head != goal)
        head++;
    cout << *head << endl;*/
    
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
    cout<< "秒数是："<< diff(time1,time2).tv_sec<<"納秒数是："<<diff(time1,time2).tv_nsec<<endl;
    return 0;
}
