#include <iostream>
#include <string>
#include <vector>
#include "classes.h"

int main() {
    // we can create a shape object
    Shape shape1{"first shape"};
    // an oval object
    Oval oval1{2.0, 3.0, "first oval"};
    // and a circle object
    Circle circle1{4.0, "first circle"};

    // calling methods directly : static binding
    shape1.draw();
    oval1.draw();
    circle1.draw();

    // calling methods through pointers : static binding
    std::cout << std::endl;
    Shape *shape_ptr = &shape1;
    shape_ptr->draw();

    shape_ptr = &oval1;
    shape_ptr->draw();

    shape_ptr = &circle1;
    shape_ptr->draw();

    // calling methods through references : static binding
    // std::cout << std::endl;
    // Shape& shape_ref = shape1;
    // shape_ref.draw();

    // shape_ref = oval1;
    // shape_ref.draw();

    // shape_ref = circle1;
    // shape_ref.draw();

    // all this calls will call the draw method from the base shape class
    // but we want to call the draw method from the derived classes (oval and circle)
    // this can be because we want to do it for an array of objects of different types
    // we can do this by using virtual methods

    // we can create a collection of shapes that will contain all the shapes
    std::cout << std::endl;
    std::cout << "Using a collection of shapes" << std::endl;
    std::vector<Shape*> shapes;
    shapes.push_back(&shape1);
    shapes.push_back(&oval1);
    shapes.push_back(&circle1);

    for (auto shape : shapes) {
        shape->draw();
    }

    // when we create a shape array and we include the derived classes
    // this will strip the derived class part and will only keep the base class part
    // this is called slicing
    std::cout << "using array of shape" <<std::endl;
    Shape shapes_array [] = {shape1, oval1, circle1};

    for (auto shape : shapes_array) {
        shape.draw();
    }

    // but using pointers we can keep the derived class part
    std::cout << "using array of shape pointers" <<std::endl;
    Shape *shapes_array_ptr [] = {&shape1, &oval1, &circle1};

    for (auto& shape : shapes_array_ptr) {
        shape->draw();
    }

    // or if we want we can still call to the parent class method
    std::cout << "using array of shape pointers and calling to the parent class method" <<std::endl;
    for (auto& shape : shapes_array_ptr) {
        shape->Shape::draw();
    }

    // we can print how many objects of each class have been created
    std::cout << std::endl;
    std::cout << "Shape count: " << Shape::count << std::endl;
    std::cout << "Oval count: " << Oval::count << std::endl;
    std::cout << "Circle count: " << Circle::count << std::endl;

    std::cout << "END" << std::endl;
    return 0;
}