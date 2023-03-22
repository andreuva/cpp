#include "player.h"

Player::Player(std::string_view game_name) : game_name{game_name} {
    // concatenate the game name with the string "Player " and set it as the nickname
    this->nickname = this->game_name + " Player";
    std::cout << "Player constructor" << std::endl;
}

// we can now use the overloading constructor of player to also set the name and surname of the person object
// inside the player object
Player::Player(std::string_view game_name, std::string_view name, std::string_view surname, int age) : game_name{game_name} , Person{name, surname, age} {
    // this->set_name(name);
    // this->set_surname(surname);
    // this->set_age(age);
    std::cout << "Player constructor with Person inicialization" << std::endl;
}

Player::~Player() {
    std::cout << "Player destructor" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Player& player) {
    out << "Player:" << std::endl << "    {game: " << player.game_name
    << " nickname: " << player.nickname << " name: " << player.get_name()
    << " " << player.get_surname()  << "}" << std::endl << std::endl;
    return out;
}