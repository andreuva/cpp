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

        // we can create a constructor that only initializes the base class inheriting base class constructor
        using Person::Person;
        /*
        this will create a constructor that will do something like
        Engineer(std::string_view name, std::string_view surname, int age, std::string_view adress)
            : Person(name, surname, age, adress) {}

        it will be inherit with the same access specifier it had in the base class
        copoy constructors are not inherited but you will not notice it because the compiler will create one for you
        otherwise it will import all the other base class constructors
        */

        Engineer(std::string_view company, std::string_view position);
        Engineer(std::string_view name, std::string_view surname, int age, std::string_view adress, std::string_view company, std::string_view position);
        ~Engineer();

        std::string get_company() const {return company;}
        std::string get_position() const {return position;}

        // setters
        // we can set a setter that overrides the name of a base clase method
        void set_name(std::string_view company) {this->company = company;}
        /* 
        now calling set_name on an engineer class will call the set_name method of the engineer class
        and not the one of the base class
        we can continue to call the base class method by using the scope resolution operator
        this->Person::set_name(name);
        or from outside the class
        engineer.Person::set_name(name);
        */
        void set_position(std::string_view position) {this->position = position;}

    private:
        std::string company{"None"};
        std::string position{"None"};
};

#endif // ENGINEER_H