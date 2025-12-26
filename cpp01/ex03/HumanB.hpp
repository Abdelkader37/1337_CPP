#pragma once

#include <iostream>
#include "Weapon.hpp"
class HumanB
{
    private:
        Weapon* _weapon;
        std::string name;
    public:
        HumanB(std::string n);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon& weapon);
};