#include <iostream>
// to add the max function we need to include the header file
#include "compare.h"
#include "operations.h"
// the preprocesser will replace the #include "compare.h" with the content of the file compare.h
// then the linker will look for the definition of the max function in all the object files
// the definitions doesn't need to be in a file called the same as the header, they can be in any translation unit
// if the function is not in the header file the linker will not search for it in the object files

// we have moved the declaration of max to the header file of compare.h

int main() {
    
    // call the max function
    int a = 5;
    int b = 10;
    int maximum = max(a, b);
    int minimum = min(a, b);
    std::cout << "The max is: " << maximum << std::endl;
    std::cout << "The min is: " << minimum << std::endl;

    // use the operations library for the increment and multiply function
    int result = increment_and_multiply(a, b);
    std::cout << "The increment and multiply is: " << result << std::endl;

    std::cout << "END" << std::endl;
    return 0;
}

// we have moved the definition of max to the source file of compare.cpp