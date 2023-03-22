#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string_view>

// here we declare the class Dog
class Dog{
    private:
        std::string dog_name;
        std::string dog_breed;
        int *dog_age{nullptr};

    public:
        Dog();
        Dog(std::string_view name, std::string_view breed, int age);
        ~Dog();
        void set_name(std::string_view name);
        void set_breed(std::string_view breed);
        void set_age(int age);
        std::string get_name();
        std::string get_breed();
        int get_age();
        void print_info();
};
#endif