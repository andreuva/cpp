#include <iostream>

int main() {
    // declaring an array
    int array[5];
    // or declaring and initializing an array
    int array_init[5] = {1, 2, 3, 4, 5};

    // print the values of the array
    for (size_t i{0}; i < 5; i++) {
        std::cout << "array_init["<< i <<"] = " << array_init[i] << std::endl;
        std::cout << "array["     << i <<"] = " << array[i] << std::endl;
    }

    // declare an array with implicit size
    int array_implicit[] = {1, 2, 3, 4, 5};
    // print the values of the array
    for (size_t i{0}; i < 5; i++) {
        std::cout << "array_implicit["<< i <<"] = " << array_implicit[i] << std::endl;
    }

    // declare an array with size and partial initialization
    int array_partial[5] = {1, 2, 3}; //rest of the array is initialized to 0
    // print the values of the array
    for (size_t i{0}; i < 5; i++) {
        std::cout << "array_partial["<< i <<"] = " << array_partial[i] << std::endl;
    }

    // use a range based for loop to print the values of the array
    for (auto i : array_partial) {
        std::cout << i << std::endl;
    }

    // get the size of the array
    std::cout << "Size of array_partial: " << std::size(array_partial) << std::endl;

    // get the size of the array for traditional method
    std::cout << "Size of array_partial: " << sizeof(array_partial) / sizeof(array_partial[0]) << std::endl;

    // arrays are passed to functions by reference
    // so if you change the array in the function, it will be changed in the main function
    // this is because arrays are pointers
    // so if you want to pass an array to a function, you don't need to use the & operator
    // but if you want to pass a pointer to an array, you need to use the & operator
    // because pointers are not arrays 
    
    // for looping through an array, you can use a range based for loop or a traditional for loop
    // be aware that c++ let you access elements outside the array
    // so if you have an array of size 5, you can access elements 0 to 4
    // but you can also access elements 5 to 9
    // this is because the array is a pointer to the first element of the array
    // so if you have an array of size 5, the array is a pointer to the first element of the array
    // elements outside the array are not initialized and can contain garbage values or values used
    // by other programs or the operating system and can cause unexpected behavior or crashes


    return 0;
}