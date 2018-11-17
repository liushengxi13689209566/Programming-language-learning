/*************************************************************************
	> File Name: 虚函数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月09日 星期五 15时51分58秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std ;
class pet{
public:
    pet(string pet_name ){
        name = pet_name ;
    }
    void eat() {
        cout << name << "正在吃东西 "  << endl ;
    }
    void sleep() {
        cout << name << "正在睡觉 "  << endl ;
    }
    virtual  void play() {   //感觉加了 virtual 就是让程序往深里找
        cout << name << "正在玩儿"  << endl ;
    }
protected:
    string name ;
};
class cat : public pet 
{
public:
    cat(string cat_name):pet(cat_name){}
    void climb() {
        cout << name << "正在爬树 "  << endl ;
    }
    void play() {
        pet::play();
        cout << name << "正在完毛线球  "  << endl ;
    }
};
class dog : public pet 
{
    public:
    dog(string dog_name):pet(dog_name){}
    void bark(){
        cout << name << "旺 ～ 旺 ～ "  << endl ;
    }
    void play(){
        pet::play();
        cout << name << "正在追赶那只该死的猫  "  << endl ;   
    }
};
int main(void){
    pet *ct = new cat("加菲");
    pet *dg = new dog("刘生玺");

    ct->eat();
    ct->sleep();
    ct->play();


    dg->eat();
    dg->sleep();
    dg->play();
    
    delete ct ;
    delete dg ;

	return 0 ;
}

