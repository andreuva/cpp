#include <iostream>
#include <string>

// with inheritance we can create a new class from an existing class
// the new class will have all the members of the existing class and we can add new members
// this allows us to reuse code and create new classes easily that will build upon existing classes

// for example we can create a new class called Person that will be the parent class of Player
// Player will have all the members of Person and we can add new members to Player
#include "person.h"
#include "player.h"


int main() {

    // we can create a Person object
    // Person person{"John", "Doe", 30};

    // we can create a Player object
    // this will create a player object and a person object inside the player object
    // the person object will have the default constructor name and surname values
    // Player player{"valorant"};

    // we can create a Player object with the overloading constructor
    // this will create a player object and a initialized person object inside the player object
    Player player2{"valorant", "Max", "Doe", 25};

    // we can print the Person object
    // std::cout << person;
    // and we can print the Player object
    // std::cout << player;
    std::cout << player2;

    std::cout << "END" << std::endl;
    return 0;
}