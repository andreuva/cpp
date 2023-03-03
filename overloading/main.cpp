#include <iostream>

// function overloading is the ability to define multiple functions with the same name
// but different parameters (or different return types), this is useful when you want to
// do the same thing with different types of data (or return different types of data)

// we can difine a function to compute the max of two integers
int max(int a, int b) {
    std::cout << "max(int, int)" << std::endl;
    return a > b ? a : b;
}

// we can difine a function to compute the max of two floats (or doubles) with the same name
float max(float a, float b) {
    std::cout << "max(float, float)" << std::endl;
    return a > b ? a : b;
}

// we can not define an overloaded function with the same name, parameters and return type
// int max(int a, int b) {
//     return a > b ? a : b;
// } // this will cause an error

// we can not overload just the return type neither

// we can also overload with the number or order of parameters
int max(int a, int b, int c) {
    std::cout << "max(int, int, int)" << std::endl;
    return max(max(a, b), c);
}


int main() {

    int a = 5;
    int b = 10;
    std::cout << "max(" << a << ", " << b << ") = " << max(a, b) << std::endl;

    float c = 5.5;
    float d = 10.5;
    std::cout << "max(" << c << ", " << d << ") = " << max(c, d) << std::endl;

    int e = 15;
    std::cout << "max(" << a << ", " << b << ", " << e << ") = " << max(a, b, e) << std::endl;

    std::cout << "END" << std::endl;
    return 0;
}