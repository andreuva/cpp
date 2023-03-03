#include <iostream>

// declare and define a function that print a message
// void means that the function does not return anything
void printMessage() {
    std::cout << "Hello World" << std::endl;
    return;
};

// now one funtion that returns a value, taking 2 arguments
int max(int a, int b) {
    if (a > b) {
        b=a;
        std::cout << "a: " << a << " b: " << b << std::endl;
        return a;
    }
    else {
        a=b;
        std::cout << "a: " << a << " b: " << b << std::endl;
        return b;
    }
};

// all this functions take copies of the values as arguments so if you change it inside the function it will not change the original value

int main() {

    // call the function printMessage and max
    printMessage();
    int a = 5;
    int b = 10;

    std::cout << "The max is: " << max(a, b) << std::endl;
    // print again the variables to see if they have changed
    std::cout << "a: " << a << " b: " << b << std::endl;

    std::cout << "END" << std::endl;
    return 0;
};