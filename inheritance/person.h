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

    private:
        std::string name{"None"};
        std::string surname{"None"};
        int age{0};
};

#endif // PERSON_H