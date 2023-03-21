// declare the constants of our problem
// if we want to call it several times we need
// to make sure it has not been declared before
// we can use the preprocessor directive #ifndef

#ifndef CONSTANTS_H
#define CONSTANTS_H
const double PI = {3.14159};
#endif
// this way we can include the header file several times in our code
// and the compiler will only include it once