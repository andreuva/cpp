#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string_view>

// we can inherite from a class with the protected or private access specifier
// the public one allowed us to mantain the methods and attributes of the base class
// with the same protection in the derived classes
// the protected inheritance shifths the public members to protected members in the derived classes
// the private inheritance shifths everything to private members in the derived classes

class Person{
    friend std::ostream& operator<<(std::ostream& out, const Person& person);
    public:
    
        Person();
        // person copy constructor
        Person(const Person& source);
        Person(std::string_view name, std::string_view surname, int age, std::string_view adress);
        ~Person();

        std::string get_name() const {return name;}
        std::string get_surname() const {return surname;}
        int get_age() const {return age;}

        // setters
        void set_name(std::string_view name) {this->name = name;}
        void set_surname(std::string_view surname) {this->surname = surname;}
        void set_age(int age) {this->age = age;}

    protected:

        std::string get_adress() const {return adress;}    

    private:
        std::string name{"None"};
        std::string surname{"None"};
        std::string adress{"None"};
        int age{0};
};

#endif // PERSON_H