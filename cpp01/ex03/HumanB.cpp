 #include "HumanB.hpp"

void    HumanB::attack()
{
    if(_weapon == NULL)
        std::cout << name << " attacks with their  hand\n";
    else
        std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}
HumanB::HumanB(std::string n): name(n), _weapon(NULL) {}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}
