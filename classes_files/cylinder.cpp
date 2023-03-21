#include "cylinder.h"

// Definition of Cylinder class and Sphere class in cylinder.h
// this way un cylinder.h we can define several members and methods
// and here we can actually define the methods of the class

double Cylinder::volume(){
    return PI * radius * radius * height;
}

double Cylinder::surface_area(){
    return 2 * PI * radius * (radius + height);
}

// We can also move the constructors of the Sphere class to this file
// and we can also move the getters and setters to this file
Sphere::Sphere(){
    radius = 1;
}

Sphere::Sphere(double radius){
    this->radius = radius;
}

double Sphere::volume(){
    return 4.0/3.0 * PI * radius * radius * radius;
}

double Sphere::surface_area() {
    return 4 * PI * radius * radius;
}

double Sphere::get_radius() {
    return radius;
}

void Sphere::set_radius(double radius) {
    this->radius = radius;
}