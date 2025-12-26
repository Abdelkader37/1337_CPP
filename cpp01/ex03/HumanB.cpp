 #include "HumanB.hpp"

void    HumanB::attack()
{
    if(!_weapon)
        return;
    std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}
HumanB::HumanB(std::string n): name(n){}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}
