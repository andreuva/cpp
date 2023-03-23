#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H

#include <iostream>
#include <string_view>
#include "engineer.h"


class CivilEngineer : public Engineer{
    friend std::ostream& operator<<(std::ostream& out, const CivilEngineer& civilEngineer);
    public:
        CivilEngineer();
        CivilEngineer(std::string_view specialization);
        // copy constructor for the civil engineer class
        CivilEngineer(const CivilEngineer& source);
        // we can also make a constructor that takes a engineer object as a parameter
        CivilEngineer(const Engineer& source, std::string_view specialization);

        CivilEngineer(std::string_view company, std::string_view position, std::string_view specialization);
        CivilEngineer(std::string_view name, std::string_view surname, int age, std::string_view adress, std::string_view company, std::string_view position, std::string_view specialization);
        ~CivilEngineer();

        std::string get_specialization() const {return specialization;}

        // setters
        void set_specialization(std::string_view specialization) {this->specialization = specialization;}

    private:
        std::string specialization{"None"};
};

#endif // CIVILENGINEER_H