#include "classes.h"

int Shape::count = 0;
int Oval::count = 0;
int Circle::count = 0;

void Shape::draw() const {
    std::cout << "Shape::draw() called." << std::endl << "Drawing a " << description << std::endl  << std::endl;
}

void Oval::draw() const{
    std::cout << "Oval::draw() called." << std::endl << "Drawing a " << description;
    std::cout << " with x_radius = " << this->x_radius << " and y_radius = " << this->y_radius << std::endl  << std::endl;
}

void Circle::draw() const{
    std::cout << "Circle::draw() called." << std::endl << "Drawing a " << description  << std::endl;
    std::cout << " with radius = " << this->get_x_radius() << std::endl  << std::endl;
}