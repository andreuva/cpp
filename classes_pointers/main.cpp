#include <iostream>
#include "constants.h"
#include "cylinder.h"


int main() {
    
    // We can create a cylinder object on the stack
    Cylinder c1(10, 20);
    std::cout << "Volume of c1 is " << c1.volume() << std::endl;

    // We can create a cylinder object on the heap through a pointer
    // we need to dereference the pointer to access the object and its methods
    Cylinder *c2 = new Cylinder(6, 18);
    std::cout << "Volume of c2 is " << c2->volume() << std::endl;
    // or also we can use
    std::cout << "Volume of c2 is " << (*c2).volume() << std::endl;


    // we can also manage stack objects through pointers
    Cylinder *c3 = &c1;
    std::cout << "Volume of c3 is " << c3->volume() << std::endl;
    std::cout << "with c3 we can also access the radius of c1: " << c3->radius << std::endl;


    // remember to delete the memory allocated on the heap
    delete c2;

    std::cout << "END" << std::endl;
    return 0;
}