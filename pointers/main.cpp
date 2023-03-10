#include <iostream>

int main() {
    // pointer declaration

    int *p; // p is a pointer to an integer
            // this will store the address of an integer not the integer itself
            // it can not store adress of a double or a char or anythign else
    
    // to declare and initialize a pointer to an integer we can do this
    int *p_init = nullptr; // p_init is a pointer to an integer and is initialized to nullptr
                           // nullptr is a special value that can be assigned to a pointer
                           // it means that the pointer is not pointing to anything
                           // it is a good practice to initialize pointers to nullptr
                           // because if you don't initialize a pointer, it can contain garbage values
                           // and can point to something that you don't want it to point to
                           // and can cause unexpected behavior or crashes
    
    // int *p_init{};
    // int *p_init{nullptr};
    // this is the same as int *p_init = nullptr;

    // the pointers to any types have the same size

    // the * in the declaration does not matter where it is (int *p or int* p)
    // but it is a good practice to put it next to the variable name
    // if you do this : int* p, a; then p is a pointer to an integer and a is an integer

    // to declare and initialize a pointer to an integer and assign it the address of an integer
    int value{5};
    int *p_value{&value}; // p_value is a pointer to an integer and is initialized to the address of value

    // you can change the value of the integer using the pointer
    *p_value = 10; // this will change the value of value to 10
    // you can change the pointer to point to another integer
    int another_value{15};
    p_value = &another_value; // this will change the pointer to point to another_value (dereferencing)

    // and print the value of the integer using the pointer
    std::cout << "*p_value = " << *p_value << std::endl << value << std::endl << another_value << std::endl; // this will print the value of another_value

    // we can directly print the pointer to see the address of the integer
    std::cout << "p_value (adress of another_value) = " << p_value << std::endl; // this will print the address of another_value


    // we can also allocate memory for an integer using a pointer
    // this is called dynamic memory allocation, the memory is allocated at runtime and not at compile time
    // so this is stored on the heap and not on the stack (the stack is where the local variables are stored)
    // the memory allocated on the heap is not automatically deallocated when the program ends or when the developer wants it to be deallocated
    // so we have to deallocate it manually
    // to allocate memory for an integer we can do this
    int *p_alloc{nullptr}; // p_alloc is a pointer to an integer and is initialized to nullptr
    p_alloc = new int; // this will allocate memory for an integer on the heap and will return the address of the allocated memory
                       // and will assign it to p_alloc
                       // the new keyword is used to allocate memory on the heap

    std::cout << "*p_alloc = " << *p_alloc << std::endl; // this will print the value of the integer
    // then we can use that integer using the pointer
    *p_alloc = 20; // this will change the value of the integer to 20
    std::cout << "*p_alloc = " << *p_alloc << std::endl; // this will print the value of the integer
    std::cout << "p_alloc = " << p_alloc << std::endl; // this will print the adress of the integer

    // to deallocate the memory we can do this
    delete p_alloc; // this will deallocate the memory that was allocated for the integer
    p_alloc = nullptr; // this will make the pointer point to nullptr again

    // we can not try to delete again the same memory

    // check the pointer before deleting it
    if (p_alloc != nullptr) {
        delete p_alloc;
    }

    // print the pointer to see if it is pointing to anything
    std::cout << "p_alloc = " << p_alloc << std::endl; // this will print nullptr


    // declare and the pointer on the same lin
    int *p_alloc_2{new int}; // p_alloc_2 is a pointer to an integer and is initialized to the address of the allocated memory but not initialized to any value
    int *p_alloc_3{new int {110}}; // p_alloc_3 is a pointer to an integer and is initialized to the address of the allocated memory and is initialized to 110

    // first print the value of the integer and then delete it
    std::cout << "p_alloc_2 = " << p_alloc_2 << std::endl;
    std::cout << "*p_alloc_2 = " << *p_alloc_2 << std::endl;

    std::cout << "p_alloc_3 = " << p_alloc_3 << std::endl;
    std::cout << "*p_alloc_3 = " << *p_alloc_3 << std::endl;

    delete p_alloc_2;
    p_alloc_2 = nullptr;

    delete p_alloc_3;
    p_alloc_3 = nullptr;

    // new can fail when there is no more memory available on the heap or when the memory is fragmented
    // so we should check if the allocation was successful or not in order to avoid a crash or unexpected behavior
    // to check if the allocation was successful we can do this
    
    /* 
    int *lots_of_ints {new int[100000000000000]}; // this will allocate memory for 1000000 integers on the heap and will fail
                                                 // because there is no more memory available on the heap

    for (size_t i{}; i < 100000000000000; ++i) {
        int *lots_of_ints_loop {new int[100000000000000]}; //this will loop and allocate memory on each iteration until failure (no memory available)
    }
    */

    // to avoid this we can tell the program not to raise an exception when the allocation fails (pointer will be set to nullptr)
    // and later check if the pointer is nullptr or not or we can use a try catch block to handle the exception

    // for the try and catch block we can do this
    try {
        int *lots_of_ints_1 {new int[100000000000000]};// this will allocate memory for 1000000 integers on the heap and will fail
                                                     // because there is no more memory available on the heap
    } catch (std::bad_alloc &e) {                    // this will catch the exception (if it is bad_alloc) and print it as errir
                                                     // to catch any exception we can use the catch (std::exception &ex) block
        std::cerr << "Allocation failed but catched: " << e.what() << std::endl;
    }

    // to tell the program not to raise an exception when the allocation fails we can do this

    int *lots_of_ints_2 {new (std::nothrow) int{1000000000}}; // this will allocate memory for 1000000 integers on the heap and will fail
                                                                 // because there is no more memory available on the heap
                                                                 // but it will not raise an exception and will return nullptr
                                                                 // and we can check if the pointer is nullptr or not

    if (lots_of_ints_2 == nullptr) {
        std::cerr << "Allocation failed" << std::endl;
    } else {
        std::cout << "Allocation succeeded" << std::endl;
    }

    // in compact form
    /*
    if (p_number){
        // allocation succeeded
    } else {
        // allocation failed
    }
    */

    // you can use delete to deallocate memory in a null pointer and is safe to do so
    delete lots_of_ints_2;
    lots_of_ints_2 = nullptr;


    // Memory leaks:
    /* 
    Memory leaks are when we allocate memory on the heap and we forget to deallocate it (delete it) but change the pointer to point to something else
    so the memory is not deallocated and is not available for other allocations and we can not use it anymore
    It can happen when we change the pointer to point somwhere else, when we allocate a pointer that is already allocated,
    when you declare and allocate a pointer inside a scope and you forget to deallocate it before the scope ends (pointer lost but memory not deallocated, leaked)

    */


    // Dinamically allocate an array
    size_t size{10};
    int *vect { new int[size]};// this will allocate memory for an array of integers on the heap

    int *vect_2 { new(std::nothrow) int[size]{}}; // this will allocate memory for an array of integers on the heap
                                                    // and will initialize all the elements to 0
    
    int *vect_3 { new(std::nothrow) int[size]{1,2,3,4,5,6,7,8,9,10}}; // this will allocate memory for an array of integers on the heap
                                                                        // and will initialize all the elements



    // we can now print the array
    if (vect_3) {
        for (size_t i{}; i < size; ++i) {
            // we can access the elements by using the pointer and the index or by using the pointer and the offset (pointing to the next element)
            std::cout << "value: " << vect_3[i] << " : " <<  *(vect_3+i) << " adress: " << &vect_3[i] << std::endl;
        }
        std::cout << std::endl;
    }

    // You shold notice that dinamically allocated arrays are not the same as static arrays
    // they can not be used in range based for loops and dont work with the sizeof operator
    // this is because the arrays decay to pointers, the same that happens when we pass an array to a function

    // now we can also deallocate the memory of the array
    delete [] vect_3;
    vect_3 = nullptr;

    delete [] vect_2;
    vect_2 = nullptr;

    delete [] vect;
    vect = nullptr;

    // finish the program
    std::cout << "END" << std::endl;
    return 0;
}