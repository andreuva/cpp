#include <iostream>
#include <string>


// function templates are a way to create generic functions that can work with different types solving the
// repetition of code problem in the function overloading example

// how it works is that you create a blueprint of a function that can work with different types
// the sintaax is:
// template <typename T>
// T function_name(T parameter1, T parameter2) {
//     // function body
//     // return statement
// }

// and example of this is the next function overloading example
int maximum(int a, int b) {
    return a > b ? a : b;
}

double maximum(double a, double b) {
    return a > b ? a : b;
}

float maximum(float a, float b) {
    return a > b ? a : b;
}

std::string maximum(std::string a, std::string b) {
    return a > b ? a : b;
}

// we can see that the code is repeated for each type
// to aboid this we can do the same for the "minimum" function but using a template blueprint
// here we declare the function template
template <typename T> T minimum(T a, T b);

// take note that the T is not a type, it is a placeholder for a type, but all the types must be the same
// also the logic of the function is the same for all the types, so we can use the same function body
// but some types may not have the < operator defined, so we need to make sure that the types we use
// have the operatorors defined

// template with type parameters as reference
template <typename T> const T& minimum_ref(const T& a, const T& b);

// for example the multiplication operator * is defined for all the numeric types, but not for strings
template <typename T> T multiply(T a, T b) {
    return a * b;
}

// We can also use template specialization to overwrite the default template behavior for a specific type
// for example we can define a template specialization for the multiply function for const char*
// the syntax is:
template <> const char* multiply<const char*>(const char* a, const char* b) {
    std::string res{a};
    res += b;
    return res.c_str();
}


int main() {

    // define a few variables to test the functions
    int a = 5;
    int b = 10;
    double c = 4.5;
    double d = 10.5;
    float e = 5.5f;
    float f = 10.5f;
    std::string g{"hello"};
    std::string h{"world"};

    // we can use the functions maximum and min as if they were normal functions
    std::cout << "maximum(int, int) = " << maximum(a, b) << std::endl;
    std::cout << "maximum(double, double) = " << maximum(c, d) << std::endl;
    std::cout << "maximum(float, float) = " << maximum(e, f) << std::endl;
    std::cout << "maximum(std::string, std::string) = " << maximum(g, h) << std::endl;
    // we can use the function template as if it was a normal function
    std::cout << "minimum(int, int) = " << minimum(a, b) << std::endl;
    std::cout << "minimum(double, double) = " << minimum(c, d) << std::endl;
    std::cout << "minimum(float, float) = " << minimum(e, f) << std::endl;
    std::cout << "minimum(std::string, std::string) = " << minimum(g, h) << std::endl;

    // we can use the multiply function as if it was a normal function for numeric types
    std::cout << "multiply(int, int) = " << multiply(a, b) << std::endl;
    std::cout << "multiply(double, double) = " << multiply(c, d) << std::endl;
    std::cout << "multiply(float, float) = " << multiply(e, f) << std::endl;
    // but we can not use it for strings and we get a compile error
    // std::cout << "multiply(std::string, std::string) = " << multiply(g, h) << std::endl;

    // also if we try different types we get a compile error
    // std::cout << "multiply(int, double) = " << multiply(a, c) << std::endl;

    // we can also use the debuger to see the generated code for the templates and to debug the templates

    // Template type deduction is the process of deducing the type of a template parameter from the type of the
    // argument passed to the template function or template class

    // to aboid unwanted typecasting we can explicitly specify the type of the template parameter to control the
    // type deduction process (template argument deduction explicitly)
    auto res_int = minimum<int>(a, b); //(int version call of the function template)
    // with this we can also do implicit conversions of the arguments and use int, float, double, combined
    auto res_float = minimum<float>(a, c); //(float version call of the function template)

    std::cout << "minimum<int>(int, int) = " << res_int << std::endl;
    std::cout << "minimum<float>(int, double) = " << res_float << std::endl;

    // we can also pass the template type parameters by value or by reference
    std::cout << "minimum_ref(int, int) = " << minimum_ref(a, b) << std::endl;
    // with a and b
    std::cout << "&a = " << &a << ", &b = " << &b << std::endl;

    // we can also use it with other types
    std::string i{"hello"};
    std::string j{"world"};
    std::cout << "minimum_ref(std::string, std::string) = " << minimum_ref(i, j) << std::endl;


    // We can also use template specialization to overwrite the default template behavior for a specific type
    // for example we can define a template specialization for the multiply function for strings
    const char* s{"qwerty"};
    const char* t{"asd"};

    const char* result = multiply(s,t);
    std::cout << "multiply(const char*) = " << result << std::endl;

    std::cout << "END" << std::endl;
    return 0;
}   


// and here we define the function template
template <typename T> T minimum(T a, T b) {
    return a < b ? a : b;
}

template <typename T> const T& minimum_ref(const T& a, const T& b) {
    std::cout << "minimum_ref = " << &a << ", " << &b << std::endl;
    // if you try to modify the value of a or b you will get a compile error
    // because the function is declared as const
    // a = 10;
    return a < b ? a : b;
}