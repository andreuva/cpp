#include <iostream>

// Here we are going to explain the difference between passing arguments by value, by pointer and by reference
// We are going to use the same function to explain the difference
// if we pass by value, the function will receive a copy of the argument, it will be
// like a variable that is local to the function
void pass_by_value(int x) {
    std::cout << "x = " << x << std::endl;
    x = 99;
    std::cout << "x = " << x << std::endl;
}

// if we pass by pointer, the function will receive the address of the argument
// if we want to use it, we need to dereference it like a pointer
void pass_by_pointer(int* x) {
    std::cout << "x = " << x << " *x = " << *x << std::endl;
    *x = 66;
    std::cout << "x = " << x << " *x = " << *x  << std::endl;
}

// if we pass by reference, the function will receive a reference to the argument
// it can be used as a normal variable and it will affect the original argument
void pass_by_reference(int &x) {
    std::cout << "x = " << x << std::endl;
    x = 33;
    std::cout << "x = " << x << std::endl;
}

int main() {

    // if we pass the argument by value, the function will receive a copy of the argument
    // the function will not be able to change the value of the argument
    int a = 5;
    std::cout << "a = " << a << std::endl;
    pass_by_value(a);
    std::cout << "Pass by value: a = " << a << std::endl << std::endl;

    // if we pass the argument by pointer, the function will receive the address of the argument
    // the function will be able to change the value of the argument
    int b = 10;
    std::cout << "b = " << b << std::endl;
    pass_by_pointer(&b); // we need to pass the address of the argument not the argument itself
    std::cout << "Pass by pointer: b = " << b << std::endl << std::endl;

    // if we pass the argument by reference, the function will receive a reference to the argument
    // the function will be able to change the value of the argument since a reference is a true alias to the argument
    int c = 15;
    std::cout << "c = " << c << std::endl;
    pass_by_reference(c); // we need to pass the argument itself like a normal variable (the compiler will convert it to a reference)
    std::cout << "Pass by reference: c = " << c << std::endl << std::endl;

    std::cout << "END OF PROGRAM" << std::endl;
    return 0;
}