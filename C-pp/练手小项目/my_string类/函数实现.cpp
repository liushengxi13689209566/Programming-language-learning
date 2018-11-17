/*************************************************************************
	> File Name: 函数实现.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月30日 星期六 16时24分40秒
 ************************************************************************/

#include<iostream>
#include"my_string.h"
using namespace std;
My_string::My_string() //string str 
{
    str =  new char[1] ;
    str[0] = '\0';
}
My_string::My_string(const char  *S) //string str("bfb") 
{
    int len = strlen(S) + 1;
    str = new char[len];
    strncpy(str,S,len); //会把'\0'也复制过去
}
My_string::My_string(const My_string &S) //string S2=S1,S2(S1),S3="nwejkdew"
{
    int len = strlen(S.str) + 1 ;
    str = new char[len];
    strncpy(this->str,S.str,len );
}

My_string  My_string::operator + (const My_string &S) 
{ // string S4 = S3 +"wkerjhnwb",S4 = S3 + S2 ;
    char temp[MAXSIZE];
    int len = strlen(this->str) ;
    int k = 0 ;
    for(int i = 0 ;i < len ;++i)
        temp[k++] = this->str[i];
    len = strlen(S.str)  ;
    for(int j = 0 ;j < len  ; ++j )
        temp[k++] = S.str[j];
    temp[k]= '\0';
    return My_string(temp);
}
My_string  My_string::operator + (const char *S) 
{
    My_string temp ;
    int len = strlen(this->str)+ strlen(S);
    delete []temp.str;
    temp.str = new char[len] ;
    strcpy(temp.str,this->str);
    strcat(temp.str,S);
    return temp ;
}
My_string My_string::operator = (const My_string &S)
{
   if( this == &S ) 
       return *this ;
   delete []this->str ;
   int len  = strlen(S.str)+1 ;
   this->str = new char[len];
   strcpy(this->str,S.str);
   return *this;
}
char  My_string::operator [] (unsigned int i  ) 
{
    return this->str[i];
}
bool  My_string::operator == (const My_string &S) 
{
    int i=0;
    int j= 0;
    for(;i< strlen(this->str) && j< strlen(S.str);++i,++j )
    {
        if(this->str[i] != S.str[j] )
            return false ;
    }
    if(i != j)
        return false;
    else 
        return true;
}
bool  My_string::operator <  (const My_string &S)  // 正在开发中 
{
    int i = 0 ;
    int j = 0 ;
    for(;i < strlen(this->str) && j < strlen(S.str) ; ++i , ++j )
    {
        if(this->str[i] >=   S.str[j] )
            return false ;
    }
    if(i > j )
     return false ;
    else 
        return true;   
}
My_string::~My_string()
{
   delete []str ; 
    str = NULL ;
}
unsigned int My_string::getLength()
{
    return strlen(this->str);
}
int My_string::find(char S)
{
    for(int i=0 ; i< strlen(this->str);++i)
    {
        if(this->str[i] == S )
            return i;
    }
    return -100 ;
}
bool My_string::Empty()
{
    if(strlen(this->str) == 0 )
        return true ;
    else 
        return false ;
}
ostream& operator << (ostream& os,My_string &S)//有疑问？？
{
    os  << S.str ;
    return os ;
}
istream& operator >>  (istream& is,My_string &S)
//string 遇到空格 | 回车结束
{
    char temp[MAXSIZE];
    is  >>  temp ;
    int len = strlen(temp)+1 ;
    S.str = new char[len];
    strncpy(S.str,temp,len);
    return is ;
}


