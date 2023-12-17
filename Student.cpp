#include "Student.h"
#include <iostream>


Student::Student(const std::string& name, const std::string& birth, const std::string& phone,
    const std::string& city, const std::string& country, const std::string& institution,
    const std::string& institutionCity, const std::string& institutionCountry,
    const std::string& group)
    : fullName(new std::string(name)), birthDate(birth), contactPhone(phone), city(city), country(country),
    institutionName(institution), institutionCity(institutionCity), institutionCountry(institutionCountry),
    groupNumber(group) {
}

Student::Student(const Student& other)
    : fullName((other.fullName != nullptr) ? new std::string(*(other.fullName)) : nullptr),
    birthDate(other.birthDate), contactPhone(other.contactPhone), city(other.city), country(other.country),
    institutionName(other.institutionName), institutionCity(other.institutionCity),
    institutionCountry(other.institutionCountry), groupNumber(other.groupNumber) {
}

Student::Student(Student&& other) noexcept
    : fullName(other.fullName), birthDate(other.birthDate), contactPhone(other.contactPhone),
    city(other.city), country(other.country), institutionName(other.institutionName),
    institutionCity(other.institutionCity), institutionCountry(other.institutionCountry),
    groupNumber(other.groupNumber) {
    other.fullName = nullptr;  
}

Student::~Student() {
    delete fullName;
}

Student& Student::operator=(const Student& other) {
    if (this != &other) {
        delete fullName;  

        
        fullName = (other.fullName != nullptr) ? new std::string(*(other.fullName)) : nullptr;
        birthDate = other.birthDate;
        contactPhone = other.contactPhone;
        city = other.city;
        country = other.country;
        institutionName = other.institutionName;
        institutionCity = other.institutionCity;
        institutionCountry = other.institutionCountry;
        groupNumber = other.groupNumber;
    }
    return *this;
}

void Student::inputData() {
    std::cout << "Enter Full Name: ";
    std::getline(std::cin, *fullName);
    std::cout << "Enter Birth Date: ";
    std::getline(std::cin, birthDate);
   
}

void Student::displayData() const {
    std::cout << "Full Name: " << (fullName != nullptr ? *fullName : "") << std::endl;
    std::cout << "Birth Date: " << birthDate << std::endl;
}
