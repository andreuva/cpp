#include <iostream>

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
    std::
    return 0;
}