#include <iostream>
// import limits library
#include <limits>

int function(int a, int b){
    return a + b;
}


// main function
int main(){
    std::cout << "Hello world!" << std::endl;
    // warning: potential divide by 0 (runtime error)
    // std::cout << 7/0 << std::endl;

    int a = 5;
    int b = 7;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a + b = " << function(a, b) << std::endl;
    std::cerr << "error message" << std::endl;
    std::clog << "log message" << std::endl;

    // formated output to console with the 
    /* 
    std:flush (flushes the buffer to the screen if cout has not been flushed yet)
    std:setw  (sets the width of the output text to do padding and tablular output)
    std:right (right aligns the output text)
    std:left  (left aligns the output text)
    std:internal (aligns the output text to the right of the padding and the sign to the left)
    std:setfill (sets the padding character)
    std:uppercase (outputs the text in uppercase)
    std:lowercase (outputs the text in lowercase)
    
    std:booleanalpha (outputs true and false instead of 1 and 0)
    std:noboolalpha (outputs 1 and 0 instead of true and false)
    std:showpos (outputs a + sign before positive numbers)
    
    std:showbase (outputs the base of the number)
    std:hex (outputs the number in hex)
    std:oct (outputs the number in octal)
    std:dec (outputs the number in decimal)

    std:scientific (outputs the number in scientific notation)
    std:fixed (outputs the number in fixed point notation)
    std:setprecision (sets the number of digits after the decimal point)
    std:showpoint (outputs the decimal point even if the number is an integer)
    std:noshowpoint (outputs the number without the decimal point)

    */

    // limits library
    /*
    std::numeric_limits<int>::max() // returns the maximum value of the type int
    std::numeric_limits<int>::min() // returns the minimum value of the type int
    std::numeric_limits<int>::lowest() // returns the lowest value of the type int
    */

    std::cout << "int max value: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "int min value: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "int lowest value: " << std::numeric_limits<int>::lowest() << std::endl;

    std::cout << "float max value: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "float min value: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "float lowest value: " << std::numeric_limits<float>::lowest() << std::endl;

    std::cout << "double max value: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "double min value: " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "double lowest value: " << std::numeric_limits<double>::lowest() << std::endl;

    // Math functions in cmath library
    /*
    std::abs(x) // returns the absolute value of x
    std::fabs(x) // returns the absolute value of x
    std::ceil(x) // returns the smallest integer value that is greater than or equal to x
    std::floor(x) // returns the largest integer value that is less than or equal to x
    std::exp(x) // returns the value of e^x
    std::log(x) // returns the natural logarithm of x
    std::log10(x) // returns the base 10 logarithm of x
    std::pow(x, y) // returns the value of x^y
    std::sqrt(x) // returns the square root of x
    ... etc
    for reference: https://www.cplusplus.com/reference/cmath/
    */

    std::cout << "abs(-5) = " << std::abs(-5) << std::endl;
    std::cout << "abs(5) = " << std::abs(5) << std::endl;

    // weird integral types
    /*
    there are some weird integral types in c++ that are not used very often and can not be used in arithmetic operations
    if done so, the compiler will convert them to the nearest type that can be used in arithmetic operations (int)
    std::char (1 byte)
    std::short int(2 bytes)
    */


    return 0;
}