#include <iostream>
#include <string_view>
#include <string>
#include "person.h"
#include "player.h"

int main() {
    // we can create a person object
    Person person1{"John", "Doe", "123 Main Street", 30};

    // we can print the person object
    std::cout << person1;

    // here we can see that we can only access the public members of the base class
    // std::cout << person1.name << std::endl; Error
    // std::cout << person1.surname << std::endl; Error
    // std::cout << person1.adress << std::endl; Error
    // std::cout << person1.age << std::endl; OK

    // we can create a player object
    Player player1{"John", "Doe", "123 Main Street", 30, 100};

    // we can print the player object
    std::cout << player1;

    player1.play();

    // from the outside if we try to access the public members of the base class
    // we can only access the public members of the base class
    // if this is protected inheritance 
    // std::cout << player1.name << std::endl; Error, Error
    // std::cout << player1.surname << std::endl; Error, Error
    // std::cout << player1.adress << std::endl; Error, Error
    // std::cout << player1.age << std::endl; OK, Error (but we can access from the inside)

    std::cout << "END" << std::endl;
    return 0;
}