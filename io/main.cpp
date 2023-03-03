#include <iostream>

// As well as returning a value a function can output values using parameters as references or pointers.
// we can use references to output max value of two numbers instead of returning it
void max(const int a, const int b, int& max) {
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
}

// we can also use pointers to output max value of two numbers instead of returning it
void max(const int a, const int b, int* max) {
    if (a > b) {
        *max = a;
    } else {
        *max = b;
    }
}

// all the input parameters are const, so we cannot change them inside the function (they are read only)
// this is a good practice to avoid changing the input parameters by mistake

// take into acount that if we pass by value, the function will receive a copy of the argument so we are using
// double the memory (one for the argument and one for the copy) this is not a problem for small variables
// but it can be a problem for big variables like arrays or objects so we can use const references to avoid changing the input parameters
// but we can still use the same memory space


int main() {
    
    // define two numbers
    int a = 5;
    int b = 10;
    // define a variable to store the max value
    int max_value;

    std::cout << "a = " << a << " b = " << b << std::endl;
    // call the function to get the max value by reference (we can pass directly the variable)
    max(a, b, max_value);
    std::cout << "Max value by reference: " << max_value << std::endl << std::endl;

    a = 15;
    std::cout << "a = " << a << " b = " << b << std::endl;
    // call the function to get the max value by pointer (we need to pass the address of the variable)
    max(a, b, &max_value);
    std::cout << "Max value by pointer: " << max_value << std::endl;

    std::cout << "END OF PROGRAM" << std::endl;
    return 0;
}