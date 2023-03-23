#include "player.h"


Player::Player(){
    std::cout << "Player (default) created" << std::endl;
}

Player::Player(std::string_view name, std::string_view surname, std::string_view adress, int age, int xp) : 
    Person(name, surname, adress, age), xp{xp}{
    // this->set_name(name);
    // this->set_surname(surname);
    // this->adress = adress;
    // this->age = age;
    // this->xp = xp;
    std::cout << "Player created" << std::endl;
}

Player::~Player(){
    std::cout << "Player destroyed" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Player& player){
    out << "Name: " << player.get_name() << std::endl;
    out << "Surname: " << player.get_surname() << std::endl;
    out << "Adress: " << player.adress << std::endl;
    out << "Age: " << player.age << std::endl;
    out << "XP: " << player.xp << std::endl << std::endl;
    return out;
}


void Player::play(){
    std::cout << "Playing..." << std::endl;

    std::cout << "Here we can not modify a private member a the private members of person" << std::endl;
    std::cout << "but we can acces and change the protected members of person" << std::endl;
    std::cout << "adress: " << this->adress << std::endl << std::endl;
}