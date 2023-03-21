// use the include guard to make sure the header file is only included once
#ifndef CYLINDER_H

#define CYLINDER_H
// include the constant declaration header
#include "constants.h"

// Definition of the Cylinder class
class Cylinder{
    public:

        double radius{0.0};
        double height{0.0};
    
    public:
        // member functions
        Cylinder(double radius, double height);
        double volume();
        double surface_area();
};

class Sphere{
    private:
        double radius{-1};
    public:
        Sphere();
        Sphere(double radius);
        double volume();
        double surface_area();
        double get_radius();
        void set_radius(double radius);
};
// end of the include guard
#endif