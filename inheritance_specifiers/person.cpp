#include "person.h"

Person::Person(){
    std::cout << "Person (default) created" << std::endl;
} 

Person::Person(std::string_view name, std::string_view surname, std::string_view adress, int age){
    this->name = name;
    this->surname = surname;
    this->adress = adress;
    this->age = age;
    std::cout << "Person created" << std::endl;
}

Person::~Person(){
    std::cout << "Person destroyed" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Person& person){
    out << "Name: " << person.name << std::endl;
    out << "Surname: " << person.surname << std::endl;
    out << "Adress: " << person.adress << std::endl;
    out << "Age: " << person.age << std::endl << std::endl;
    return out;
}
