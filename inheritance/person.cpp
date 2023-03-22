#include "person.h"

Person::Person(){
    this->name = "Anonymous";
    this->surname = "Person";
    std::cout << "Person default constructor" << std::endl;
}

Person::Person(std::string_view name, std::string_view surname, int age) : name{name}, surname{surname}, age{age} {
    std::cout << "Person constructor" << std::endl;
}

Person::~Person() {
    std::cout << "Person destructor" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Person& person) {
    out << "Person:" << std::endl << "    {name: " << person.name << " " << person.surname << "}" 
        << std::endl << std::endl;
    return out;
}