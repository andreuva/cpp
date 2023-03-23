#ifndef ENGINEER_H
#define ENGINEER_H

#include <iostream>
#include <string_view>
#include "person.h"

class Engineer : public Person{
    friend std::ostream& operator<<(std::ostream& out, const Engineer& engineer);
    public:
        Engineer();
        // copy constructor for the engineer class
        Engineer(const Engineer& source);
        // we can also make a constructor that takes a person object as a parameter
        Engineer(const Person& source, std::string_view company, std::string_view position);

        Engineer(std::string_view company, std::string_view position);
        Engineer(std::string_view name, std::string_view surname, int age, std::string_view adress, std::string_view company, std::string_view position);
        ~Engineer();

        std::string get_company() const {return company;}
        std::string get_position() const {return position;}

        // setters
        void set_company(std::string_view company) {this->company = company;}
        void set_position(std::string_view position) {this->position = position;}

    private:
        std::string company{"None"};
        std::string position{"None"};
};

#endif // ENGINEER_H