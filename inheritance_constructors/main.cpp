#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main() {


    // create a new person
    Person person1{"John", "Doe", 30, "123 Main Street"};
    std::cout << person1 << std::endl;

    // create a new engineer and print it
    Engineer engineer1{"John", "Doe", 30, "123 Main Street", "Google", "Software Engineer"};
    std::cout << engineer1 << std::endl;

    // create a new engineer with default person
    Engineer engineer2{"Google", "Software Engineer"};
    std::cout << engineer2 << std::endl;
    // we can see that the default constructor of the base class is called
    // if we remove the default constructor of the base class, we will get an error

    // we can also change the name of the company
    engineer2.set_name("Microsoft");
    std::cout << engineer2 << std::endl;

    // but if we want to change the name of the person we have to use the scope resolution operator
    engineer2.Person::set_name("Will");
    std::cout << engineer2 << std::endl;

    // we can also create a new default civil engineer
    CivilEngineer civilEngineer1;
    std::cout << civilEngineer1 << std::endl;

    // also a new civil engineer with default person
    CivilEngineer civilEngineer2{"Google", "Software Engineer", "Civil"};
    std::cout << civilEngineer2 << std::endl;

    // and a new civil engineer with all the parameters
    CivilEngineer civilEngineer3{"John", "Doe", 30, "123 Main Street", "Google", "Software Engineer", "Civil"};
    std::cout << civilEngineer3 << std::endl;


    // we can also copy construct an engineer
    Engineer engineer3{engineer1};
    std::cout << engineer3 << std::endl;

    // we can also copy construct a engeneer with a person
    Engineer engineer4{person1, "Google", "DevOps"};
    std::cout << engineer4 << std::endl;

    // we can even create a new civil engineer with a copy constructor
    CivilEngineer civilEngineer4{civilEngineer3};
    std::cout << civilEngineer4 << std::endl;

    // we can also copy construct a civil engineer with an engineer
    CivilEngineer civilEngineer5{engineer1, "Civil"};
    std::cout << civilEngineer5 << std::endl;

    std::cout << "END" << std::endl;
    return 0;
}