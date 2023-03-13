#include <iostream>

int main() {
    // declare a lambda function
    auto lambda = []() {
        std::cout << "Hello World!" << std::endl;
    };

    // call the lambda function
    lambda();

    // the [] is the capture list
    // the () is the parameter list
    // and after the arrow is the return type
    // here we have a more complex lambda function
    auto lambda2 = [](int a, int b) -> int {
        return a + b;
    };

    // call the lambda function
    std::cout << "call to the lambda function (2+1) " << lambda2(1, 2) << std::endl;

    // the capture list is used to capture variables from the outer scope
    // the capture list can be empty, or it can contain a list of variables
    // to capture by value, or by reference (using &) or by mutable reference (using =)
    // the return type can be omitted if it can be deduced from the return statement

    // we can call directly the lambda function without storing it in a variable (giving it a name)
    // this is called an anonymous lambda function (or lambda expression) and it is useful when
    // we need to pass a function as a parameter to another function or as a return value
    // a example of this:

    int a = [](int a, int b) -> int {
        return a + b;
    }(1, 2);

    std::cout << "call to the output a = "<< a << std::endl;
    // here a will be the result of the lambda function not the lambda function itself

    // if we try to print the lambda function we will get some weird output
    std::cout << "output of the lambda function directly = " << lambda2 << std::endl;

    // we can compare the size of the lambda function with the size of the result of the lambda function
    std::cout << "size of the lambda function (2+1) " << sizeof(lambda2) << std::endl;
    std::cout << "call to the output a = " << sizeof(lambda2(1, 2)) << std::endl;

    // Capture list
    // [] - empty capture list
    // [&] - capture all outer scope variables by reference
    // [=] - capture all outer scope variables by value
    // [a, &b] - capture a by value, and b by reference
    // [this] - capture the this pointer by value
    // [a, b, &c] - capture a and b by value, and c by reference
    // [a, b, &c = c] - capture a and b by value, and c by reference, but c is initialized with the value of c
    // we can only access the variables that are in the capture list or passed as parameters inside the lambda function

    // we can make an example of this
    int x = 10;
    int y = 20;

    // we can capture x by value
    auto lambda3 = [x]() {
        // x = 20; // this will not compile because x is captured by value
        std::cout << "x = " << x << "  address (inner) = " << &x << std::endl;
    };

    // we can capture x by reference
    auto lambda4 = [&x]() {
        x = 20; // this will compile because x is captured by reference
        std::cout << "x = " << x << "  address (outer) = " << &x << std::endl;
    };

    // call the lambda functions
    lambda3();
    lambda4();

    // we can see that the value of x has changed but the lambda function that captured x by value
    // did not change the value of x because it was captured by value before the lambda function was called
    lambda3();

    // print x outside the lambda functions
    std::cout << "x = " << x << "  address (main) = " << &x << std::endl;


    

    std::cout << "END" << std::endl;
    return 0;
}