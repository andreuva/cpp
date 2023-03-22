#include "player.h"

Player::Player(std::string_view game_name) : game_name{game_name} {
    std::cout << "Player constructor" << std::endl;
}

Player::~Player() {
    std::cout << "Player destructor" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Player& player) {
    out << "Player:" << std::endl << "    {game: " << player.game_name
    << " name: " << player.get_name() << " " << player.get_surname()  << "}" << std::endl << std::endl;
    return out;
}