#include "dog.h"

// here there is a construtctor that allocates memory on the heap
Dog::Dog(){
    std::cout << "Default dog constructor called" << std::endl;
    dog_name = "None";
    dog_breed = "None";
    dog_age = new int;
    *dog_age = 0;
}

Dog::Dog(std::string_view name, std::string_view breed, int age){
    dog_name = name;
    dog_breed = breed;
    dog_age = new int; // here we allocate memory on the heap
    *dog_age = age;
    std::cout << "Dog constructor called for " << dog_name << std::endl;
}

// and the destructor will be called when the object is destroyed
// and it will manage the memory on the heap
Dog::~Dog(){
    delete dog_age;
    dog_age = nullptr;
    std::cout << "Destructor called for " << dog_name << std::endl;
}

void Dog::set_name(std::string_view name){
    dog_name = name;
}

void Dog::set_breed(std::string_view breed){
    dog_breed = breed;
}

void Dog::set_age(int age){
    *dog_age = age;
}

std::string Dog::get_name(){
    return dog_name;
}

std::string Dog::get_breed(){
    return dog_breed;
}

int Dog::get_age(){
    return *dog_age;
}

void Dog::print_info(){
    std::cout << "Name: " << dog_name << std::endl;
    std::cout << "Breed: " << dog_breed << std::endl;
    std::cout << "Age: " << *dog_age << std::endl << std::endl;
}