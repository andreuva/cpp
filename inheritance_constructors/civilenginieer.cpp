#include "civilengineer.h"

CivilEngineer::CivilEngineer(){
    std::cout << "CivilEngineer (default) created" << std::endl;
}

// copy constructor
CivilEngineer::CivilEngineer(const CivilEngineer& source)
    : Engineer{source}, specialization{source.specialization} {
    std::cout << "CivilEngineer (copy) created" << std::endl;
}

// copy constructor with engineer
CivilEngineer::CivilEngineer(const Engineer& source, std::string_view specialization)
    : Engineer{source}, specialization{specialization} {
    std::cout << "CivilEngineer (copy) created with engineer" << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view company, std::string_view position, std::string_view specialization)
    : Engineer{company, position} {
    this->specialization = specialization;
    std::cout << "CivilEngineer created with default person and initialiced engeneer" << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view name, std::string_view surname, int age, std::string_view adress, std::string_view company, std::string_view position, std::string_view specialization)
    : Engineer{name, surname, age, adress, company, position} {
    this->specialization = specialization;
    std::cout << "CivilEngineer created" << std::endl;
}

CivilEngineer::~CivilEngineer(){
    std::cout << "CivilEngineer destroyed" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& civilEngineer){
    out << "Name: " << civilEngineer.get_name() << std::endl;
    out << "Surname: " << civilEngineer.get_surname() << std::endl;
    out << "Adress: " << civilEngineer.get_adress() << std::endl;
    out << "Age: " << civilEngineer.get_age() << std::endl;
    out << "Company: " << civilEngineer.get_company() << std::endl;
    out << "Position: " << civilEngineer.get_position() << std::endl;
    out << "Specialization: " << civilEngineer.specialization << std::endl << std::endl;
    return out;
}

