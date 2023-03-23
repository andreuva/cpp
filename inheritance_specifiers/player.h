#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string_view>
#include "person.h"

// we can inherite from a class with the protected or private access specifier
// with public inheritance we can mantain the methods and attributes of the base class
// with the same protection in the derived classes (public, protected, private)
class Player: public Person{

    friend std::ostream& operator<<(std::ostream& out, const Player& player);

    public:
        Player();
        Player(std::string_view name, std::string_view surname, std::string_view adress, int age, int xp);
        ~Player();

        // getters
        int get_xp() const {return xp;}

        // setters
        void set_xp(int xp) {this->xp = xp;}

        // function to play
        void play();

    private:
        int xp{0};
};

#endif // PLAYER_H