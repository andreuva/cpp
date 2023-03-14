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

        // this is the constructor that the compiler creates by default
        // it is called when we create an object of the class
        // Cylinder() {} // empty constructor that just give the default values to the member variables
        // or
        // Cylinder() = default; // this is the same as the empty constructor if we add a constructor with parameters

    public:
        // member functions
        double volume() {
            return 3.14159 * radius * radius * height;
        }

        double surface_area() {
            return 2 * 3.14159 * radius * (radius + height);
        }
};

// we can also make a class with a constructor that initializes the member variables when the object is created
// it has no return type and it has the same name as the class. It is posible to have parameters in the constructor or not
// we can have more than one constructor with different parameters and the compiler will choose the correct one when we create the object
// we can see this in a sphere class
class Sphere{
    private:
        // member variables private (good practice if you want to control the access to the data)
        double radius{-1};

    public:
        // constructors have to be public
        // default constructor
        Sphere() {
            // initialize the radius to 1
            radius = 1;
        }

        // constructor with parameter
        // the parameters can be passed by value, by reference or by pointer
        Sphere(double radius) {
            this->radius = radius;
        }

        // member functions
        double volume() {
            return 4.0/3.0 * 3.14159 * radius * radius * radius;
        }

        double surface_area() {
            return 4 * 3.14159 * radius * radius;
        }

        // to have acces to the private member variables we can create public functions that return the value of the private member variables
        // this are called getters
        double get_radius() {
            return radius;
        }

        // and we can also create public functions that set the value of the private member variables
        // this are called setters
        void set_radius(double radius) {
            this->radius = radius;
        }

        // setters and geters are a good practice to control the access to the data and must be public
};


int main() {
    // create a cilinder object
    Cylinder cylinder1;
    // set the radius and height
    cylinder1.radius = 5.0;
    cylinder1.height = 7.0;

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