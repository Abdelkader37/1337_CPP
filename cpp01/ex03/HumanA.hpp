#pragma once

#include <iostream>
#include "Weapon.hpp"
class HumanA
{
    private:
        std::string name;
        Weapon &_weapon;
    public:
        HumanA(std::string n, Weapon& weapon);
        ~HumanA();
        void    attack();
};