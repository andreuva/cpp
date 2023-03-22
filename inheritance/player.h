#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <string_view>
#include "person.h"

// here we define Player as a child class of Person with public inheritance
// public inheritance means that derived classes can access public members of the base class
// but the derived class can't access directly the private members
class Player : public Person{
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
    public:
        Player() = default;
        Player(std::string_view game_name);
        ~Player();
    private:
        std::string game_name{"Player"};
};

#endif // PLAYER_H