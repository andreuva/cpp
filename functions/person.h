#ifndef PERSON_H
#define PERSON_H

#include <iostream>

// define the Person class

class person{
public:
    person(const std::string &names_param, int age_param);

    void print_info() const{
        std::cout << "Name: " << full_name << std::endl;
        std::cout << "Age: " << age << std::endl << std::endl;
    }
private:
    std::string full_name;
    int age;
public:
    // static variable declaration
    static int person_count;
};

#endif // PERSON_H