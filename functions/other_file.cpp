#include "person.h"

// in the main we already defined the global variable x, so we can't define it again in this file (error)
// int x = 5;

// in main we have already declared and defined the function add, so we can't declare it again in this file (error)
// if we comment the definition of the function add in main, we can declare it again in this file and the program will work
double add(double a, double b) {
    return a + b;
}

// we can have different definitions of a class in different files (no error)
struct Point {
    double m_x;
    double m_y;
};

// initialize the static variable person_count
int person::person_count = 0;

// define the Person constructor outside the class and file
person::person(const std::string &names_param, int age_param)
    : full_name{names_param}, age{age_param}{
    // increment the static variable person_count
    ++person_count;
};