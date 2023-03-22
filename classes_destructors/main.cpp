#include "dog.h"
#include <iostream>

// we can create a function to see how the constructor and
// destructor are called inside the function when the object is on
// the stack
void dog_function(){
    // create a dog object with the default constructor
    Dog dog1;
    // Dog dog2(); this is incorrect
    Dog dog3{};
    Dog dog4 = Dog();
    Dog dog5 = Dog{};
    Dog dog6 = Dog("Tronco", "Golden Retriever", 2);
    Dog dog7 = Dog{"Rex", "German Retriever", 5};
    Dog dog8("Calima", "German Golden", 2);
    Dog dog9{"Wave", "Golden Shepherd", 5};
}

void dog_param(Dog dog1){
    // Dog dog2 = dog1;
    dog1.print_info();
}

int main() {
    // here we create an object of type Dog
    Dog dog1{"Rex", "German Shepherd", 5};

    // std::cout << "Name: " << dog1.get_name() << std::endl;
    // std::cout << "Breed: " << dog1.get_breed() << std::endl;
    // std::cout << "Age: " << dog1.get_age() << std::endl << std::endl;

    // dog1.set_age(6);

    // std::cout << "Name: " << dog1.get_name() << std::endl;
    // std::cout << "Breed: " << dog1.get_breed() << std::endl;
    // std::cout << "Age: " << dog1.get_age() << std::endl << std::endl;

    // or by using the print_info() method
    // dog1.print_info();

    // we can also create a pointer to a Dog object
    // Dog *dog2 = new Dog{"Max", "Golden Retriever", 3};

    // std::cout << "Name: " << dog2->get_name() << std::endl;
    // std::cout << "Breed: " << dog2->get_breed() << std::endl;
    // std::cout << "Age: " << dog2->get_age() << std::endl << std::endl;

    // we can call the dog_function() to see how the constructor and
    // destructor are called inside the function when the object is on
    // the stack
    // dog_function();

    // also if the function takes an argument of type Dog passed by value
    // the destructor will be called inside the function to destroy the copy
    dog_param(dog1);

    std::cout << "setting age to 4" << std::endl;
    dog1.set_age(4);
    std::cout << "printing dog1 info" << std::endl;
    dog1.print_info();

    // and we can call the destructor by using the delete keyword
    // delete dog2;
    // dog2 = nullptr;

    std::cout << "END" << std::endl;
    return 0;
}