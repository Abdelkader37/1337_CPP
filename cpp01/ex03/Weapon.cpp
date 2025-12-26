#include "Weapon.hpp"

const std::string&  Weapon::getType()
{
    return(type);
}

Weapon::Weapon(std::string t): type(t){}

void Weapon::setType(std::string t)
{
    type = t;
}