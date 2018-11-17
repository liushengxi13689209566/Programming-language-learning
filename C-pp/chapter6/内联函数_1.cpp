/*************************************************************************
	> File Name: 内联函数_1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月09日 星期六 14时05分14秒
 ************************************************************************/

#include<iostream>
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
inline void  fun1(int temp)
{
    for(int i = 0 ;i != 10000 ;++i)
        ;
    
}
int main(void)
{
    timespec time1, time2;
   
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);   // 一个进程的时间

   for(int i= 0;i< 400000;++i)
        fun1(10);


    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
    cout<< "秒数是："<< diff(time1,time2).tv_sec<< " 纳秒数是 ："<< diff(time1,time2).tv_nsec<<endl;


}
