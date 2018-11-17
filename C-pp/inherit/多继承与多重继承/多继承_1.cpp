/*************************************************************************
	> File Name: 多继承.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月12日 星期一 20时19分37秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Person{
    public:
    Person(string Person_name): name(Person_name){}
    protected:
    string name  ;
};
class Student :public Person 
{
    public:
    Student(string Student_name , string theclass):Person(Student_name)
    {
        classes = theclass ;
    }
    void introduce(){
        cout << "我是学生" << name << "，我在" << classes << "上课 " << endl ;
    }
    protected:
    string classes ;
};
class Teacher: public Person
{
    public:
    Teacher(string Teacher_name ,string theclass) : Person(Teacher_name)
    {
        classes = theclass ;
    }
    void introduce() {
           cout << "我是老师" << name << "，我在" << classes << "教书 " << endl ;
    }
    protected:
    string classes ;
};
class TeacherStudent:public Student,public Teacher 
{
    public:
    TeacherStudent(string thename ,
            string classTeacher,
            string classStudent):Teacher(thename,classTeacher),Student(thename,classStudent)
    {
    }
    void introduce(){
        cout << "我是助教老师" << Student::name << "，我在" << Teacher::classes << "教书 " << endl ;
        cout << " 同时，我也是学生 " << Student::name << "，我在" << Student::classes << "学习 " << endl ;
    }
};
int main(void){
    Teacher teacher("liushengxi","C language ");
    Student student("hahhaha","C++ language ");
    TeacherStudent teacherstudent("JJJJJ","JAVA" ,"C++") ;

    teacher.introduce();
    student.introduce();
   teacherstudent.introduce();

	return 0 ;
}

