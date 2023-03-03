#include <iostream>
#include "person.h"

// one definition rule
// the one definition rule states that there can only be one definition of a variable in a program
// this applies to global variables, local variables, and functions and also separate compilation units
// this means that if you have a variable in a header file, you can only define it once in a cpp file

// this is a global variable
double x = 5;
// this is the declaration of a function
double add(double a, double b);

// one definition rule in the context of classes states that we can have different definitions of a class in different files
struct Point {
    double m_x{};
    double m_y{};
};
// the rule is that we can not have two definitions in the same translation unit.


int main() {

    // we use the scope resolution operator to access the global variable x and add it to 5
    double result = add(x, 5);
    std::cout << result << std::endl << std::endl;

    // we can define a point in the main function
    Point p1;
    // and print the coordinates
    std::cout << p1.m_x << ", " << p1.m_y << std::endl << std::endl;

    // we can also defina a person in the main function
    person p2("John", 20);
    // and print the person's info
    p2.print_info();
    // print the number of persons
    std::cout << "Number of persons: " << person::person_count << std::endl << std::endl;

    std::cout << "END" << std::endl;
    return 0;
}

// this is the definition of the function add
// double add(double a, double b) {
//     return a + b;
// }