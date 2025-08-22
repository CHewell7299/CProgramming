#include <iostream>
#include <string>

int main(){

    int age=2;
    double gpa = 4.0;
    char grade = 'A';
    std::string name = "Mike"; //string requires <string> header
    bool isActive = true;

    //scan input
    std::cout << "Enter your name " << std::endl;
    getline(std::cin, name);
    std::cout << "Enter your age and GPA: " << std::endl;
    std::cin >> age >> gpa;
    
    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << grade << std::endl;
    
    return 0;
}