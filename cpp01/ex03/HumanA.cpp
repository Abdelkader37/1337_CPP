#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& weapon): name(n), _weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << name << " attacks with their" << _weapon.getType() << std::endl;
}