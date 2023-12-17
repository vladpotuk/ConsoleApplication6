#include "Student.h"
#include <iostream>  

int main() {
    Student student1;
    student1.inputData();

    
    std::cout << "Student Name: " << student1.getFullName() << std::endl;
    std::cout << "Birth Date: " << student1.getBirthDate() << std::endl;

    student1.displayData();

    return 0;
}
