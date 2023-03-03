#include <iostream>

int main() {
    // reference to a variable
    int x = 5;
    int &y{ x };
    // int &y = x;

    // or with double
    double d = 3.14;
    double &e{ d };
    // double &e = d;

    std::cout << "====================================================" << std::endl;
    std::cout << "              REFENCES                              " << std::endl;
    std::cout << "====================================================" << std::endl;
    // if you print the value of y, you will get the value of x
    std::cout << "y = " << y << " x = " << x << std::endl;
    // if you print the adress of y, you will get the adress of x (same adress)
    std::cout << "&y = " << &y << " &x = " << &x << std::endl;

    // if you change the value of y, you will change the value of x
    y = 10;
    std::cout << "y = " << y << " x = " << x << std::endl;
    // the reference is constant, so you can't change the adress of y
    std::cout << "&y = " << &y << " &x = " << &x << std::endl;

    // and if you change the value of x, you will change the value of y also
    x = 15;
    std::cout << "y = " << y << " x = " << x << std::endl;
    // the reference is constant, so you can't change the adress of y
    std::cout << "&y = " << &y << " &x = " << &x << std::endl;

    std::cout << "====================================================" << std::endl;
    std::cout << "              REFERENCE VS POINTERS                 " << std::endl;
    std::cout << "====================================================" << std::endl;
    // the difference between reference and pointer is that the reference is constant
    // and the pointer is not constant (you can change the adress of the pointer)
    
    // you don't need to use the * to get the value if you use the reference (don't need to dereference)
    // is like using the variable directly

    // you need to declare the reference when you create the variable (you can't change the reference later)
    // int &ref; // this will give an error

    // to see the deferences we can create a variable, a pointer and a reference to the variable
    int var = 5;
    int var2 = 50;
    int *pointer{ &var };
    int &reference{ var };

    // to print the value of the variable
    std::cout << "var = " << var << " pointer = " << pointer << " reference = " << reference << std::endl;
    // so the pointer is just the adress, if you want to get the value you need to dereference
    std::cout << "var = " << var << " *pointer = " << *pointer << " reference = " << reference << std::endl;
    // to print the adress of the variable
    std::cout << "&var = " << &var << " pointer = " << pointer << " &reference = " << &reference << std::endl << std::endl;

    // to write the value of the variable
    std::cout << "Change the value of the variable " << std::endl;
    var = 10;
    std::cout << "var = " << var << " *pointer = " << *pointer << " reference = " << reference << std::endl << std::endl;
    // with the reference is the same as with the variable
    std::cout << "Change the value of the reference " << std::endl;
    reference = 15;
    std::cout << "var = " << var << " *pointer = " << *pointer << " reference = " << reference << std::endl << std::endl;
    // with the pointer you need to dereference
    std::cout << "Change the value of the pointer " << std::endl;
    *pointer = 20;
    std::cout << "var = " << var << " *pointer = " << *pointer << " reference = " << reference << std::endl << std::endl;

    // to asign a new value to the reference
    std::cout << "Change the value of the reference from var to var2, this will change the value of var, not change the refenced value" << std::endl;
    reference = var2;
    std::cout << "var = " << var << " *pointer = " << *pointer << " reference = " << reference << std::endl << std::endl;
    // to asign a new value to the pointer
    std::cout << "Change the pointed value from var to var2, this will NOT change the value of var" << std::endl;
    var = 5;
    pointer = &var2;
    std::cout << "var = " << var << " *pointer = " << *pointer << " reference = " << reference << std::endl << std::endl;

    
    std::cout << "====================================================" << std::endl;
    std::cout << "              REFERENCE AND CONST                   " << std::endl;
    std::cout << "====================================================" << std::endl;
    // with a normal reference you can change the value of the variable
    int var3 = 5;
    int &ref3{ var3 };

    std::cout << "var3 = " << var3 << " ref3 = " << ref3 << std::endl;
    std::cout << "Change the value of the reference to 10 " << std::endl;
    ref3 = 10;
    std::cout << "var3 = " << var3 << " ref3 = " << ref3 << std::endl << std::endl;

    // with a const reference you can't change the value of the variable
    int var4 = 5;
    const int &ref4{ var4 };
    
    // it will give an error if we try to change the value of the reference
    // ref4 = 10; // this will give an error

    // you can replicate the same behaviour with a pointer
    int var5 = 5;
    // this can not change the value that is pointing to but can be pointed to another variable
    int *const pointer5{ &var5 };
    // this can't change the value that is pointing to but can not be pointed to another variable
    const int *const pointer5_const{ &var5 };


    // Finish the program
    std::cout << "End of the program" << std::endl;
    return 0;
}