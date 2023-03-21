#include <iostream>
// include the constant declaration header
#include "constants.h"
// include the header file with the class declaration
#include "cylinder.h"


int main() {
    // create a cilinder object
    Cylinder cylinder1;
    // set the radius and height
    cylinder1.radius = 10.0;
    cylinder1.height = 10.0;

    std::cout << "Cylinder 1" << std::endl;
    // print the volume and surface area
    std::cout << "Volume: " << cylinder1.volume() << std::endl;
    std::cout << "Surface Area: " << cylinder1.surface_area() << std::endl << std::endl;

    // create a sphere object with the default constructor
    Sphere sphere1;

    std::cout << "Sphere 1" << std::endl;
    // print the volume and surface area
    std::cout << "Volume: " << sphere1.volume() << std::endl;
    std::cout << "Surface Area: " << sphere1.surface_area() << std::endl << std::endl;

    // create a sphere object with the constructor with parameter
    Sphere sphere2(5.0);
    std::cout << "Sphere 2" << std::endl;
    // print the volume and surface area
    std::cout << "Volume: " << sphere2.volume() << std::endl;
    std::cout << "Surface Area: " << sphere2.surface_area() << std::endl << std::endl;

    // we can use the getters and setters to access the private member variables
    std::cout << "Sphere 2" << std::endl;
    std::cout << "Radius: " << sphere2.get_radius() << std::endl;
    sphere2.set_radius(10.0);
    std::cout << "Radius: " << sphere2.get_radius() << std::endl;

    std::cout << "END" << std::endl;
}