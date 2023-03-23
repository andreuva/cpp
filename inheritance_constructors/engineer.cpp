#include "engineer.h"

Engineer::Engineer(){
    std::cout << "Engineer (default) created" << std::endl;
}

// we can also define a copy constructor for the engineer class
Engineer::Engineer(const Engineer& source)
    : Person{source}, company{source.company}, position{source.position} {
    std::cout << "Engineer (copy) created" << std::endl;
}

// we can also make a constructor that takes a person object as a parameter
Engineer::Engineer(const Person& source, std::string_view company, std::string_view position)
    : Person{source} {
    this->company = company;
    this->position = position;
    std::cout << "Engineer created with person" << std::endl;
}

Engineer::Engineer(std::string_view name, std::string_view surname, int age, std::string_view adress, std::string_view company, std::string_view position)
    : Person{name, surname, age, adress} {
    // this->name = name; //THIS WILL THROW AN ERROR BECAUSE THE PRIVATE MEMBERS OF THE BASE CLASS ARE NOT ACCESSIBLE
    // this->surname = surname;
    // this->adress = adress;
    // this->age = age;
    this->company = company;
    this->position = position;
    std::cout << "Engineer created" << std::endl;
}

// we can also make a constructor that not explicitly initialice the base class
Engineer::Engineer(std::string_view company, std::string_view position){
    this->company = company;
    this->position = position;
    std::cout << "Engineer created with default person" << std::endl;
}

Engineer::~Engineer(){
    std::cout << "Engineer destroyed" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Engineer& engineer){
    out << "Name: " << engineer.get_name() << std::endl;
    out << "Surname: " << engineer.get_surname() << std::endl;
    out << "Adress: " << engineer.get_adress() << std::endl;
    out << "Age: " << engineer.get_age() << std::endl;
    out << "Company: " << engineer.company << std::endl;
    out << "Position: " << engineer.position << std::endl << std::endl;
    return out;
}

