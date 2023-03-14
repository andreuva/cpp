#include <iostream>

// in cpp we can create a class, that is a blueprint for an object that can have data and functions
// the data is called member variables and the functions are called member functions
// For example we can create a class that represents a ciliinder with a radius and a height
// and a function that calculates the volume of the Cylinder and other for the surface area

class Cylinder{
    // take note that members of a class are private by default
    public:
        // member variables (data) initialized to 0
        double radius{0.0};
        double height{0.0};
        // member variables can be stack variables or heap variables (pointers) but can not be references
        // because references must be initialized when they are created

    public:
        // member functions
        double volume() {
            return 3.14159 * radius * radius * height;
        }

        double surface_area() {
            return 2 * 3.14159 * radius * (radius + height);
        }
};

int main() {
    // create a cilinder object
    Cylinder cylinder1;
    // set the radius and height
    cylinder1.radius = 5.0;
    cylinder1.height = 7.0;

    // print the volume and surface area
    std::cout << "Volume: " << cylinder1.volume() << std::endl;
    std::cout << "Surface Area: " << cylinder1.surface_area() << std::endl;

    std::cout << "END" << std::endl;
}