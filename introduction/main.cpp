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
    return 0;
}