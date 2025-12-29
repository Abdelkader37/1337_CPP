#pragma once

#include <iostream>
#include "Weapon.hpp"
class HumanB
{
    private:
        std::string name;
        Weapon* _weapon;
    public:
        HumanB(std::string n);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon& weapon);
};