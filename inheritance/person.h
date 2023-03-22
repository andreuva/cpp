#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <string_view>


class Person{
    friend std::ostream& operator<<(std::ostream& out, const Person& person);
    public:
        Person();
        Person(std::string_view name, std::string_view surname, int age);
        ~Person();

        // getters
        std::string get_name() const {return name;}
        std::string get_surname() const {return surname;}

        // setters
        void set_name(std::string_view name) {this->name = name;}
        void set_surname(std::string_view surname) {this->surname = surname;}
        void set_age(int age) {this->age = age;}

    private:
        std::string name{"None"};
        std::string surname{"None"};
        int age{0};

    // Here we can define a protected member wich can be accessed by the derived classes but not by the outside world
    protected:
        std::string nickname{"None"};
};

#endif // PERSON_H