/*************************************************************************
	> File Name: 奇偶打印.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2019年04月09日 星期二 09时02分58秒
 ************************************************************************/

#include <bits/stdc++.h>
using namespace std;

std::mutex data_mutex;
std::condition_variable data_var;
bool tag = false;

void printeven() //偶数
{
    std::unique_lock<std::mutex> lk(data_mutex);
    for (int i = 0; i < 100; i += 2)
    {
        data_var.wait(lk, [] { return tag; });
        std::cout << std::this_thread::get_id() << ": " << i << " tagEven= " << tag << std::endl;
        tag = false;
        data_var.notify_one();
    }
}
void printodd()
{
    std::unique_lock<std::mutex> lk(data_mutex);
    for (int i = 1; i < 100; i += 2)
    {
        std::cout << std::this_thread::get_id() << ": " << i << " labelB= " << tag << std::endl;
        data_var.notify_one();
        tag = true;
        data_var.wait(lk, [] { return !tag; });
    }
}
int main(void)
{
    std::thread t1(printeven);
    std::thread t2(printodd);
    t1.join();
    t2.join();
    return 0;
}
