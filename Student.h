#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string* fullName;
    std::string birthDate;
    std::string contactPhone;
    std::string city;
    std::string country;
    std::string institutionName;
    std::string institutionCity;
    std::string institutionCountry;
    std::string groupNumber;

public:
    inline Student() : fullName(nullptr) {}
    Student(const std::string& name, const std::string& birth, const std::string& phone,
        const std::string& city, const std::string& country, const std::string& institution,
        const std::string& institutionCity, const std::string& institutionCountry,
        const std::string& group);
    Student(const Student& other);  
    Student(Student&& other) noexcept;  

    ~Student();

    void inputData();
    void displayData() const;

    
    inline std::string getFullName() const { return (fullName != nullptr) ? *fullName : ""; }
    inline std::string getBirthDate() const { return birthDate; }
    inline std::string getContactPhone() const { return contactPhone; }
    inline std::string getCity() const { return city; }
    inline std::string getCountry() const { return country; }
    inline std::string getInstitutionName() const { return institutionName; }
    inline std::string getInstitutionCity() const { return institutionCity; }
    inline std::string getInstitutionCountry() const { return institutionCountry; }
    inline std::string getGroupNumber() const { return groupNumber; }

    Student& operator=(const Student& other);
};

#endif 
