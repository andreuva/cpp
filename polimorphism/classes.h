#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

class Shape {
    public:
        Shape() = default;
        Shape(const std::string& description) : description{description} {count++;}
        ~Shape() = default;

        virtual void draw() const;

        // static members are shared by all the objects of the class
        // static members are not part of the object but the class
        // to not inherit static members we need to declare them as private or override the
        // static members in the derived class
        static int count;
    
    protected:
        std::string description;
};

#endif // SHAPE_H

// now create a class oval that inherits from shape
#ifndef OVAL_H
#define OVAL_H

#include <iostream>
#include <string>

class Oval : public Shape {
    public:
        Oval() = default;
        Oval(double x_radius, double y_radius, const std::string& description)
             : Shape{description}, x_radius{x_radius}, y_radius{y_radius} {count++;}
        ~Oval() = default;

                                // the override keyword is optional and ensures that the method overrides a virtual method from the base class
                                // this is used to avoid errors when the method name is misspelled
                                //  once you override one method you should override all the other methods from the base class
                                // otherwise all the other overloads will be hidden
        virtual void draw() const override;

        static int count;
    protected:
        double get_x_radius() const { return x_radius; }
        double get_y_radius() const { return y_radius; }

    private:
        double x_radius;
        double y_radius;
};

#endif // OVAL_H

// now create a class circle that inherits from oval
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>

class Circle : public Oval {
    public:
        Circle() = default;
        Circle(double radius, const std::string& description)
             : Oval{radius, radius, description} {count++;}
        ~Circle() = default;

        virtual void draw() const override;

        static int count;
};

#endif // CIRCLE_H