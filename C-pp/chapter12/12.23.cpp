#include <iostream>
#include <string>
#include <string.h>

int main()
{
    // dynamically allocated array of char
    char *concatenate_string = new char[strlen("hello " "world") + 1]();
	std::cout << concatenate_string << std::endl;
	
    strcat(concatenate_string, "hello ");
	std::cout << concatenate_string << std::endl;	

    strcat(concatenate_string, "world");
    std::cout << concatenate_string << std::endl;
    delete [] concatenate_string;
    
    // std::string
    std::string str1{ "hello " }, str2{ "world" };
    std::cout << str1 + str2 << std::endl;
}