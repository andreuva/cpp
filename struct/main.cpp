#include <iostream>

// struct and class are the same thing in C++ (except for default access)
// the default access of a class is private (only members of the class can access it)
// the default access of a struct is public (anyone can access it)
// so if we do not specify the access of a member, it will be private in a class and public in a struct

class Dog {
    std::string name{"Dog"};
};

struct Cat {
    std::string name{"Cat"};
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




    // SIZE OF A CLASS
    // the size of a class is the sum of the size of its members
    std::cout << "Size of Point: " << sizeof(point) << std::endl;
    std::cout << "Size of x: " << sizeof(point.x) << std::endl;
    std::cout << "Size of y: " << sizeof(point.y) << std::endl;

    // if we have pointers (in this case strings are pointers)
    // the size of the class will be the size of the pointer not the size of the string that
    // the pointer points to
    std::cout << "Size of Dog: " << sizeof(dog) << std::endl;

    std::cout << "Size of cat_name: " << sizeof(cat.name) << std::endl;
    std::cout << "Size of Cat: " << sizeof(cat) << std::endl;
    cat.name = "Kitty with a very very very long name";
    std::cout << "Size of cat_name: " << sizeof(cat.name) << std::endl;
    std::cout << "Size of Cat: " << sizeof(cat) << std::endl;



    std::cout << "END" << std::endl;
    return 0;
}