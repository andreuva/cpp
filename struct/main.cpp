#include <iostream>

// struct and class are the same thing in C++ (except for default access)
// the default access of a class is private (only members of the class can access it)
// the default access of a struct is public (anyone can access it)
// so if we do not specify the access of a member, it will be private in a class and public in a struct

class Dog {
    std::string name{ "Dog" };
};

struct Cat {
    std::string name{ "Cat" };
};

// a common practice is to use struct for data only and class for data and functions
// for example a point in 2D space is just a data structure
struct Point {
    int x;
    int y;
};

int main() {

    Dog dog;
    Cat cat;

    // here we can access the name member of the cat struct but not the dog class
    std::cout << cat.name << std::endl;
    // std::cout << dog.name << std::endl; // error: 'class Dog' has no member named 'name'

    // you can even change the name of the cat struct
    cat.name = "Kitty";
    std::cout << cat.name << std::endl;

    // of course we can change the access of the members of a class or struct with public and private keywords

    // we can also create a point object
    Point point;
    point.x = 10;
    point.y = 20;

    std::cout << "(" << point.x << ", " << point.y << ")" << std::endl;

    std::cout << "END" << std::endl;
    return 0;
}